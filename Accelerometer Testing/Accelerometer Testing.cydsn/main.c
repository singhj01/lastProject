/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

void colorChange(int state);
void Intensity(int state);

void colorChange(state){
  switch (state){
    case 1:
        /*Red*/
        Red_Write(0xFF);
        Blue_Write(0x00);
        Green_Write(0x00);
        break;
    case 2:
        /*Blue*/
        break;
    case 3:
        /*Green*/
        break;
    case 4:
        /*more colors*/
        break;
    default:
        /*back to white*/
        break;
    }
}
void Intensity(state){
    switch(state){
        case 1:
            /*max level*/
        break;
        case 2:
            /*medium*/
        break;
        case 3:
            /*min*/
        break;
        case 4:
            /*off*/
        break;
        default:
            /*make sure things are not breaking*/
        break;        
    }
}

int main()
{
    /* intialize state variables
    int colorState = 0;
    int intensityState = 0;
    */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    CyGlobalIntEnable;  /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
    /* generic outline for code
      
        
        if("LeftGesture"){
            if (colorState>=1){
                colorState--;
                colorChange(colorState);
            }
            if (colorState<1){
                colorState = 1;
            }
            delay(sometime);
        }
        if("RightGesture"){
            if (colorState <= maxState){
                colorState++;
                colorChange(colorState);
            }
            if (colorState>maxState){
                colorState = maxState;
            }
            delay(sometime);
        }
        if("FrontGesture"){
        intensityState++;
        Intensity(upState);
        delay(sometime);
        }
        if("DownGesture"){
        intensityState--;
        Intensity(downState);
        delay(sometime);
        }
        
        
    */    
    }
}

/* [] END OF FILE */
