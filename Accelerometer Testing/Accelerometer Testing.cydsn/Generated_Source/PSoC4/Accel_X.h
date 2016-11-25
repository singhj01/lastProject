/*******************************************************************************
* File Name: Accel_X.h  
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

#if !defined(CY_PINS_Accel_X_H) /* Pins Accel_X_H */
#define CY_PINS_Accel_X_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Accel_X_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Accel_X_Write(uint8 value) ;
void    Accel_X_SetDriveMode(uint8 mode) ;
uint8   Accel_X_ReadDataReg(void) ;
uint8   Accel_X_Read(void) ;
uint8   Accel_X_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Accel_X_DRIVE_MODE_BITS        (3)
#define Accel_X_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Accel_X_DRIVE_MODE_BITS))

#define Accel_X_DM_ALG_HIZ         (0x00u)
#define Accel_X_DM_DIG_HIZ         (0x01u)
#define Accel_X_DM_RES_UP          (0x02u)
#define Accel_X_DM_RES_DWN         (0x03u)
#define Accel_X_DM_OD_LO           (0x04u)
#define Accel_X_DM_OD_HI           (0x05u)
#define Accel_X_DM_STRONG          (0x06u)
#define Accel_X_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Accel_X_MASK               Accel_X__MASK
#define Accel_X_SHIFT              Accel_X__SHIFT
#define Accel_X_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Accel_X_PS                     (* (reg32 *) Accel_X__PS)
/* Port Configuration */
#define Accel_X_PC                     (* (reg32 *) Accel_X__PC)
/* Data Register */
#define Accel_X_DR                     (* (reg32 *) Accel_X__DR)
/* Input Buffer Disable Override */
#define Accel_X_INP_DIS                (* (reg32 *) Accel_X__PC2)


#if defined(Accel_X__INTSTAT)  /* Interrupt Registers */

    #define Accel_X_INTSTAT                (* (reg32 *) Accel_X__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Accel_X_DRIVE_MODE_SHIFT       (0x00u)
#define Accel_X_DRIVE_MODE_MASK        (0x07u << Accel_X_DRIVE_MODE_SHIFT)


#endif /* End Pins Accel_X_H */


/* [] END OF FILE */
