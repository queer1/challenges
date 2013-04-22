#include <stdio.h>
#include <string.h>
#include "pin.H"

int only_main_module = 0;

void execute_instruction(ADDRINT addr, const char *insns)
{
    printf("0x%lx: %s  |  ", addr, insns);
}

void dump_read_memory(void *ptr, ADDRINT size)
{
    switch (size) {
    case 1:
        printf("reads %d 0x%02x from 0x%08x, ", *(unsigned char *) ptr, *(unsigned char *) ptr, ptr);
        break;

    case 2:
        printf("reads %d 0x%04x from 0x%08x, ", *(unsigned short *) ptr, *(unsigned short *) ptr, ptr);
        break;

    case 4:
        printf("reads %u 0x%08x from 0x%08x, ", *(unsigned int *) ptr, *(unsigned int *) ptr, ptr);
        break;

    case 8:
        printf("reads %lu 0x%08lx from 0x%08x, ", *(ADDRINT *) ptr, *(ADDRINT *) ptr, ptr);
        break;

    default:
        printf("reads INVALID SIZE %d from 0x%08x, ", size, ptr);
        break;
    }
}

void *dump_addr;
UINT32 dump_size;

void dump_written_memory_before(void *ptr, UINT32 size)
{
    dump_addr = ptr;
    dump_size = size;
}

void dump_written_memory_after()
{
    void *ptr = dump_addr;
    UINT32 size = dump_size;

    switch (size) {
    case 1:
        printf("writes %d 0x%02x to 0x%08x, ", *(unsigned char *) ptr, *(unsigned char *) ptr, ptr);
        break;

    case 2:
        printf("writes %d 0x%04x to 0x%08x, ", *(unsigned short *) ptr, *(unsigned short *) ptr, ptr);
        break;

    case 4:
        printf("writes %u 0x%08x to 0x%08x, ", *(unsigned int *) ptr, *(unsigned int *) ptr, ptr);
        break;

    case 8:
        printf("writes %lu 0x%08lx to 0x%08x, ", *(ADDRINT *) ptr, *(ADDRINT *) ptr, ptr);
        break;

    default:
        printf("writes INVALID SIZE %d to 0x%08x, ", size, ptr);
        break;
    }
}

const char *reg_names[] = {"eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi"};
UINT32 reg_lut[0x100], reg_revlut[16] = {REG_EAX, REG_ECX, REG_EDX, REG_EBX, REG_ESP, REG_EBP, REG_ESI, REG_EDI};

ADDRINT reg_values[16];

void dump_reg_before(UINT32 idx, ADDRINT value)
{
    reg_values[idx] = value;
}

void dump_reg_rw_after(UINT32 idx, ADDRINT value)
{
    printf("%s RW 0x%08x 0x%08x, ", reg_names[idx], reg_values[idx], value);
}

void dump_reg_r_after(UINT32 idx)
{
    printf("%s R 0x%08x, ", reg_names[idx], reg_values[idx]);
}

void dump_reg_w_after(UINT32 idx, ADDRINT value)
{
    printf("%s W 0x%08x, ", reg_names[idx], value);
}

void print_newline()
{
    printf("\n");
}

int inside = 0;

