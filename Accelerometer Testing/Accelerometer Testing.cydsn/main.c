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

void changeColor(int state);
void upIntensity(int state);
void downIntensity(int state);
void toggleOnOFF(int state);

void changeColor(state){
  switch (state){
    case 1:
        /*Red*/
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

int main()
{
    /* intialize state variables
    int toggleState = 0; 
    int colorState = 0;
    int upState = 0;
    int downState = 0;*/
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    CyGlobalIntEnable;  /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
    /* generic outline for code
      
        
        if("LeftGesture"){
        toggleState++;
        toggleOnOFF(toggleState);
        }
        if("RightGesture"){
        colorState++;
        changeColor(colorState);
        }
        if("FrontGesture"){
        upState++;
        upIntensity(upState);
        }
        if("DownGesture"){
        downState++;
        downIntensity(downState);
        }
        
        
        
    */    
    }
}

/* [] END OF FILE */
