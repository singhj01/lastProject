/*******************************************************************************
* File Name: Accel_Y.h  
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

#if !defined(CY_PINS_Accel_Y_H) /* Pins Accel_Y_H */
#define CY_PINS_Accel_Y_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Accel_Y_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Accel_Y_Write(uint8 value) ;
void    Accel_Y_SetDriveMode(uint8 mode) ;
uint8   Accel_Y_ReadDataReg(void) ;
uint8   Accel_Y_Read(void) ;
uint8   Accel_Y_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Accel_Y_DRIVE_MODE_BITS        (3)
#define Accel_Y_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Accel_Y_DRIVE_MODE_BITS))

#define Accel_Y_DM_ALG_HIZ         (0x00u)
#define Accel_Y_DM_DIG_HIZ         (0x01u)
#define Accel_Y_DM_RES_UP          (0x02u)
#define Accel_Y_DM_RES_DWN         (0x03u)
#define Accel_Y_DM_OD_LO           (0x04u)
#define Accel_Y_DM_OD_HI           (0x05u)
#define Accel_Y_DM_STRONG          (0x06u)
#define Accel_Y_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Accel_Y_MASK               Accel_Y__MASK
#define Accel_Y_SHIFT              Accel_Y__SHIFT
#define Accel_Y_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Accel_Y_PS                     (* (reg32 *) Accel_Y__PS)
/* Port Configuration */
#define Accel_Y_PC                     (* (reg32 *) Accel_Y__PC)
/* Data Register */
#define Accel_Y_DR                     (* (reg32 *) Accel_Y__DR)
/* Input Buffer Disable Override */
#define Accel_Y_INP_DIS                (* (reg32 *) Accel_Y__PC2)


#if defined(Accel_Y__INTSTAT)  /* Interrupt Registers */

    #define Accel_Y_INTSTAT                (* (reg32 *) Accel_Y__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Accel_Y_DRIVE_MODE_SHIFT       (0x00u)
#define Accel_Y_DRIVE_MODE_MASK        (0x07u << Accel_Y_DRIVE_MODE_SHIFT)


#endif /* End Pins Accel_Y_H */


/* [] END OF FILE */
