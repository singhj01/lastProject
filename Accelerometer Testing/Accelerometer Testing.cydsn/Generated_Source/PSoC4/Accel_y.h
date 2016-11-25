/*******************************************************************************
* File Name: Accel_y.h  
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

#if !defined(CY_PINS_Accel_y_H) /* Pins Accel_y_H */
#define CY_PINS_Accel_y_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Accel_y_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Accel_y_Write(uint8 value) ;
void    Accel_y_SetDriveMode(uint8 mode) ;
uint8   Accel_y_ReadDataReg(void) ;
uint8   Accel_y_Read(void) ;
uint8   Accel_y_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Accel_y_DRIVE_MODE_BITS        (3)
#define Accel_y_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Accel_y_DRIVE_MODE_BITS))

#define Accel_y_DM_ALG_HIZ         (0x00u)
#define Accel_y_DM_DIG_HIZ         (0x01u)
#define Accel_y_DM_RES_UP          (0x02u)
#define Accel_y_DM_RES_DWN         (0x03u)
#define Accel_y_DM_OD_LO           (0x04u)
#define Accel_y_DM_OD_HI           (0x05u)
#define Accel_y_DM_STRONG          (0x06u)
#define Accel_y_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Accel_y_MASK               Accel_y__MASK
#define Accel_y_SHIFT              Accel_y__SHIFT
#define Accel_y_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Accel_y_PS                     (* (reg32 *) Accel_y__PS)
/* Port Configuration */
#define Accel_y_PC                     (* (reg32 *) Accel_y__PC)
/* Data Register */
#define Accel_y_DR                     (* (reg32 *) Accel_y__DR)
/* Input Buffer Disable Override */
#define Accel_y_INP_DIS                (* (reg32 *) Accel_y__PC2)


#if defined(Accel_y__INTSTAT)  /* Interrupt Registers */

    #define Accel_y_INTSTAT                (* (reg32 *) Accel_y__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Accel_y_DRIVE_MODE_SHIFT       (0x00u)
#define Accel_y_DRIVE_MODE_MASK        (0x07u << Accel_y_DRIVE_MODE_SHIFT)


#endif /* End Pins Accel_y_H */


/* [] END OF FILE */
