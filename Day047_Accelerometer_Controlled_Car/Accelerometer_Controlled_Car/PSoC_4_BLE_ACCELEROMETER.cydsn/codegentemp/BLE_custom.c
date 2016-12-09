/*******************************************************************************
File Name: CYBLE_custom.c
Version 1.20

Description:
 Contains the source code for the Custom Service.

********************************************************************************
Copyright 2014-2015, Cypress Semiconductor Corporation.  All rights reserved.
You may use this file only in accordance with the license, terms, conditions,
disclaimers, and limitations in the end user license agreement accompanying
the software package with which this file was provided.
*******************************************************************************/


#include "BLE_eventHandler.h"

#if(0u != CYBLE_CUSTOMS_SERVICE_COUNT)

/* If any custom service with custom characterisctis is defined in the
* customizer's GUI their handles will be present in this array.
*/
/* This array contains attribute handles for the defined Custom Services and their characteristics and descriptors.
   The array index definitions are located in the CYBLE_custom.h file. */
const CYBLE_CUSTOMS_T cyBle_customs[0x01u] = {

    /* Server_Accel service */
    {
        0x000Cu, /* Handle of the Server_Accel service */ 
        {

            /* Server_Accel_Tx_data characteristic */
            {
                0x000Eu, /* Handle of the Server_Accel_Tx_data characteristic */ 
                
                /* Array of Descriptors handles */
                {
                    0x000Fu, /* Handle of the Client Characteristic Configuration descriptor */ 
                }, 
            },
        }, 
    },
};


#endif /* (0u != CYBLE_CUSTOMS_SERVICE_COUNT) */

#if(0u != CYBLE_CUSTOMC_SERVICE_COUNT)

#endif /* (0u != CYBLE_CUSTOMC_SERVICE_COUNT) */


/* [] END OF FILE */
