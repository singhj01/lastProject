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

void colorChange(int state, uint8 intensity);
uint8 Intensity(int state);
uint8 Scan_Accelerometer();

int16 X_DEFAULT = 0x0662;
int16 Y_DEFAULT = 0x0606;
int16 Z_DEFAULT = 0x04FB;
int16 ADC_x_current, ADC_y_current, ADC_z_current;


void colorChange(int state, uint8 intensity){
  switch (state){
    case 1:
        /*Red*/
        RED_Write(intensity);
        BLUE_Write(0xFF);
        GREEN_Write(0xFF);
        break;
    case 2:
        /*Blue*/
        RED_Write(0xFF);
        BLUE_Write(intensity);
        GREEN_Write(0xFF);
        break;
    case 3:
        /*Green*/
        RED_Write(0xFF);
        BLUE_Write(0xFF);
        GREEN_Write(intensity);
        break;
    case 4:
        /*purple*/
        RED_Write(intensity);
        BLUE_Write(intensity);
        GREEN_Write(0xFF);
        break;
    default:
        RED_Write(0x00);
        BLUE_Write(0x00);
        GREEN_Write(0x00);
        break;
    }
}
uint8 Intensity(state){
    uint8 intensity;
    switch(state){
        case 1:
            /*max level*/
            intensity = 0x00;
        break;
        case 2:
            /*medium*/
            intensity = 0x55;
        break;
        case 3:
            /*min*/
            intensity = 0xAA;
        break;
        case 4:
            /*off*/
            intensity = 0xFF;
        break;
        default:
            intensity = 0x00;
        break;        
    }
    return intensity;
}
uint8 Scan_Accelerometer()
{  
	
	if(Sensor_ADC_IsEndConversion(Sensor_ADC_RETURN_STATUS))
	{
		ADC_x_current = Sensor_ADC_CountsTo_mVolts(0, Sensor_ADC_GetResult16(0));
		ADC_y_current = Sensor_ADC_CountsTo_mVolts(1, Sensor_ADC_GetResult16(1));
		ADC_z_current = Sensor_ADC_CountsTo_mVolts(2, Sensor_ADC_GetResult16(2));
		/*Normal gesture idetified*/
		if((ADC_y_current>=(Y_DEFAULT-0x00A0) && ADC_y_current<= (Y_DEFAULT+0x00A0))&&(ADC_z_current>=(Z_DEFAULT-0x0040) && ADC_z_current<=(Z_DEFAULT+0x0040))&& (ADC_x_current>=(X_DEFAULT-0x00A0) && ADC_x_current<=(X_DEFAULT+0x00A0)))
		{
			return 1;
		}
		/*Backward gesture idetified*/
		if((ADC_y_current<=0x0566)&& (ADC_z_current>=0x051E))
		{
			return 2;
		}
		/*Forward gesture idetified*/
		if((ADC_y_current>=0x06a6)&& (ADC_z_current>=0x051E))
		{
			return 3;
		}
		/*Right gesture idetified*/
		if((ADC_x_current>=0x06f0)&& (ADC_z_current>=0x0590))
		{
			return 4;
		}
		/*Left gesture idetified*/
		if((ADC_x_current<=0x05E2)&& (ADC_z_current>=0x0590))
		{
			return 5;
		}
		return 0;/*No change of state */
	
    }
    else
		return 0;/*ADC is busy. Return 0 */
}
int main()
{
    /*intialize state variables*/
    int colorState = 1;
    int intensityState = 1;
    int curr_Intensity;
    uint8 gesture;
    /*delay counter*/
    int i=0;
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

        Sensor_ADC_Start();
        Sensor_ADC_StartConvert();
        
    CyGlobalIntEnable;  /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        gesture = Scan_Accelerometer();
        //LEFT
        if(gesture==5){
            if (colorState>1){
                colorState--;
            }
            if (colorState<=1){
                colorState = 1;
            }
        }
        //RIGHT
        if(gesture==4){
            if (colorState < 4){
                colorState++;
            }
            if (colorState >= 4){
                colorState = 4;
            }
        }
        //UP
        if(gesture==3){
            if(intensityState < 4){
                intensityState++;
            }
            if(intensityState >= 4){
                intensityState = 4;
            }
        }
        //DOWN
        if(gesture==2){
        if(intensityState >= 1){
                intensityState++;
            }
            if(intensityState < 1){
                intensityState = 1;
            }
        }
        curr_Intensity = Intensity(intensityState);
        colorChange(colorState , curr_Intensity);
        
        
            //wait
        
       
        
        
        
    
    }
}

/* [] END OF FILE */
