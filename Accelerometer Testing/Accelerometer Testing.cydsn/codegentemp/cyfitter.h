#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* Red */
#define Red__0__DR CYREG_GPIO_PRT2_DR
#define Red__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Red__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Red__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Red__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Red__0__HSIOM_MASK 0x0F000000u
#define Red__0__HSIOM_SHIFT 24u
#define Red__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Red__0__INTR CYREG_GPIO_PRT2_INTR
#define Red__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Red__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define Red__0__MASK 0x40u
#define Red__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define Red__0__OUT_SEL_SHIFT 12u
#define Red__0__OUT_SEL_VAL 1u
#define Red__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Red__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Red__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Red__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Red__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Red__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Red__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Red__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Red__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Red__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Red__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Red__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Red__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Red__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Red__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Red__0__PC CYREG_GPIO_PRT2_PC
#define Red__0__PC2 CYREG_GPIO_PRT2_PC2
#define Red__0__PORT 2u
#define Red__0__PS CYREG_GPIO_PRT2_PS
#define Red__0__SHIFT 6
#define Red__DR CYREG_GPIO_PRT2_DR
#define Red__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Red__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Red__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Red__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Red__INTR CYREG_GPIO_PRT2_INTR
#define Red__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Red__INTSTAT CYREG_GPIO_PRT2_INTR
#define Red__MASK 0x40u
#define Red__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Red__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Red__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Red__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Red__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Red__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Red__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Red__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Red__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Red__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Red__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Red__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Red__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Red__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Red__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Red__PC CYREG_GPIO_PRT2_PC
#define Red__PC2 CYREG_GPIO_PRT2_PC2
#define Red__PORT 2u
#define Red__PS CYREG_GPIO_PRT2_PS
#define Red__SHIFT 6

/* Blue */
#define Blue__0__DR CYREG_GPIO_PRT3_DR
#define Blue__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Blue__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Blue__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Blue__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Blue__0__HSIOM_MASK 0xF0000000u
#define Blue__0__HSIOM_SHIFT 28u
#define Blue__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Blue__0__INTR CYREG_GPIO_PRT3_INTR
#define Blue__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Blue__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Blue__0__MASK 0x80u
#define Blue__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define Blue__0__OUT_SEL_SHIFT 14u
#define Blue__0__OUT_SEL_VAL 1u
#define Blue__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Blue__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Blue__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Blue__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Blue__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Blue__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Blue__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Blue__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Blue__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Blue__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Blue__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Blue__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Blue__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Blue__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Blue__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Blue__0__PC CYREG_GPIO_PRT3_PC
#define Blue__0__PC2 CYREG_GPIO_PRT3_PC2
#define Blue__0__PORT 3u
#define Blue__0__PS CYREG_GPIO_PRT3_PS
#define Blue__0__SHIFT 7
#define Blue__DR CYREG_GPIO_PRT3_DR
#define Blue__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Blue__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Blue__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Blue__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Blue__INTR CYREG_GPIO_PRT3_INTR
#define Blue__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Blue__INTSTAT CYREG_GPIO_PRT3_INTR
#define Blue__MASK 0x80u
#define Blue__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Blue__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Blue__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Blue__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Blue__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Blue__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Blue__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Blue__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Blue__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Blue__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Blue__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Blue__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Blue__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Blue__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Blue__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Blue__PC CYREG_GPIO_PRT3_PC
#define Blue__PC2 CYREG_GPIO_PRT3_PC2
#define Blue__PORT 3u
#define Blue__PS CYREG_GPIO_PRT3_PS
#define Blue__SHIFT 7

/* Green */
#define Green__0__DR CYREG_GPIO_PRT3_DR
#define Green__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Green__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Green__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Green__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Green__0__HSIOM_MASK 0x0F000000u
#define Green__0__HSIOM_SHIFT 24u
#define Green__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Green__0__INTR CYREG_GPIO_PRT3_INTR
#define Green__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Green__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Green__0__MASK 0x40u
#define Green__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define Green__0__OUT_SEL_SHIFT 12u
#define Green__0__OUT_SEL_VAL 0u
#define Green__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Green__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Green__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Green__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Green__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Green__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Green__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Green__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Green__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Green__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Green__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Green__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Green__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Green__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Green__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Green__0__PC CYREG_GPIO_PRT3_PC
#define Green__0__PC2 CYREG_GPIO_PRT3_PC2
#define Green__0__PORT 3u
#define Green__0__PS CYREG_GPIO_PRT3_PS
#define Green__0__SHIFT 6
#define Green__DR CYREG_GPIO_PRT3_DR
#define Green__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Green__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Green__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Green__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Green__INTR CYREG_GPIO_PRT3_INTR
#define Green__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Green__INTSTAT CYREG_GPIO_PRT3_INTR
#define Green__MASK 0x40u
#define Green__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Green__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Green__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Green__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Green__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Green__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Green__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Green__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Green__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Green__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Green__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Green__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Green__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Green__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Green__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Green__PC CYREG_GPIO_PRT3_PC
#define Green__PC2 CYREG_GPIO_PRT3_PC2
#define Green__PORT 3u
#define Green__PS CYREG_GPIO_PRT3_PS
#define Green__SHIFT 6

