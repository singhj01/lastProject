# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Users\jsing\Desktop\Day047_Accelerometer_Controlled_Car\Accelerometer_Controlled_Car\PSoC_4_BLE_ACCELEROMETER.cydsn\PSoC_4_BLE_ACCELEROMETER.cyprj
# Date: Tue, 22 Nov 2016 01:37:06 GMT
#set_units -time ns
create_clock -name {Sensor_ADC_intClock(FFB)} -period 1000 -waveform {0 500} [list [get_pins {ClockBlock/ff_div_6}]]
create_clock -name {CyHFCLK} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/hfclk}]]
create_generated_clock -name {Sensor_ADC_intClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 13 25} [list]
create_clock -name {CyIMO} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CySYSCLK} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/sysclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyWCO} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/wco}]]
create_clock -name {CyLFCLK} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyECO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/eco}]]
create_clock -name {CyRouted1} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/dsi_in_0}]]


# Component constraints for D:\Users\jsing\Desktop\Day047_Accelerometer_Controlled_Car\Accelerometer_Controlled_Car\PSoC_4_BLE_ACCELEROMETER.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Users\jsing\Desktop\Day047_Accelerometer_Controlled_Car\Accelerometer_Controlled_Car\PSoC_4_BLE_ACCELEROMETER.cydsn\PSoC_4_BLE_ACCELEROMETER.cyprj
# Date: Tue, 22 Nov 2016 01:37:01 GMT