void insns(INS ins, void *v)
{
    IMG img = IMG_FindByAddress(INS_Address(ins));
    int main_module = IMG_Valid(img) ? IMG_IsMainExecutable(img) : 0;

    if(only_main_module != 0 && main_module == 0) {
        //return;
    }

    if(INS_Address(ins) == 0x6163a7) {
        inside = 1;
    }

    if(inside == 0) return;

    if(INS_Address(ins) == 0x6163ae) {
        inside = 0;
    }

    // dump the instruction
    INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &execute_instruction, IARG_INST_PTR, IARG_PTR, _strdup(INS_Disassemble(ins).c_str()), IARG_END);

    // reads memory (1)
    if(INS_IsMemoryRead(ins) != 0) {
        INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_read_memory, IARG_MEMORYREAD_EA, IARG_MEMORYREAD_SIZE, IARG_END);
    }

    // reads memory (2)
    if(INS_HasMemoryRead2(ins) != 0) {
        INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_read_memory, IARG_MEMORYREAD2_EA, IARG_MEMORYREAD_SIZE, IARG_END);
    }

    IPOINT after = IPOINT_AFTER;
    if(INS_HasFallThrough(ins) == 0) {
        after = IPOINT_TAKEN_BRANCH;
    }

    // dump written memory
    if(INS_IsMemoryWrite(ins) != 0) {
        INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_written_memory_before, IARG_MEMORYWRITE_EA, IARG_MEMORYWRITE_SIZE, IARG_END);
        INS_InsertCall(ins, after, (AFUNPTR) &dump_written_memory_after, IARG_END);
    }

    // dump all affected registers
    for (UINT32 i = 0; i < INS_OperandCount(ins); i++) {
        if(INS_OperandIsMemory(ins, i) != 0) {
            if(INS_OperandMemoryBaseReg(ins, i) != REG_INVALID()) {
                UINT32 base_reg = reg_lut[INS_OperandMemoryBaseReg(ins, i)] - 1;

                INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_reg_before, IARG_UINT32, base_reg, IARG_REG_VALUE, INS_OperandMemoryBaseReg(ins, i), IARG_END);
                INS_InsertCall(ins, after, (AFUNPTR) &dump_reg_r_after, IARG_UINT32, base_reg, IARG_END);
            }
            if(INS_OperandMemoryIndexReg(ins, i) != REG_INVALID()) {
                UINT32 index_reg = reg_lut[INS_OperandMemoryIndexReg(ins, i)] - 1;

                INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_reg_before, IARG_UINT32, index_reg, IARG_REG_VALUE, INS_OperandMemoryIndexReg(ins, i), IARG_END);
                INS_InsertCall(ins, after, (AFUNPTR) &dump_reg_r_after, IARG_UINT32, index_reg, IARG_END);
            }
        }
        if(INS_OperandIsReg(ins, i) != 0) {
            UINT32 reg_index = INS_OperandReg(ins, i);
            if(reg_index > sizeof(reg_lut)/sizeof(reg_lut[0])) continue;

            reg_index = reg_lut[reg_index];
            if(reg_index == 0) continue;

            reg_index -= 1;

            if(INS_OperandReadAndWritten(ins, i) != 0) {
                INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_reg_before, IARG_UINT32, reg_index, IARG_REG_VALUE, reg_revlut[reg_index], IARG_END);
                INS_InsertCall(ins, after, (AFUNPTR) &dump_reg_rw_after, IARG_UINT32, reg_index, IARG_REG_VALUE, reg_revlut[reg_index], IARG_END);
            }
            else if(INS_OperandRead(ins, i) != 0) {
                INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR) &dump_reg_before, IARG_UINT32, reg_index, IARG_REG_VALUE, reg_revlut[reg_index], IARG_END);
                INS_InsertCall(ins, after, (AFUNPTR) &dump_reg_r_after, IARG_UINT32, reg_index, IARG_END);
            }
            else if(INS_OperandWritten(ins, i) != 0) {
                INS_InsertCall(ins, after, (AFUNPTR) &dump_reg_w_after, IARG_UINT32, reg_index, IARG_REG_VALUE, reg_revlut[reg_index], IARG_END);
            }
        }
    }

    INS_InsertCall(ins, after, (AFUNPTR) &print_newline, IARG_END);
}

int main(int argc, char *argv[])
{
    for (int i = 3; i < argc; i++) {
        if(!strcmp(argv[i], "--only-main-module")) {
            only_main_module = 1;
        }
    }

    reg_lut[REG_EAX] = 1, reg_lut[REG_AX] = 1, reg_lut[REG_AL] = 1, reg_lut[REG_AH] = 1,
    reg_lut[REG_ECX] = 2, reg_lut[REG_CX] = 2, reg_lut[REG_CL] = 2, reg_lut[REG_CH] = 2,
    reg_lut[REG_EDX] = 3, reg_lut[REG_DX] = 3, reg_lut[REG_DL] = 3, reg_lut[REG_DH] = 3,
    reg_lut[REG_EBX] = 4, reg_lut[REG_BX] = 4, reg_lut[REG_BL] = 4, reg_lut[REG_BH] = 4,
    reg_lut[REG_ESP] = 5, reg_lut[REG_SP] = 5,
    reg_lut[REG_EBP] = 6, reg_lut[REG_BP] = 6,
    reg_lut[REG_ESI] = 7, reg_lut[REG_SI] = 7,
    reg_lut[REG_EDI] = 8, reg_lut[REG_DI] = 8;

    PIN_Init(argc, argv);

    INS_AddInstrumentFunction(&insns, 0);

    PIN_StartProgram();
    return 0;
}
