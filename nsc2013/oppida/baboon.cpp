#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "pin.H"

// input & output addresses of the md5 hash
uint8_t *input_hash = (uint8_t *) 0x617000;
uint8_t *output_hash = (uint8_t *) 0x617010;

uint32_t oep = 0x00616272;
void (*oep_redirect)(CONTEXT *ctx);
void (*insns_handler)(INS ins);

void *stored_addr;
uint32_t stored_size;

uint32_t *table_addr;
uint32_t table_index;
uint32_t table_dest;
uint8_t table[256];

void store_address(void *addr, uint32_t size)
{
    stored_addr = addr;
    stored_size = size;
}

void ins_store_address(INS ins)
{
    INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &store_address, IARG_MEMORYWRITE_EA, IARG_MEMORYWRITE_SIZE, IARG_END);
}

void table_dump_oep(CONTEXT *ctx)
{
    PIN_SetContextReg(ctx, REG_EIP, table_addr[table_index]);
    PIN_ExecuteAt(ctx);
}

void table_dump_next(CONTEXT *ctx)
{
    table_dest = (uint32_t) stored_addr;
    table[table_index++] = *(uint8_t *) stored_addr;

    if(table_index == 256) {
        PIN_ExitApplication(0);
    }

    table_dump_oep(ctx);
}

void table_dump_insns(INS ins)
{
    if(INS_IsMemoryWrite(ins) != 0 && INS_MemoryWriteSize(ins) == 1) {
        ins_store_address(ins);
        INS_InsertCall(ins, IPOINT_AFTER, (AFUNPTR) &table_dump_next, IARG_CONTEXT, IARG_END);
    }
}

void insns(INS ins, void *v)
{
    static int inside = 0;

    // if we're at OEP, then redirect to the interesting stuff
    if(INS_Address(ins) == oep) {
        inside = 1;
        INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) oep_redirect, IARG_CONTEXT, IARG_END);
        return;
    }

    if(inside != 0) {
        insns_handler(ins);
    }
}

void fini(INT32 code, void *v)
{
    if(table_addr != NULL) {
        printf("table_%x_addr = 0x%08x\n", table_addr, table_dest);
        printf("table_%x_tbl = ", table_addr);
        for (int i = 0; i < 256; i++) {
            printf("0x%02x, ", table[i]);
        }
        fflush(stdout);
    }
}

int main(int argc, char *argv[])
{
    for (int i = 3; i < argc; i++) {
        if(!strcmp(argv[i], "--table")) {
            table_addr = (uint32_t *) strtoul(argv[++i], NULL, 16);
            insns_handler = &table_dump_insns;
            oep_redirect = &table_dump_oep;
            continue;
        }
    }

    if(oep_redirect == NULL) {
        fprintf(stderr, "No OEP redirect set..\n");
        fflush(stderr);
        return 0;
    }

    PIN_Init(argc, argv);

    INS_AddInstrumentFunction(&insns, 0);
    PIN_AddFiniFunction(&fini, 0);

    PIN_StartProgram();
    return 0;
}
