#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "tables.h"

int main(int argc, char *argv[])
{
    for (uint32_t a = 0; a < 0x100; a++) {

        uint8_t var_0058d156_6 = table_5c588b[a];
        uint8_t var_0060197f_11 = table_49ab28[a];
        uint8_t var_005ed9a2_6 = table_481426[a];
        uint8_t var_00490ab1_9 = table_48d491[a];

        for (uint32_t b = 0; b < 0x100; b++) {

            printf("%d %d..\r", a, b);

            uint8_t var_005a6a38_9 = table_4915b9[b];
            uint8_t var_0061701c_10 = table_5ce505[b];
            uint8_t var_004aff6d_8 = table_4af055[b];
            uint8_t var_0043512c_9 = table_4a51b1[b];

            for (uint32_t c = 0; c < 0x100; c++) {

                uint8_t var_004746a7_10 = table_42cc6b[c];
                uint8_t var_00493124_4 = table_5a6860[c];
                uint8_t var_0058c52d_10 = table_5fd18f[c];
                uint8_t var_005b9ae3_14 = table_537b8b[c];

                for (uint32_t d = 0; d < 0x100; d++) {

                    uint8_t var_00590a90_9 = table_58d445[d];
                    uint8_t var_004ae266_9 = table_4c900c[d];
                    uint8_t var_005aa8a7_5 = table_493003[d];
                    uint8_t var_005b46f9_5 = table_524c3b[d];

                    uint8_t var_005f5d05_8 = table_50c7b8[(var_005b46f9_5 << 8) + var_00493124_4];
                    uint8_t var_005a69a8_4 = table_50c7b8[(var_00590a90_9 << 8) + var_0058c52d_10];
                    uint8_t var_00566369_7 = table_50c7b8[(var_005aa8a7_5 << 8) + var_005b9ae3_14];
                    uint8_t var_00499d02_9 = table_50c7b8[(var_004ae266_9 << 8) + var_004746a7_10];

                    uint8_t var_005b6f7a_6 = table_415efe[(var_0058d156_6 << 8) + var_004aff6d_8];
                    uint8_t var_0049d7f9_7 = table_415efe[(var_00490ab1_9 << 8) + var_0043512c_9];
                    uint8_t var_00571cf5_7 = table_415efe[(var_0060197f_11 << 8) + var_005a6a38_9];
                    uint8_t var_00459204_12 = table_415efe[(var_005ed9a2_6 << 8) + var_0061701c_10];

                    uint8_t var_00591280_9 = table_4ef23e[(var_005f5d05_8 << 8) + var_005b6f7a_6];
                    uint8_t var_0044989e_10 = table_4ef23e[(var_00566369_7 << 8) + var_00571cf5_7];
                    uint8_t var_005cef77_11 = table_4ef23e[(var_005a69a8_4 << 8) + var_00459204_12];
                    uint8_t var_004ae266_10 = table_4ef23e[(var_00499d02_9 << 8) + var_0049d7f9_7];

                    uint8_t var_00617015_9 = table_5c2f74[var_00591280_9];
                    uint8_t var_0061701f_8 = table_49635d[var_0044989e_10];
                    uint8_t var_00617018_10 = table_4866a5[var_005cef77_11];
                    uint8_t var_00617012_9 = table_4977cb[var_004ae266_10];

                    if(var_00617012_9 == 0xcc && var_00617018_10 == 0x88 && var_00617015_9 == 0x55 && var_0061701f_8 == 0xff) {
                        printf("%d %d %d %d\n", a, b, c, d);
                    }
                }
            }
        }
    }
}