/* Accel_X */
#define Accel_X__0__DR CYREG_GPIO_PRT3_DR
#define Accel_X__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Accel_X__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Accel_X__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Accel_X__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Accel_X__0__HSIOM_MASK 0x0000000Fu
#define Accel_X__0__HSIOM_SHIFT 0u
#define Accel_X__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_X__0__INTR CYREG_GPIO_PRT3_INTR
#define Accel_X__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_X__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Accel_X__0__MASK 0x01u
#define Accel_X__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Accel_X__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Accel_X__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Accel_X__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Accel_X__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Accel_X__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Accel_X__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Accel_X__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Accel_X__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Accel_X__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Accel_X__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Accel_X__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Accel_X__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Accel_X__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Accel_X__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Accel_X__0__PC CYREG_GPIO_PRT3_PC
#define Accel_X__0__PC2 CYREG_GPIO_PRT3_PC2
#define Accel_X__0__PORT 3u
#define Accel_X__0__PS CYREG_GPIO_PRT3_PS
#define Accel_X__0__SHIFT 0
#define Accel_X__DR CYREG_GPIO_PRT3_DR
#define Accel_X__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Accel_X__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Accel_X__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Accel_X__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_X__INTR CYREG_GPIO_PRT3_INTR
#define Accel_X__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_X__INTSTAT CYREG_GPIO_PRT3_INTR
#define Accel_X__MASK 0x01u
#define Accel_X__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Accel_X__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Accel_X__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Accel_X__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Accel_X__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Accel_X__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Accel_X__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Accel_X__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Accel_X__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Accel_X__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Accel_X__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Accel_X__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Accel_X__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Accel_X__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Accel_X__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Accel_X__PC CYREG_GPIO_PRT3_PC
#define Accel_X__PC2 CYREG_GPIO_PRT3_PC2
#define Accel_X__PORT 3u
#define Accel_X__PS CYREG_GPIO_PRT3_PS
#define Accel_X__SHIFT 0

/* Accel_y */
#define Accel_y__0__DR CYREG_GPIO_PRT3_DR
#define Accel_y__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Accel_y__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Accel_y__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Accel_y__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Accel_y__0__HSIOM_MASK 0x000000F0u
#define Accel_y__0__HSIOM_SHIFT 4u
#define Accel_y__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_y__0__INTR CYREG_GPIO_PRT3_INTR
#define Accel_y__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_y__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Accel_y__0__MASK 0x02u
#define Accel_y__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Accel_y__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Accel_y__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Accel_y__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Accel_y__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Accel_y__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Accel_y__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Accel_y__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Accel_y__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Accel_y__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Accel_y__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Accel_y__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Accel_y__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Accel_y__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Accel_y__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Accel_y__0__PC CYREG_GPIO_PRT3_PC
#define Accel_y__0__PC2 CYREG_GPIO_PRT3_PC2
#define Accel_y__0__PORT 3u
#define Accel_y__0__PS CYREG_GPIO_PRT3_PS
#define Accel_y__0__SHIFT 1
#define Accel_y__DR CYREG_GPIO_PRT3_DR
#define Accel_y__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Accel_y__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Accel_y__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Accel_y__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_y__INTR CYREG_GPIO_PRT3_INTR
#define Accel_y__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_y__INTSTAT CYREG_GPIO_PRT3_INTR
#define Accel_y__MASK 0x02u
#define Accel_y__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Accel_y__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Accel_y__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Accel_y__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Accel_y__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Accel_y__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Accel_y__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Accel_y__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Accel_y__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Accel_y__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Accel_y__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Accel_y__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Accel_y__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Accel_y__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Accel_y__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Accel_y__PC CYREG_GPIO_PRT3_PC
#define Accel_y__PC2 CYREG_GPIO_PRT3_PC2
#define Accel_y__PORT 3u
#define Accel_y__PS CYREG_GPIO_PRT3_PS
#define Accel_y__SHIFT 1

/* Accel_z */
#define Accel_z__0__DR CYREG_GPIO_PRT3_DR
#define Accel_z__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Accel_z__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Accel_z__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Accel_z__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Accel_z__0__HSIOM_MASK 0x00000F00u
#define Accel_z__0__HSIOM_SHIFT 8u
#define Accel_z__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_z__0__INTR CYREG_GPIO_PRT3_INTR
#define Accel_z__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_z__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Accel_z__0__MASK 0x04u
#define Accel_z__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Accel_z__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Accel_z__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Accel_z__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Accel_z__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Accel_z__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Accel_z__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Accel_z__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Accel_z__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Accel_z__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Accel_z__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Accel_z__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Accel_z__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Accel_z__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Accel_z__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Accel_z__0__PC CYREG_GPIO_PRT3_PC
#define Accel_z__0__PC2 CYREG_GPIO_PRT3_PC2
#define Accel_z__0__PORT 3u
#define Accel_z__0__PS CYREG_GPIO_PRT3_PS
#define Accel_z__0__SHIFT 2
#define Accel_z__DR CYREG_GPIO_PRT3_DR
#define Accel_z__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Accel_z__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Accel_z__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Accel_z__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_z__INTR CYREG_GPIO_PRT3_INTR
#define Accel_z__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Accel_z__INTSTAT CYREG_GPIO_PRT3_INTR
#define Accel_z__MASK 0x04u
#define Accel_z__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Accel_z__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Accel_z__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Accel_z__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Accel_z__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Accel_z__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Accel_z__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Accel_z__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Accel_z__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Accel_z__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Accel_z__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Accel_z__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Accel_z__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Accel_z__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Accel_z__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Accel_z__PC CYREG_GPIO_PRT3_PC
#define Accel_z__PC2 CYREG_GPIO_PRT3_PC2
#define Accel_z__PORT 3u
#define Accel_z__PS CYREG_GPIO_PRT3_PS
#define Accel_z__SHIFT 2

/* Miscellaneous */
#define CY_VERSION "PSoC Creator  3.1 SP3"
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */