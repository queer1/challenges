
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "tables.h"

int main(int argc, char *argv[])
{
    uint32_t var_00617010_7 = 0xf0, var_00617011_7 = 0x84, var_00617012_9 = 0x32, var_00617013_8 = 0x60, var_00617014_5 = 0xf5, var_00617015_9 = 0x89, var_00617016_10 = 0x9d, var_00617017_10 = 0xfa, var_00617018_10 = 0x07, var_00617019_6 = 0x1a, var_0061701a_7 = 0x8e, var_0061701b_7 = 0xa3, var_0061701c_12 = 0x0f, var_0061701d_9 = 0xae, var_0061701e_8 = 0xab, var_0061701f_8 = 0xca;
        
uint32_t var_00591280_0, var_0049d7f9_0, var_004e47e2_0, var_00590a90_0, var_0044ae8b_0, var_0043ace2_0, var_0055985e_0, var_00459204_0, var_005cef77_0, var_005c191a_0, var_0057be49_0, var_005c5821_0, var_005b9ae3_0, var_0058c52d_0, var_0054fa8f_0, var_00574341_0, var_004cff85_0, var_005a6a38_0, var_0040da95_0, var_005a2f04_0, var_004a29f0_0, var_005d0b28_0, var_005aa8a7_0, var_00520124_0, var_005e2ecc_0, var_005a379c_0, var_004a0be5_0, var_00617012_0, var_005bef50_0, var_005fa23c_0, var_00573283_0, var_00415c97_0, var_0061701f_0, var_004bc31e_0, var_00520453_0, var_00404f8c_0, var_00459204_1, var_0043a427_0, var_005f5d05_0, var_0061441a_0, var_0061701c_0, var_00617010_0, var_00571cf5_0, var_0045b76e_0, var_00617016_0, var_00605846_0, var_0048c955_0, var_00499d02_0, var_00566369_0, var_0057be49_1, var_004a5548_0, var_0045436d_0, var_005cef77_1, var_005ed9a2_0, var_0058c52d_1, var_004aff6d_0, var_005c0615_0, var_005fa23c_1, var_004ae266_0, var_0061701e_0, var_005fe8c0_0, var_004746a7_0, var_005c522f_0, var_005fd9c0_0, var_004b4c8c_0, var_00415c97_1, var_0044989e_0, var_004dde6b_0, var_0058850e_0, var_0040da95_1, var_0060197f_0, var_005bfb4c_0, var_004a0be5_1, var_005d0b28_1, var_0057be49_2, var_005d1751_0, var_005c0615_1, var_0048da35_0, var_0048c955_1, var_0044989e_1, var_004746a7_1, var_004a1a09_0, var_0044ae8b_1, var_005c5821_1, var_0061441a_1, var_00617015_0, var_0061701f_1, var_005bef50_1, var_005fa23c_2, var_00617019_0, var_0058c52d_2, var_004c7134_0, var_0048da35_1, var_00590a90_1, var_004746a7_2, var_0054a655_0, var_0061441a_2, var_0043a427_1, var_00520453_1, var_0055985e_1, var_004b4c8c_1, var_00617012_1, var_0053e4ac_0, var_0043df43_0, var_0055985e_2, var_00617013_0, var_005c522f_1, var_004e47e2_1, var_0045b76e_1, var_00617010_1, var_005cef77_2, var_005d1751_1, var_005b46f9_0, var_0049e624_0, var_0043512c_0, var_0061701c_1, var_00566369_1, var_005fa23c_3, var_004cff85_1, var_0049d7f9_1, var_0058d156_0, var_00415c97_2, var_0061701b_0, var_0056b399_0, var_00617016_1, var_004109d6_0, var_005bef50_2, var_004386bf_0, var_004680c0_0, var_00459204_2, var_004aff6d_1, var_00470f07_0, var_004c7134_1, var_004cff85_2, var_00520124_1, var_00571cf5_1, var_0043ace2_1, var_00573283_1, var_005ec1a8_0, var_00520453_2, var_00404f8c_1, var_00605846_1, var_005b9ae3_1, var_0048da35_2, var_004a0be5_2, var_005cef77_3, var_0045436d_1, var_005f5d05_1, var_004bc31e_1, var_005b33e0_0, var_00574341_1, var_0059edbe_0, var_004e47e2_2, var_005a316b_0, var_00617017_0, var_00617014_0, var_0061701a_0, var_00520124_2, var_005b9ae3_2, var_0043512c_1, var_0045b76e_2, var_0054a655_1, var_00617018_0, var_00558f25_0, var_0055985e_3, var_0054fa8f_1, var_0043ace2_2, var_005fe8c0_1, var_0043512c_2, var_0060197f_1, var_004a1a09_1, var_0054804b_0, var_0049fe14_0, var_004746a7_3, var_005a2f04_1, var_0061441a_3, var_005a1c6a_0, var_00617015_1, var_004aa6c1_0, var_0046029a_0, var_0054fa8f_2, var_0043ace2_3, var_004cfdb8_0, var_0044989e_2, var_004386bf_1, var_005d1751_2, var_005a1c6a_1, var_0053e4ac_1, var_0061701c_2, var_0040da95_2, var_005c522f_2, var_005b6f7a_0, var_0058850e_1, var_004bc31e_2, var_0058d156_1, var_005c191a_1, var_004e47e2_3, var_0048da35_3, var_00617016_2, var_00617014_1, var_00505d67_0, var_004c7134_2, var_00591280_1, var_00450306_0, var_0049e624_1, var_0043512c_3, var_0047a26b_0, var_005cef77_4, var_005fa23c_4, var_00520453_3, var_005e2ecc_1, var_0058c52d_3, var_004a1a09_2, var_005a69a8_0, var_0048c955_2, var_0061701c_3, var_005a379c_1, var_0046029a_1, var_00505d67_1, var_004e47e2_4, var_005d0b28_2, var_005b9ae3_3, var_00617017_1, var_0047a26b_1, var_0059edbe_1, var_005a6a38_1, var_00605846_2, var_00499d02_1, var_005a316b_1, var_004746a7_4, var_004ae266_1, var_005ed9a2_1, var_0044989e_3, var_005b33e0_1, var_0045b76e_3, var_00617019_1, var_005fe8c0_2, var_004466ca_0, var_00617012_2, var_0055985e_4, var_0061701b_1, var_005fd9c0_1, var_004680c0_1, var_005bef50_3, var_005c5821_2, var_00415c97_3, var_00591280_2, var_005ec1a8_1, var_0061701f_2, var_00573283_2, var_00605846_3, var_00404f8c_2, var_0047a26b_2, var_004c7134_3, var_0058793a_0, var_004bc31e_3, var_005c5821_3, var_00576040_0, var_0046029a_2, var_0061701e_1, var_004aff6d_2, var_00490ab1_0, var_004a0be5_3, var_004dde6b_1, var_005a6a38_2, var_005c191a_2, var_005f5094_0, var_0040da95_3, var_0054804b_1, var_00617018_1, var_005ec1a8_2, var_005c5821_4, var_004a29f0_1, var_005bfb4c_1, var_00470f07_1, var_005a2f04_2, var_0060197f_2, var_005f7f82_0, var_0043a427_2, var_005f5d05_2, var_00558f25_1, var_0058793a_1, var_00571cf5_2, var_004aa6c1_1, var_00520453_4, var_00566369_2, var_0047a26b_3, var_00617010_2, var_005a6a38_3, var_00470f07_2, var_005f7f82_1, var_005f5d05_3, var_005bfb4c_2, var_005b9ae3_4, var_0046029a_3, var_005cef77_5, var_00459204_3, var_005c0615_2, var_00499d02_2, var_004b4c8c_2, var_00591280_3, var_0045b76e_4, var_0049d7f9_2, var_0043df43_1, var_005d1751_3, var_0049fe14_1, var_00590a90_2, var_00573283_3, var_00576040_1, var_00520124_3, var_00617017_2, var_00401a96_0, var_0054fa8f_3, var_004ae266_2, var_005a316b_2, var_005a6a38_4, var_00566369_3, var_004746a7_5, var_004cff85_3, var_0056b399_1, var_00520453_5, var_0048c955_3, var_004a5548_1, var_004b4c8c_3, var_00617018_2, var_005b6f7a_1, var_005b46f9_1, var_005c191a_3, var_005ec1a8_3, var_00558f25_2, var_0061701d_0, var_004680c0_2, var_004a1a09_3, var_0043ace2_4, var_005bfb4c_3, var_00450306_1, var_0058c52d_4, var_0058850e_2, var_005a69a8_1, var_00617011_0, var_00470f07_3, var_005b9ae3_5, var_00493124_0, var_0061701c_4, var_0054fa8f_4, var_00576040_2, var_00617013_1, var_004cff85_4, var_005fe8c0_3, var_00499d02_3, var_004aff6d_3, var_0054804b_2, var_0061701e_2, var_00401a96_1, var_004a0be5_4, var_00490ab1_1, var_0061701f_3, var_005a1c6a_2, var_00617013_2, var_005b33e0_2, var_00617012_3, var_004a29f0_2, var_0055985e_5, var_005a316b_3, var_0053e4ac_2, var_004aa6c1_2, var_005c99d1_0, var_005c0615_3, var_00617016_3, var_0057be49_3, var_0061441a_4, var_0058c52d_5, var_005bef50_4, var_0047a26b_4, var_0049e624_2, var_004c7134_4, var_0044989e_4, var_005fd9c0_2, var_005b9ae3_6, var_0061701b_2, var_00617011_1, var_00605846_4, var_005fe8c0_4, var_0054a655_2, var_00499d02_4, var_005c5821_5, var_004c7134_5, var_005c99d1_1, var_00591280_4, var_005d0b28_3, var_00459204_4, var_00566369_4, var_005d1751_4, var_004cfdb8_1, var_00617018_3, var_0061701d_1, var_005b46f9_2, var_0043df43_2, var_0048da35_4, var_0048c955_4, var_005bef50_5, var_005ed9a2_2, var_00505d67_2, var_004b4c8c_4, var_005b33e0_3, var_0061701d_2, var_005c522f_3, var_00617018_4, var_004ae266_3, var_0045b76e_5, var_004aa6c1_3, var_005a6a38_5, var_004aff6d_4, var_004aa6c1_4, var_00450306_2, var_00573283_4, var_00574341_2, var_005e2ecc_2, var_00505d67_3, var_0049d7f9_3, var_00617018_5, var_00617016_4, var_0056b399_2, var_005f5094_1, var_005b6f7a_2, var_0044989e_5, var_005f5094_2, var_00617010_3, var_004cff85_5, var_0040da95_4, var_00617017_3, var_0058793a_2, var_0046029a_4, var_00493124_1, var_00617012_4, var_005fd9c0_3, var_00617019_2, var_005c191a_4, var_004466ca_1, var_00617015_2, var_0045b76e_6, var_005c0615_4, var_0054a655_3, var_005b9ae3_7, var_0058850e_3, var_00520124_4, var_00499d02_5, var_004a5548_2, var_0059edbe_2, var_00574341_3, var_005a2f04_3, var_005fa23c_5, var_0043512c_4, var_005d0b28_4, var_0060197f_3, var_0049e624_3, var_0061701e_3, var_0061701f_4, var_00617014_2, var_005d1751_5, var_0043df43_3, var_0048da35_5, var_005d0b28_5, var_005e2ecc_3, var_0058c52d_6, var_0061701a_1, var_0040da95_5, var_005f5d05_4, var_004c7134_6, var_00573283_5, var_005c522f_4, var_00401a96_2, var_0054804b_3, var_004cfdb8_2, var_005a6a38_6, var_00617017_4, var_00558f25_3, var_00520453_6, var_005aa8a7_1, var_0054a655_4, var_004bc31e_4, var_0046029a_5, var_004109d6_1, var_005bef50_6, var_005f7f82_2, var_00505d67_4, var_00571cf5_3, var_005a1c6a_3, var_0061701d_3, var_004ae266_4, var_004dde6b_2, var_0049fe14_2, var_0061701b_3, var_004a0be5_5, var_00605846_5, var_005a316b_4, var_005a1c6a_4, var_004746a7_6, var_00617013_3, var_004aff6d_5, var_005a1c6a_5, var_0045436d_2, var_004b4c8c_5, var_004a1a09_4, var_0061701c_5, var_004e47e2_5, var_005b9ae3_8, var_0043df43_4, var_0044ae8b_2, var_00571cf5_4, var_0058793a_3, var_0043512c_5, var_0060197f_4, var_005ec1a8_4, var_0061441a_5, var_0055985e_6, var_004ae266_5, var_00617018_6, var_00574341_4, var_0040da95_6, var_0058c52d_7, var_004bc31e_5, var_0048c955_5, var_005c191a_5, var_00617015_3, var_0061701d_4, var_00617017_5, var_0045436d_3, var_00470f07_4, var_0057be49_4, var_0053e4ac_3, var_00573283_6, var_0048c955_6, var_0061701b_4, var_00590a90_3, var_004cff85_6, var_005aa8a7_2, var_00490ab1_2, var_004bc31e_6, var_00576040_3, var_00617011_2, var_005f7f82_3, var_0043ace2_5, var_005a379c_2, var_004cfdb8_3, var_0048da35_6, var_0044989e_6, var_005bfb4c_4, var_004746a7_7, var_0045b76e_7, var_0043df43_5, var_004dde6b_3, var_004a1a09_5, var_0061701e_4, var_005e2ecc_4, var_00617012_5, var_005b9ae3_9, var_005fe8c0_5, var_00401a96_3, var_005d1751_6, var_004b4c8c_6, var_004386bf_2, var_0058d156_2, var_00590a90_4, var_005d0b28_6, var_00617014_3, var_004b4c8c_7, var_0058c52d_8, var_00573283_7, var_00558f25_4, var_0049fe14_3, var_005a379c_3, var_0060197f_5, var_0043a427_3, var_0061701f_5, var_00576040_4, var_004dde6b_4, var_00459204_5, var_0058850e_4, var_005c0615_5, var_0040da95_7, var_005d0b28_7, var_00574341_5, var_00470f07_5, var_005ec1a8_5, var_005f5094_3, var_00617019_3, var_00415c97_4, var_004a0be5_6, var_00459204_6, var_004ae266_6, var_004aff6d_6, var_005bef50_7, var_005cef77_6, var_0046029a_6, var_00574341_6, var_00617018_7, var_005b9ae3_10, var_00401a96_4, var_0054fa8f_5, var_004a5548_3, var_004a0be5_7, var_005b6f7a_3, var_00617016_5, var_00617016_6, var_00617017_6, var_005fd9c0_4, var_004b4c8c_8, var_004a29f0_3, var_00493124_2, var_00499d02_6, var_00590a90_5, var_005a6a38_7, var_0061701d_5, var_004c7134_7, var_00617013_4, var_0046029a_7, var_004bc31e_7, var_005e2ecc_5, var_0040da95_8, var_005f5d05_5, var_005a316b_5, var_005d0b28_8, var_005c522f_5, var_005ec1a8_6, var_00558f25_5, var_005aa8a7_3, var_004a1a09_6, var_004680c0_3, var_00415c97_5, var_0061701a_2, var_0056b399_3, var_0044989e_7, var_0048da35_7, var_005b46f9_3, var_0047a26b_5, var_0055985e_7, var_005a316b_6, var_005a379c_4, var_0049fe14_4, var_0060197f_6, var_0043512c_6, var_00617010_4, var_005fa23c_6, var_0061701c_6, var_0045b76e_8, var_00490ab1_3, var_00415c97_6, var_00617017_7, var_00574341_7, var_005b33e0_4, var_005bfb4c_5, var_005a69a8_2, var_005c5821_6, var_00617015_4, var_004aff6d_7, var_0054a655_5, var_004a1a09_7, var_00590a90_6, var_00499d02_7, var_004e47e2_6, var_004ae266_7, var_00401a96_5, var_005b9ae3_11, var_004b4c8c_9, var_00617013_5, var_00576040_5, var_0040da95_9, var_005c99d1_2, var_00470f07_6, var_00617011_3, var_004466ca_2, var_004c7134_8, var_00591280_5, var_00450306_3, var_004aa6c1_5, var_0060197f_7, var_0049fe14_5, var_004a0be5_8, var_004a1a09_8, var_00404f8c_3, var_004386bf_3, var_0045b76e_9, var_005b46f9_4, var_0043a427_4, var_005fd9c0_5, var_005d1751_7, var_004b4c8c_10, var_004680c0_4, var_00558f25_6, var_0044989e_8, var_0053e4ac_4, var_005bef50_8, var_005a2f04_4, var_0059edbe_3, var_00566369_5, var_0048da35_8, var_004a5548_4, var_0054fa8f_6, var_005c5821_7, var_004cfdb8_4, var_005b6f7a_4, var_004a1a09_9, var_005f5d05_6, var_00459204_7, var_0054804b_4, var_00617015_5, var_005c0615_6, var_0053e4ac_5, var_004c7134_9, var_004109d6_2, var_0043df43_6, var_00558f25_7, var_0058850e_5, var_00520453_7, var_0056b399_4, var_0061701d_6, var_004cff85_7, var_00617016_7, var_0046029a_8, var_0060197f_8, var_004746a7_8, var_0055985e_8, var_00558f25_8, var_0061441a_6, var_004c7134_10, var_00505d67_5, var_0061701b_5, var_004bc31e_8, var_005bfb4c_6, var_005fa23c_7, var_0055985e_9, var_00490ab1_4, var_00401a96_6, var_0061701a_3, var_004dde6b_5, var_005b9ae3_12, var_005ec1a8_7, var_005c191a_6, var_00573283_8, var_0045436d_4, var_0047a26b_6, var_0054804b_5, var_00617015_6, var_005a2f04_5, var_00617019_4, var_005aa8a7_4, var_0058c52d_9, var_0049e624_4, var_005d0b28_9, var_00591280_6, var_005cef77_7, var_00401a96_7, var_005d1751_8, var_005c191a_7, var_00576040_6, var_005a1c6a_6, var_004466ca_3, var_00493124_3, var_004bc31e_9, var_00617012_6, var_0061701c_7, var_004386bf_4, var_005f7f82_4, var_004a5548_5, var_004dde6b_6, var_0061701e_5, var_00605846_6, var_0049fe14_6, var_005ed9a2_3, var_00459204_8, var_005a2f04_6, var_005f5d05_7, var_00617019_5, var_005a2f04_7, var_004e47e2_7, var_005fd9c0_6, var_0061701c_8, var_004746a7_9, var_00520124_5, var_004a29f0_4, var_005b9ae3_13, var_0057be49_5, var_005a69a8_3, var_005d1751_9, var_004466ca_4, var_004cff85_8, var_0044989e_9, var_0048da35_9, var_00590a90_7, var_005c99d1_3, var_0043512c_7, var_0043df43_7, var_004386bf_5, var_005fe8c0_6, var_00470f07_7, var_005c5821_8, var_0043ace2_6, var_00415c97_7, var_00617015_7, var_005cef77_8, var_0044ae8b_3, var_004aa6c1_6, var_0058793a_4, var_0061701e_6, var_005a6a38_8, var_0043a427_5, var_005c5821_9, var_00617014_4, var_00617017_8, var_00450306_4, var_00499d02_8, var_004ae266_8, var_005b6f7a_5, var_00470f07_8, var_0049d7f9_4, var_00490ab1_5, var_0049fe14_7, var_0060197f_9, var_005b33e0_5, var_004a29f0_5, var_005bef50_9, var_0061441a_7, var_00459204_9, var_005ec1a8_8, var_0054fa8f_7, var_005bfb4c_7, var_00617012_7, var_004a5548_6, var_0058d156_3, var_00617011_4, var_00617013_6, var_00590a90_8, var_00617016_8, var_00574341_8, var_0054804b_6, var_004109d6_3, var_00470f07_9, var_00571cf5_5, var_005c191a_8, var_004b4c8c_11, var_004e47e2_8, var_0054a655_6, var_004bc31e_10, var_005a2f04_8, var_0048c955_7, var_0058d156_4, var_00558f25_9, var_00459204_10, var_00617010_5, var_0049e624_5, var_00617011_5, var_0049d7f9_5, var_0043512c_8, var_00459204_11, var_005c99d1_4, var_005c522f_6, var_004746a7_10, var_00493124_4, var_0058c52d_10, var_00566369_6, var_005e2ecc_6, var_00505d67_6, var_00591280_7, var_0059edbe_4, var_00401a96_8, var_005b9ae3_14, var_004a5548_7, var_005a2f04_9, var_005d0b28_10, var_0061701d_7, var_004b4c8c_12, var_0061701c_9, var_0057be49_6, var_00617018_8, var_00617012_8, var_005fa23c_8, var_0040da95_10, var_0048da35_10, var_0061701b_6, var_0055985e_10, var_005c5821_10, var_0058850e_6, var_00404f8c_4, var_0061701a_4, var_0058d156_5, var_005a1c6a_7, var_004e47e2_9, var_00490ab1_6, var_0045436d_5, var_00617013_7, var_00617016_9, var_004a1a09_10, var_0057be49_7, var_00590a90_9, var_005a6a38_9, var_0061701c_10, var_0058793a_5, var_00605846_7, var_005d0b28_11, var_0049d7f9_6, var_00558f25_10, var_004ae266_9, var_004aff6d_8, var_005e2ecc_7, var_00505d67_7, var_00576040_7, var_004680c0_5, var_00499d02_9, var_005aa8a7_5, var_00520124_6, var_005fd9c0_7, var_0059edbe_5, var_004a5548_8, var_00573283_9, var_004466ca_5, var_005c522f_7, var_0060197f_10, var_0054fa8f_8, var_0054804b_7, var_0044ae8b_4, var_0048da35_11, var_005b46f9_5, var_0043512c_9, var_0047a26b_7, var_00450306_5, var_00617010_6, var_0043ace2_7, var_005f5d05_8, var_005b46f9_6, var_0061701f_6, var_004746a7_11, var_00470f07_10, var_005d0b28_12, var_005a69a8_4, var_005ed9a2_4, var_005d1751_10, var_004cff85_9, var_005a379c_5, var_004bc31e_11, var_00605846_8, var_005b33e0_6, var_0058850e_7, var_004680c0_6, var_00490ab1_7, var_005ed9a2_5, var_00617018_9, var_00617011_6, var_005c0615_7, var_00591280_8, var_0043a427_6, var_004a1a09_11, var_004466ca_6, var_00617015_8, var_005ec1a8_9, var_005bef50_10, var_0061441a_8, var_005a316b_7, var_005fe8c0_7, var_0057be49_8, var_0061701a_5, var_00566369_7, var_00450306_6, var_0061701a_6, var_005ec1a8_10, var_0061701e_7, var_005cef77_9, var_0058d156_6, var_005b6f7a_6, var_0044ae8b_5, var_0060197f_11, var_004aff6d_9, var_00490ab1_8, var_00591280_9, var_005ed9a2_6, var_00617017_9, var_0043a427_7, var_005b46f9_7, var_0061701d_8, var_0053e4ac_6, var_005b9ae3_15, var_00470f07_11, var_005cef77_10, var_0061701f_7, var_00459204_12, var_00571cf5_6, var_0061701c_11, var_005f5d05_9, var_004cfdb8_5, var_0047a26b_8, var_0045436d_6, var_004a0be5_9, var_004a5548_9, var_00404f8c_5, var_00490ab1_9, var_00571cf5_7, var_004a29f0_6, var_004466ca_7, var_004a1a09_12, var_0044ae8b_6, var_0049d7f9_7, var_0044989e_10, var_004109d6_4, var_005fa23c_9, var_004ae266_10, var_0044ae8b_7, var_005cef77_11, var_00470f07_12;
uint32_t var_00617000_0, var_00617001_0, var_00617002_0, var_00617003_0, var_00617004_0, var_00617005_0, var_00617006_0, var_00617007_0, var_00617008_0, var_00617009_0, var_0061700a_0, var_0061700b_0, var_0061700c_0, var_0061700d_0, var_0061700e_0, var_0061700f_0;
for (var_00617017_9 = 0; var_00617017_9 < 0x100; var_00617017_9++) {
var_005b9ae3_15 = table_4c4e3b[var_00617017_9];
var_00470f07_11 = table_4bc105[var_00617017_9];
var_005cef77_10 = table_495a03[var_00617017_9];
var_004a1a09_12 = table_577802[var_00617017_9];
printf("%d\r", var_00617017_9);fflush(stdout);
for (var_00617018_8 = 0; var_00617018_8 < 0x100; var_00617018_8++) {
var_005fa23c_8 = table_58da35[var_00617018_8];
var_0055985e_10 = table_533b5b[var_00617018_8];
var_005c5821_10 = table_408d55[var_00617018_8];
var_0054fa8f_8 = table_5bae3c[var_00617018_8];
for (var_00459204_11 = 0; var_00459204_11 < 0x100; var_00459204_11++) {
var_00401a96_8 = table_52f77d[var_00459204_11];
var_00617012_8 = table_4451b7[var_00459204_11];
var_0061701b_6 = table_487994[var_00459204_11];
var_0058850e_6 = table_5ef150[var_00459204_11];
for (var_00505d67_7 = 0; var_00505d67_7 < 0x100; var_00505d67_7++) {
var_00576040_7 = table_4e93c7[var_00505d67_7];
var_005fd9c0_7 = table_535295[var_00505d67_7];
var_004bc31e_11 = table_467517[var_00505d67_7];
var_005ed9a2_5 = table_54ab7f[var_00505d67_7];
var_00573283_9 = table_50c7b8[(var_005fd9c0_7 << 8) + var_00617012_8];
var_005b33e0_6 = table_50c7b8[(var_00576040_7 << 8) + var_0058850e_6];
var_0057be49_8 = table_50c7b8[(var_005ed9a2_5 << 8) + var_0061701b_6];
var_0061701d_8 = table_50c7b8[(var_004bc31e_11 << 8) + var_00401a96_8];
var_0061701c_11 = table_415efe[(var_005cef77_10 << 8) + var_005c5821_10];
var_0045436d_6 = table_415efe[(var_00470f07_11 << 8) + var_0055985e_10];
var_004a29f0_6 = table_415efe[(var_005b9ae3_15 << 8) + var_005fa23c_8];
var_0044ae8b_7 = table_415efe[(var_004a1a09_12 << 8) + var_0054fa8f_8];
var_005f5d05_9 = table_4ef23e[(var_0061701d_8 << 8) + var_0061701c_11];
var_004466ca_7 = table_4ef23e[(var_0057be49_8 << 8) + var_0045436d_6];
var_004109d6_4 = table_4ef23e[(var_005b33e0_6 << 8) + var_004a29f0_6];
var_00470f07_12 = table_4ef23e[(var_00573283_9 << 8) + var_0044ae8b_7];
if(1 && var_0061701a_7 == table_4b0c3e[var_005f5d05_9] && var_00617010_7 == table_49ca9e[var_004466ca_7] && var_00617017_10 == table_5ba7d5[var_00470f07_12] && var_0061701d_9 == table_48085f[var_004109d6_4] ) {
printf("%d %d %d %d\n", var_00617017_9, var_00617018_8, var_00459204_11, var_00505d67_7 );
fflush(stdout);
goto L_140;}}}}}
L_140:
for (var_005ec1a8_10 = 0; var_005ec1a8_10 < 0x100; var_005ec1a8_10++) {
var_0058d156_6 = table_5c588b[var_005ec1a8_10];
var_0060197f_11 = table_49ab28[var_005ec1a8_10];
var_005ed9a2_6 = table_481426[var_005ec1a8_10];
var_00490ab1_9 = table_48d491[var_005ec1a8_10];
printf("%d\r", var_005ec1a8_10);fflush(stdout);
for (var_004a1a09_10 = 0; var_004a1a09_10 < 0x100; var_004a1a09_10++) {
var_005a6a38_9 = table_4915b9[var_004a1a09_10];
var_0061701c_10 = table_5ce505[var_004a1a09_10];
var_004aff6d_8 = table_4af055[var_004a1a09_10];
var_0043512c_9 = table_4a51b1[var_004a1a09_10];
for (var_005c99d1_4 = 0; var_005c99d1_4 < 0x100; var_005c99d1_4++) {
var_004746a7_10 = table_42cc6b[var_005c99d1_4];
var_00493124_4 = table_5a6860[var_005c99d1_4];
var_0058c52d_10 = table_5fd18f[var_005c99d1_4];
var_005b9ae3_14 = table_537b8b[var_005c99d1_4];
for (var_005a1c6a_7 = 0; var_005a1c6a_7 < 0x100; var_005a1c6a_7++) {
var_00590a90_9 = table_58d445[var_005a1c6a_7];
var_004ae266_9 = table_4c900c[var_005a1c6a_7];
var_005aa8a7_5 = table_493003[var_005a1c6a_7];
var_005b46f9_5 = table_524c3b[var_005a1c6a_7];
var_00499d02_9 = table_50c7b8[(var_004ae266_9 << 8) + var_004746a7_10];
var_005f5d05_8 = table_50c7b8[(var_005b46f9_5 << 8) + var_00493124_4];
var_005a69a8_4 = table_50c7b8[(var_00590a90_9 << 8) + var_0058c52d_10];
var_00566369_7 = table_50c7b8[(var_005aa8a7_5 << 8) + var_005b9ae3_14];
var_005b6f7a_6 = table_415efe[(var_0058d156_6 << 8) + var_004aff6d_8];
var_00459204_12 = table_415efe[(var_005ed9a2_6 << 8) + var_0061701c_10];
var_00571cf5_7 = table_415efe[(var_0060197f_11 << 8) + var_005a6a38_9];
var_0049d7f9_7 = table_415efe[(var_00490ab1_9 << 8) + var_0043512c_9];
var_00591280_9 = table_4ef23e[(var_005f5d05_8 << 8) + var_005b6f7a_6];
var_0044989e_10 = table_4ef23e[(var_00566369_7 << 8) + var_00571cf5_7];
var_004ae266_10 = table_4ef23e[(var_00499d02_9 << 8) + var_0049d7f9_7];
var_005cef77_11 = table_4ef23e[(var_005a69a8_4 << 8) + var_00459204_12];
if(1 && var_00617015_9 == table_5c2f74[var_00591280_9] && var_0061701f_8 == table_49635d[var_0044989e_10] && var_00617012_9 == table_4977cb[var_004ae266_10] && var_00617018_10 == table_4866a5[var_005cef77_11] ) {
printf("%d %d %d %d\n", var_005ec1a8_10, var_004a1a09_10, var_005c99d1_4, var_005a1c6a_7 );
fflush(stdout);
goto L_136;}}}}}
L_136:
for (var_0047a26b_7 = 0; var_0047a26b_7 < 0x100; var_0047a26b_7++) {
var_00617010_6 = table_4aebeb[var_0047a26b_7];
var_004680c0_6 = table_51e704[var_0047a26b_7];
var_005c0615_7 = table_57c6b8[var_0047a26b_7];
var_0047a26b_8 = table_4133d1[var_0047a26b_7];
printf("%d\r", var_0047a26b_7);fflush(stdout);
for (var_0043a427_6 = 0; var_0043a427_6 < 0x100; var_0043a427_6++) {
var_004a1a09_11 = table_5caa61[var_0043a427_6];
var_005a316b_7 = table_5bdcda[var_0043a427_6];
var_005cef77_9 = table_5754c6[var_0043a427_6];
var_004aff6d_9 = table_55d0a8[var_0043a427_6];
for (var_0058d156_5 = 0; var_0058d156_5 < 0x100; var_0058d156_5++) {
var_00617013_7 = table_4bd0a5[var_0058d156_5];
var_0057be49_7 = table_5e970b[var_0058d156_5];
var_004680c0_5 = table_4086f7[var_0058d156_5];
var_0060197f_10 = table_463932[var_0058d156_5];
for (var_005b46f9_6 = 0; var_005b46f9_6 < 0x100; var_005b46f9_6++) {
var_004746a7_11 = table_5e5e79[var_005b46f9_6];
var_005ed9a2_4 = table_44bc1d[var_005b46f9_6];
var_00617018_9 = table_52fa24[var_005b46f9_6];
var_0061701a_5 = table_5bc670[var_005b46f9_6];
var_005d0b28_12 = table_415efe[(var_004746a7_11 << 8) + var_004680c0_5];
var_0058850e_7 = table_415efe[(var_005ed9a2_4 << 8) + var_0057be49_7];
var_00617011_6 = table_415efe[(var_00617018_9 << 8) + var_00617013_7];
var_00450306_6 = table_415efe[(var_0061701a_5 << 8) + var_0060197f_10];
var_005b46f9_7 = table_50c7b8[(var_004680c0_6 << 8) + var_005cef77_9];
var_0061701f_7 = table_50c7b8[(var_005c0615_7 << 8) + var_004a1a09_11];
var_004a0be5_9 = table_50c7b8[(var_00617010_6 << 8) + var_004aff6d_9];
var_00404f8c_5 = table_50c7b8[(var_0047a26b_8 << 8) + var_005a316b_7];
var_0053e4ac_6 = table_4ef23e[(var_005b46f9_7 << 8) + var_0058850e_7];
var_004a5548_9 = table_4ef23e[(var_0061701f_7 << 8) + var_005d0b28_12];
var_0044ae8b_6 = table_4ef23e[(var_00404f8c_5 << 8) + var_00450306_6];
var_005fa23c_9 = table_4ef23e[(var_004a0be5_9 << 8) + var_00617011_6];
if(1 && var_00617014_5 == table_493d6c[var_0053e4ac_6] && var_0061701e_8 == table_44116a[var_004a5548_9] && var_0061701b_7 == table_482bb5[var_0044ae8b_6] && var_00617011_7 == table_534d4a[var_005fa23c_9] ) {
printf("%d %d %d %d\n", var_0047a26b_7, var_0043a427_6, var_0058d156_5, var_005b46f9_6 );
fflush(stdout);
goto L_132;}}}}}
L_132:
for (var_0048da35_11 = 0; var_0048da35_11 < 0x100; var_0048da35_11++) {
var_005d1751_10 = table_609991[var_0048da35_11];
var_00490ab1_7 = table_5d674c[var_0048da35_11];
var_005ec1a8_9 = table_5c34c7[var_0048da35_11];
var_0061701a_6 = table_4e3712[var_0048da35_11];
printf("%d\r", var_0048da35_11);fflush(stdout);
for (var_005a2f04_9 = 0; var_005a2f04_9 < 0x100; var_005a2f04_9++) {
var_0040da95_10 = table_5daf94[var_005a2f04_9];
var_0045436d_5 = table_4ffabf[var_005a2f04_9];
var_004466ca_5 = table_5e0595[var_005a2f04_9];
var_0044ae8b_4 = table_60bd0f[var_005a2f04_9];
for (var_0061701a_4 = 0; var_0061701a_4 < 0x100; var_0061701a_4++) {
var_00617016_9 = table_4367bf[var_0061701a_4];
var_0049d7f9_6 = table_5a3f2f[var_0061701a_4];
var_004a5548_8 = table_490d7f[var_0061701a_4];
var_00470f07_10 = table_4583da[var_0061701a_4];
for (var_00558f25_10 = 0; var_00558f25_10 < 0x100; var_00558f25_10++) {
var_005e2ecc_7 = table_584f6f[var_00558f25_10];
var_0061701f_6 = table_602ced[var_00558f25_10];
var_005a379c_5 = table_432d08[var_00558f25_10];
var_00605846_8 = table_60e32a[var_00558f25_10];
var_00520124_6 = table_415efe[(var_005e2ecc_7 << 8) + var_00617016_9];
var_004cff85_9 = table_50c7b8[(var_005d1751_10 << 8) + var_004466ca_5];
var_00591280_8 = table_415efe[(var_0061701f_6 << 8) + var_0049d7f9_6];
var_004466ca_6 = table_415efe[(var_005a379c_5 << 8) + var_00470f07_10];
var_00617015_8 = table_415efe[(var_00605846_8 << 8) + var_004a5548_8];
var_005bef50_10 = table_50c7b8[(var_005ec1a8_9 << 8) + var_0040da95_10];
var_005fe8c0_7 = table_50c7b8[(var_00490ab1_7 << 8) + var_0044ae8b_4];
var_00571cf5_6 = table_50c7b8[(var_0061701a_6 << 8) + var_0045436d_5];
var_0061701e_7 = table_4ef23e[(var_004cff85_9 << 8) + var_00591280_8];
var_00490ab1_8 = table_4ef23e[(var_005bef50_10 << 8) + var_004466ca_6];
var_0043a427_7 = table_4ef23e[(var_005fe8c0_7 << 8) + var_00520124_6];
var_004cfdb8_5 = table_4ef23e[(var_00571cf5_6 << 8) + var_00617015_8];
if(1 && var_00617013_8 == table_4a5d12[var_0061701e_7] && var_00617016_10 == table_558431[var_00490ab1_8] && var_0061701c_12 == table_5d1023[var_0043a427_7] && var_00617019_6 == table_5996b4[var_004cfdb8_5] ) {
printf("%d %d %d %d\n", var_0048da35_11, var_005a2f04_9, var_0061701a_4, var_00558f25_10 );
fflush(stdout);
goto L_128;}}}}}
L_128:
for (var_00574341_8 = 0; var_00574341_8 < 0x100; var_00574341_8++) {
var_00470f07_9 = table_55fda6[var_00574341_8];
var_00571cf5_5 = table_4c6b9a[var_00574341_8];
var_00558f25_9 = table_5d5273[var_00574341_8];
var_0061441a_8 = table_58beca[var_00574341_8];
printf("%d\r", var_00574341_8);fflush(stdout);
for (var_0043512c_8 = 0; var_0043512c_8 < 0x100; var_0043512c_8++) {
var_005c522f_6 = table_5d371c[var_0043512c_8];
var_005e2ecc_6 = table_4e78f1[var_0043512c_8];
var_0061701d_7 = table_41512b[var_0043512c_8];
var_0054804b_7 = table_47129c[var_0043512c_8];
for (var_00617015_7 = 0; var_00617015_7 < 0x100; var_00617015_7++) {
var_0061701e_6 = table_5de68f[var_00617015_7];
var_0060197f_9 = table_59c8df[var_00617015_7];
var_00617011_4 = table_5fa43c[var_00617015_7];
var_00490ab1_6 = table_606c68[var_00617015_7];
for (var_005a2f04_7 = 0; var_005a2f04_7 < 0x100; var_005a2f04_7++) {
var_0061701c_8 = table_56ada8[var_005a2f04_7];
var_0057be49_5 = table_607547[var_005a2f04_7];
var_00617014_4 = table_4087f7[var_005a2f04_7];
var_0049d7f9_4 = table_42b2ef[var_005a2f04_7];
var_0049fe14_7 = table_50c7b8[(var_0049d7f9_4 << 8) + var_0061701e_6];
var_005bfb4c_7 = table_50c7b8[(var_0061701c_8 << 8) + var_0060197f_9];
var_0054a655_6 = table_50c7b8[(var_0057be49_5 << 8) + var_00617011_4];
var_00505d67_6 = table_415efe[(var_005c522f_6 << 8) + var_00558f25_9];
var_0057be49_6 = table_415efe[(var_005e2ecc_6 << 8) + var_00571cf5_5];
var_00450306_5 = table_415efe[(var_0054804b_7 << 8) + var_00470f07_9];
var_0043ace2_7 = table_50c7b8[(var_00617014_4 << 8) + var_00490ab1_6];
var_0044ae8b_5 = table_415efe[(var_0061701d_7 << 8) + var_0061441a_8];
var_0061701a_4 = table_4ef23e[(var_005bfb4c_7 << 8) + var_0057be49_6];
var_005a1c6a_7 = table_4ef23e[(var_0049fe14_7 << 8) + var_00505d67_6];
var_0043a427_6 = table_4ef23e[(var_0054a655_6 << 8) + var_00450306_5];
var_00617017_9 = table_4ef23e[(var_0043ace2_7 << 8) + var_0044ae8b_5];
if(1 && var_00617016_9 == table_4367bf[var_0061701a_4] && var_00590a90_9 == table_58d445[var_005a1c6a_7] && var_0049d7f9_6 == table_5a3f2f[var_0061701a_4] && var_004ae266_9 == table_4c900c[var_005a1c6a_7] && var_005aa8a7_5 == table_493003[var_005a1c6a_7] && var_004a5548_8 == table_490d7f[var_0061701a_4] && var_005b46f9_5 == table_524c3b[var_005a1c6a_7] && var_00470f07_10 == table_4583da[var_0061701a_4] && var_004a1a09_11 == table_5caa61[var_0043a427_6] && var_005a316b_7 == table_5bdcda[var_0043a427_6] && var_005cef77_9 == table_5754c6[var_0043a427_6] && var_004aff6d_9 == table_55d0a8[var_0043a427_6] && var_005b9ae3_15 == table_4c4e3b[var_00617017_9] && var_00470f07_11 == table_4bc105[var_00617017_9] && var_005cef77_10 == table_495a03[var_00617017_9] && var_004a1a09_12 == table_577802[var_00617017_9] ) {
printf("%d %d %d %d\n", var_00574341_8, var_0043512c_8, var_00617015_7, var_005a2f04_7 );
fflush(stdout);
goto L_124;}}}}}
L_124:
for (var_005c191a_8 = 0; var_005c191a_8 < 0x100; var_005c191a_8++) {
var_005a2f04_8 = table_451a46[var_005c191a_8];
var_00566369_6 = table_493f83[var_005c191a_8];
var_004b4c8c_12 = table_5eed05[var_005c191a_8];
var_004e47e2_9 = table_404a9a[var_005c191a_8];
printf("%d\r", var_005c191a_8);fflush(stdout);
for (var_004e47e2_7 = 0; var_004e47e2_7 < 0x100; var_004e47e2_7++) {
var_005a69a8_3 = table_42f6e4[var_004e47e2_7];
var_0044989e_9 = table_534279[var_004e47e2_7];
var_0043df43_7 = table_4c876b[var_004e47e2_7];
var_0043ace2_6 = table_4ddf61[var_004e47e2_7];
for (var_004bc31e_8 = 0; var_004bc31e_8 < 0x100; var_004bc31e_8++) {
var_005bfb4c_6 = table_4bc3ce[var_004bc31e_8];
var_0045436d_4 = table_44a971[var_004bc31e_8];
var_00591280_6 = table_4cffc5[var_004bc31e_8];
var_005a1c6a_6 = table_46f3ba[var_004bc31e_8];
for (var_00617019_5 = 0; var_00617019_5 < 0x100; var_00617019_5++) {
var_005b9ae3_13 = table_57dd21[var_00617019_5];
var_005c99d1_3 = table_4b5286[var_00617019_5];
var_005fe8c0_6 = table_49eff5[var_00617019_5];
var_0054fa8f_7 = table_562ccc[var_00617019_5];
var_0043a427_5 = table_415efe[(var_005fe8c0_6 << 8) + var_005bfb4c_6];
var_00617017_8 = table_415efe[(var_005b9ae3_13 << 8) + var_00591280_6];
var_004a5548_6 = table_415efe[(var_0054fa8f_7 << 8) + var_0045436d_4];
var_004e47e2_8 = table_415efe[(var_005c99d1_3 << 8) + var_005a1c6a_6];
var_0049d7f9_5 = table_50c7b8[(var_005a69a8_3 << 8) + var_005a2f04_8];
var_0061701c_9 = table_50c7b8[(var_0044989e_9 << 8) + var_00566369_6];
var_0058793a_5 = table_50c7b8[(var_0043ace2_6 << 8) + var_004b4c8c_12];
var_005c522f_7 = table_50c7b8[(var_0043df43_7 << 8) + var_004e47e2_9];
var_005c99d1_4 = table_4ef23e[(var_0049d7f9_5 << 8) + var_004a5548_6];
var_00617018_8 = table_4ef23e[(var_0061701c_9 << 8) + var_004e47e2_8];
var_0048da35_11 = table_4ef23e[(var_005c522f_7 << 8) + var_00617017_8];
var_005b46f9_6 = table_4ef23e[(var_0058793a_5 << 8) + var_0043a427_5];
if(1 && var_004746a7_10 == table_42cc6b[var_005c99d1_4] && var_00493124_4 == table_5a6860[var_005c99d1_4] && var_0058c52d_10 == table_5fd18f[var_005c99d1_4] && var_005b9ae3_14 == table_537b8b[var_005c99d1_4] && var_005fa23c_8 == table_58da35[var_00617018_8] && var_0055985e_10 == table_533b5b[var_00617018_8] && var_005c5821_10 == table_408d55[var_00617018_8] && var_0054fa8f_8 == table_5bae3c[var_00617018_8] && var_004746a7_11 == table_5e5e79[var_005b46f9_6] && var_005ed9a2_4 == table_44bc1d[var_005b46f9_6] && var_005d1751_10 == table_609991[var_0048da35_11] && var_00490ab1_7 == table_5d674c[var_0048da35_11] && var_00617018_9 == table_52fa24[var_005b46f9_6] && var_005ec1a8_9 == table_5c34c7[var_0048da35_11] && var_0061701a_5 == table_5bc670[var_005b46f9_6] && var_0061701a_6 == table_4e3712[var_0048da35_11] ) {
printf("%d %d %d %d\n", var_005c191a_8, var_004e47e2_7, var_004bc31e_8, var_00617019_5 );
fflush(stdout);
goto L_120;}}}}}
L_120:
for (var_00590a90_8 = 0; var_00590a90_8 < 0x100; var_00590a90_8++) {
var_004109d6_3 = table_48e003[var_00590a90_8];
var_0048c955_7 = table_43b5f1[var_00590a90_8];
var_004a5548_7 = table_575775[var_00590a90_8];
var_005d0b28_10 = table_4a67c8[var_00590a90_8];
printf("%d\r", var_00590a90_8);fflush(stdout);
for (var_005f5d05_7 = 0; var_005f5d05_7 < 0x100; var_005f5d05_7++) {
var_004cff85_8 = table_55da07[var_005f5d05_7];
var_004386bf_5 = table_40b6eb[var_005f5d05_7];
var_00617013_6 = table_5ce105[var_005f5d05_7];
var_0054804b_6 = table_5388b7[var_005f5d05_7];
for (var_004dde6b_6 = 0; var_004dde6b_6 < 0x100; var_004dde6b_6++) {
var_005ed9a2_3 = table_40608c[var_004dde6b_6];
var_00590a90_7 = table_576681[var_004dde6b_6];
var_0043512c_7 = table_5a19a2[var_004dde6b_6];
var_004ae266_8 = table_5376ff[var_004dde6b_6];
for (var_004bc31e_9 = 0; var_004bc31e_9 < 0x100; var_004bc31e_9++) {
var_005f7f82_4 = table_4d2fcb[var_004bc31e_9];
var_0049fe14_6 = table_56efe7[var_004bc31e_9];
var_005fd9c0_6 = table_5eaab6[var_004bc31e_9];
var_004466ca_4 = table_4504b1[var_004bc31e_9];
var_004aa6c1_6 = table_415efe[(var_0049fe14_6 << 8) + var_005ed9a2_3];
var_005c5821_9 = table_415efe[(var_005fd9c0_6 << 8) + var_00590a90_7];
var_0058d156_4 = table_50c7b8[(var_004cff85_8 << 8) + var_004109d6_3];
var_00617010_5 = table_415efe[(var_005f7f82_4 << 8) + var_0043512c_7];
var_00591280_7 = table_50c7b8[(var_004386bf_5 << 8) + var_0048c955_7];
var_0048da35_10 = table_415efe[(var_004466ca_4 << 8) + var_004ae266_8];
var_00404f8c_4 = table_50c7b8[(var_00617013_6 << 8) + var_005d0b28_10];
var_0059edbe_5 = table_50c7b8[(var_0054804b_6 << 8) + var_004a5548_7];
var_005a2f04_9 = table_4ef23e[(var_0058d156_4 << 8) + var_005c5821_9];
var_0058d156_5 = table_4ef23e[(var_00591280_7 << 8) + var_00617010_5];
var_00505d67_7 = table_4ef23e[(var_00404f8c_4 << 8) + var_0048da35_10];
var_005ec1a8_10 = table_4ef23e[(var_0059edbe_5 << 8) + var_004aa6c1_6];
if(1 && var_0040da95_10 == table_5daf94[var_005a2f04_9] && var_0045436d_5 == table_4ffabf[var_005a2f04_9] && var_00617013_7 == table_4bd0a5[var_0058d156_5] && var_0057be49_7 == table_5e970b[var_0058d156_5] && var_00576040_7 == table_4e93c7[var_00505d67_7] && var_004680c0_5 == table_4086f7[var_0058d156_5] && var_005fd9c0_7 == table_535295[var_00505d67_7] && var_004466ca_5 == table_5e0595[var_005a2f04_9] && var_0060197f_10 == table_463932[var_0058d156_5] && var_0044ae8b_4 == table_60bd0f[var_005a2f04_9] && var_004bc31e_11 == table_467517[var_00505d67_7] && var_005ed9a2_5 == table_54ab7f[var_00505d67_7] && var_0058d156_6 == table_5c588b[var_005ec1a8_10] && var_0060197f_11 == table_49ab28[var_005ec1a8_10] && var_005ed9a2_6 == table_481426[var_005ec1a8_10] && var_00490ab1_9 == table_48d491[var_005ec1a8_10] ) {
printf("%d %d %d %d\n", var_00590a90_8, var_005f5d05_7, var_004dde6b_6, var_004bc31e_9 );
fflush(stdout);
goto L_116;}}}}}
L_116:
for (var_00499d02_8 = 0; var_00499d02_8 < 0x100; var_00499d02_8++) {
var_00470f07_8 = table_56fed7[var_00499d02_8];
var_0061441a_7 = table_401c80[var_00499d02_8];
var_00459204_9 = table_5449ad[var_00499d02_8];
var_0049e624_5 = table_506b9d[var_00499d02_8];
printf("%d\r", var_00499d02_8);fflush(stdout);
for (var_005fa23c_7 = 0; var_005fa23c_7 < 0x100; var_005fa23c_7++) {
var_00573283_8 = table_58cc1c[var_005fa23c_7];
var_0058c52d_9 = table_53fc6a[var_005fa23c_7];
var_00459204_8 = table_58af6b[var_005fa23c_7];
var_005cef77_8 = table_4cf9b8[var_005fa23c_7];
for (var_0044ae8b_3 = 0; var_0044ae8b_3 < 0x100; var_0044ae8b_3++) {
var_0058793a_4 = table_597959[var_0044ae8b_3];
var_005a6a38_8 = table_4897cb[var_0044ae8b_3];
var_00450306_4 = table_5befb4[var_0044ae8b_3];
var_00617016_8 = table_583e25[var_0044ae8b_3];
for (var_00490ab1_5 = 0; var_00490ab1_5 < 0x100; var_00490ab1_5++) {
var_005b33e0_5 = table_4644b5[var_00490ab1_5];
var_004a29f0_5 = table_4ac845[var_00490ab1_5];
var_0058d156_3 = table_42f91f[var_00490ab1_5];
var_004b4c8c_11 = table_55ff52[var_00490ab1_5];
var_005bef50_9 = table_50c7b8[(var_00470f07_8 << 8) + var_00459204_8];
var_005ec1a8_8 = table_50c7b8[(var_00459204_9 << 8) + var_0058c52d_9];
var_004bc31e_10 = table_415efe[(var_0058d156_3 << 8) + var_00450306_4];
var_00459204_10 = table_415efe[(var_004b4c8c_11 << 8) + var_005a6a38_8];
var_00617011_5 = table_415efe[(var_004a29f0_5 << 8) + var_00617016_8];
var_0059edbe_4 = table_415efe[(var_005b33e0_5 << 8) + var_0058793a_4];
var_00605846_7 = table_50c7b8[(var_0061441a_7 << 8) + var_005cef77_8];
var_005d0b28_11 = table_50c7b8[(var_0049e624_5 << 8) + var_00573283_8];
var_00459204_11 = table_4ef23e[(var_005ec1a8_8 << 8) + var_00459204_10];
var_004a1a09_10 = table_4ef23e[(var_005bef50_9 << 8) + var_0059edbe_4];
var_00558f25_10 = table_4ef23e[(var_005d0b28_11 << 8) + var_004bc31e_10];
var_0047a26b_7 = table_4ef23e[(var_00605846_7 << 8) + var_00617011_5];
if(1 && var_00401a96_8 == table_52f77d[var_00459204_11] && var_00617012_8 == table_4451b7[var_00459204_11] && var_0061701b_6 == table_487994[var_00459204_11] && var_0058850e_6 == table_5ef150[var_00459204_11] && var_005a6a38_9 == table_4915b9[var_004a1a09_10] && var_0061701c_10 == table_5ce505[var_004a1a09_10] && var_004aff6d_8 == table_4af055[var_004a1a09_10] && var_005e2ecc_7 == table_584f6f[var_00558f25_10] && var_0043512c_9 == table_4a51b1[var_004a1a09_10] && var_00617010_6 == table_4aebeb[var_0047a26b_7] && var_0061701f_6 == table_602ced[var_00558f25_10] && var_005a379c_5 == table_432d08[var_00558f25_10] && var_00605846_8 == table_60e32a[var_00558f25_10] && var_004680c0_6 == table_51e704[var_0047a26b_7] && var_005c0615_7 == table_57c6b8[var_0047a26b_7] && var_0047a26b_8 == table_4133d1[var_0047a26b_7] ) {
printf("%d %d %d %d\n", var_00499d02_8, var_005fa23c_7, var_0044ae8b_3, var_00490ab1_5 );
fflush(stdout);
goto L_112;}}}}}
L_112:
for (var_00617015_6 = 0; var_00617015_6 < 0x100; var_00617015_6++) {
var_004466ca_3 = table_56746b[var_00617015_6];
var_004a5548_5 = table_5dd256[var_00617015_6];
var_004a29f0_4 = table_4acd42[var_00617015_6];
var_00470f07_7 = table_5b4bdf[var_00617015_6];
printf("%d\r", var_00617015_6);fflush(stdout);
for (var_005fa23c_6 = 0; var_005fa23c_6 < 0x100; var_005fa23c_6++) {
var_005b33e0_4 = table_45c770[var_005fa23c_6];
var_004aff6d_7 = table_4a4b3e[var_005fa23c_6];
var_004a0be5_8 = table_432ece[var_005fa23c_6];
var_005c0615_6 = table_58f67a[var_005fa23c_6];
for (var_0056b399_3 = 0; var_0056b399_3 < 0x100; var_0056b399_3++) {
var_00617010_4 = table_5deaef[var_0056b399_3];
var_0061701c_6 = table_60ad23[var_0056b399_3];
var_00617017_7 = table_575bfd[var_0056b399_3];
var_0054a655_5 = table_44453c[var_0056b399_3];
for (var_004cfdb8_4 = 0; var_004cfdb8_4 < 0x100; var_004cfdb8_4++) {
var_004a1a09_9 = table_48b93e[var_004cfdb8_4];
var_005f5d05_6 = table_5c86cf[var_004cfdb8_4];
var_0061701a_3 = table_5d7c8f[var_004cfdb8_4];
var_004dde6b_5 = table_532754[var_004cfdb8_4];
var_00520453_7 = table_415efe[(var_005f5d05_6 << 8) + var_0061701c_6];
var_0061701d_6 = table_415efe[(var_004a1a09_9 << 8) + var_0054a655_5];
var_00617019_4 = table_415efe[(var_004dde6b_5 << 8) + var_00617017_7];
var_00617012_6 = table_50c7b8[(var_004aff6d_7 << 8) + var_004466ca_3];
var_0048da35_9 = table_50c7b8[(var_004a0be5_8 << 8) + var_004a29f0_4];
var_005c5821_8 = table_50c7b8[(var_005c0615_6 << 8) + var_00470f07_7];
var_00415c97_7 = table_415efe[(var_0061701a_3 << 8) + var_00617010_4];
var_005b6f7a_5 = table_50c7b8[(var_005b33e0_4 << 8) + var_004a5548_5];
var_005f5d05_7 = table_4ef23e[(var_00617012_6 << 8) + var_00617019_4];
var_0044ae8b_3 = table_4ef23e[(var_005c5821_8 << 8) + var_00415c97_7];
var_005c191a_8 = table_4ef23e[(var_0048da35_9 << 8) + var_0061701d_6];
var_0043512c_8 = table_4ef23e[(var_005b6f7a_5 << 8) + var_00520453_7];
if(1 && var_004cff85_8 == table_55da07[var_005f5d05_7] && var_004386bf_5 == table_40b6eb[var_005f5d05_7] && var_0058793a_4 == table_597959[var_0044ae8b_3] && var_005a6a38_8 == table_4897cb[var_0044ae8b_3] && var_00450306_4 == table_5befb4[var_0044ae8b_3] && var_00617013_6 == table_5ce105[var_005f5d05_7] && var_00617016_8 == table_583e25[var_0044ae8b_3] && var_0054804b_6 == table_5388b7[var_005f5d05_7] && var_005a2f04_8 == table_451a46[var_005c191a_8] && var_005c522f_6 == table_5d371c[var_0043512c_8] && var_00566369_6 == table_493f83[var_005c191a_8] && var_005e2ecc_6 == table_4e78f1[var_0043512c_8] && var_0061701d_7 == table_41512b[var_0043512c_8] && var_004b4c8c_12 == table_5eed05[var_005c191a_8] && var_004e47e2_9 == table_404a9a[var_005c191a_8] && var_0054804b_7 == table_47129c[var_0043512c_8] ) {
printf("%d %d %d %d\n", var_00617015_6, var_005fa23c_6, var_0056b399_3, var_004cfdb8_4 );
fflush(stdout);
goto L_108;}}}}}
L_108:
for (var_005cef77_7 = 0; var_005cef77_7 < 0x100; var_005cef77_7++) {
var_005d1751_8 = table_42e929[var_005cef77_7];
var_004386bf_4 = table_49dcae[var_005cef77_7];
var_00605846_6 = table_563339[var_005cef77_7];
var_005d1751_9 = table_5520e4[var_005cef77_7];
printf("%d\r", var_005cef77_7);fflush(stdout);
for (var_00505d67_5 = 0; var_00505d67_5 < 0x100; var_00505d67_5++) {
var_0055985e_9 = table_408530[var_00505d67_5];
var_00490ab1_4 = table_536692[var_00505d67_5];
var_005ec1a8_7 = table_462a6a[var_00505d67_5];
var_0047a26b_6 = table_56066b[var_00505d67_5];
for (var_0045b76e_9 = 0; var_0045b76e_9 < 0x100; var_0045b76e_9++) {
var_004680c0_4 = table_55300b[var_0045b76e_9];
var_0053e4ac_4 = table_4d8dde[var_0045b76e_9];
var_005bef50_8 = table_5736dc[var_0045b76e_9];
var_0059edbe_3 = table_4cad58[var_0045b76e_9];
for (var_005b46f9_3 = 0; var_005b46f9_3 < 0x100; var_005b46f9_3++) {
var_0055985e_7 = table_52bcaf[var_005b46f9_3];
var_005a379c_4 = table_4bb307[var_005b46f9_3];
var_0043512c_6 = table_451b46[var_005b46f9_3];
var_00499d02_7 = table_45baa9[var_005b46f9_3];
var_0048da35_8 = table_415efe[(var_00499d02_7 << 8) + var_0053e4ac_4];
var_0056b399_4 = table_415efe[(var_0055985e_7 << 8) + var_0059edbe_3];
var_0061701b_5 = table_415efe[(var_0043512c_6 << 8) + var_005bef50_8];
var_005d0b28_9 = table_415efe[(var_005a379c_4 << 8) + var_004680c0_4];
var_00576040_6 = table_50c7b8[(var_005d1751_8 << 8) + var_0047a26b_6];
var_0061701e_5 = table_50c7b8[(var_004386bf_4 << 8) + var_00490ab1_4];
var_004746a7_9 = table_50c7b8[(var_00605846_6 << 8) + var_005ec1a8_7];
var_00617012_7 = table_50c7b8[(var_005d1751_9 << 8) + var_0055985e_9];
var_00617019_5 = table_4ef23e[(var_0061701e_5 << 8) + var_0048da35_8];
var_00499d02_8 = table_4ef23e[(var_00576040_6 << 8) + var_0056b399_4];
var_00590a90_8 = table_4ef23e[(var_00617012_7 << 8) + var_005d0b28_9];
var_00574341_8 = table_4ef23e[(var_004746a7_9 << 8) + var_0061701b_5];
if(1 && var_005b9ae3_13 == table_57dd21[var_00617019_5] && var_005c99d1_3 == table_4b5286[var_00617019_5] && var_005fe8c0_6 == table_49eff5[var_00617019_5] && var_00470f07_8 == table_56fed7[var_00499d02_8] && var_0061441a_7 == table_401c80[var_00499d02_8] && var_00459204_9 == table_5449ad[var_00499d02_8] && var_0054fa8f_7 == table_562ccc[var_00617019_5] && var_004109d6_3 == table_48e003[var_00590a90_8] && var_00470f07_9 == table_55fda6[var_00574341_8] && var_00571cf5_5 == table_4c6b9a[var_00574341_8] && var_0048c955_7 == table_43b5f1[var_00590a90_8] && var_00558f25_9 == table_5d5273[var_00574341_8] && var_0049e624_5 == table_506b9d[var_00499d02_8] && var_004a5548_7 == table_575775[var_00590a90_8] && var_005d0b28_10 == table_4a67c8[var_00590a90_8] && var_0061441a_8 == table_58beca[var_00574341_8] ) {
printf("%d %d %d %d\n", var_005cef77_7, var_00505d67_5, var_0045b76e_9, var_005b46f9_3 );
fflush(stdout);
goto L_104;}}}}}
L_104:
for (var_005c191a_6 = 0; var_005c191a_6 < 0x100; var_005c191a_6++) {
var_0054804b_5 = table_47e845[var_005c191a_6];
var_005a2f04_5 = table_54a7e2[var_005c191a_6];
var_005aa8a7_4 = table_474cc1[var_005c191a_6];
var_0049e624_4 = table_4ae413[var_005c191a_6];
printf("%d\r", var_005c191a_6);fflush(stdout);
for (var_004c7134_8 = 0; var_004c7134_8 < 0x100; var_004c7134_8++) {
var_004aa6c1_5 = table_4072d4[var_004c7134_8];
var_005b46f9_4 = table_48daa1[var_004c7134_8];
var_004b4c8c_10 = table_540038[var_004c7134_8];
var_0053e4ac_5 = table_5cc7ef[var_004c7134_8];
for (var_0047a26b_5 = 0; var_0047a26b_5 < 0x100; var_0047a26b_5++) {
var_005a316b_6 = table_4edb4b[var_0047a26b_5];
var_0045b76e_8 = table_47ee61[var_0047a26b_5];
var_00490ab1_3 = table_403870[var_0047a26b_5];
var_00415c97_6 = table_509804[var_0047a26b_5];
for (var_004ae266_7 = 0; var_004ae266_7 < 0x100; var_004ae266_7++) {
var_004b4c8c_9 = table_4a4174[var_004ae266_7];
var_0060197f_7 = table_544f66[var_004ae266_7];
var_00558f25_6 = table_51e414[var_004ae266_7];
var_00617015_5 = table_5ff9f3[var_004ae266_7];
var_0040da95_9 = table_50c7b8[(var_004b4c8c_9 << 8) + var_00490ab1_3];
var_00404f8c_3 = table_50c7b8[(var_0060197f_7 << 8) + var_0045b76e_8];
var_00566369_5 = table_50c7b8[(var_00558f25_6 << 8) + var_005a316b_6];
var_0060197f_8 = table_50c7b8[(var_00617015_5 << 8) + var_00415c97_6];
var_005c191a_7 = table_415efe[(var_0049e624_4 << 8) + var_004aa6c1_5];
var_00493124_3 = table_415efe[(var_005aa8a7_4 << 8) + var_005b46f9_4];
var_0061701c_7 = table_415efe[(var_005a2f04_5 << 8) + var_004b4c8c_10];
var_00520124_5 = table_415efe[(var_0054804b_5 << 8) + var_0053e4ac_5];
var_004dde6b_6 = table_4ef23e[(var_00566369_5 << 8) + var_0061701c_7];
var_004e47e2_7 = table_4ef23e[(var_0060197f_8 << 8) + var_00493124_3];
var_00617015_7 = table_4ef23e[(var_0040da95_9 << 8) + var_005c191a_7];
var_00490ab1_5 = table_4ef23e[(var_00404f8c_3 << 8) + var_00520124_5];
if(1 && var_005ed9a2_3 == table_40608c[var_004dde6b_6] && var_005a69a8_3 == table_42f6e4[var_004e47e2_7] && var_0044989e_9 == table_534279[var_004e47e2_7] && var_00590a90_7 == table_576681[var_004dde6b_6] && var_0043512c_7 == table_5a19a2[var_004dde6b_6] && var_0043df43_7 == table_4c876b[var_004e47e2_7] && var_0043ace2_6 == table_4ddf61[var_004e47e2_7] && var_0061701e_6 == table_5de68f[var_00617015_7] && var_004ae266_8 == table_5376ff[var_004dde6b_6] && var_0060197f_9 == table_59c8df[var_00617015_7] && var_005b33e0_5 == table_4644b5[var_00490ab1_5] && var_004a29f0_5 == table_4ac845[var_00490ab1_5] && var_0058d156_3 == table_42f91f[var_00490ab1_5] && var_00617011_4 == table_5fa43c[var_00617015_7] && var_004b4c8c_11 == table_55ff52[var_00490ab1_5] && var_00490ab1_6 == table_606c68[var_00617015_7] ) {
printf("%d %d %d %d\n", var_005c191a_6, var_004c7134_8, var_0047a26b_5, var_004ae266_7 );
fflush(stdout);
goto L_100;}}}}}
L_100:
for (var_00617016_7 = 0; var_00617016_7 < 0x100; var_00617016_7++) {
var_0046029a_8 = table_5f80bc[var_00617016_7];
var_004746a7_8 = table_550db7[var_00617016_7];
var_0055985e_8 = table_412fd1[var_00617016_7];
var_005b9ae3_12 = table_5ee8f9[var_00617016_7];
printf("%d\r", var_00617016_7);fflush(stdout);
for (var_004a1a09_7 = 0; var_004a1a09_7 < 0x100; var_004a1a09_7++) {
var_00590a90_6 = table_5c333b[var_004a1a09_7];
var_00470f07_6 = table_428681[var_004a1a09_7];
var_004466ca_2 = table_591dd0[var_004a1a09_7];
var_0049fe14_5 = table_406b98[var_004a1a09_7];
for (var_004a0be5_7 = 0; var_004a0be5_7 < 0x100; var_004a0be5_7++) {
var_005b6f7a_3 = table_447776[var_004a0be5_7];
var_005d0b28_8 = table_4aca7d[var_004a0be5_7];
var_005aa8a7_3 = table_46f733[var_004a0be5_7];
var_004e47e2_6 = table_4575bb[var_004a0be5_7];
for (var_004a5548_4 = 0; var_004a5548_4 < 0x100; var_004a5548_4++) {
var_005c5821_7 = table_53e57b[var_004a5548_4];
var_00459204_7 = table_57b697[var_004a5548_4];
var_004c7134_9 = table_571090[var_004a5548_4];
var_004cff85_7 = table_54fa90[var_004a5548_4];
var_005b6f7a_4 = table_50c7b8[(var_005c5821_7 << 8) + var_005b6f7a_3];
var_004109d6_2 = table_50c7b8[(var_004c7134_9 << 8) + var_004e47e2_6];
var_0043df43_6 = table_50c7b8[(var_00459204_7 << 8) + var_005aa8a7_3];
var_00558f25_8 = table_415efe[(var_00590a90_6 << 8) + var_004746a7_8];
var_0061441a_6 = table_415efe[(var_004466ca_2 << 8) + var_0055985e_8];
var_004c7134_10 = table_50c7b8[(var_004cff85_7 << 8) + var_005d0b28_8];
var_00401a96_7 = table_415efe[(var_0049fe14_5 << 8) + var_005b9ae3_12];
var_005a2f04_6 = table_415efe[(var_00470f07_6 << 8) + var_0046029a_8];
var_004bc31e_8 = table_4ef23e[(var_005b6f7a_4 << 8) + var_00558f25_8];
var_005fa23c_7 = table_4ef23e[(var_004109d6_2 << 8) + var_0061441a_6];
var_004bc31e_9 = table_4ef23e[(var_004c7134_10 << 8) + var_00401a96_7];
var_005a2f04_7 = table_4ef23e[(var_0043df43_6 << 8) + var_005a2f04_6];
if(1 && var_005bfb4c_6 == table_4bc3ce[var_004bc31e_8] && var_00573283_8 == table_58cc1c[var_005fa23c_7] && var_0045436d_4 == table_44a971[var_004bc31e_8] && var_0058c52d_9 == table_53fc6a[var_005fa23c_7] && var_00591280_6 == table_4cffc5[var_004bc31e_8] && var_005a1c6a_6 == table_46f3ba[var_004bc31e_8] && var_005f7f82_4 == table_4d2fcb[var_004bc31e_9] && var_0049fe14_6 == table_56efe7[var_004bc31e_9] && var_00459204_8 == table_58af6b[var_005fa23c_7] && var_005fd9c0_6 == table_5eaab6[var_004bc31e_9] && var_0061701c_8 == table_56ada8[var_005a2f04_7] && var_0057be49_5 == table_607547[var_005a2f04_7] && var_004466ca_4 == table_4504b1[var_004bc31e_9] && var_005cef77_8 == table_4cf9b8[var_005fa23c_7] && var_00617014_4 == table_4087f7[var_005a2f04_7] && var_0049d7f9_4 == table_42b2ef[var_005a2f04_7] ) {
printf("%d %d %d %d\n", var_00617016_7, var_004a1a09_7, var_004a0be5_7, var_004a5548_4 );
fflush(stdout);
goto L_96;}}}}}
L_96:
for (var_00617015_4 = 0; var_00617015_4 < 0x100; var_00617015_4++) {
var_00401a96_5 = table_4ce14d[var_00617015_4];
var_005c99d1_2 = table_4d348e[var_00617015_4];
var_005fd9c0_5 = table_45e969[var_00617015_4];
var_0054804b_4 = table_456329[var_00617015_4];
printf("%d\r", var_00617015_4);fflush(stdout);
for (var_004b4c8c_5 = 0; var_004b4c8c_5 < 0x100; var_004b4c8c_5++) {
var_0044ae8b_2 = table_57869a[var_004b4c8c_5];
var_00571cf5_4 = table_5d05a8[var_004b4c8c_5];
var_0058793a_3 = table_615efa[var_004b4c8c_5];
var_004cff85_6 = table_5e3418[var_004b4c8c_5];
for (var_005fd9c0_4 = 0; var_005fd9c0_4 < 0x100; var_005fd9c0_4++) {
var_004bc31e_7 = table_5512c2[var_005fd9c0_4];
var_005e2ecc_5 = table_58048e[var_005fd9c0_4];
var_004680c0_3 = table_51d10b[var_005fd9c0_4];
var_00591280_5 = table_5c25a0[var_005fd9c0_4];
for (var_0061701a_2 = 0; var_0061701a_2 < 0x100; var_0061701a_2++) {
var_0048da35_7 = table_4e1d3c[var_0061701a_2];
var_005c5821_6 = table_61171d[var_0061701a_2];
var_00576040_5 = table_49af5c[var_0061701a_2];
var_005d1751_7 = table_5b988f[var_0061701a_2];
var_00617013_5 = table_415efe[(var_00401a96_5 << 8) + var_004cff85_6];
var_00450306_3 = table_50c7b8[(var_0048da35_7 << 8) + var_004680c0_3];
var_004386bf_3 = table_50c7b8[(var_005c5821_6 << 8) + var_00591280_5];
var_005a2f04_4 = table_415efe[(var_005fd9c0_5 << 8) + var_0058793a_3];
var_0054fa8f_6 = table_50c7b8[(var_00576040_5 << 8) + var_004bc31e_7];
var_00558f25_7 = table_415efe[(var_005c99d1_2 << 8) + var_0044ae8b_2];
var_0058850e_5 = table_415efe[(var_0054804b_4 << 8) + var_00571cf5_4];
var_00401a96_6 = table_50c7b8[(var_005d1751_7 << 8) + var_005e2ecc_5];
var_00617016_7 = table_4ef23e[(var_0054fa8f_6 << 8) + var_00558f25_7];
var_005c191a_6 = table_4ef23e[(var_00401a96_6 << 8) + var_00617013_5];
var_00617015_6 = table_4ef23e[(var_00450306_3 << 8) + var_005a2f04_4];
var_005cef77_7 = table_4ef23e[(var_004386bf_3 << 8) + var_0058850e_5];
if(1 && var_0046029a_8 == table_5f80bc[var_00617016_7] && var_004746a7_8 == table_550db7[var_00617016_7] && var_0055985e_8 == table_412fd1[var_00617016_7] && var_005b9ae3_12 == table_5ee8f9[var_00617016_7] && var_0054804b_5 == table_47e845[var_005c191a_6] && var_005a2f04_5 == table_54a7e2[var_005c191a_6] && var_005aa8a7_4 == table_474cc1[var_005c191a_6] && var_0049e624_4 == table_4ae413[var_005c191a_6] && var_005d1751_8 == table_42e929[var_005cef77_7] && var_004466ca_3 == table_56746b[var_00617015_6] && var_004386bf_4 == table_49dcae[var_005cef77_7] && var_004a5548_5 == table_5dd256[var_00617015_6] && var_00605846_6 == table_563339[var_005cef77_7] && var_004a29f0_4 == table_4acd42[var_00617015_6] && var_005d1751_9 == table_5520e4[var_005cef77_7] && var_00470f07_7 == table_5b4bdf[var_00617015_6] ) {
printf("%d %d %d %d\n", var_00617015_4, var_004b4c8c_5, var_005fd9c0_4, var_0061701a_2 );
fflush(stdout);
goto L_92;}}}}}
L_92:
for (var_00617016_6 = 0; var_00617016_6 < 0x100; var_00617016_6++) {
var_00617017_6 = table_44c23e[var_00617016_6];
var_0046029a_7 = table_48add9[var_00617016_6];
var_00617011_3 = table_4b4d42[var_00617016_6];
var_004a1a09_8 = table_5d5c65[var_00617016_6];
printf("%d\r", var_00617016_6);fflush(stdout);
for (var_004b4c8c_8 = 0; var_004b4c8c_8 < 0x100; var_004b4c8c_8++) {
var_00493124_2 = table_461eef[var_004b4c8c_8];
var_00617013_4 = table_4aa14a[var_004b4c8c_8];
var_005f5d05_5 = table_43e179[var_004b4c8c_8];
var_005b9ae3_11 = table_45a1dd[var_004b4c8c_8];
for (var_004a1a09_5 = 0; var_004a1a09_5 < 0x100; var_004a1a09_5++) {
var_00401a96_3 = table_4e5b97[var_004a1a09_5];
var_004386bf_2 = table_5ae24f[var_004a1a09_5];
var_00558f25_4 = table_4b19f5[var_004a1a09_5];
var_0061701d_5 = table_4967de[var_004a1a09_5];
for (var_0045436d_3 = 0; var_0045436d_3 < 0x100; var_0045436d_3++) {
var_00470f07_4 = table_57074d[var_0045436d_3];
var_005aa8a7_2 = table_50b219[var_0045436d_3];
var_00617012_5 = table_5ac690[var_0045436d_3];
var_00499d02_6 = table_58a368[var_0045436d_3];
var_0058c52d_8 = table_415efe[(var_00470f07_4 << 8) + var_00401a96_3];
var_004a5548_3 = table_415efe[(var_005aa8a7_2 << 8) + var_00558f25_4];
var_005ec1a8_6 = table_415efe[(var_00499d02_6 << 8) + var_004386bf_2];
var_0060197f_6 = table_50c7b8[(var_00617017_6 << 8) + var_005f5d05_5];
var_00574341_7 = table_415efe[(var_00617012_5 << 8) + var_0061701d_5];
var_005a69a8_2 = table_50c7b8[(var_0046029a_7 << 8) + var_00617013_4];
var_0043a427_4 = table_50c7b8[(var_004a1a09_8 << 8) + var_00493124_2];
var_0044989e_8 = table_50c7b8[(var_00617011_3 << 8) + var_005b9ae3_11];
var_004c7134_8 = table_4ef23e[(var_0060197f_6 << 8) + var_0058c52d_8];
var_004a5548_4 = table_4ef23e[(var_005a69a8_2 << 8) + var_004a5548_3];
var_004cfdb8_4 = table_4ef23e[(var_0043a427_4 << 8) + var_00574341_7];
var_00505d67_5 = table_4ef23e[(var_0044989e_8 << 8) + var_005ec1a8_6];
if(1 && var_004aa6c1_5 == table_4072d4[var_004c7134_8] && var_005b46f9_4 == table_48daa1[var_004c7134_8] && var_004b4c8c_10 == table_540038[var_004c7134_8] && var_005c5821_7 == table_53e57b[var_004a5548_4] && var_004a1a09_9 == table_48b93e[var_004cfdb8_4] && var_005f5d05_6 == table_5c86cf[var_004cfdb8_4] && var_00459204_7 == table_57b697[var_004a5548_4] && var_0053e4ac_5 == table_5cc7ef[var_004c7134_8] && var_004c7134_9 == table_571090[var_004a5548_4] && var_004cff85_7 == table_54fa90[var_004a5548_4] && var_0055985e_9 == table_408530[var_00505d67_5] && var_00490ab1_4 == table_536692[var_00505d67_5] && var_0061701a_3 == table_5d7c8f[var_004cfdb8_4] && var_004dde6b_5 == table_532754[var_004cfdb8_4] && var_005ec1a8_7 == table_462a6a[var_00505d67_5] && var_0047a26b_6 == table_56066b[var_00505d67_5] ) {
printf("%d %d %d %d\n", var_00617016_6, var_004b4c8c_8, var_004a1a09_5, var_0045436d_3 );
fflush(stdout);
goto L_88;}}}}}
L_88:
for (var_00617014_3 = 0; var_00617014_3 < 0x100; var_00617014_3++) {
var_00459204_5 = table_4022e4[var_00617014_3];
var_00574341_5 = table_4d32c1[var_00617014_3];
var_005a6a38_7 = table_40faf9[var_00617014_3];
var_005c522f_5 = table_5c8bd0[var_00617014_3];
printf("%d\r", var_00617014_3);fflush(stdout);
for (var_005a379c_2 = 0; var_005a379c_2 < 0x100; var_005a379c_2++) {
var_0048da35_6 = table_562a1b[var_005a379c_2];
var_0044989e_6 = table_466caf[var_005a379c_2];
var_005e2ecc_4 = table_59234c[var_005a379c_2];
var_005a379c_3 = table_4d06c9[var_005a379c_2];
for (var_00617017_5 = 0; var_00617017_5 < 0x100; var_00617017_5++) {
var_0061701b_4 = table_4e2f62[var_00617017_5];
var_00490ab1_2 = table_526850[var_00617017_5];
var_004bc31e_6 = table_5266e5[var_00617017_5];
var_005bfb4c_4 = table_48f7d0[var_00617017_5];
for (var_0058d156_2 = 0; var_0058d156_2 < 0x100; var_0058d156_2++) {
var_0058850e_4 = table_57e0f3[var_0058d156_2];
var_005f5094_3 = table_506d45[var_0058d156_2];
var_005bef50_7 = table_5be44a[var_0058d156_2];
var_005b9ae3_10 = table_5ddd0f[var_0058d156_2];
var_00617019_3 = table_50c7b8[(var_00574341_5 << 8) + var_005e2ecc_4];
var_00459204_6 = table_50c7b8[(var_00459204_5 << 8) + var_0048da35_6];
var_00401a96_4 = table_415efe[(var_005f5094_3 << 8) + var_00490ab1_2];
var_0054fa8f_5 = table_415efe[(var_005bef50_7 << 8) + var_004bc31e_6];
var_005a316b_5 = table_50c7b8[(var_005a6a38_7 << 8) + var_0044989e_6];
var_004a1a09_6 = table_50c7b8[(var_005c522f_5 << 8) + var_005a379c_3];
var_0049fe14_4 = table_415efe[(var_0058850e_4 << 8) + var_0061701b_4];
var_005bfb4c_5 = table_415efe[(var_005b9ae3_10 << 8) + var_005bfb4c_4];
var_0047a26b_5 = table_4ef23e[(var_005a316b_5 << 8) + var_0054fa8f_5];
var_005fa23c_6 = table_4ef23e[(var_004a1a09_6 << 8) + var_00401a96_4];
var_004a1a09_7 = table_4ef23e[(var_00459204_6 << 8) + var_0049fe14_4];
var_0045b76e_9 = table_4ef23e[(var_00617019_3 << 8) + var_005bfb4c_5];
if(1 && var_005a316b_6 == table_4edb4b[var_0047a26b_5] && var_0045b76e_8 == table_47ee61[var_0047a26b_5] && var_00490ab1_3 == table_403870[var_0047a26b_5] && var_00415c97_6 == table_509804[var_0047a26b_5] && var_005b33e0_4 == table_45c770[var_005fa23c_6] && var_004aff6d_7 == table_4a4b3e[var_005fa23c_6] && var_00590a90_6 == table_5c333b[var_004a1a09_7] && var_00470f07_6 == table_428681[var_004a1a09_7] && var_004466ca_2 == table_591dd0[var_004a1a09_7] && var_0049fe14_5 == table_406b98[var_004a1a09_7] && var_004a0be5_8 == table_432ece[var_005fa23c_6] && var_004680c0_4 == table_55300b[var_0045b76e_9] && var_0053e4ac_4 == table_4d8dde[var_0045b76e_9] && var_005bef50_8 == table_5736dc[var_0045b76e_9] && var_0059edbe_3 == table_4cad58[var_0045b76e_9] && var_005c0615_6 == table_58f67a[var_005fa23c_6] ) {
printf("%d %d %d %d\n", var_00617014_3, var_005a379c_2, var_00617017_5, var_0058d156_2 );
fflush(stdout);
goto L_84;}}}}}
L_84:
for (var_00573283_7 = 0; var_00573283_7 < 0x100; var_00573283_7++) {
var_0060197f_5 = table_4b8d39[var_00573283_7];
var_005c0615_5 = table_4d1070[var_00573283_7];
var_004ae266_6 = table_57b1f7[var_00573283_7];
var_00574341_6 = table_4e524b[var_00573283_7];
printf("%d\r", var_00573283_7);fflush(stdout);
for (var_004b4c8c_7 = 0; var_004b4c8c_7 < 0x100; var_004b4c8c_7++) {
var_0049fe14_3 = table_4b73da[var_004b4c8c_7];
var_0043a427_3 = table_5a6e0c[var_004b4c8c_7];
var_005ec1a8_5 = table_585d47[var_004b4c8c_7];
var_00415c97_4 = table_4b985b[var_004b4c8c_7];
for (var_00617013_3 = 0; var_00617013_3 < 0x100; var_00617013_3++) {
var_005a1c6a_5 = table_411850[var_00617013_3];
var_0048c955_6 = table_586378[var_00617013_3];
var_004cfdb8_3 = table_49763e[var_00617013_3];
var_004aff6d_6 = table_40898f[var_00617013_3];
for (var_0045b76e_7 = 0; var_0045b76e_7 < 0x100; var_0045b76e_7++) {
var_005d1751_6 = table_42e454[var_0045b76e_7];
var_004dde6b_4 = table_50082b[var_0045b76e_7];
var_0040da95_7 = table_468a34[var_0045b76e_7];
var_005d0b28_7 = table_45a3d0[var_0045b76e_7];
var_004a0be5_6 = table_50c7b8[(var_005d0b28_7 << 8) + var_0048c955_6];
var_0046029a_6 = table_415efe[(var_0060197f_5 << 8) + var_00415c97_4];
var_00617018_7 = table_50c7b8[(var_005d1751_6 << 8) + var_005a1c6a_5];
var_004a29f0_3 = table_50c7b8[(var_0040da95_7 << 8) + var_004aff6d_6];
var_004c7134_7 = table_415efe[(var_00574341_6 << 8) + var_0043a427_3];
var_0040da95_8 = table_415efe[(var_004ae266_6 << 8) + var_005ec1a8_5];
var_00558f25_5 = table_50c7b8[(var_004dde6b_4 << 8) + var_004cfdb8_3];
var_00415c97_5 = table_415efe[(var_005c0615_5 << 8) + var_0049fe14_3];
var_004a0be5_7 = table_4ef23e[(var_004a0be5_6 << 8) + var_0046029a_6];
var_0056b399_3 = table_4ef23e[(var_004a29f0_3 << 8) + var_00415c97_5];
var_005b46f9_3 = table_4ef23e[(var_00617018_7 << 8) + var_004c7134_7];
var_004ae266_7 = table_4ef23e[(var_00558f25_5 << 8) + var_0040da95_8];
if(1 && var_005b6f7a_3 == table_447776[var_004a0be5_7] && var_005d0b28_8 == table_4aca7d[var_004a0be5_7] && var_005aa8a7_3 == table_46f733[var_004a0be5_7] && var_0055985e_7 == table_52bcaf[var_005b46f9_3] && var_005a379c_4 == table_4bb307[var_005b46f9_3] && var_0043512c_6 == table_451b46[var_005b46f9_3] && var_00617010_4 == table_5deaef[var_0056b399_3] && var_0061701c_6 == table_60ad23[var_0056b399_3] && var_00617017_7 == table_575bfd[var_0056b399_3] && var_0054a655_5 == table_44453c[var_0056b399_3] && var_00499d02_7 == table_45baa9[var_005b46f9_3] && var_004e47e2_6 == table_4575bb[var_004a0be5_7] && var_004b4c8c_9 == table_4a4174[var_004ae266_7] && var_0060197f_7 == table_544f66[var_004ae266_7] && var_00558f25_6 == table_51e414[var_004ae266_7] && var_00617015_5 == table_5ff9f3[var_004ae266_7] ) {
printf("%d %d %d %d\n", var_00573283_7, var_004b4c8c_7, var_00617013_3, var_0045b76e_7 );
fflush(stdout);
goto L_80;}}}}}
L_80:
for (var_00617018_6 = 0; var_00617018_6 < 0x100; var_00617018_6++) {
var_004bc31e_5 = table_4bdef0[var_00617018_6];
var_0057be49_4 = table_4e7093[var_00617018_6];
var_004b4c8c_6 = table_4457ff[var_00617018_6];
var_005cef77_6 = table_42bb10[var_00617018_6];
printf("%d\r", var_00617018_6);fflush(stdout);
for (var_0058c52d_6 = 0; var_0058c52d_6 < 0x100; var_0058c52d_6++) {
var_005f5d05_4 = table_4b0474[var_0058c52d_6];
var_00573283_5 = table_455281[var_0058c52d_6];
var_005c522f_4 = table_4cdf34[var_0058c52d_6];
var_0054804b_3 = table_4e1386[var_0058c52d_6];
for (var_0061701d_3 = 0; var_0061701d_3 < 0x100; var_0061701d_3++) {
var_005a316b_4 = table_4140de[var_0061701d_3];
var_004aff6d_5 = table_46fe7a[var_0061701d_3];
var_004a1a09_4 = table_47b8d1[var_0061701d_3];
var_0060197f_4 = table_47c9a1[var_0061701d_3];
for (var_005f5094_2 = 0; var_005f5094_2 < 0x100; var_005f5094_2++) {
var_00617010_3 = table_43465c[var_005f5094_2];
var_00617014_2 = table_48e52a[var_005f5094_2];
var_0061701a_1 = table_55dff0[var_005f5094_2];
var_0061701c_5 = table_43a044[var_005f5094_2];
var_0043512c_5 = table_415efe[(var_00617010_3 << 8) + var_005a316b_4];
var_0040da95_6 = table_415efe[(var_00617014_2 << 8) + var_004a1a09_4];
var_00617015_3 = table_50c7b8[(var_004bc31e_5 << 8) + var_00573283_5];
var_005f7f82_3 = table_415efe[(var_0061701c_5 << 8) + var_004aff6d_5];
var_005fe8c0_5 = table_415efe[(var_0061701a_1 << 8) + var_0060197f_4];
var_005d0b28_6 = table_50c7b8[(var_004b4c8c_6 << 8) + var_0054804b_3];
var_00576040_4 = table_50c7b8[(var_0057be49_4 << 8) + var_005c522f_4];
var_00617016_5 = table_50c7b8[(var_005cef77_6 << 8) + var_005f5d05_4];
var_0058d156_2 = table_4ef23e[(var_00617015_3 << 8) + var_005fe8c0_5];
var_004b4c8c_7 = table_4ef23e[(var_005d0b28_6 << 8) + var_0040da95_6];
var_00617016_6 = table_4ef23e[(var_00617016_5 << 8) + var_005f7f82_3];
var_005fd9c0_4 = table_4ef23e[(var_00576040_4 << 8) + var_0043512c_5];
if(1 && var_0049fe14_3 == table_4b73da[var_004b4c8c_7] && var_0043a427_3 == table_5a6e0c[var_004b4c8c_7] && var_0058850e_4 == table_57e0f3[var_0058d156_2] && var_005ec1a8_5 == table_585d47[var_004b4c8c_7] && var_005f5094_3 == table_506d45[var_0058d156_2] && var_00415c97_4 == table_4b985b[var_004b4c8c_7] && var_005bef50_7 == table_5be44a[var_0058d156_2] && var_005b9ae3_10 == table_5ddd0f[var_0058d156_2] && var_00617017_6 == table_44c23e[var_00617016_6] && var_0046029a_7 == table_48add9[var_00617016_6] && var_004bc31e_7 == table_5512c2[var_005fd9c0_4] && var_005e2ecc_5 == table_58048e[var_005fd9c0_4] && var_004680c0_3 == table_51d10b[var_005fd9c0_4] && var_00617011_3 == table_4b4d42[var_00617016_6] && var_00591280_5 == table_5c25a0[var_005fd9c0_4] && var_004a1a09_8 == table_5d5c65[var_00617016_6] ) {
printf("%d %d %d %d\n", var_00617018_6, var_0058c52d_6, var_0061701d_3, var_005f5094_2 );
fflush(stdout);
goto L_76;}}}}}
L_76:
for (var_004a0be5_5 = 0; var_004a0be5_5 < 0x100; var_004a0be5_5++) {
var_00605846_5 = table_44961e[var_004a0be5_5];
var_005a1c6a_4 = table_52502c[var_004a0be5_5];
var_00617011_2 = table_61373c[var_004a0be5_5];
var_0061701f_5 = table_4afa74[var_004a0be5_5];
printf("%d\r", var_004a0be5_5);fflush(stdout);
for (var_004a5548_2 = 0; var_004a5548_2 < 0x100; var_004a5548_2++) {
var_0059edbe_2 = table_445d16[var_004a5548_2];
var_00574341_3 = table_5729d8[var_004a5548_2];
var_0043512c_4 = table_5b25d2[var_004a5548_2];
var_0055985e_6 = table_5755c6[var_004a5548_2];
for (var_005c0615_4 = 0; var_005c0615_4 < 0x100; var_005c0615_4++) {
var_00499d02_5 = table_494cc6[var_005c0615_4];
var_00617017_4 = table_5e2680[var_005c0615_4];
var_0046029a_5 = table_43627d[var_005c0615_4];
var_004109d6_1 = table_590054[var_005c0615_4];
for (var_00450306_2 = 0; var_00450306_2 < 0x100; var_00450306_2++) {
var_0049d7f9_3 = table_49e8fd[var_00450306_2];
var_0040da95_4 = table_5e929c[var_00450306_2];
var_005c191a_4 = table_566c35[var_00450306_2];
var_0049e624_3 = table_53bea6[var_00450306_2];
var_005a2f04_3 = table_50c7b8[(var_0040da95_4 << 8) + var_00499d02_5];
var_004746a7_6 = table_415efe[(var_0043512c_4 << 8) + var_005a1c6a_4];
var_004e47e2_5 = table_415efe[(var_00574341_3 << 8) + var_00605846_5];
var_0058c52d_7 = table_50c7b8[(var_005c191a_4 << 8) + var_00617017_4];
var_0043ace2_5 = table_50c7b8[(var_0049e624_3 << 8) + var_0046029a_5];
var_0043df43_5 = table_50c7b8[(var_0049d7f9_3 << 8) + var_004109d6_1];
var_00470f07_5 = table_415efe[(var_0055985e_6 << 8) + var_00617011_2];
var_0044989e_7 = table_415efe[(var_0059edbe_2 << 8) + var_0061701f_5];
var_00617017_5 = table_4ef23e[(var_0058c52d_7 << 8) + var_004746a7_6];
var_0045b76e_7 = table_4ef23e[(var_0043ace2_5 << 8) + var_004e47e2_5];
var_004b4c8c_8 = table_4ef23e[(var_005a2f04_3 << 8) + var_00470f07_5];
var_00617015_4 = table_4ef23e[(var_0043df43_5 << 8) + var_0044989e_7];
if(1 && var_0061701b_4 == table_4e2f62[var_00617017_5] && var_00490ab1_2 == table_526850[var_00617017_5] && var_004bc31e_6 == table_5266e5[var_00617017_5] && var_005bfb4c_4 == table_48f7d0[var_00617017_5] && var_005d1751_6 == table_42e454[var_0045b76e_7] && var_004dde6b_4 == table_50082b[var_0045b76e_7] && var_0040da95_7 == table_468a34[var_0045b76e_7] && var_005d0b28_7 == table_45a3d0[var_0045b76e_7] && var_00493124_2 == table_461eef[var_004b4c8c_8] && var_00617013_4 == table_4aa14a[var_004b4c8c_8] && var_005f5d05_5 == table_43e179[var_004b4c8c_8] && var_00401a96_5 == table_4ce14d[var_00617015_4] && var_005b9ae3_11 == table_45a1dd[var_004b4c8c_8] && var_005c99d1_2 == table_4d348e[var_00617015_4] && var_005fd9c0_5 == table_45e969[var_00617015_4] && var_0054804b_4 == table_456329[var_00617015_4] ) {
printf("%d %d %d %d\n", var_004a0be5_5, var_004a5548_2, var_005c0615_4, var_00450306_2 );
fflush(stdout);
goto L_72;}}}}}
L_72:
for (var_0061441a_5 = 0; var_0061441a_5 < 0x100; var_0061441a_5++) {
var_00574341_4 = table_454971[var_0061441a_5];
var_0048c955_5 = table_48eea9[var_0061441a_5];
var_0053e4ac_3 = table_5e883d[var_0061441a_5];
var_00590a90_4 = table_5fd54e[var_0061441a_5];
printf("%d\r", var_0061441a_5);fflush(stdout);
for (var_0043df43_3 = 0; var_0043df43_3 < 0x100; var_0043df43_3++) {
var_005d0b28_5 = table_531e4c[var_0043df43_3];
var_005e2ecc_3 = table_456878[var_0043df43_3];
var_005a6a38_6 = table_5f9dcb[var_0043df43_3];
var_0043df43_4 = table_58a86e[var_0043df43_3];
for (var_005c99d1_1 = 0; var_005c99d1_1 < 0x100; var_005c99d1_1++) {
var_00591280_4 = table_503deb[var_005c99d1_1];
var_00566369_4 = table_5524bb[var_005c99d1_1];
var_005b46f9_2 = table_546068[var_005c99d1_1];
var_005b33e0_3 = table_5089e2[var_005c99d1_1];
for (var_00617016_4 = 0; var_00617016_4 < 0x100; var_00617016_4++) {
var_005b6f7a_2 = table_5f8715[var_00617016_4];
var_00617017_3 = table_4b6728[var_00617016_4];
var_005b9ae3_7 = table_4c2fa0[var_00617016_4];
var_004dde6b_3 = table_5bea12[var_00617016_4];
var_00617019_2 = table_415efe[(var_005b6f7a_2 << 8) + var_005b46f9_2];
var_00520124_4 = table_415efe[(var_005b9ae3_7 << 8) + var_005b33e0_3];
var_004c7134_6 = table_415efe[(var_00617017_3 << 8) + var_00591280_4];
var_0061701d_4 = table_50c7b8[(var_005e2ecc_3 << 8) + var_0048c955_5];
var_00590a90_3 = table_50c7b8[(var_005d0b28_5 << 8) + var_00574341_4];
var_00576040_3 = table_50c7b8[(var_0043df43_4 << 8) + var_0053e4ac_3];
var_0061701e_4 = table_415efe[(var_004dde6b_3 << 8) + var_00566369_4];
var_00590a90_5 = table_50c7b8[(var_005a6a38_6 << 8) + var_00590a90_4];
var_005a379c_2 = table_4ef23e[(var_00590a90_3 << 8) + var_00617019_2];
var_004a1a09_5 = table_4ef23e[(var_0061701d_4 << 8) + var_004c7134_6];
var_00573283_7 = table_4ef23e[(var_00576040_3 << 8) + var_00520124_4];
var_0061701a_2 = table_4ef23e[(var_00590a90_5 << 8) + var_0061701e_4];
if(1 && var_0048da35_6 == table_562a1b[var_005a379c_2] && var_0044989e_6 == table_466caf[var_005a379c_2] && var_005e2ecc_4 == table_59234c[var_005a379c_2] && var_00401a96_3 == table_4e5b97[var_004a1a09_5] && var_004386bf_2 == table_5ae24f[var_004a1a09_5] && var_00558f25_4 == table_4b19f5[var_004a1a09_5] && var_005a379c_3 == table_4d06c9[var_005a379c_2] && var_0060197f_5 == table_4b8d39[var_00573283_7] && var_005c0615_5 == table_4d1070[var_00573283_7] && var_004ae266_6 == table_57b1f7[var_00573283_7] && var_00574341_6 == table_4e524b[var_00573283_7] && var_0061701d_5 == table_4967de[var_004a1a09_5] && var_0048da35_7 == table_4e1d3c[var_0061701a_2] && var_005c5821_6 == table_61171d[var_0061701a_2] && var_00576040_5 == table_49af5c[var_0061701a_2] && var_005d1751_7 == table_5b988f[var_0061701a_2] ) {
printf("%d %d %d %d\n", var_0061441a_5, var_0043df43_3, var_005c99d1_1, var_00617016_4 );
fflush(stdout);
goto L_68;}}}}}
L_68:
for (var_0061701e_3 = 0; var_0061701e_3 < 0x100; var_0061701e_3++) {
var_005aa8a7_1 = table_45ce4e[var_0061701e_3];
var_005f7f82_2 = table_431f0c[var_0061701e_3];
var_005a1c6a_3 = table_4059eb[var_0061701e_3];
var_00573283_6 = table_50af89[var_0061701e_3];
printf("%d\r", var_0061701e_3);fflush(stdout);
for (var_0048da35_5 = 0; var_0048da35_5 < 0x100; var_0048da35_5++) {
var_00401a96_2 = table_4aaccc[var_0048da35_5];
var_004bc31e_4 = table_50a4e5[var_0048da35_5];
var_00505d67_4 = table_46cfb3[var_0048da35_5];
var_005b9ae3_8 = table_597442[var_0048da35_5];
for (var_0044989e_5 = 0; var_0044989e_5 < 0x100; var_0044989e_5++) {
var_004cff85_5 = table_590bf8[var_0044989e_5];
var_0058850e_3 = table_4ac243[var_0044989e_5];
var_005fa23c_5 = table_595042[var_0044989e_5];
var_0054a655_4 = table_471ae2[var_0044989e_5];
for (var_005d1751_5 = 0; var_005d1751_5 < 0x100; var_005d1751_5++) {
var_0040da95_5 = table_567088[var_005d1751_5];
var_004cfdb8_2 = table_5d03fd[var_005d1751_5];
var_00520453_6 = table_52a590[var_005d1751_5];
var_004ae266_5 = table_5d4bf9[var_005d1751_5];
var_00558f25_3 = table_50c7b8[(var_004cfdb8_2 << 8) + var_004cff85_5];
var_00571cf5_3 = table_50c7b8[(var_0040da95_5 << 8) + var_0058850e_3];
var_004ae266_4 = table_415efe[(var_00401a96_2 << 8) + var_005a1c6a_3];
var_004dde6b_2 = table_415efe[(var_004bc31e_4 << 8) + var_005f7f82_2];
var_0049fe14_2 = table_415efe[(var_00505d67_4 << 8) + var_005aa8a7_1];
var_005c191a_5 = table_50c7b8[(var_00520453_6 << 8) + var_0054a655_4];
var_004746a7_7 = table_415efe[(var_005b9ae3_8 << 8) + var_00573283_6];
var_005b9ae3_9 = table_50c7b8[(var_004ae266_5 << 8) + var_005fa23c_5];
var_00617013_3 = table_4ef23e[(var_00571cf5_3 << 8) + var_004dde6b_2];
var_004b4c8c_5 = table_4ef23e[(var_00558f25_3 << 8) + var_004ae266_4];
var_0045436d_3 = table_4ef23e[(var_005c191a_5 << 8) + var_0049fe14_2];
var_00617014_3 = table_4ef23e[(var_005b9ae3_9 << 8) + var_004746a7_7];
if(1 && var_005a1c6a_5 == table_411850[var_00617013_3] && var_0044ae8b_2 == table_57869a[var_004b4c8c_5] && var_00571cf5_4 == table_5d05a8[var_004b4c8c_5] && var_0058793a_3 == table_615efa[var_004b4c8c_5] && var_00470f07_4 == table_57074d[var_0045436d_3] && var_0048c955_6 == table_586378[var_00617013_3] && var_004cff85_6 == table_5e3418[var_004b4c8c_5] && var_005aa8a7_2 == table_50b219[var_0045436d_3] && var_004cfdb8_3 == table_49763e[var_00617013_3] && var_00617012_5 == table_5ac690[var_0045436d_3] && var_00459204_5 == table_4022e4[var_00617014_3] && var_00574341_5 == table_4d32c1[var_00617014_3] && var_004aff6d_6 == table_40898f[var_00617013_3] && var_00499d02_6 == table_58a368[var_0045436d_3] && var_005a6a38_7 == table_40faf9[var_00617014_3] && var_005c522f_5 == table_5c8bd0[var_00617014_3] ) {
printf("%d %d %d %d\n", var_0061701e_3, var_0048da35_5, var_0044989e_5, var_005d1751_5 );
fflush(stdout);
goto L_64;}}}}}
L_64:
for (var_005ed9a2_2 = 0; var_005ed9a2_2 < 0x100; var_005ed9a2_2++) {
var_004ae266_3 = table_5618d3[var_005ed9a2_2];
var_004466ca_1 = table_5f19fe[var_005ed9a2_2];
var_00617015_2 = table_4bf574[var_005ed9a2_2];
var_005bef50_6 = table_43d247[var_005ed9a2_2];
printf("%d\r", var_005ed9a2_2);fflush(stdout);
for (var_0048c955_3 = 0; var_0048c955_3 < 0x100; var_0048c955_3++) {
var_00558f25_2 = table_541346[var_0048c955_3];
var_004680c0_2 = table_606a9f[var_0048c955_3];
var_00470f07_3 = table_44218c[var_0048c955_3];
var_00576040_2 = table_466985[var_0048c955_3];
for (var_00566369_3 = 0; var_00566369_3 < 0x100; var_00566369_3++) {
var_005c191a_3 = table_40c767[var_00566369_3];
var_00450306_1 = table_5a9bbc[var_00566369_3];
var_004cff85_4 = table_497ebd[var_00566369_3];
var_0055985e_5 = table_469a81[var_00566369_3];
for (var_0057be49_3 = 0; var_0057be49_3 < 0x100; var_0057be49_3++) {
var_0061701b_2 = table_5b0c5f[var_0057be49_3];
var_00617011_1 = table_4933a7[var_0057be49_3];
var_005d1751_4 = table_4c21e9[var_0057be49_3];
var_004aa6c1_3 = table_5c0f53[var_0057be49_3];
var_00459204_4 = table_50c7b8[(var_0061701b_2 << 8) + var_004cff85_4];
var_0048c955_4 = table_50c7b8[(var_00617011_1 << 8) + var_00450306_1];
var_004aff6d_4 = table_50c7b8[(var_004aa6c1_3 << 8) + var_0055985e_5];
var_00493124_1 = table_50c7b8[(var_005d1751_4 << 8) + var_005c191a_3];
var_005fd9c0_3 = table_415efe[(var_00558f25_2 << 8) + var_004ae266_3];
var_0061701b_3 = table_415efe[(var_00576040_2 << 8) + var_005bef50_6];
var_0045436d_2 = table_415efe[(var_004680c0_2 << 8) + var_004466ca_1];
var_005ec1a8_4 = table_415efe[(var_00470f07_3 << 8) + var_00617015_2];
var_0048da35_5 = table_4ef23e[(var_00459204_4 << 8) + var_005fd9c0_3];
var_004a0be5_5 = table_4ef23e[(var_004aff6d_4 << 8) + var_0061701b_3];
var_0061441a_5 = table_4ef23e[(var_00493124_1 << 8) + var_0045436d_2];
var_00617018_6 = table_4ef23e[(var_0048c955_4 << 8) + var_005ec1a8_4];
if(1 && var_00401a96_2 == table_4aaccc[var_0048da35_5] && var_004bc31e_4 == table_50a4e5[var_0048da35_5] && var_00505d67_4 == table_46cfb3[var_0048da35_5] && var_00605846_5 == table_44961e[var_004a0be5_5] && var_005a1c6a_4 == table_52502c[var_004a0be5_5] && var_005b9ae3_8 == table_597442[var_0048da35_5] && var_00574341_4 == table_454971[var_0061441a_5] && var_004bc31e_5 == table_4bdef0[var_00617018_6] && var_0048c955_5 == table_48eea9[var_0061441a_5] && var_0057be49_4 == table_4e7093[var_00617018_6] && var_0053e4ac_3 == table_5e883d[var_0061441a_5] && var_00617011_2 == table_61373c[var_004a0be5_5] && var_004b4c8c_6 == table_4457ff[var_00617018_6] && var_00590a90_4 == table_5fd54e[var_0061441a_5] && var_0061701f_5 == table_4afa74[var_004a0be5_5] && var_005cef77_6 == table_42bb10[var_00617018_6] ) {
printf("%d %d %d %d\n", var_005ed9a2_2, var_0048c955_3, var_00566369_3, var_0057be49_3 );
fflush(stdout);
goto L_60;}}}}}
L_60:
for (var_00617013_2 = 0; var_00617013_2 < 0x100; var_00617013_2++) {
var_00617012_3 = table_5519e3[var_00617013_2];
var_005b9ae3_6 = table_60919e[var_00617013_2];
var_0048da35_4 = table_59dfca[var_00617013_2];
var_00617012_4 = table_412db0[var_00617013_2];
printf("%d\r", var_00617013_2);fflush(stdout);
for (var_00558f25_1 = 0; var_00558f25_1 < 0x100; var_00558f25_1++) {
var_0058793a_1 = table_43344d[var_00558f25_1];
var_0047a26b_3 = table_4592d9[var_00558f25_1];
var_005f7f82_1 = table_4aa81e[var_00558f25_1];
var_005cef77_5 = table_564e89[var_00558f25_1];
for (var_004746a7_5 = 0; var_004746a7_5 < 0x100; var_004746a7_5++) {
var_0056b399_1 = table_441529[var_004746a7_5];
var_00520453_5 = table_4b25ed[var_004746a7_5];
var_004b4c8c_3 = table_4c74f4[var_004746a7_5];
var_005bfb4c_3 = table_4a37bf[var_004746a7_5];
for (var_004ae266_2 = 0; var_004ae266_2 < 0x100; var_004ae266_2++) {
var_005a6a38_4 = table_453254[var_004ae266_2];
var_0058850e_2 = table_5bd923[var_004ae266_2];
var_00617013_1 = table_404090[var_004ae266_2];
var_0061701d_2 = table_4122f3[var_004ae266_2];
var_005a69a8_1 = table_415efe[(var_005a6a38_4 << 8) + var_004b4c8c_3];
var_004a0be5_4 = table_415efe[(var_00617013_1 << 8) + var_00520453_5];
var_005b33e0_2 = table_415efe[(var_0058850e_2 << 8) + var_0056b399_1];
var_005bef50_4 = table_50c7b8[(var_0047a26b_3 << 8) + var_00617012_3];
var_00573283_4 = table_415efe[(var_0061701d_2 << 8) + var_005bfb4c_3];
var_00574341_2 = table_50c7b8[(var_005cef77_5 << 8) + var_005b9ae3_6];
var_00505d67_3 = table_50c7b8[(var_0058793a_1 << 8) + var_0048da35_4];
var_005d0b28_4 = table_50c7b8[(var_005f7f82_1 << 8) + var_00617012_4];
var_005c99d1_1 = table_4ef23e[(var_005bef50_4 << 8) + var_005b33e0_2];
var_005f5094_2 = table_4ef23e[(var_00574341_2 << 8) + var_00573283_4];
var_005c0615_4 = table_4ef23e[(var_00505d67_3 << 8) + var_004a0be5_4];
var_005d1751_5 = table_4ef23e[(var_005d0b28_4 << 8) + var_005a69a8_1];
if(1 && var_00591280_4 == table_503deb[var_005c99d1_1] && var_00566369_4 == table_5524bb[var_005c99d1_1] && var_005b46f9_2 == table_546068[var_005c99d1_1] && var_005b33e0_3 == table_5089e2[var_005c99d1_1] && var_00617010_3 == table_43465c[var_005f5094_2] && var_00499d02_5 == table_494cc6[var_005c0615_4] && var_00617014_2 == table_48e52a[var_005f5094_2] && var_0061701a_1 == table_55dff0[var_005f5094_2] && var_0040da95_5 == table_567088[var_005d1751_5] && var_004cfdb8_2 == table_5d03fd[var_005d1751_5] && var_00617017_4 == table_5e2680[var_005c0615_4] && var_00520453_6 == table_52a590[var_005d1751_5] && var_0046029a_5 == table_43627d[var_005c0615_4] && var_004109d6_1 == table_590054[var_005c0615_4] && var_0061701c_5 == table_43a044[var_005f5094_2] && var_004ae266_5 == table_5d4bf9[var_005d1751_5] ) {
printf("%d %d %d %d\n", var_00617013_2, var_00558f25_1, var_004746a7_5, var_004ae266_2 );
fflush(stdout);
goto L_56;}}}}}
L_56:
for (var_005a6a38_5 = 0; var_005a6a38_5 < 0x100; var_005a6a38_5++) {
var_00617018_5 = table_42ca59[var_005a6a38_5];
var_0056b399_2 = table_441b5f[var_005a6a38_5];
var_0058793a_2 = table_5c1377[var_005a6a38_5];
var_0046029a_4 = table_50b6cb[var_005a6a38_5];
printf("%d\r", var_005a6a38_5);fflush(stdout);
for (var_0061701c_4 = 0; var_0061701c_4 < 0x100; var_0061701c_4++) {
var_0061701f_3 = table_612b48[var_0061701c_4];
var_005a316b_3 = table_4a9510[var_0061701c_4];
var_0061441a_4 = table_5845e6[var_0061701c_4];
var_0058c52d_5 = table_5bacef[var_0061701c_4];
for (var_004a5548_1 = 0; var_004a5548_1 < 0x100; var_004a5548_1++) {
var_00617018_2 = table_4e0ee9[var_004a5548_1];
var_005b6f7a_1 = table_58e478[var_004a5548_1];
var_00617011_0 = table_47dc4c[var_004a5548_1];
var_00617016_3 = table_476b82[var_004a5548_1];
for (var_004a1a09_3 = 0; var_004a1a09_3 < 0x100; var_004a1a09_3++) {
var_00493124_0 = table_435ca2[var_004a1a09_3];
var_0054fa8f_4 = table_440ba0[var_004a1a09_3];
var_004aff6d_3 = table_429661[var_004a1a09_3];
var_005c99d1_0 = table_5b9e28[var_004a1a09_3];
var_004a29f0_2 = table_415efe[(var_00493124_0 << 8) + var_00617011_0];
var_0047a26b_4 = table_415efe[(var_004aff6d_3 << 8) + var_00617016_3];
var_005fe8c0_4 = table_415efe[(var_005c99d1_0 << 8) + var_005b6f7a_1];
var_004cfdb8_1 = table_415efe[(var_0054fa8f_4 << 8) + var_00617018_2];
var_005f5094_1 = table_50c7b8[(var_0056b399_2 << 8) + var_005a316b_3];
var_0054a655_3 = table_50c7b8[(var_0058793a_2 << 8) + var_0061441a_4];
var_0060197f_3 = table_50c7b8[(var_0046029a_4 << 8) + var_0061701f_3];
var_0061701f_4 = table_50c7b8[(var_00617018_5 << 8) + var_0058c52d_5];
var_0044989e_5 = table_4ef23e[(var_005f5094_1 << 8) + var_005fe8c0_4];
var_004a5548_2 = table_4ef23e[(var_0054a655_3 << 8) + var_0047a26b_4];
var_0043df43_3 = table_4ef23e[(var_0060197f_3 << 8) + var_004cfdb8_1];
var_0061701d_3 = table_4ef23e[(var_0061701f_4 << 8) + var_004a29f0_2];
if(1 && var_004cff85_5 == table_590bf8[var_0044989e_5] && var_0058850e_3 == table_4ac243[var_0044989e_5] && var_0059edbe_2 == table_445d16[var_004a5548_2] && var_00574341_3 == table_5729d8[var_004a5548_2] && var_005fa23c_5 == table_595042[var_0044989e_5] && var_0043512c_4 == table_5b25d2[var_004a5548_2] && var_005d0b28_5 == table_531e4c[var_0043df43_3] && var_005e2ecc_3 == table_456878[var_0043df43_3] && var_005a6a38_6 == table_5f9dcb[var_0043df43_3] && var_0054a655_4 == table_471ae2[var_0044989e_5] && var_005a316b_4 == table_4140de[var_0061701d_3] && var_004aff6d_5 == table_46fe7a[var_0061701d_3] && var_004a1a09_4 == table_47b8d1[var_0061701d_3] && var_0043df43_4 == table_58a86e[var_0043df43_3] && var_0060197f_4 == table_47c9a1[var_0061701d_3] && var_0055985e_6 == table_5755c6[var_004a5548_2] ) {
printf("%d %d %d %d\n", var_005a6a38_5, var_0061701c_4, var_004a5548_1, var_004a1a09_3 );
fflush(stdout);
goto L_52;}}}}}
L_52:
for (var_004c7134_5 = 0; var_004c7134_5 < 0x100; var_004c7134_5++) {
var_0043df43_2 = table_467e37[var_004c7134_5];
var_004b4c8c_4 = table_58fc77[var_004c7134_5];
var_00617018_4 = table_579905[var_004c7134_5];
var_005e2ecc_2 = table_443980[var_004c7134_5];
printf("%d\r", var_004c7134_5);fflush(stdout);
for (var_00401a96_1 = 0; var_00401a96_1 < 0x100; var_00401a96_1++) {
var_005a1c6a_2 = table_574bf5[var_00401a96_1];
var_004aa6c1_2 = table_507b3a[var_00401a96_1];
var_005d0b28_3 = table_5bc40e[var_00401a96_1];
var_00617018_3 = table_50c539[var_00401a96_1];
for (var_0061701d_0 = 0; var_0061701d_0 < 0x100; var_0061701d_0++) {
var_00490ab1_1 = table_5d88e5[var_0061701d_0];
var_0053e4ac_2 = table_4ab89f[var_0061701d_0];
var_004c7134_4 = table_52151a[var_0061701d_0];
var_005fd9c0_2 = table_60b819[var_0061701d_0];
for (var_00499d02_3 = 0; var_00499d02_3 < 0x100; var_00499d02_3++) {
var_0054804b_2 = table_45221f[var_00499d02_3];
var_0061701e_2 = table_52750e[var_00499d02_3];
var_005c0615_3 = table_505359[var_00499d02_3];
var_0049e624_2 = table_53159f[var_00499d02_3];
var_0044989e_4 = table_415efe[(var_0049e624_2 << 8) + var_00490ab1_1];
var_00605846_4 = table_415efe[(var_0054804b_2 << 8) + var_004c7134_4];
var_005c5821_5 = table_415efe[(var_005c0615_3 << 8) + var_005fd9c0_2];
var_005bef50_5 = table_50c7b8[(var_0043df43_2 << 8) + var_00617018_3];
var_005c522f_3 = table_415efe[(var_0061701e_2 << 8) + var_0053e4ac_2];
var_0045b76e_5 = table_50c7b8[(var_00617018_4 << 8) + var_004aa6c1_2];
var_004aa6c1_4 = table_50c7b8[(var_004b4c8c_4 << 8) + var_005a1c6a_2];
var_0045b76e_6 = table_50c7b8[(var_005e2ecc_2 << 8) + var_005d0b28_3];
var_00450306_2 = table_4ef23e[(var_005bef50_5 << 8) + var_005c5821_5];
var_00617016_4 = table_4ef23e[(var_0045b76e_5 << 8) + var_0044989e_4];
var_0061701e_3 = table_4ef23e[(var_004aa6c1_4 << 8) + var_005c522f_3];
var_0058c52d_6 = table_4ef23e[(var_0045b76e_6 << 8) + var_00605846_4];
if(1 && var_0049d7f9_3 == table_49e8fd[var_00450306_2] && var_005b6f7a_2 == table_5f8715[var_00617016_4] && var_0040da95_4 == table_5e929c[var_00450306_2] && var_00617017_3 == table_4b6728[var_00617016_4] && var_005c191a_4 == table_566c35[var_00450306_2] && var_005b9ae3_7 == table_4c2fa0[var_00617016_4] && var_0049e624_3 == table_53bea6[var_00450306_2] && var_005f5d05_4 == table_4b0474[var_0058c52d_6] && var_00573283_5 == table_455281[var_0058c52d_6] && var_005c522f_4 == table_4cdf34[var_0058c52d_6] && var_0054804b_3 == table_4e1386[var_0058c52d_6] && var_005aa8a7_1 == table_45ce4e[var_0061701e_3] && var_005f7f82_2 == table_431f0c[var_0061701e_3] && var_005a1c6a_3 == table_4059eb[var_0061701e_3] && var_00573283_6 == table_50af89[var_0061701e_3] && var_004dde6b_3 == table_5bea12[var_00617016_4] ) {
printf("%d %d %d %d\n", var_004c7134_5, var_00401a96_1, var_0061701d_0, var_00499d02_3 );
fflush(stdout);
goto L_48;}}}}}
L_48:
for (var_00573283_3 = 0; var_00573283_3 < 0x100; var_00573283_3++) {
var_00617017_2 = table_5410c6[var_00573283_3];
var_00401a96_0 = table_5bc8e9[var_00573283_3];
var_004cff85_3 = table_40b54e[var_00573283_3];
var_0061701d_1 = table_40bbdf[var_00573283_3];
printf("%d\r", var_00573283_3);fflush(stdout);
for (var_00617016_2 = 0; var_00617016_2 < 0x100; var_00617016_2++) {
var_005e2ecc_1 = table_541c75[var_00617016_2];
var_004e47e2_4 = table_5aeb8e[var_00617016_2];
var_004466ca_0 = table_45aa97[var_00617016_2];
var_0055985e_4 = table_52b582[var_00617016_2];
for (var_0054804b_1 = 0; var_0054804b_1 < 0x100; var_0054804b_1++) {
var_004a29f0_1 = table_535749[var_0054804b_1];
var_00470f07_1 = table_4b5649[var_0054804b_1];
var_00470f07_2 = table_44a435[var_0054804b_1];
var_00499d02_2 = table_5a721a[var_0054804b_1];
for (var_004aa6c1_0 = 0; var_004aa6c1_0 < 0x100; var_004aa6c1_0++) {
var_0043ace2_3 = table_40d1b5[var_004aa6c1_0];
var_004cfdb8_0 = table_51d9b2[var_004aa6c1_0];
var_004386bf_1 = table_6107f5[var_004aa6c1_0];
var_0061701c_3 = table_4cafed[var_004aa6c1_0];
var_005a2f04_2 = table_415efe[(var_004386bf_1 << 8) + var_00470f07_1];
var_0060197f_2 = table_415efe[(var_0043ace2_3 << 8) + var_004a29f0_1];
var_0043df43_1 = table_415efe[(var_004cfdb8_0 << 8) + var_00499d02_2];
var_00590a90_2 = table_415efe[(var_0061701c_3 << 8) + var_00470f07_2];
var_0043ace2_4 = table_50c7b8[(var_00401a96_0 << 8) + var_004e47e2_4];
var_0058c52d_4 = table_50c7b8[(var_004cff85_3 << 8) + var_0055985e_4];
var_00499d02_4 = table_50c7b8[(var_00617017_2 << 8) + var_005e2ecc_1];
var_00505d67_2 = table_50c7b8[(var_0061701d_1 << 8) + var_004466ca_0];
var_00499d02_3 = table_4ef23e[(var_0058c52d_4 << 8) + var_0043df43_1];
var_00617013_2 = table_4ef23e[(var_0043ace2_4 << 8) + var_0060197f_2];
var_005ed9a2_2 = table_4ef23e[(var_00499d02_4 << 8) + var_00590a90_2];
var_005a6a38_5 = table_4ef23e[(var_00505d67_2 << 8) + var_005a2f04_2];
if(1 && var_0054804b_2 == table_45221f[var_00499d02_3] && var_0061701e_2 == table_52750e[var_00499d02_3] && var_00617012_3 == table_5519e3[var_00617013_2] && var_005c0615_3 == table_505359[var_00499d02_3] && var_0049e624_2 == table_53159f[var_00499d02_3] && var_005b9ae3_6 == table_60919e[var_00617013_2] && var_0048da35_4 == table_59dfca[var_00617013_2] && var_004ae266_3 == table_5618d3[var_005ed9a2_2] && var_00617018_5 == table_42ca59[var_005a6a38_5] && var_0056b399_2 == table_441b5f[var_005a6a38_5] && var_0058793a_2 == table_5c1377[var_005a6a38_5] && var_0046029a_4 == table_50b6cb[var_005a6a38_5] && var_00617012_4 == table_412db0[var_00617013_2] && var_004466ca_1 == table_5f19fe[var_005ed9a2_2] && var_00617015_2 == table_4bf574[var_005ed9a2_2] && var_005bef50_6 == table_43d247[var_005ed9a2_2] ) {
printf("%d %d %d %d\n", var_00573283_3, var_00617016_2, var_0054804b_1, var_004aa6c1_0 );
fflush(stdout);
goto L_44;}}}}}
L_44:
for (var_0040da95_3 = 0; var_0040da95_3 < 0x100; var_0040da95_3++) {
var_005bfb4c_1 = table_59ec14[var_0040da95_3];
var_005f5d05_3 = table_462734[var_0040da95_3];
var_005c0615_2 = table_4cbc82[var_0040da95_3];
var_005ec1a8_3 = table_4469a3[var_0040da95_3];
printf("%d\r", var_0040da95_3);fflush(stdout);
for (var_004c7134_2 = 0; var_004c7134_2 < 0x100; var_004c7134_2++) {
var_00450306_0 = table_55e47c[var_004c7134_2];
var_005ed9a2_1 = table_583200[var_004c7134_2];
var_005b33e0_1 = table_6115af[var_004c7134_2];
var_005bef50_3 = table_566596[var_004c7134_2];
for (var_0046029a_2 = 0; var_0046029a_2 < 0x100; var_0046029a_2++) {
var_004aff6d_2 = table_499114[var_0046029a_2];
var_00490ab1_0 = table_5e3bf8[var_0046029a_2];
var_005c191a_2 = table_43764d[var_0046029a_2];
var_00617018_1 = table_5f0da7[var_0046029a_2];
for (var_005a69a8_0 = 0; var_005a69a8_0 < 0x100; var_005a69a8_0++) {
var_0048c955_2 = table_5e11d2[var_005a69a8_0];
var_005a379c_1 = table_591cab[var_005a69a8_0];
var_00617017_1 = table_555b85[var_005a69a8_0];
var_004ae266_1 = table_5dd41f[var_005a69a8_0];
var_00520453_4 = table_415efe[(var_005bef50_3 << 8) + var_005bfb4c_1];
var_005bfb4c_2 = table_50c7b8[(var_004ae266_1 << 8) + var_005c191a_2];
var_00459204_3 = table_50c7b8[(var_005a379c_1 << 8) + var_00490ab1_0];
var_004b4c8c_2 = table_50c7b8[(var_0048c955_2 << 8) + var_00617018_1];
var_0045b76e_4 = table_50c7b8[(var_00617017_1 << 8) + var_004aff6d_2];
var_0049d7f9_2 = table_415efe[(var_00450306_0 << 8) + var_005f5d05_3];
var_00520124_3 = table_415efe[(var_005b33e0_1 << 8) + var_005c0615_2];
var_0054a655_2 = table_415efe[(var_005ed9a2_1 << 8) + var_005ec1a8_3];
var_00566369_3 = table_4ef23e[(var_004b4c8c_2 << 8) + var_00520453_4];
var_004746a7_5 = table_4ef23e[(var_005bfb4c_2 << 8) + var_00520124_3];
var_004a1a09_3 = table_4ef23e[(var_00459204_3 << 8) + var_0049d7f9_2];
var_004c7134_5 = table_4ef23e[(var_0045b76e_4 << 8) + var_0054a655_2];
if(1 && var_0056b399_1 == table_441529[var_004746a7_5] && var_00520453_5 == table_4b25ed[var_004746a7_5] && var_004b4c8c_3 == table_4c74f4[var_004746a7_5] && var_005c191a_3 == table_40c767[var_00566369_3] && var_005bfb4c_3 == table_4a37bf[var_004746a7_5] && var_00450306_1 == table_5a9bbc[var_00566369_3] && var_00493124_0 == table_435ca2[var_004a1a09_3] && var_0054fa8f_4 == table_440ba0[var_004a1a09_3] && var_004cff85_4 == table_497ebd[var_00566369_3] && var_004aff6d_3 == table_429661[var_004a1a09_3] && var_0055985e_5 == table_469a81[var_00566369_3] && var_005c99d1_0 == table_5b9e28[var_004a1a09_3] && var_0043df43_2 == table_467e37[var_004c7134_5] && var_004b4c8c_4 == table_58fc77[var_004c7134_5] && var_00617018_4 == table_579905[var_004c7134_5] && var_005e2ecc_2 == table_443980[var_004c7134_5] ) {
printf("%d %d %d %d\n", var_0040da95_3, var_004c7134_2, var_0046029a_2, var_005a69a8_0 );
fflush(stdout);
goto L_40;}}}}}
L_40:
for (var_005ec1a8_2 = 0; var_005ec1a8_2 < 0x100; var_005ec1a8_2++) {
var_0043a427_2 = table_4db9ff[var_005ec1a8_2];
var_00566369_2 = table_429aec[var_005ec1a8_2];
var_0046029a_3 = table_5f8f99[var_005ec1a8_2];
var_00576040_1 = table_503165[var_005ec1a8_2];
printf("%d\r", var_005ec1a8_2);fflush(stdout);
for (var_004746a7_4 = 0; var_004746a7_4 < 0x100; var_004746a7_4++) {
var_0045b76e_3 = table_48cd52[var_004746a7_4];
var_00617019_1 = table_4773c7[var_004746a7_4];
var_005fd9c0_1 = table_543833[var_004746a7_4];
var_00576040_0 = table_5f6ebf[var_004746a7_4];
for (var_004a1a09_2 = 0; var_004a1a09_2 < 0x100; var_004a1a09_2++) {
var_0047a26b_1 = table_48749f[var_004a1a09_2];
var_005a6a38_1 = table_5e028b[var_004a1a09_2];
var_0058793a_0 = table_549735[var_004a1a09_2];
var_004bc31e_3 = table_4bd9fb[var_004a1a09_2];
for (var_005a316b_1 = 0; var_005a316b_1 < 0x100; var_005a316b_1++) {
var_0044989e_3 = table_530278[var_005a316b_1];
var_00605846_3 = table_4396ad[var_005a316b_1];
var_005c5821_3 = table_585ffa[var_005a316b_1];
var_005a6a38_2 = table_44ec23[var_005a316b_1];
var_005fe8c0_2 = table_415efe[(var_0044989e_3 << 8) + var_0047a26b_1];
var_0061701e_1 = table_415efe[(var_00605846_3 << 8) + var_005a6a38_1];
var_004a0be5_3 = table_415efe[(var_005c5821_3 << 8) + var_0058793a_0];
var_005c5821_4 = table_415efe[(var_005a6a38_2 << 8) + var_004bc31e_3];
var_005f5d05_2 = table_50c7b8[(var_0043a427_2 << 8) + var_0045b76e_3];
var_00617010_2 = table_50c7b8[(var_00566369_2 << 8) + var_00576040_0];
var_005a316b_2 = table_50c7b8[(var_00576040_1 << 8) + var_005fd9c0_1];
var_005fe8c0_3 = table_50c7b8[(var_0046029a_3 << 8) + var_00617019_1];
var_00558f25_1 = table_4ef23e[(var_005f5d05_2 << 8) + var_0061701e_1];
var_0048c955_3 = table_4ef23e[(var_005a316b_2 << 8) + var_005fe8c0_2];
var_004a5548_1 = table_4ef23e[(var_00617010_2 << 8) + var_004a0be5_3];
var_00401a96_1 = table_4ef23e[(var_005fe8c0_3 << 8) + var_005c5821_4];
if(1 && var_0058793a_1 == table_43344d[var_00558f25_1] && var_0047a26b_3 == table_4592d9[var_00558f25_1] && var_005f7f82_1 == table_4aa81e[var_00558f25_1] && var_005cef77_5 == table_564e89[var_00558f25_1] && var_00617018_2 == table_4e0ee9[var_004a5548_1] && var_005b6f7a_1 == table_58e478[var_004a5548_1] && var_00558f25_2 == table_541346[var_0048c955_3] && var_004680c0_2 == table_606a9f[var_0048c955_3] && var_00617011_0 == table_47dc4c[var_004a5548_1] && var_00470f07_3 == table_44218c[var_0048c955_3] && var_00576040_2 == table_466985[var_0048c955_3] && var_005a1c6a_2 == table_574bf5[var_00401a96_1] && var_004aa6c1_2 == table_507b3a[var_00401a96_1] && var_00617016_3 == table_476b82[var_004a5548_1] && var_005d0b28_3 == table_5bc40e[var_00401a96_1] && var_00617018_3 == table_50c539[var_00401a96_1] ) {
printf("%d %d %d %d\n", var_005ec1a8_2, var_004746a7_4, var_004a1a09_2, var_005a316b_1 );
fflush(stdout);
goto L_36;}}}}}
L_36:
for (var_005f5094_0 = 0; var_005f5094_0 < 0x100; var_005f5094_0++) {
var_005f7f82_0 = table_5c0149[var_005f5094_0];
var_004aa6c1_1 = table_6055b8[var_005f5094_0];
var_00591280_3 = table_546c5d[var_005f5094_0];
var_0049fe14_1 = table_5f2816[var_005f5094_0];
printf("%d\r", var_005f5094_0);fflush(stdout);
for (var_00520453_3 = 0; var_00520453_3 < 0x100; var_00520453_3++) {
var_0058c52d_3 = table_4be72d[var_00520453_3];
var_00505d67_1 = table_5d83f4[var_00520453_3];
var_005b9ae3_3 = table_57e97b[var_00520453_3];
var_00617012_2 = table_47abfc[var_00520453_3];
for (var_004a1a09_1 = 0; var_004a1a09_1 < 0x100; var_004a1a09_1++) {
var_0049fe14_0 = table_5a54c3[var_004a1a09_1];
var_0044989e_2 = table_604efc[var_004a1a09_1];
var_005a1c6a_1 = table_57f791[var_004a1a09_1];
var_0040da95_2 = table_5010f6[var_004a1a09_1];
for (var_0058850e_1 = 0; var_0058850e_1 < 0x100; var_0058850e_1++) {
var_004e47e2_3 = table_470a1d[var_0058850e_1];
var_00591280_1 = table_47e3ee[var_0058850e_1];
var_0061701f_2 = table_559a77[var_0058850e_1];
var_005b9ae3_4 = table_4eeab1[var_0058850e_1];
var_00617014_1 = table_50c7b8[(var_004e47e2_3 << 8) + var_0040da95_2];
var_005d0b28_2 = table_50c7b8[(var_00591280_1 << 8) + var_0044989e_2];
var_00571cf5_2 = table_50c7b8[(var_0061701f_2 << 8) + var_0049fe14_0];
var_005a6a38_3 = table_415efe[(var_005f7f82_0 << 8) + var_005b9ae3_3];
var_005d1751_3 = table_415efe[(var_004aa6c1_1 << 8) + var_00617012_2];
var_0054fa8f_3 = table_50c7b8[(var_005b9ae3_4 << 8) + var_005a1c6a_1];
var_005b46f9_1 = table_415efe[(var_00591280_3 << 8) + var_0058c52d_3];
var_005b9ae3_5 = table_415efe[(var_0049fe14_1 << 8) + var_00505d67_1];
var_004ae266_2 = table_4ef23e[(var_00571cf5_2 << 8) + var_005a6a38_3];
var_0061701d_0 = table_4ef23e[(var_005d0b28_2 << 8) + var_005d1751_3];
var_0061701c_4 = table_4ef23e[(var_0054fa8f_3 << 8) + var_005b9ae3_5];
var_0057be49_3 = table_4ef23e[(var_00617014_1 << 8) + var_005b46f9_1];
if(1 && var_005a6a38_4 == table_453254[var_004ae266_2] && var_0058850e_2 == table_5bd923[var_004ae266_2] && var_00617013_1 == table_404090[var_004ae266_2] && var_00490ab1_1 == table_5d88e5[var_0061701d_0] && var_0061701f_3 == table_612b48[var_0061701c_4] && var_005a316b_3 == table_4a9510[var_0061701c_4] && var_0053e4ac_2 == table_4ab89f[var_0061701d_0] && var_0061441a_4 == table_5845e6[var_0061701c_4] && var_0058c52d_5 == table_5bacef[var_0061701c_4] && var_004c7134_4 == table_52151a[var_0061701d_0] && var_005fd9c0_2 == table_60b819[var_0061701d_0] && var_0061701b_2 == table_5b0c5f[var_0057be49_3] && var_00617011_1 == table_4933a7[var_0057be49_3] && var_005d1751_4 == table_4c21e9[var_0057be49_3] && var_0061701d_2 == table_4122f3[var_004ae266_2] && var_004aa6c1_3 == table_5c0f53[var_0057be49_3] ) {
printf("%d %d %d %d\n", var_005f5094_0, var_00520453_3, var_004a1a09_1, var_0058850e_1 );
fflush(stdout);
goto L_32;}}}}}
L_32:
for (var_004680c0_1 = 0; var_004680c0_1 < 0x100; var_004680c0_1++) {
var_005c5821_2 = table_4d6ff1[var_004680c0_1];
var_00591280_2 = table_608432[var_004680c0_1];
var_00573283_2 = table_54c671[var_004680c0_1];
var_00404f8c_2 = table_58b151[var_004680c0_1];
printf("%d\r", var_004680c0_1);fflush(stdout);
for (var_00617019_0 = 0; var_00617019_0 < 0x100; var_00617019_0++) {
var_00590a90_1 = table_40d386[var_00617019_0];
var_0049d7f9_1 = table_45c489[var_00617019_0];
var_004109d6_0 = table_4ab779[var_00617019_0];
var_00574341_1 = table_4a7df3[var_00617019_0];
for (var_005c522f_0 = 0; var_005c522f_0 < 0x100; var_005c522f_0++) {
var_0040da95_1 = table_44b82d[var_005c522f_0];
var_005bfb4c_0 = table_47daac[var_005c522f_0];
var_0048c955_1 = table_541ec9[var_005c522f_0];
var_005c5821_1 = table_4c65d4[var_005c522f_0];
for (var_00459204_2 = 0; var_00459204_2 < 0x100; var_00459204_2++) {
var_004cff85_2 = table_4d8446[var_00459204_2];
var_00520124_1 = table_5a76a3[var_00459204_2];
var_00573283_1 = table_4663a4[var_00459204_2];
var_00505d67_0 = table_437df4[var_00459204_2];
var_00571cf5_1 = table_50c7b8[(var_00520124_1 << 8) + var_005bfb4c_0];
var_005f5d05_1 = table_50c7b8[(var_00573283_1 << 8) + var_0040da95_1];
var_0048da35_3 = table_50c7b8[(var_004cff85_2 << 8) + var_005c5821_1];
var_005fa23c_4 = table_50c7b8[(var_00505d67_0 << 8) + var_0048c955_1];
var_00415c97_3 = table_415efe[(var_005c5821_2 << 8) + var_00590a90_1];
var_0047a26b_2 = table_415efe[(var_00573283_2 << 8) + var_004109d6_0];
var_004c7134_3 = table_415efe[(var_00591280_2 << 8) + var_0049d7f9_1];
var_004dde6b_1 = table_415efe[(var_00404f8c_2 << 8) + var_00574341_1];
var_0046029a_2 = table_4ef23e[(var_005fa23c_4 << 8) + var_0047a26b_2];
var_005f5094_0 = table_4ef23e[(var_005f5d05_1 << 8) + var_004dde6b_1];
var_0054804b_1 = table_4ef23e[(var_00571cf5_1 << 8) + var_00415c97_3];
var_005ec1a8_2 = table_4ef23e[(var_0048da35_3 << 8) + var_004c7134_3];
if(1 && var_004aff6d_2 == table_499114[var_0046029a_2] && var_00490ab1_0 == table_5e3bf8[var_0046029a_2] && var_005c191a_2 == table_43764d[var_0046029a_2] && var_00617018_1 == table_5f0da7[var_0046029a_2] && var_004a29f0_1 == table_535749[var_0054804b_1] && var_00470f07_1 == table_4b5649[var_0054804b_1] && var_005f7f82_0 == table_5c0149[var_005f5094_0] && var_0043a427_2 == table_4db9ff[var_005ec1a8_2] && var_004aa6c1_1 == table_6055b8[var_005f5094_0] && var_00566369_2 == table_429aec[var_005ec1a8_2] && var_00470f07_2 == table_44a435[var_0054804b_1] && var_0046029a_3 == table_5f8f99[var_005ec1a8_2] && var_00499d02_2 == table_5a721a[var_0054804b_1] && var_00591280_3 == table_546c5d[var_005f5094_0] && var_0049fe14_1 == table_5f2816[var_005f5094_0] && var_00576040_1 == table_503165[var_005ec1a8_2] ) {
printf("%d %d %d %d\n", var_004680c0_1, var_00617019_0, var_005c522f_0, var_00459204_2 );
fflush(stdout);
goto L_28;}}}}}
L_28:
for (var_005b46f9_0 = 0; var_005b46f9_0 < 0x100; var_005b46f9_0++) {
var_0061701b_0 = table_56e697[var_005b46f9_0];
var_004386bf_0 = table_5afc32[var_005b46f9_0];
var_004680c0_0 = table_5288c4[var_005b46f9_0];
var_00605846_2 = table_41135d[var_005b46f9_0];
printf("%d\r", var_005b46f9_0);fflush(stdout);
for (var_0055985e_3 = 0; var_0055985e_3 < 0x100; var_0055985e_3++) {
var_0043ace2_2 = table_40f199[var_0055985e_3];
var_0053e4ac_1 = table_5fdef0[var_0055985e_3];
var_005b6f7a_0 = table_461b15[var_0055985e_3];
var_004bc31e_2 = table_49542c[var_0055985e_3];
for (var_00617013_0 = 0; var_00617013_0 < 0x100; var_00617013_0++) {
var_0043512c_0 = table_5e4e34[var_00617013_0];
var_0043ace2_1 = table_52231a[var_00617013_0];
var_005ec1a8_0 = table_42628a[var_00617013_0];
var_00617017_0 = table_42ffbb[var_00617013_0];
for (var_004746a7_2 = 0; var_004746a7_2 < 0x100; var_004746a7_2++) {
var_00617012_1 = table_5c085a[var_004746a7_2];
var_005c522f_1 = table_554d97[var_004746a7_2];
var_005fa23c_3 = table_57efc4[var_004746a7_2];
var_0058d156_0 = table_49a73d[var_004746a7_2];
var_00404f8c_1 = table_50c7b8[(var_005fa23c_3 << 8) + var_005ec1a8_0];
var_00605846_1 = table_50c7b8[(var_005c522f_1 << 8) + var_0043512c_0];
var_0061701a_0 = table_50c7b8[(var_0058d156_0 << 8) + var_0043ace2_1];
var_00520124_2 = table_50c7b8[(var_00617012_1 << 8) + var_00617017_0];
var_004746a7_3 = table_415efe[(var_004386bf_0 << 8) + var_0043ace2_2];
var_0049e624_1 = table_415efe[(var_004680c0_0 << 8) + var_005b6f7a_0];
var_0059edbe_1 = table_415efe[(var_0061701b_0 << 8) + var_0053e4ac_1];
var_0061701b_1 = table_415efe[(var_00605846_2 << 8) + var_004bc31e_2];
var_004c7134_2 = table_4ef23e[(var_00605846_1 << 8) + var_004746a7_3];
var_00520453_3 = table_4ef23e[(var_0061701a_0 << 8) + var_0049e624_1];
var_004746a7_4 = table_4ef23e[(var_00404f8c_1 << 8) + var_0059edbe_1];
var_00573283_3 = table_4ef23e[(var_00520124_2 << 8) + var_0061701b_1];
if(1 && var_00450306_0 == table_55e47c[var_004c7134_2] && var_0058c52d_3 == table_4be72d[var_00520453_3] && var_00505d67_1 == table_5d83f4[var_00520453_3] && var_005b9ae3_3 == table_57e97b[var_00520453_3] && var_005ed9a2_1 == table_583200[var_004c7134_2] && var_005b33e0_1 == table_6115af[var_004c7134_2] && var_0045b76e_3 == table_48cd52[var_004746a7_4] && var_00617019_1 == table_4773c7[var_004746a7_4] && var_00617012_2 == table_47abfc[var_00520453_3] && var_005fd9c0_1 == table_543833[var_004746a7_4] && var_005bef50_3 == table_566596[var_004c7134_2] && var_00576040_0 == table_5f6ebf[var_004746a7_4] && var_00617017_2 == table_5410c6[var_00573283_3] && var_00401a96_0 == table_5bc8e9[var_00573283_3] && var_004cff85_3 == table_40b54e[var_00573283_3] && var_0061701d_1 == table_40bbdf[var_00573283_3] ) {
printf("%d %d %d %d\n", var_005b46f9_0, var_0055985e_3, var_00617013_0, var_004746a7_2 );
fflush(stdout);
goto L_24;}}}}}
L_24:
for (var_005b9ae3_2 = 0; var_005b9ae3_2 < 0x100; var_005b9ae3_2++) {
var_0060197f_1 = table_53db26[var_005b9ae3_2];
var_005a2f04_1 = table_49d1ee[var_005b9ae3_2];
var_0043512c_3 = table_4dd93d[var_005b9ae3_2];
var_0046029a_1 = table_57a64b[var_005b9ae3_2];
printf("%d\r", var_005b9ae3_2);fflush(stdout);
for (var_0061441a_2 = 0; var_0061441a_2 < 0x100; var_0061441a_2++) {
var_0043df43_0 = table_492adf[var_0061441a_2];
var_00415c97_2 = table_5eb74f[var_0061441a_2];
var_00470f07_0 = table_5d945f[var_0061441a_2];
var_0045436d_1 = table_4e7dab[var_0061441a_2];
for (var_0044989e_0 = 0; var_0044989e_0 < 0x100; var_0044989e_0++) {
var_004dde6b_0 = table_5cd110[var_0044989e_0];
var_0058850e_0 = table_5df8bb[var_0044989e_0];
var_005c0615_1 = table_4a33ea[var_0044989e_0];
var_0044989e_1 = table_527045[var_0044989e_0];
for (var_004aff6d_1 = 0; var_004aff6d_1 < 0x100; var_004aff6d_1++) {
var_004bc31e_1 = table_5e0141[var_004aff6d_1];
var_0059edbe_0 = table_525abf[var_004aff6d_1];
var_005a316b_0 = table_5ea1e4[var_004aff6d_1];
var_0054fa8f_1 = table_4bd577[var_004aff6d_1];
var_0045b76e_2 = table_415efe[(var_005a316b_0 << 8) + var_0044989e_1];
var_00558f25_0 = table_415efe[(var_004bc31e_1 << 8) + var_0058850e_0];
var_0046029a_0 = table_50c7b8[(var_0060197f_1 << 8) + var_0045436d_1];
var_0054fa8f_2 = table_415efe[(var_0054fa8f_1 << 8) + var_005c0615_1];
var_005d1751_2 = table_50c7b8[(var_005a2f04_1 << 8) + var_00415c97_2];
var_005c522f_2 = table_415efe[(var_0059edbe_0 << 8) + var_004dde6b_0];
var_00499d02_1 = table_50c7b8[(var_0043512c_3 << 8) + var_0043df43_0];
var_005ec1a8_1 = table_50c7b8[(var_0046029a_1 << 8) + var_00470f07_0];
var_0058850e_1 = table_4ef23e[(var_005d1751_2 << 8) + var_0054fa8f_2];
var_00617016_2 = table_4ef23e[(var_0046029a_0 << 8) + var_0045b76e_2];
var_005a316b_1 = table_4ef23e[(var_00499d02_1 << 8) + var_00558f25_0];
var_0040da95_3 = table_4ef23e[(var_005ec1a8_1 << 8) + var_005c522f_2];
if(1 && var_004e47e2_3 == table_470a1d[var_0058850e_1] && var_00591280_1 == table_47e3ee[var_0058850e_1] && var_005e2ecc_1 == table_541c75[var_00617016_2] && var_004e47e2_4 == table_5aeb8e[var_00617016_2] && var_0044989e_3 == table_530278[var_005a316b_1] && var_004466ca_0 == table_45aa97[var_00617016_2] && var_0055985e_4 == table_52b582[var_00617016_2] && var_0061701f_2 == table_559a77[var_0058850e_1] && var_00605846_3 == table_4396ad[var_005a316b_1] && var_005c5821_3 == table_585ffa[var_005a316b_1] && var_005a6a38_2 == table_44ec23[var_005a316b_1] && var_005bfb4c_1 == table_59ec14[var_0040da95_3] && var_005f5d05_3 == table_462734[var_0040da95_3] && var_005b9ae3_4 == table_4eeab1[var_0058850e_1] && var_005c0615_2 == table_4cbc82[var_0040da95_3] && var_005ec1a8_3 == table_4469a3[var_0040da95_3] ) {
printf("%d %d %d %d\n", var_005b9ae3_2, var_0061441a_2, var_0044989e_0, var_004aff6d_1 );
fflush(stdout);
goto L_20;}}}}}
L_20:
for (var_00520453_1 = 0; var_00520453_1 < 0x100; var_00520453_1++) {
var_0054a655_1 = table_470304[var_00520453_1];
var_005fe8c0_1 = table_5df1b0[var_00520453_1];
var_005a1c6a_0 = table_446cb5[var_00520453_1];
var_0047a26b_0 = table_555127[var_00520453_1];
printf("%d\r", var_00520453_1);fflush(stdout);
for (var_0048da35_2 = 0; var_0048da35_2 < 0x100; var_0048da35_2++) {
var_005cef77_3 = table_5730dd[var_0048da35_2];
var_005b33e0_0 = table_4d925d[var_0048da35_2];
var_00617014_0 = table_42abca[var_0048da35_2];
var_0061441a_3 = table_5224a6[var_0048da35_2];
for (var_0054a655_0 = 0; var_0054a655_0 < 0x100; var_0054a655_0++) {
var_0061701c_1 = table_47333e[var_0054a655_0];
var_00566369_1 = table_5da709[var_0054a655_0];
var_00617016_1 = table_526caf[var_0054a655_0];
var_005bef50_2 = table_4139d1[var_0054a655_0];
for (var_00617010_1 = 0; var_00617010_1 < 0x100; var_00617010_1++) {
var_0049e624_0 = table_5ee523[var_00617010_1];
var_004cff85_1 = table_42ced6[var_00617010_1];
var_005b9ae3_1 = table_40d60b[var_00617010_1];
var_004e47e2_2 = table_5c53aa[var_00617010_1];
var_004c7134_1 = table_50c7b8[(var_004cff85_1 << 8) + var_0061701c_1];
var_004a0be5_2 = table_50c7b8[(var_005b9ae3_1 << 8) + var_005bef50_2];
var_00617018_0 = table_415efe[(var_00617014_0 << 8) + var_0054a655_1];
var_0043512c_2 = table_415efe[(var_005b33e0_0 << 8) + var_005fe8c0_1];
var_0054804b_0 = table_50c7b8[(var_004e47e2_2 << 8) + var_00617016_1];
var_00617015_1 = table_415efe[(var_005cef77_3 << 8) + var_005a1c6a_0];
var_0061701c_2 = table_50c7b8[(var_0049e624_0 << 8) + var_00566369_1];
var_005cef77_4 = table_415efe[(var_0061441a_3 << 8) + var_0047a26b_0];
var_004a1a09_1 = table_4ef23e[(var_004c7134_1 << 8) + var_00617018_0];
var_004aa6c1_0 = table_4ef23e[(var_0054804b_0 << 8) + var_0043512c_2];
var_004a1a09_2 = table_4ef23e[(var_004a0be5_2 << 8) + var_00617015_1];
var_005a69a8_0 = table_4ef23e[(var_0061701c_2 << 8) + var_005cef77_4];
if(1 && var_0049fe14_0 == table_5a54c3[var_004a1a09_1] && var_0043ace2_3 == table_40d1b5[var_004aa6c1_0] && var_004cfdb8_0 == table_51d9b2[var_004aa6c1_0] && var_0044989e_2 == table_604efc[var_004a1a09_1] && var_004386bf_1 == table_6107f5[var_004aa6c1_0] && var_005a1c6a_1 == table_57f791[var_004a1a09_1] && var_0040da95_2 == table_5010f6[var_004a1a09_1] && var_0048c955_2 == table_5e11d2[var_005a69a8_0] && var_0061701c_3 == table_4cafed[var_004aa6c1_0] && var_005a379c_1 == table_591cab[var_005a69a8_0] && var_00617017_1 == table_555b85[var_005a69a8_0] && var_0047a26b_1 == table_48749f[var_004a1a09_2] && var_005a6a38_1 == table_5e028b[var_004a1a09_2] && var_004ae266_1 == table_5dd41f[var_005a69a8_0] && var_0058793a_0 == table_549735[var_004a1a09_2] && var_004bc31e_3 == table_4bd9fb[var_004a1a09_2] ) {
printf("%d %d %d %d\n", var_00520453_1, var_0048da35_2, var_0054a655_0, var_00617010_1 );
fflush(stdout);
goto L_16;}}}}}
L_16:
for (var_00617002_0 = 0; var_00617002_0 < 0x100; var_00617002_0++) {
var_005ed9a2_0 = table_51cfc7[var_00617002_0];
var_005c0615_0 = table_582673[var_00617002_0];
var_004746a7_1 = table_533d7d[var_00617002_0];
var_0058d156_1 = table_4c5a48[var_00617002_0];
printf("%d\r", var_00617002_0);fflush(stdout);
for (var_00617007_0 = 0; var_00617007_0 < 0x100; var_00617007_0++) {
var_00574341_0 = table_4e8f8c[var_00617007_0];
var_005aa8a7_0 = table_51eccd[var_00617007_0];
var_005bef50_0 = table_5b9172[var_00617007_0];
var_0048c955_0 = table_4eb1fe[var_00617007_0];
for (var_0061700d_0 = 0; var_0061700d_0 < 0x100; var_0061700d_0++) {
var_0043ace2_0 = table_43e740[var_0061700d_0];
var_00415c97_1 = table_5d01e5[var_0061700d_0];
var_005d0b28_1 = table_40f763[var_0061700d_0];
var_0061701f_1 = table_502cd2[var_0061700d_0];
for (var_00617008_0 = 0; var_00617008_0 < 0x100; var_00617008_0++) {
var_005cef77_0 = table_54aff9[var_00617008_0];
var_005a6a38_0 = table_5899a3[var_00617008_0];
var_0043a427_0 = table_4df6bb[var_00617008_0];
var_005d1751_0 = table_6023bc[var_00617008_0];
var_005cef77_1 = table_415efe[(var_005cef77_0 << 8) + var_0043ace2_0];
var_004aff6d_0 = table_50c7b8[(var_005ed9a2_0 << 8) + var_0048c955_0];
var_0061701e_0 = table_50c7b8[(var_005c0615_0 << 8) + var_00574341_0];
var_0057be49_2 = table_415efe[(var_005a6a38_0 << 8) + var_00415c97_1];
var_004a1a09_0 = table_415efe[(var_0043a427_0 << 8) + var_005d0b28_1];
var_00617015_0 = table_50c7b8[(var_004746a7_1 << 8) + var_005bef50_0];
var_005d1751_1 = table_415efe[(var_005d1751_0 << 8) + var_0061701f_1];
var_005c191a_1 = table_50c7b8[(var_0058d156_1 << 8) + var_005aa8a7_0];
var_00520453_1 = table_4ef23e[(var_0061701e_0 << 8) + var_005cef77_1];
var_00617013_0 = table_4ef23e[(var_004aff6d_0 << 8) + var_004a1a09_0];
var_005b9ae3_2 = table_4ef23e[(var_00617015_0 << 8) + var_005d1751_1];
var_004680c0_1 = table_4ef23e[(var_005c191a_1 << 8) + var_0057be49_2];
if(1 && var_0043512c_0 == table_5e4e34[var_00617013_0] && var_0043ace2_1 == table_52231a[var_00617013_0] && var_005ec1a8_0 == table_42628a[var_00617013_0] && var_00617017_0 == table_42ffbb[var_00617013_0] && var_0054a655_1 == table_470304[var_00520453_1] && var_005fe8c0_1 == table_5df1b0[var_00520453_1] && var_0060197f_1 == table_53db26[var_005b9ae3_2] && var_005a2f04_1 == table_49d1ee[var_005b9ae3_2] && var_005a1c6a_0 == table_446cb5[var_00520453_1] && var_0043512c_3 == table_4dd93d[var_005b9ae3_2] && var_0047a26b_0 == table_555127[var_00520453_1] && var_0046029a_1 == table_57a64b[var_005b9ae3_2] && var_005c5821_2 == table_4d6ff1[var_004680c0_1] && var_00591280_2 == table_608432[var_004680c0_1] && var_00573283_2 == table_54c671[var_004680c0_1] && var_00404f8c_2 == table_58b151[var_004680c0_1] ) {
printf("%d %d %d %d\n", var_00617002_0, var_00617007_0, var_0061700d_0, var_00617008_0 );
fflush(stdout);
goto L_12;}}}}}
L_12:
for (var_0061700a_0 = 0; var_0061700a_0 < 0x100; var_0061700a_0++) {
var_005c191a_0 = table_4e19c5[var_0061700a_0];
var_005d0b28_0 = table_43584a[var_0061700a_0];
var_004a0be5_0 = table_4d3b58[var_0061700a_0];
var_00520453_2 = table_4c0931[var_0061700a_0];
printf("%d\r", var_0061700a_0);fflush(stdout);
for (var_0061700f_0 = 0; var_0061700f_0 < 0x100; var_0061700f_0++) {
var_0057be49_0 = table_55bf00[var_0061700f_0];
var_0040da95_0 = table_5d3c2c[var_0061700f_0];
var_005e2ecc_0 = table_4db25d[var_0061700f_0];
var_004ae266_0 = table_5ae5cb[var_0061700f_0];
for (var_00617005_0 = 0; var_00617005_0 < 0x100; var_00617005_0++) {
var_0058c52d_2 = table_4df02b[var_00617005_0];
var_0055985e_1 = table_45102a[var_00617005_0];
var_004b4c8c_1 = table_4ec336[var_00617005_0];
var_004e47e2_1 = table_5fcf50[var_00617005_0];
for (var_00617000_0 = 0; var_00617000_0 < 0x100; var_00617000_0++) {
var_004e47e2_0 = table_430909[var_00617000_0];
var_00617010_0 = table_4e567c[var_00617000_0];
var_00571cf5_0 = table_438c5e[var_00617000_0];
var_004a5548_0 = table_45fb03[var_00617000_0];
var_004a29f0_0 = table_415efe[(var_005c191a_0 << 8) + var_0057be49_0];
var_00459204_1 = table_415efe[(var_004a0be5_0 << 8) + var_0040da95_0];
var_005fd9c0_0 = table_415efe[(var_005d0b28_0 << 8) + var_005e2ecc_0];
var_004c7134_0 = table_50c7b8[(var_004e47e2_0 << 8) + var_0058c52d_2];
var_0053e4ac_0 = table_50c7b8[(var_004a5548_0 << 8) + var_004b4c8c_1];
var_0055985e_2 = table_50c7b8[(var_00617010_0 << 8) + var_0055985e_1];
var_0056b399_0 = table_50c7b8[(var_00571cf5_0 << 8) + var_004e47e2_1];
var_0043512c_1 = table_415efe[(var_00520453_2 << 8) + var_004ae266_0];
var_0054a655_0 = table_4ef23e[(var_004c7134_0 << 8) + var_004a29f0_0];
var_00459204_2 = table_4ef23e[(var_0056b399_0 << 8) + var_00459204_1];
var_004aff6d_1 = table_4ef23e[(var_0055985e_2 << 8) + var_005fd9c0_0];
var_0055985e_3 = table_4ef23e[(var_0053e4ac_0 << 8) + var_0043512c_1];
if(1 && var_0061701c_1 == table_47333e[var_0054a655_0] && var_00566369_1 == table_5da709[var_0054a655_0] && var_00617016_1 == table_526caf[var_0054a655_0] && var_005bef50_2 == table_4139d1[var_0054a655_0] && var_004cff85_2 == table_4d8446[var_00459204_2] && var_00520124_1 == table_5a76a3[var_00459204_2] && var_00573283_1 == table_4663a4[var_00459204_2] && var_004bc31e_1 == table_5e0141[var_004aff6d_1] && var_0059edbe_0 == table_525abf[var_004aff6d_1] && var_005a316b_0 == table_5ea1e4[var_004aff6d_1] && var_0054fa8f_1 == table_4bd577[var_004aff6d_1] && var_0043ace2_2 == table_40f199[var_0055985e_3] && var_0053e4ac_1 == table_5fdef0[var_0055985e_3] && var_005b6f7a_0 == table_461b15[var_0055985e_3] && var_004bc31e_2 == table_49542c[var_0055985e_3] && var_00505d67_0 == table_437df4[var_00459204_2] ) {
printf("%d %d %d %d\n", var_0061700a_0, var_0061700f_0, var_00617005_0, var_00617000_0 );
fflush(stdout);
goto L_8;}}}}}
L_8:
for (var_0061700b_0 = 0; var_0061700b_0 < 0x100; var_0061700b_0++) {
var_0055985e_0 = table_5b71a8[var_0061700b_0];
var_00566369_0 = table_5b3f86[var_0061700b_0];
var_0057be49_1 = table_44709c[var_0061700b_0];
var_0045b76e_1 = table_54dc4e[var_0061700b_0];
printf("%d\r", var_0061700b_0);fflush(stdout);
for (var_0061700c_0 = 0; var_0061700c_0 < 0x100; var_0061700c_0++) {
var_0049d7f9_0 = table_605bc8[var_0061700c_0];
var_005b9ae3_0 = table_5c1bf2[var_0061700c_0];
var_005fa23c_0 = table_42759c[var_0061700c_0];
var_00520453_0 = table_6151eb[var_0061700c_0];
for (var_00617006_0 = 0; var_00617006_0 < 0x100; var_00617006_0++) {
var_005a2f04_0 = table_61487a[var_00617006_0];
var_0061701f_0 = table_4eb656[var_00617006_0];
var_005fa23c_1 = table_47906a[var_00617006_0];
var_005bef50_1 = table_42733a[var_00617006_0];
for (var_00617001_0 = 0; var_00617001_0 < 0x100; var_00617001_0++) {
var_0058c52d_0 = table_4b765d[var_00617001_0];
var_00617012_0 = table_57247b[var_00617001_0];
var_005f5d05_0 = table_5ff3d0[var_00617001_0];
var_0048da35_0 = table_5edb6a[var_00617001_0];
var_005a379c_0 = table_50c7b8[(var_0058c52d_0 << 8) + var_005a2f04_0];
var_00415c97_0 = table_415efe[(var_0055985e_0 << 8) + var_005b9ae3_0];
var_004bc31e_0 = table_50c7b8[(var_00617012_0 << 8) + var_0061701f_0];
var_0058c52d_1 = table_415efe[(var_0057be49_1 << 8) + var_005fa23c_0];
var_004746a7_0 = table_50c7b8[(var_005f5d05_0 << 8) + var_005fa23c_1];
var_004a0be5_1 = table_415efe[(var_00566369_0 << 8) + var_00520453_0];
var_0048da35_1 = table_50c7b8[(var_0048da35_0 << 8) + var_005bef50_1];
var_005cef77_2 = table_415efe[(var_0045b76e_1 << 8) + var_0049d7f9_0];
var_005c522f_0 = table_4ef23e[(var_004746a7_0 << 8) + var_00415c97_0];
var_0044989e_0 = table_4ef23e[(var_004bc31e_0 << 8) + var_0058c52d_1];
var_004746a7_2 = table_4ef23e[(var_0048da35_1 << 8) + var_004a0be5_1];
var_0048da35_2 = table_4ef23e[(var_005a379c_0 << 8) + var_005cef77_2];
if(1 && var_004dde6b_0 == table_5cd110[var_0044989e_0] && var_0058850e_0 == table_5df8bb[var_0044989e_0] && var_0040da95_1 == table_44b82d[var_005c522f_0] && var_005bfb4c_0 == table_47daac[var_005c522f_0] && var_005c0615_1 == table_4a33ea[var_0044989e_0] && var_0048c955_1 == table_541ec9[var_005c522f_0] && var_0044989e_1 == table_527045[var_0044989e_0] && var_005c5821_1 == table_4c65d4[var_005c522f_0] && var_00617012_1 == table_5c085a[var_004746a7_2] && var_005c522f_1 == table_554d97[var_004746a7_2] && var_005fa23c_3 == table_57efc4[var_004746a7_2] && var_0058d156_0 == table_49a73d[var_004746a7_2] && var_005cef77_3 == table_5730dd[var_0048da35_2] && var_005b33e0_0 == table_4d925d[var_0048da35_2] && var_00617014_0 == table_42abca[var_0048da35_2] && var_0061441a_3 == table_5224a6[var_0048da35_2] ) {
printf("%d %d %d %d\n", var_0061700b_0, var_0061700c_0, var_00617006_0, var_00617001_0 );
fflush(stdout);
goto L_4;}}}}}
L_4:
for (var_0061700e_0 = 0; var_0061700e_0 < 0x100; var_0061700e_0++) {
var_00591280_0 = table_54f184[var_0061700e_0];
var_00590a90_0 = table_550aa4[var_0061700e_0];
var_005c5821_0 = table_5ca23e[var_0061700e_0];
var_0044ae8b_1 = table_4d2b65[var_0061700e_0];
printf("%d\r", var_0061700e_0);fflush(stdout);
for (var_00617009_0 = 0; var_00617009_0 < 0x100; var_00617009_0++) {
var_00459204_0 = table_42d6cd[var_00617009_0];
var_00520124_0 = table_543307[var_00617009_0];
var_00573283_0 = table_5ed212[var_00617009_0];
var_00499d02_0 = table_543b97[var_00617009_0];
for (var_00617004_0 = 0; var_00617004_0 < 0x100; var_00617004_0++) {
var_0054fa8f_0 = table_5b8e5c[var_00617004_0];
var_0045b76e_0 = table_554aab[var_00617004_0];
var_0045436d_0 = table_553461[var_00617004_0];
var_004b4c8c_0 = table_479e07[var_00617004_0];
for (var_00617003_0 = 0; var_00617003_0 < 0x100; var_00617003_0++) {
var_0044ae8b_0 = table_55acdf[var_00617003_0];
var_0061441a_0 = table_4b6115[var_00617003_0];
var_00617016_0 = table_4a3c76[var_00617003_0];
var_005fe8c0_0 = table_538e75[var_00617003_0];
var_004cff85_0 = table_415efe[(var_00459204_0 << 8) + var_00591280_0];
var_00404f8c_0 = table_415efe[(var_00520124_0 << 8) + var_005c5821_0];
var_0061701c_0 = table_50c7b8[(var_0044ae8b_0 << 8) + var_0054fa8f_0];
var_00605846_0 = table_50c7b8[(var_0061441a_0 << 8) + var_0045b76e_0];
var_0060197f_0 = table_415efe[(var_00499d02_0 << 8) + var_00590a90_0];
var_0061441a_1 = table_50c7b8[(var_005fe8c0_0 << 8) + var_0045436d_0];
var_005fa23c_2 = table_50c7b8[(var_00617016_0 << 8) + var_004b4c8c_0];
var_0043a427_1 = table_415efe[(var_00573283_0 << 8) + var_0044ae8b_1];
var_00617019_0 = table_4ef23e[(var_0061441a_1 << 8) + var_00404f8c_0];
var_0061441a_2 = table_4ef23e[(var_005fa23c_2 << 8) + var_004cff85_0];
var_00617010_1 = table_4ef23e[(var_00605846_0 << 8) + var_0060197f_0];
var_005b46f9_0 = table_4ef23e[(var_0061701c_0 << 8) + var_0043a427_1];
if(1 && var_00590a90_1 == table_40d386[var_00617019_0] && var_0043df43_0 == table_492adf[var_0061441a_2] && var_0049e624_0 == table_5ee523[var_00617010_1] && var_004cff85_1 == table_42ced6[var_00617010_1] && var_0049d7f9_1 == table_45c489[var_00617019_0] && var_00415c97_2 == table_5eb74f[var_0061441a_2] && var_0061701b_0 == table_56e697[var_005b46f9_0] && var_004109d6_0 == table_4ab779[var_00617019_0] && var_004386bf_0 == table_5afc32[var_005b46f9_0] && var_004680c0_0 == table_5288c4[var_005b46f9_0] && var_00470f07_0 == table_5d945f[var_0061441a_2] && var_005b9ae3_1 == table_40d60b[var_00617010_1] && var_0045436d_1 == table_4e7dab[var_0061441a_2] && var_00574341_1 == table_4a7df3[var_00617019_0] && var_004e47e2_2 == table_5c53aa[var_00617010_1] && var_00605846_2 == table_41135d[var_005b46f9_0] ) {
printf("%d %d %d %d\n", var_0061700e_0, var_00617009_0, var_00617004_0, var_00617003_0 );
fflush(stdout);
goto L_0;}}}}}
L_0:
printf("%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n", var_00617000_0, var_00617001_0, var_00617002_0, var_00617003_0, var_00617004_0, var_00617005_0, var_00617006_0, var_00617007_0, var_00617008_0, var_00617009_0, var_0061700a_0, var_0061700b_0, var_0061700c_0, var_0061700d_0, var_0061700e_0, var_0061700f_0);
}
