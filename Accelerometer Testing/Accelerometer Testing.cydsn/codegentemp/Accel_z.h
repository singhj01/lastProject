/*******************************************************************************
* File Name: Accel_Z.h  
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

#if !defined(CY_PINS_Accel_Z_H) /* Pins Accel_Z_H */
#define CY_PINS_Accel_Z_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Accel_Z_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Accel_Z_Write(uint8 value) ;
void    Accel_Z_SetDriveMode(uint8 mode) ;
uint8   Accel_Z_ReadDataReg(void) ;
uint8   Accel_Z_Read(void) ;
uint8   Accel_Z_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Accel_Z_DRIVE_MODE_BITS        (3)
#define Accel_Z_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Accel_Z_DRIVE_MODE_BITS))

#define Accel_Z_DM_ALG_HIZ         (0x00u)
#define Accel_Z_DM_DIG_HIZ         (0x01u)
#define Accel_Z_DM_RES_UP          (0x02u)
#define Accel_Z_DM_RES_DWN         (0x03u)
#define Accel_Z_DM_OD_LO           (0x04u)
#define Accel_Z_DM_OD_HI           (0x05u)
#define Accel_Z_DM_STRONG          (0x06u)
#define Accel_Z_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Accel_Z_MASK               Accel_Z__MASK
#define Accel_Z_SHIFT              Accel_Z__SHIFT
#define Accel_Z_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Accel_Z_PS                     (* (reg32 *) Accel_Z__PS)
/* Port Configuration */
#define Accel_Z_PC                     (* (reg32 *) Accel_Z__PC)
/* Data Register */
#define Accel_Z_DR                     (* (reg32 *) Accel_Z__DR)
/* Input Buffer Disable Override */
#define Accel_Z_INP_DIS                (* (reg32 *) Accel_Z__PC2)


#if defined(Accel_Z__INTSTAT)  /* Interrupt Registers */

    #define Accel_Z_INTSTAT                (* (reg32 *) Accel_Z__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Accel_Z_DRIVE_MODE_SHIFT       (0x00u)
#define Accel_Z_DRIVE_MODE_MASK        (0x07u << Accel_Z_DRIVE_MODE_SHIFT)


#endif /* End Pins Accel_Z_H */


/* [] END OF FILE */
