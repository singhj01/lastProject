/*******************************************************************************
* File Name: Accelerometer_Y.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Accelerometer_Y_H) /* Pins Accelerometer_Y_H */
#define CY_PINS_Accelerometer_Y_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Accelerometer_Y_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Accelerometer_Y_Write(uint8 value) ;
void    Accelerometer_Y_SetDriveMode(uint8 mode) ;
uint8   Accelerometer_Y_ReadDataReg(void) ;
uint8   Accelerometer_Y_Read(void) ;
uint8   Accelerometer_Y_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Accelerometer_Y_DRIVE_MODE_BITS        (3)
#define Accelerometer_Y_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Accelerometer_Y_DRIVE_MODE_BITS))

#define Accelerometer_Y_DM_ALG_HIZ         (0x00u)
#define Accelerometer_Y_DM_DIG_HIZ         (0x01u)
#define Accelerometer_Y_DM_RES_UP          (0x02u)
#define Accelerometer_Y_DM_RES_DWN         (0x03u)
#define Accelerometer_Y_DM_OD_LO           (0x04u)
#define Accelerometer_Y_DM_OD_HI           (0x05u)
#define Accelerometer_Y_DM_STRONG          (0x06u)
#define Accelerometer_Y_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Accelerometer_Y_MASK               Accelerometer_Y__MASK
#define Accelerometer_Y_SHIFT              Accelerometer_Y__SHIFT
#define Accelerometer_Y_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Accelerometer_Y_PS                     (* (reg32 *) Accelerometer_Y__PS)
/* Port Configuration */
#define Accelerometer_Y_PC                     (* (reg32 *) Accelerometer_Y__PC)
/* Data Register */
#define Accelerometer_Y_DR                     (* (reg32 *) Accelerometer_Y__DR)
/* Input Buffer Disable Override */
#define Accelerometer_Y_INP_DIS                (* (reg32 *) Accelerometer_Y__PC2)


#if defined(Accelerometer_Y__INTSTAT)  /* Interrupt Registers */

    #define Accelerometer_Y_INTSTAT                (* (reg32 *) Accelerometer_Y__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Accelerometer_Y_DRIVE_MODE_SHIFT       (0x00u)
#define Accelerometer_Y_DRIVE_MODE_MASK        (0x07u << Accelerometer_Y_DRIVE_MODE_SHIFT)


#endif /* End Pins Accelerometer_Y_H */


/* [] END OF FILE */
