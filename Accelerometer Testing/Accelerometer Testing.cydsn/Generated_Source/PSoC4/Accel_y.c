/*******************************************************************************
* File Name: Accel_y.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Accel_y.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        Accel_y_PC =   (Accel_y_PC & \
                                (uint32)(~(uint32)(Accel_y_DRIVE_MODE_IND_MASK << (Accel_y_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (Accel_y_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: Accel_y_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Accel_y_Write(uint8 value) 
{
    uint8 drVal = (uint8)(Accel_y_DR & (uint8)(~Accel_y_MASK));
    drVal = (drVal | ((uint8)(value << Accel_y_SHIFT) & Accel_y_MASK));
    Accel_y_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: Accel_y_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Accel_y_DM_STRONG     Strong Drive 
*  Accel_y_DM_OD_HI      Open Drain, Drives High 
*  Accel_y_DM_OD_LO      Open Drain, Drives Low 
*  Accel_y_DM_RES_UP     Resistive Pull Up 
*  Accel_y_DM_RES_DWN    Resistive Pull Down 
*  Accel_y_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Accel_y_DM_DIG_HIZ    High Impedance Digital 
*  Accel_y_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Accel_y_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(Accel_y__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: Accel_y_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Accel_y_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Accel_y_Read(void) 
{
    return (uint8)((Accel_y_PS & Accel_y_MASK) >> Accel_y_SHIFT);
}


/*******************************************************************************
* Function Name: Accel_y_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Accel_y_ReadDataReg(void) 
{
    return (uint8)((Accel_y_DR & Accel_y_MASK) >> Accel_y_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Accel_y_INTSTAT) 

    /*******************************************************************************
    * Function Name: Accel_y_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Accel_y_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(Accel_y_INTSTAT & Accel_y_MASK);
		Accel_y_INTSTAT = maskedStatus;
        return maskedStatus >> Accel_y_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
