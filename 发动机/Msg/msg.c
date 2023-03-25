#include "msg.h"
uint16_t Parameter_Translate(long double measured,float resolutionratio,float offset)
{
	return (uint16_t)(measured/resolutionratio-offset);
}

void TSC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTSC1_t *TSC1)
{
    J1939_MESSAGE->PGN = 0x000000 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TSC1->bt1.Engine_Override_Control_Mode)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(TSC1->bt1.Engine_Requested_Speed_Control_Conditions)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(TSC1->bt1.Override_Control_Mode_Priority)<<5;
    J1939_MESSAGE->data[2] = (uint8_t)(TSC1->Engine_Requested_Speed_Speed_Limit>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TSC1->Engine_Requested_Speed_Speed_Limit);
    J1939_MESSAGE->data[4] = TSC1->Engine_Requested_Torque_Torque_Limit;
    J1939_MESSAGE->data[5] |= (uint8_t)(TSC1->bt5.TSC1_Transmission_Rate)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(TSC1->bt5.TSC1_Control_Purpose)<<4;
    J1939_MESSAGE->data[6] |= (uint8_t)(TSC1->bt6.Engine_Requested_Torque__High_Resolution)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(TSC1->bt8.Message_Counter)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(TSC1->bt8.Message_Checksum)<<5;
}
void TC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTC1_t *TC1)
{
    J1939_MESSAGE->PGN = 0x000100 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TC1->bt1.Transmission_Gear_Shift_Inhibit_Request)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(TC1->bt1.Transmission_Torque_Converter_Lockup_Disable_Request)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(TC1->bt1.Disengage_Driveline_Request)<<5;
    J1939_MESSAGE->data[2] = TC1->Requested_Percent_Clutch_Slip;
    J1939_MESSAGE->data[3] = TC1->Transmission_Requested_Gear;
    J1939_MESSAGE->data[4] |= (uint8_t)(TC1->bt4.Disengage_Differential_Lock_Request___Front_Axle_1)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(TC1->bt4.Disengage_Differential_Lock_Request___Front_Axle_2)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(TC1->bt4.Disengage_Differential_Lock_Request___Rear_Axle_1)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(TC1->bt4.Disengage_Differential_Lock_Request___Rear_Axle_2)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(TC1->bt5.Disengage_Differential_Lock_Request___Central)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(TC1->bt5.Disengage_Differential_Lock_Request___Central_Front)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(TC1->bt5.Disengage_Differential_Lock_Request___Central_Rear)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(TC1->bt5.Transmission_Load_Reduction_Inhibit_Request)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(TC1->bt6.Transmission_Mode_1)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(TC1->bt6.Transmission_Mode_2)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(TC1->bt6.Transmission_Mode_3)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(TC1->bt6.Transmission_Mode_4)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(TC1->bt7.Transmission_Requested_Launch_Gear)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(TC1->bt7.Transmission_Shift_Selector_Display_Mode_Switch)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(TC1->bt8.Transmission_Mode_5)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(TC1->bt8.Transmission_Mode_6)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(TC1->bt8.Transmission_Mode_7)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(TC1->bt8.Transmission_Mode_8)<<7;
}
void XBR ( J1939_MESSAGE_T *J1939_MESSAGE,getXBR_t *XBR)
{
    J1939_MESSAGE->PGN = 0x000400 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(XBR->External_Acceleration_Demand>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(XBR->External_Acceleration_Demand);
    J1939_MESSAGE->data[3] |= (uint8_t)(XBR->bt3.XBR_EBI_Mode)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(XBR->bt3.XBR_Priority)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(XBR->bt3.XBR_Control_Mode)<<5;
    J1939_MESSAGE->data[4] = XBR->XBR_urgency;
    J1939_MESSAGE->data[8] |= (uint8_t)(XBR->bt8.XBR_Message_Counter)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(XBR->bt8.XBR_Message_Checksum)<<5;
}
void GPV4 ( J1939_MESSAGE_T *J1939_MESSAGE,getGPV4_t *GPV4)
{
    J1939_MESSAGE->PGN = 0x000700 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GPV4->Valve_Load_Sense_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(GPV4->Valve_Load_Sense_Pressure);
    J1939_MESSAGE->data[3] = GPV4->Valve_Pilot_Pressure;
    J1939_MESSAGE->data[4] = (uint8_t)(GPV4->Valve_Assembly_Load_sense_Pressure>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(GPV4->Valve_Assembly_Load_sense_Pressure);
    J1939_MESSAGE->data[6] = (uint8_t)(GPV4->Valve_Assembly_Supply_Pressure>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(GPV4->Valve_Assembly_Supply_Pressure);
}
void AUXIO5 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO5_t *AUXIO5)
{
    J1939_MESSAGE->PGN = 0x000800 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_6>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_6);
    J1939_MESSAGE->data[3] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_5>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_5);
    J1939_MESSAGE->data[5] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_4>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_4);
    J1939_MESSAGE->data[7] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_3>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AUXIO5->Auxiliary_I_O_Channel_3);
}
void SRASI ( J1939_MESSAGE_T *J1939_MESSAGE,getSRASI_t *SRASI)
{
    J1939_MESSAGE->PGN = 0x000900 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = SRASI->Static_Roll_Angle;
    J1939_MESSAGE->data[2] |= (uint8_t)(SRASI->bt2.Static_Roll_Angle_Status)<<1;
}
void CCVS2 ( J1939_MESSAGE_T *J1939_MESSAGE,getCCVS2_t *CCVS2)
{
    J1939_MESSAGE->PGN = 0x000A00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS2->bt1.Cruise_Control_Disable_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS2->bt1.Cruise_Control_Resume_Command)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS2->bt1.Cruise_Control_Pause_Command)<<5;
}
void AEBS2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAEBS2_t *AEBS2)
{
    J1939_MESSAGE->PGN = 0x000B00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AEBS2->bt1.Driver_activation_demand_for_Advanced_Emergency_Braking_System)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AEBS2->bt8.AEBS2_message_Counter)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AEBS2->bt8.AEBS2_message_checksum)<<5;
}
void ESR ( J1939_MESSAGE_T *J1939_MESSAGE,getESR_t *ESR)
{
    J1939_MESSAGE->PGN = 0x008700 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ESR->bt1.Desired_Engine_Fueling_State)<<1;
}
void RBR ( J1939_MESSAGE_T *J1939_MESSAGE,getRBR_t *RBR)
{
    J1939_MESSAGE->PGN = 0x008800 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(RBR->Unique_Beacon_Message_Identifier_Number>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(RBR->Unique_Beacon_Message_Identifier_Number);
    J1939_MESSAGE->data[3] |= (uint8_t)(RBR->bt3.Radio_Beacon_Direction)<<7;
    J1939_MESSAGE->data[4] = (uint8_t)(RBR->Transmitter_ID_2>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(RBR->Transmitter_ID_2>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(RBR->Transmitter_ID_2);
    J1939_MESSAGE->data[7] = RBR->Wireless_Signal_Strength_2;
}
void ECC ( J1939_MESSAGE_T *J1939_MESSAGE,getECC_t *ECC)
{
    J1939_MESSAGE->PGN = 0x008F00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ECC->bt1.Coolant_Level_Engine_Protection_Shutdown_Override_Command)<<1;
}
void SFC ( J1939_MESSAGE_T *J1939_MESSAGE,getSFC_t *SFC)
{
    J1939_MESSAGE->PGN = 0x009000 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(SFC->bt1.Supplemental_Fan_Enable_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(SFC->bt1.Supplemental_Fan_Direction_Command)<<3;
    J1939_MESSAGE->data[2] = (uint8_t)(SFC->Supplemental_Fan_Speed_Command>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(SFC->Supplemental_Fan_Speed_Command);
    J1939_MESSAGE->data[4] |= (uint8_t)(SFC->bt4.Supplemental_Fan_Power_Hold)<<1;
}
void VLS1 ( J1939_MESSAGE_T *J1939_MESSAGE,getVLS1_t *VLS1)
{
    J1939_MESSAGE->PGN = 0x009100 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(VLS1->bt1.Lubrication_Cycle_Mode_Lock_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(VLS1->bt1.Lubrication_Cycle_Set_Command)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(VLS1->bt1.Lubrication_Operation_Mode_Set_Command)<<6;
    J1939_MESSAGE->data[2] |= (uint8_t)(VLS1->bt2.Lubrication_Pump_Enable_Command)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(VLS1->bt2.Lubrication_Timing_Cycle_Command)<<3;
}
void HCDI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getHCDI1_t *HCDI1)
{
    J1939_MESSAGE->PGN = 0x009200 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(HCDI1->Requested_Fuel_Mass_Rate>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(HCDI1->Requested_Fuel_Mass_Rate);
    J1939_MESSAGE->data[3] |= (uint8_t)(HCDI1->bt3.HC_Doser_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(HCDI1->bt3.HC_Doser_Injecting_Status)<<4;
    J1939_MESSAGE->data[3] |= (uint8_t)(HCDI1->bt3.Diagnostic_Status_of_HC_Doser)<<6;
    J1939_MESSAGE->data[4] |= (uint8_t)(HCDI1->bt4.Hydrocarbon_Doser_Purging_Required)<<1;
}
void AT1DPFSSC ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPFSSC_t *AT1DPFSSC)
{
    J1939_MESSAGE->PGN = 0x009400 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPFSSC->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPFSSC->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPFSSC->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPFSSC->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset);
}
void AT2DPFSSC ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2DPFSSC_t *AT2DPFSSC)
{
    J1939_MESSAGE->PGN = 0x009500 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2DPFSSC->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2DPFSSC->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2DPFSSC->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2DPFSSC->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset);
}
void LVDSOM ( J1939_MESSAGE_T *J1939_MESSAGE,getLVDSOM_t *LVDSOM)
{
    J1939_MESSAGE->PGN = 0x009600 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(LVDSOM->bt1.Low_Voltage_Disconnect_Desired_Operating_Mode)<<1;
}
void NCS ( J1939_MESSAGE_T *J1939_MESSAGE,getNCS_t *NCS)
{
    J1939_MESSAGE->PGN = 0x009700 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(NCS->bt1.Cab_Noise_Control_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(NCS->bt1.Cab_Noise_Control_Tuning_Status)<<3;
}
void NC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getNC1_t *NC1)
{
    J1939_MESSAGE->PGN = 0x009800 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(NC1->bt1.Cab_Noise_Control_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(NC1->bt1.Cab_Noise_Control_Tuning_Command)<<3;
}
void JLCM ( J1939_MESSAGE_T *J1939_MESSAGE,getJLCM_t *JLCM)
{
    J1939_MESSAGE->PGN = 0x009900 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(JLCM->bt1.Joystick_1_Lamp_1_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(JLCM->bt1.Joystick_1_Lamp_2_Command)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(JLCM->bt1.Joystick_1_Lamp_3_Command)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(JLCM->bt1.Joystick_1_Lamp_4_Command)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(JLCM->bt2.Joystick_1_Lamp_5_Command)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(JLCM->bt2.Joystick_1_Lamp_6_Command)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(JLCM->bt2.Joystick_1_Lamp_7_Command)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(JLCM->bt2.Joystick_1_Lamp_8_Command)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(JLCM->bt3.Joystick_1_Lamp_9_Command)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(JLCM->bt3.Joystick_1_Lamp_10_Command)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(JLCM->bt3.Joystick_2_Lamp_1_Command)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(JLCM->bt3.Joystick_2_Lamp_2_Command)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(JLCM->bt4.Joystick_2_Lamp_3_Command)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(JLCM->bt4.Joystick_2_Lamp_4_Command)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(JLCM->bt4.Joystick_2_Lamp_5_Command)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(JLCM->bt4.Joystick_2_Lamp_6_Command)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(JLCM->bt5.Joystick_2_Lamp_7_Command)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(JLCM->bt5.Joystick_2_Lamp_8_Command)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(JLCM->bt5.Joystick_2_Lamp_9_Command)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(JLCM->bt5.Joystick_2_Lamp_10_Command)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(JLCM->bt6.Joystick_3_Lamp_1_Command)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(JLCM->bt6.Joystick_3_Lamp_2_Command)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(JLCM->bt6.Joystick_3_Lamp_3_Command)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(JLCM->bt6.Joystick_3_Lamp_4_Command)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(JLCM->bt7.Joystick_3_Lamp_5_Command)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(JLCM->bt7.Joystick_3_Lamp_6_Command)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(JLCM->bt7.Joystick_3_Lamp_7_Command)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(JLCM->bt7.Joystick_3_Lamp_8_Command)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(JLCM->bt8.Joystick_3_Lamp_9_Command)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(JLCM->bt8.Joystick_3_Lamp_10_Command)<<3;
}
void AUXIO7 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO7_t *AUXIO7)
{
    J1939_MESSAGE->PGN = 0x009C00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AUXIO7->Auxiliary_I_O_Channel_18;
    J1939_MESSAGE->data[2] = AUXIO7->Auxiliary_I_O_Channel_17;
    J1939_MESSAGE->data[3] = AUXIO7->Auxiliary_I_O_Channel_16;
    J1939_MESSAGE->data[4] = AUXIO7->Auxiliary_I_O_Channel_15;
    J1939_MESSAGE->data[5] = AUXIO7->Auxiliary_I_O_Channel_22;
    J1939_MESSAGE->data[6] = AUXIO7->Auxiliary_I_O_Channel_21;
    J1939_MESSAGE->data[7] = AUXIO7->Auxiliary_I_O_Channel_20;
    J1939_MESSAGE->data[8] = AUXIO7->Auxiliary_I_O_Channel_19;
}
void AUXIO6 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO6_t *AUXIO6)
{
    J1939_MESSAGE->PGN = 0x009D00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AUXIO6->Auxiliary_I_O_Channel_10;
    J1939_MESSAGE->data[2] = AUXIO6->Auxiliary_I_O_Channel_9;
    J1939_MESSAGE->data[3] = AUXIO6->Auxiliary_I_O_Channel_8;
    J1939_MESSAGE->data[4] = AUXIO6->Auxiliary_I_O_Channel_7;
    J1939_MESSAGE->data[5] = AUXIO6->Auxiliary_I_O_Channel_14;
    J1939_MESSAGE->data[6] = AUXIO6->Auxiliary_I_O_Channel_13;
    J1939_MESSAGE->data[7] = AUXIO6->Auxiliary_I_O_Channel_12;
    J1939_MESSAGE->data[8] = AUXIO6->Auxiliary_I_O_Channel_11;
}
void AUXIO4 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO4_t *AUXIO4)
{
    J1939_MESSAGE->PGN = 0x00A500 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO4->bt1.Auxiliary_I_O_84)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO4->bt1.Auxiliary_I_O_83)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO4->bt1.Auxiliary_I_O_82)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO4->bt1.Auxiliary_I_O_81)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO4->bt2.Auxiliary_I_O_88)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO4->bt2.Auxiliary_I_O_87)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO4->bt2.Auxiliary_I_O_86)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO4->bt2.Auxiliary_I_O_85)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO4->bt3.Auxiliary_I_O_92)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO4->bt3.Auxiliary_I_O_91)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO4->bt3.Auxiliary_I_O_90)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO4->bt3.Auxiliary_I_O_89)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO4->bt4.Auxiliary_I_O_96)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO4->bt4.Auxiliary_I_O_95)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO4->bt4.Auxiliary_I_O_94)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO4->bt4.Auxiliary_I_O_93)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO4->bt5.Auxiliary_I_O_100)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO4->bt5.Auxiliary_I_O_99)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO4->bt5.Auxiliary_I_O_98)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO4->bt5.Auxiliary_I_O_97)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO4->bt6.Auxiliary_I_O_104)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO4->bt6.Auxiliary_I_O_103)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO4->bt6.Auxiliary_I_O_102)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO4->bt6.Auxiliary_I_O_101)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO4->bt7.Auxiliary_I_O_108)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO4->bt7.Auxiliary_I_O_107)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO4->bt7.Auxiliary_I_O_106)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO4->bt7.Auxiliary_I_O_105)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO4->bt8.Auxiliary_I_O_112)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO4->bt8.Auxiliary_I_O_111)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO4->bt8.Auxiliary_I_O_110)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO4->bt8.Auxiliary_I_O_109)<<7;
}
void AUXIO3 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO3_t *AUXIO3)
{
    J1939_MESSAGE->PGN = 0x00A600 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO3->bt1.Auxiliary_I_O_52)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO3->bt1.Auxiliary_I_O_51)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO3->bt1.Auxiliary_I_O_50)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO3->bt1.Auxiliary_I_O_49)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO3->bt2.Auxiliary_I_O_56)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO3->bt2.Auxiliary_I_O_55)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO3->bt2.Auxiliary_I_O_54)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO3->bt2.Auxiliary_I_O_53)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO3->bt3.Auxiliary_I_O_60)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO3->bt3.Auxiliary_I_O_59)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO3->bt3.Auxiliary_I_O_58)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO3->bt3.Auxiliary_I_O_57)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO3->bt4.Auxiliary_I_O_64)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO3->bt4.Auxiliary_I_O_63)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO3->bt4.Auxiliary_I_O_62)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO3->bt4.Auxiliary_I_O_61)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO3->bt5.Auxiliary_I_O_68)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO3->bt5.Auxiliary_I_O_67)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO3->bt5.Auxiliary_I_O_66)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO3->bt5.Auxiliary_I_O_65)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO3->bt6.Auxiliary_I_O_72)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO3->bt6.Auxiliary_I_O_71)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO3->bt6.Auxiliary_I_O_70)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO3->bt6.Auxiliary_I_O_69)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO3->bt7.Auxiliary_I_O_76)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO3->bt7.Auxiliary_I_O_75)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO3->bt7.Auxiliary_I_O_74)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO3->bt7.Auxiliary_I_O_73)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO3->bt8.Auxiliary_I_O_80)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO3->bt8.Auxiliary_I_O_79)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO3->bt8.Auxiliary_I_O_78)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO3->bt8.Auxiliary_I_O_77)<<7;
}
void AUXIO2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO2_t *AUXIO2)
{
    J1939_MESSAGE->PGN = 0x00A700 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO2->bt1.Auxiliary_I_O_20)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO2->bt1.Auxiliary_I_O_19)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO2->bt1.Auxiliary_I_O_18)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO2->bt1.Auxiliary_I_O_17)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO2->bt2.Auxiliary_I_O_24)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO2->bt2.Auxiliary_I_O_23)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO2->bt2.Auxiliary_I_O_22)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO2->bt2.Auxiliary_I_O_21)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO2->bt3.Auxiliary_I_O_28)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO2->bt3.Auxiliary_I_O_27)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO2->bt3.Auxiliary_I_O_26)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO2->bt3.Auxiliary_I_O_25)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO2->bt4.Auxiliary_I_O_32)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO2->bt4.Auxiliary_I_O_31)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO2->bt4.Auxiliary_I_O_30)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO2->bt4.Auxiliary_I_O_29)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO2->bt5.Auxiliary_I_O_36)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO2->bt5.Auxiliary_I_O_35)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO2->bt5.Auxiliary_I_O_34)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AUXIO2->bt5.Auxiliary_I_O_33)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO2->bt6.Auxiliary_I_O_40)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO2->bt6.Auxiliary_I_O_39)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO2->bt6.Auxiliary_I_O_38)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(AUXIO2->bt6.Auxiliary_I_O_37)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO2->bt7.Auxiliary_I_O_44)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO2->bt7.Auxiliary_I_O_43)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO2->bt7.Auxiliary_I_O_42)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(AUXIO2->bt7.Auxiliary_I_O_41)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO2->bt8.Auxiliary_I_O_48)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO2->bt8.Auxiliary_I_O_47)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO2->bt8.Auxiliary_I_O_46)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(AUXIO2->bt8.Auxiliary_I_O_45)<<7;
}
void DISP1 ( J1939_MESSAGE_T *J1939_MESSAGE,getDISP1_t *DISP1)
{
    J1939_MESSAGE->PGN = 0x00A800 ;
    J1939_MESSAGE->data[1] |= (uint8_t)(DISP1->bt1.Text_Display_Instructions)<<1;
    J1939_MESSAGE->data[3] = DISP1->Text_Display_Index;
}
void FLIC ( J1939_MESSAGE_T *J1939_MESSAGE,getFLIC_t *FLIC)
{
    J1939_MESSAGE->PGN = 0x00A900 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLIC->bt1.Lane_Departure_Warning_Enable_Command)<<1;
}
void TPRS ( J1939_MESSAGE_T *J1939_MESSAGE,getTPRS_t *TPRS)
{
    J1939_MESSAGE->PGN = 0x00AE00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TPRS->bt1.Tire_Location)<<1;
    J1939_MESSAGE->data[2] = TPRS->Reference_Tire_Pressure_Setting;
}
void CTL ( J1939_MESSAGE_T *J1939_MESSAGE,getCTL_t *CTL)
{
    J1939_MESSAGE->PGN = 0x00CF00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = CTL->Engine_Speed_Limit_Request___Minimum_Continuous;
    J1939_MESSAGE->data[2] = CTL->Engine_Speed_Limit_Request___Maximum_Continuous;
    J1939_MESSAGE->data[3] = CTL->Engine_Torque_Limit_Request___Minimum_Continuous;
    J1939_MESSAGE->data[4] = CTL->Engine_Torque_Limit_Request___Maximum_Continuous;
    J1939_MESSAGE->data[5] = CTL->Minimum_Continuous_Retarder_Speed_Limit_Request;
    J1939_MESSAGE->data[6] = CTL->Maximum_Continuous_Retarder_Speed_Limit_Request;
    J1939_MESSAGE->data[7] = CTL->Minimum_Continuous_Retarder_Torque_Limit_Request;
    J1939_MESSAGE->data[8] = CTL->Maximum_Continuous_Retarder_Torque_Limit_Request;
}
void CL ( J1939_MESSAGE_T *J1939_MESSAGE,getCL_t *CL)
{
    J1939_MESSAGE->PGN = 0x00D000 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = CL->Illumination_Brightness_Percent;
    J1939_MESSAGE->data[2] = CL->Switch_Backlight_Illumination_Brightness_Percent;
}
void ASC6 ( J1939_MESSAGE_T *J1939_MESSAGE,getASC6_t *ASC6)
{
    J1939_MESSAGE->PGN = 0x00D100 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ASC6->Level_Preset_Front_Axle_Left>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ASC6->Level_Preset_Front_Axle_Left);
    J1939_MESSAGE->data[3] = (uint8_t)(ASC6->Level_Preset_Front_Axle_Right>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ASC6->Level_Preset_Front_Axle_Right);
    J1939_MESSAGE->data[5] = (uint8_t)(ASC6->Level_Preset_Rear_Axle_Left>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ASC6->Level_Preset_Rear_Axle_Left);
    J1939_MESSAGE->data[7] = (uint8_t)(ASC6->Level_Preset_Rear_Axle_Right>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ASC6->Level_Preset_Rear_Axle_Right);
}
void ASC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getASC2_t *ASC2)
{
    J1939_MESSAGE->PGN = 0x00D200 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ASC2->bt1.Automatic_traction_help__load_transfer_)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ASC2->bt1.Kneeling_Request_Left_Side)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(ASC2->bt1.Kneeling_Request_Right_Side)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ASC2->bt1.Kneeling_Control_Mode_Request)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(ASC2->bt2.Nominal_Level_Request_Front_Axle)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(ASC2->bt2.Nominal_Level_Request_Rear_Axle)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC2->bt3.Level_Control_Mode_Request)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC2->bt3.Lift_Axle_1_Position_Command)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC2->bt3.Lift_Axle_2_Position_Command)<<7;
    J1939_MESSAGE->data[4] = ASC2->Damper_Stiffness_Request_Front_Axle;
    J1939_MESSAGE->data[5] = ASC2->Damper_Stiffness_Request_Rear_Axle;
    J1939_MESSAGE->data[6] = ASC2->Damper_Stiffness_Request_Lift___Tag_Axle;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC2->bt7.Kneeling_Command___Front_Axle)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC2->bt7.Kneeling_Command___Rear_Axle)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC2->bt7.Prohibit_air_suspension_control)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC2->bt7.Allow_Level_Control_During_Braking_Command)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(ASC2->bt8.Speed_Dependent_Level_Control_Request)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(ASC2->bt8.Prohibit_Automatic_Air_Suspension_Control)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(ASC2->bt8.Memory_level_request)<<5;
}
void TDA ( J1939_MESSAGE_T *J1939_MESSAGE,getTDA_t *TDA)
{
    J1939_MESSAGE->PGN = 0x00D500 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TDA->Adjust_seconds;
    J1939_MESSAGE->data[2] = TDA->Adjust_minutes;
    J1939_MESSAGE->data[3] = TDA->Adjust_hours;
    J1939_MESSAGE->data[4] = TDA->Adjust_month;
    J1939_MESSAGE->data[5] = TDA->Adjust_day;
    J1939_MESSAGE->data[6] = TDA->Adjust_year;
    J1939_MESSAGE->data[7] = TDA->Adjust_local_minute_offset;
    J1939_MESSAGE->data[8] = TDA->Adjust_local_hour_offset;
}
void ATS ( J1939_MESSAGE_T *J1939_MESSAGE,getATS_t *ATS)
{
    J1939_MESSAGE->PGN = 0x00DC00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATS->bt1.Anti_theft_Encryption_Seed_Present_Indicator)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATS->bt1.Anti_theft_Password_Valid_Indicator)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATS->bt1.Anti_theft_Component_Status_States)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATS->bt1.Anti_theft_Modify_Password_States)<<7;
    J1939_MESSAGE->data[2] = (uint8_t)(ATS->Anti_theft_Random_Number>>48);
    J1939_MESSAGE->data[3] = (uint8_t)(ATS->Anti_theft_Random_Number>>40);
    J1939_MESSAGE->data[4] = (uint8_t)(ATS->Anti_theft_Random_Number>>32);
    J1939_MESSAGE->data[5] = (uint8_t)(ATS->Anti_theft_Random_Number>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(ATS->Anti_theft_Random_Number>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(ATS->Anti_theft_Random_Number>>8);
    J1939_MESSAGE->data[9] = (uint8_t)(ATS->Anti_theft_Random_Number);
}
void ATR ( J1939_MESSAGE_T *J1939_MESSAGE,getATR_t *ATR)
{
    J1939_MESSAGE->PGN = 0x00DD00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATR->bt1.Anti_theft_Encryption_Indicator_States)<<2;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATR->bt1.Anti_theft_Desired_Exit_Mode_States)<<4;
    J1939_MESSAGE->data[1] |= (uint8_t)(ATR->bt1.Anti_theft_Command_States)<<6;
    J1939_MESSAGE->data[2] = (uint8_t)(ATR->Anti_theft_Password_Representation>>48);
    J1939_MESSAGE->data[3] = (uint8_t)(ATR->Anti_theft_Password_Representation>>40);
    J1939_MESSAGE->data[4] = (uint8_t)(ATR->Anti_theft_Password_Representation>>32);
    J1939_MESSAGE->data[5] = (uint8_t)(ATR->Anti_theft_Password_Representation>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(ATR->Anti_theft_Password_Representation>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(ATR->Anti_theft_Password_Representation>>8);
    J1939_MESSAGE->data[9] = (uint8_t)(ATR->Anti_theft_Password_Representation);
}
/*
void RESET ( J1939_MESSAGE_T *J1939_MESSAGE,getRESET_t *RESET)
{
    J1939_MESSAGE->PGN = 0x00DE00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(RESET->bt1.Trip_Group_1)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(RESET->bt1.Trip_Group_2___Proprietary)<<3;
    J1939_MESSAGE->data[2] = RESET->Service_Component_Identification;
    J1939_MESSAGE->data[3] |= (uint8_t)(RESET->bt3.Engine_Build_Hours_Reset)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(RESET->bt3.Steering_Straight_Ahead_Position_Reset)<<3;
}
*/
void CM1 ( J1939_MESSAGE_T *J1939_MESSAGE,getCM1_t *CM1)
{
    J1939_MESSAGE->PGN = 0x00E000 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = CM1->Requested_Percent_Fan_Speed;
    J1939_MESSAGE->data[2] = (uint8_t)(CM1->Cab_Interior_Temperature_Command>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(CM1->Cab_Interior_Temperature_Command);
    J1939_MESSAGE->data[4] |= (uint8_t)(CM1->bt4.Auxiliary_Heater_Coolant_Pump_Request)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(CM1->bt4.Battery_Main_Switch_Hold_Request)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(CM1->bt4.Operator_Seat_Direction_Switch)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(CM1->bt4.Seat_Belt_Switch)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(CM1->bt5.Park_Brake_Command)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(CM1->bt5.Vehicle_Limiting_Speed_Governor_Decrement_Switch)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(CM1->bt5.Vehicle_Limiting_Speed_Governor_Increment_Switch)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(CM1->bt5.Vehicle_Limiting_Speed_Governor_Enable_Switch)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(CM1->bt6.Diesel_Particulate_Filter_Regeneration_Force_Switch)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(CM1->bt6.Automatic_Gear_Shifting_Enable_Switch)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(CM1->bt6.Engine_Automatic_Start_Enable_Switch)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(CM1->bt7.Auxiliary_Heater_Mode_Request)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(CM1->bt7.Request_Engine_Zone_Heating)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(CM1->bt7.Request_Cab_Zone_Heating)<<7;
    J1939_MESSAGE->data[8] = CM1->Selected_Maximum_Vehicle_Speed_Limit;
}
void ERC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getERC1_t *ERC1)
{
    J1939_MESSAGE->PGN = 0x00F000 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ERC1->bt1.Retarder_Torque_Mode)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ERC1->bt1.Retarder_Enable___Brake_Assist_Switch)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ERC1->bt1.Retarder_Enable___Shift_Assist_Switch)<<7;
    J1939_MESSAGE->data[2] = ERC1->Actual_Retarder___Percent_Torque;
    J1939_MESSAGE->data[3] = ERC1->Intended_Retarder_Percent_Torque;
    J1939_MESSAGE->data[4] |= (uint8_t)(ERC1->bt4.Engine_Coolant_Load_Increase)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ERC1->bt4.Retarder_Requesting_Brake_Light)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(ERC1->bt4.Retarder_Road_Speed_Limit_Switch)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(ERC1->bt4.Retarder_Road_Speed_Exceeded_Status)<<7;
    J1939_MESSAGE->data[5] = ERC1->Source_Address_of_Controlling_Device_for_Retarder_Control;
    J1939_MESSAGE->data[6] = ERC1->Drivers_Demand_Retarder__;
    J1939_MESSAGE->data[7] = ERC1->Retarder_Selection_non_engine;
    J1939_MESSAGE->data[8] = ERC1->Actual_Maximum_Available_Retarder___Percent_Torque;
}
void EBC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEBC1_t *EBC1)
{
    J1939_MESSAGE->PGN = 0x00F001 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC1->bt1.ASR_Engine_Control_Active)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC1->bt1.ASR_Brake_Control_Active)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC1->bt1.Anti_Lock_Braking__ABS__Active)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC1->bt1.EBS_Brake_Switch)<<7;
    J1939_MESSAGE->data[2] = EBC1->Brake_Pedal_Position;
    J1939_MESSAGE->data[3] |= (uint8_t)(EBC1->bt3.ABS_Off_road_Switch)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EBC1->bt3.ASR_Off_road_Switch)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EBC1->bt3.ASR__Hill_Holder__Switch)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EBC1->bt3.Traction_Control_Override_Switch)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(EBC1->bt4.Accelerator_Interlock_Switch)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EBC1->bt4.Engine_Derate_Switch)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(EBC1->bt4.Engine_Auxiliary_Shutdown_Switch)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(EBC1->bt4.Remote_Accelerator_Enable_Switch)<<7;
    J1939_MESSAGE->data[5] = EBC1->Engine_Retarder_Selection;
    J1939_MESSAGE->data[6] |= (uint8_t)(EBC1->bt6.ABS_Fully_Operational)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(EBC1->bt6.EBS_Red_Warning_Signal)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(EBC1->bt6.ABS_EBS_Amber_Warning_Signal__Powered_Vehicle_)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(EBC1->bt6.ATC_ASR_Information_Signal)<<7;
    J1939_MESSAGE->data[7] = EBC1->Source_Address_of_Controlling_Device_for_Brake_Control;
    J1939_MESSAGE->data[8] |= (uint8_t)(EBC1->bt8.Halt_brake_switch)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(EBC1->bt8.Trailer_ABS_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(EBC1->bt8.Tractor_Mounted_Trailer_ABS_Warning_Signal)<<7;
}
void ETC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC1_t *ETC1)
{
    J1939_MESSAGE->PGN = 0x00F002 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC1->bt1.Transmission_Driveline_Engaged)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC1->bt1.Transmission_Torque_Converter_Lockup_Engaged)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC1->bt1.Transmission_Shift_In_Process)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC1->bt1.Transmission_Torque_Converter_Lockup_Transition_in_Process)<<7;
    J1939_MESSAGE->data[2] = (uint8_t)(ETC1->Transmission_Output_Shaft_Speed>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETC1->Transmission_Output_Shaft_Speed);
    J1939_MESSAGE->data[4] = ETC1->Percent_Clutch_Slip;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC1->bt5.Engine_Momentary_Overspeed_Enable)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC1->bt5.Progressive_Shift_Disable)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC1->bt5.Momentary_Engine_Maximum_Power_Enable)<<5;
    J1939_MESSAGE->data[6] = (uint8_t)(ETC1->Transmission_Input_Shaft_Speed>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(ETC1->Transmission_Input_Shaft_Speed);
    J1939_MESSAGE->data[8] = ETC1->Source_Address_of_Controlling_Device_for_Transmission_Control;
}
void EEC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC2_t *EEC2)
{
    J1939_MESSAGE->PGN = 0x00F003 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC2->bt1.Accelerator_Pedal_1_Low_Idle_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC2->bt1.Accelerator_Pedal_Kickdown_Switch)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC2->bt1.Road_Speed_Limit_Status)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC2->bt1.Accelerator_Pedal_2_Low_Idle_Switch)<<7;
    J1939_MESSAGE->data[2] = EEC2->Accelerator_Pedal_Position_1;
    J1939_MESSAGE->data[3] = EEC2->Engine_Percent_Load_At_Current_Speed;
    J1939_MESSAGE->data[4] = EEC2->Remote_Accelerator_Pedal_Position;
    J1939_MESSAGE->data[5] = EEC2->Accelerator_Pedal_Position_2;
    J1939_MESSAGE->data[6] |= (uint8_t)(EEC2->bt6.Vehicle_Acceleration_Rate_Limit_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(EEC2->bt6.Momentary_Engine_Maximum_Power_Enable_Feedback)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(EEC2->bt6.DPF_Thermal_Management_Active)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(EEC2->bt6.SCR_Thermal_Management_Active)<<7;
    J1939_MESSAGE->data[7] = EEC2->Actual_Maximum_Available_Engine___Percent_Torque;
    J1939_MESSAGE->data[8] = EEC2->Estimated_Pumping___Percent_Torque;
}
void EEC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC1_t *EEC1)
{
    J1939_MESSAGE->PGN = 0x00F004 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC1->bt1.Engine_Torque_Mode)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC1->bt1.Actual_Engine___Percent_Torque_High_Resolution)<<5;
    J1939_MESSAGE->data[2] = EEC1->Driver_s_Demand_Engine___Percent_Torque;
    J1939_MESSAGE->data[3] = EEC1->Actual_Engine___Percent_Torque;
    J1939_MESSAGE->data[4] = (uint8_t)(EEC1->Engine_Speed>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC1->Engine_Speed);
    J1939_MESSAGE->data[6] = EEC1->Source_Address_of_Controlling_Device_for_Engine_Control;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEC1->bt7.Engine_Starter_Mode)<<1;
    J1939_MESSAGE->data[8] = EEC1->Engine_Demand_–_Percent_Torque;
}
void ETC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC2_t *ETC2)
{
    J1939_MESSAGE->PGN = 0x00F005 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ETC2->Transmission_Selected_Gear;
    J1939_MESSAGE->data[2] = (uint8_t)(ETC2->Transmission_Actual_Gear_Ratio>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETC2->Transmission_Actual_Gear_Ratio);
    J1939_MESSAGE->data[4] = ETC2->Transmission_Current_Gear;
    J1939_MESSAGE->data[5] = (uint8_t)(ETC2->Transmission_Requested_Range>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ETC2->Transmission_Requested_Range);
    J1939_MESSAGE->data[7] = (uint8_t)(ETC2->Transmission_Current_Range>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ETC2->Transmission_Current_Range);
}
void EAC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEAC1_t *EAC1)
{
    J1939_MESSAGE->PGN = 0x00F006 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EAC1->bt1.Location)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(EAC1->bt2.Differential_Lock_State___Front_Axle_1)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(EAC1->bt2.Differential_Lock_State___Front_Axle_2)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(EAC1->bt2.Differential_Lock_State___Rear_Axle_1)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(EAC1->bt2.Differential_Lock_State___Rear_Axle_2)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(EAC1->bt3.Differential_Lock_State___Central)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EAC1->bt3.Differential_Lock_State___Central_Front)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EAC1->bt3.Differential_Lock_State___Central_Rear)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(EAC1->bt4.Front_axle_group_engagement_status)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EAC1->bt4.Rear_axle_group_engagement_status)<<3;
}
void FLI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getFLI1_t *FLI1)
{
    J1939_MESSAGE->PGN = 0x00F007 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI1->bt1.Lane_Departure_Left)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI1->bt1.Lane_Departure_Right)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI1->bt1.Lane_Departure_Imminent_Right_Side)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI1->bt1.Lane_Departure_Imminent_Left_Side)<<7;
}
void HPG ( J1939_MESSAGE_T *J1939_MESSAGE,getHPG_t *HPG)
{
    J1939_MESSAGE->PGN = 0x00F008 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(HPG->Hydraulic_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(HPG->Hydraulic_Pressure);
    J1939_MESSAGE->data[3] |= (uint8_t)(HPG->bt3.Engine_Hydraulic_Pressure_Governor_Mode_Indicator)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(HPG->bt3.Engine_Hydraulic_Pressure_Governor_Switch)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(HPG->bt3.Fire_Apparatus_Pump_Engagement)<<5;
}
void VDC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getVDC2_t *VDC2)
{
    J1939_MESSAGE->PGN = 0x00F009 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VDC2->Steering_Wheel_Angle>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(VDC2->Steering_Wheel_Angle);
    J1939_MESSAGE->data[3] |= (uint8_t)(VDC2->bt3.Steering_Wheel_Turn_Counter)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(VDC2->bt3.Steering_Wheel_Angle_Sensor_Type)<<7;
    J1939_MESSAGE->data[4] = (uint8_t)(VDC2->Yaw_Rate>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(VDC2->Yaw_Rate);
    J1939_MESSAGE->data[6] = (uint8_t)(VDC2->Lateral_Acceleration>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(VDC2->Lateral_Acceleration);
    J1939_MESSAGE->data[8] = VDC2->Longitudinal_Acceleration;
}
void EGF1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEGF1_t *EGF1)
{
    J1939_MESSAGE->PGN = 0x00F00A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EGF1->Engine_Exhaust_Gas_Recirculation_1__EGR1__Mass_Flow_Rate>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EGF1->Engine_Exhaust_Gas_Recirculation_1__EGR1__Mass_Flow_Rate);
    J1939_MESSAGE->data[3] = (uint8_t)(EGF1->Engine_Intake_Air_Mass_Flow_Rate>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EGF1->Engine_Intake_Air_Mass_Flow_Rate);
    J1939_MESSAGE->data[5] = (uint8_t)(EGF1->Engine_Exhaust_Gas_Recirculation_2__EGR2__Mass_Flow_Rate>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EGF1->Engine_Exhaust_Gas_Recirculation_2__EGR2__Mass_Flow_Rate);
}
void ESC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getESC1_t *ESC1)
{
    J1939_MESSAGE->PGN = 0x00F00B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESC1->Actual_Inner_wheel_steering_angle>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESC1->Actual_Inner_wheel_steering_angle);
    J1939_MESSAGE->data[3] |= (uint8_t)(ESC1->bt3.Axle_Location)<<0;
    J1939_MESSAGE->data[4] |= (uint8_t)(ESC1->bt4.Status_of_Steering_Axle)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ESC1->bt4.Steerable_Lift_Axle_Lowering_Inhibit)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(ESC1->bt5.Steering_Type)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(ESC1->bt5.Type_of_Steering_Forces)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(ESC1->bt6.Type_of_Steering_Transmission)<<1;
}
void ETC8 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC8_t *ETC8)
{
    J1939_MESSAGE->PGN = 0x00F00C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ETC8->Transmission_Torque_Converter_Ratio>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ETC8->Transmission_Torque_Converter_Ratio);
    J1939_MESSAGE->data[3] = (uint8_t)(ETC8->Transmission_Clutch_Converter_Input_Speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ETC8->Transmission_Clutch_Converter_Input_Speed);
}
void LOI ( J1939_MESSAGE_T *J1939_MESSAGE,getLOI_t *LOI)
{
    J1939_MESSAGE->PGN = 0x00F00D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(LOI->bt1.Blade_Control_Mode_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(LOI->bt1.Desired_Grade_Offset_Switch)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(LOI->bt2.Blade_Auto_Mode_Command)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(LOI->bt2.Left_Blade_Control_Mode_Operator_Control)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(LOI->bt3.Right_Blade_Control_Mode_Operator_Control)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(LOI->bt3.Left_Desired_Blade_Offset_Operator_Control)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(LOI->bt4.Right_Desired_Blade_Offset_Operator_Control)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(LOI->bt4.Side_shift_Blade_Control_Mode_Operator_Control)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(LOI->bt5.Side_shift_Desired_Blade_Offset_Operator_Control)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(LOI->bt5.Set_Elevation_Sensor_1_Reference_Elevation)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(LOI->bt5.Set_Elevation_Sensor_2_Reference_Elevation)<<7;
}
void AT1IG1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1IG1_t *AT1IG1)
{
    J1939_MESSAGE->PGN = 0x00F00E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1IG1->Aftertreatment_1_Intake_NOx>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1IG1->Aftertreatment_1_Intake_NOx);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1IG1->Aftertreatment_1_Intake_O2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1IG1->Aftertreatment_1_Intake_O2);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1IG1->bt5.Aftertreatment_1_Intake_Gas_Sensor_Power_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1IG1->bt5.Aftertreatment_1_Intake_Gas_Sensor_at_Temperature)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1IG1->bt5.Aftertreatment_1_Intake_NOx_Reading_Stable)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1IG1->bt5.Aftertreatment_1_Intake_Wide_Range___O2_Reading_Stable)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1IG1->bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1IG1->bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Control)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1IG1->bt7.Aftertreatment_1_Intake_NOx_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1IG1->bt7.NOx_Sensor_ATI1_Self_diagnosis_Status)<<6;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1IG1->bt8.Aftertreatment_1_Intake_Oxygen_Sensor_Preliminary_FMI)<<1;
}
void AT1OG1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1OG1_t *AT1OG1)
{
    J1939_MESSAGE->PGN = 0x00F00F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1OG1->Aftertreatment_1_Outlet_NOx>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1OG1->Aftertreatment_1_Outlet_NOx);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1OG1->Aftertreatment_1_Outlet_O2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1OG1->Aftertreatment_1_Outlet_O2);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1OG1->bt5.Aftertreatment_1_Outlet_Gas_Sensor_Power_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1OG1->bt5.Aftertreatment_1_Outlet_Gas_Sensor_at_Temperature)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1OG1->bt5.Aftertreatment_1_Outlet_NOx_Reading_Stable)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1OG1->bt5.Aftertreatment_1_Outlet_Wide_Range__O2_Reading_Stable)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1OG1->bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1OG1->bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Control)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1OG1->bt7.Aftertreatment_1_Outlet_NOx_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1OG1->bt7.NOx_Sensor_ATO1_Self_diagnosis_Status)<<6;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1OG1->bt8.Aftertreatment_1_Outlet_Oxygen_Sensor_Preliminary_FMI)<<1;
}
void AT2IG1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2IG1_t *AT2IG1)
{
    J1939_MESSAGE->PGN = 0x00F010 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2IG1->Aftertreatment_2_Intake_NOx>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2IG1->Aftertreatment_2_Intake_NOx);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2IG1->Aftertreatment_2_Intake_O2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2IG1->Aftertreatment_2_Intake_O2);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2IG1->bt5.Aftertreatment_2_Intake_Gas_Sensor_Power_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2IG1->bt5.Aftertreatment_2_Intake_Gas_Sensor_at_Temperature)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2IG1->bt5.Aftertreatment_2_Intake_NOx_Reading_Stable)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2IG1->bt5.Aftertreatment_2_Intake_Wide_Range___O2_Reading_Stable)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT2IG1->bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT2IG1->bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Control)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2IG1->bt7.Aftertreatment_2_Intake_NOx_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2IG1->bt7.NOx_Sensor_ATI2_Self_diagnosis_Status)<<6;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2IG1->bt8.Aftertreatment_2_Intake_Oxygen_Sensor_Preliminary_FMI)<<1;
}
void AT2OG1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2OG1_t *AT2OG1)
{
    J1939_MESSAGE->PGN = 0x00F011 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2OG1->Aftertreatment_2_Outlet_NOx>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2OG1->Aftertreatment_2_Outlet_NOx);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2OG1->Aftertreatment_2_Outlet_O2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2OG1->Aftertreatment_2_Outlet_O2);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2OG1->bt5.Aftertreatment_2_Outlet_Gas_Sensor_Power_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2OG1->bt5.Aftertreatment_2_Outlet_Gas_Sensor_at_Temperature)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2OG1->bt5.Aftertreatment_2_Outlet_NOx_Reading_Stable)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2OG1->bt5.Aftertreatment_2_Outlet_Wide_Range___O2_Reading_Stable)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT2OG1->bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT2OG1->bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Control)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2OG1->bt7.Aftertreatment_2_Outlet_NOx_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2OG1->bt7.NOx_Sensor_ATO2_Self_diagnosis_Status)<<6;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2OG1->bt8.Aftertreatment_2_Outlet_Oxygen_Sensor_Preliminary_FMI)<<1;
}
void FWSS1 ( J1939_MESSAGE_T *J1939_MESSAGE,getFWSS1_t *FWSS1)
{
    J1939_MESSAGE->PGN = 0x00F012 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(FWSS1->Fifth_Wheel_Vertical_Force>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(FWSS1->Fifth_Wheel_Vertical_Force);
    J1939_MESSAGE->data[3] = (uint8_t)(FWSS1->Fifth_Wheel_Drawbar_Force>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(FWSS1->Fifth_Wheel_Drawbar_Force);
    J1939_MESSAGE->data[5] = (uint8_t)(FWSS1->Fifth_Wheel_Roll_Moment>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(FWSS1->Fifth_Wheel_Roll_Moment);
    J1939_MESSAGE->data[7] |= (uint8_t)(FWSS1->bt7.Fifth_Wheel_Roll_Warning_Indicator)<<1;
}
void SSI ( J1939_MESSAGE_T *J1939_MESSAGE,getSSI_t *SSI)
{
    J1939_MESSAGE->PGN = 0x00F013 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SSI->Pitch_Angle>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(SSI->Pitch_Angle);
    J1939_MESSAGE->data[3] = (uint8_t)(SSI->Roll_Angle>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(SSI->Roll_Angle);
    J1939_MESSAGE->data[5] = (uint8_t)(SSI->Pitch_Rate>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(SSI->Pitch_Rate);
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI->bt7.Pitch_Angle_Figure_of_Merit)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI->bt7.Roll_Angle_Figure_of_Merit)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI->bt7.Pitch_Rate_Figure_of_Merit)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI->bt7.Pitch_and_Roll_Compensated)<<7;
    J1939_MESSAGE->data[8] = SSI->Roll_and_Pitch_Measurement_Latency;
}
void BI ( J1939_MESSAGE_T *J1939_MESSAGE,getBI_t *BI)
{
    J1939_MESSAGE->PGN = 0x00F014 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(BI->Relative_Blade_Height>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(BI->Relative_Blade_Height);
    J1939_MESSAGE->data[3] = (uint8_t)(BI->Blade_Rotation_Angle>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(BI->Blade_Rotation_Angle);
    J1939_MESSAGE->data[5] = BI->Relative_Blade_Height_and_Blade_Rotation_Angle_Measurement_Latency;
    J1939_MESSAGE->data[6] |= (uint8_t)(BI->bt6.Relative_Blade_Height_Figure_of_Merit)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BI->bt6.Blade_Rotation_Angle_Figure_of_Merit)<<3;
}
void CCS ( J1939_MESSAGE_T *J1939_MESSAGE,getCCS_t *CCS)
{
    J1939_MESSAGE->PGN = 0x00F016 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCS->bt1.Engine_Cylinder_1_Combustion_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCS->bt1.Engine_Cylinder_2_Combustion_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCS->bt1.Engine_Cylinder_3_Combustion_Status)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCS->bt1.Engine_Cylinder_4_Combustion_Status)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(CCS->bt2.Engine_Cylinder_5_Combustion_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(CCS->bt2.Engine_Cylinder_6_Combustion_Status)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(CCS->bt2.Engine_Cylinder_7_Combustion_Status)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(CCS->bt2.Engine_Cylinder_8_Combustion_Status)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(CCS->bt3.Engine_Cylinder_9_Combustion_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(CCS->bt3.Engine_Cylinder_10_Combustion_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(CCS->bt3.Engine_Cylinder_11_Combustion_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(CCS->bt3.Engine_Cylinder_12_Combustion_Status)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCS->bt4.Engine_Cylinder_13_Combustion_Status)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCS->bt4.Engine_Cylinder_14_Combustion_Status)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCS->bt4.Engine_Cylinder_15_Combustion_Status)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCS->bt4.Engine_Cylinder_16_Combustion_Status)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCS->bt5.Engine_Cylinder_17_Combustion_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCS->bt5.Engine_Cylinder_18_Combustion_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCS->bt5.Engine_Cylinder_19_Combustion_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCS->bt5.Engine_Cylinder_20_Combustion_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(CCS->bt6.Engine_Cylinder_21_Combustion_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(CCS->bt6.Engine_Cylinder_22_Combustion_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(CCS->bt6.Engine_Cylinder_23_Combustion_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(CCS->bt6.Engine_Cylinder_24_Combustion_Status)<<7;
}
void KL1 ( J1939_MESSAGE_T *J1939_MESSAGE,getKL1_t *KL1)
{
    J1939_MESSAGE->PGN = 0x00F017 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = KL1->Engine_Cylinder_1_Knock_Level;
    J1939_MESSAGE->data[2] = KL1->Engine_Cylinder_2_Knock_Level;
    J1939_MESSAGE->data[3] = KL1->Engine_Cylinder_3_Knock_Level;
    J1939_MESSAGE->data[4] = KL1->Engine_Cylinder_4_Knock_Level;
    J1939_MESSAGE->data[5] = KL1->Engine_Cylinder_5_Knock_Level;
    J1939_MESSAGE->data[6] = KL1->Engine_Cylinder_6_Knock_Level;
    J1939_MESSAGE->data[7] = KL1->Engine_Cylinder_7_Knock_Level;
    J1939_MESSAGE->data[8] = KL1->Engine_Cylinder_8_Knock_Level;
}
void KL2 ( J1939_MESSAGE_T *J1939_MESSAGE,getKL2_t *KL2)
{
    J1939_MESSAGE->PGN = 0x00F018 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = KL2->Engine_Cylinder_9_Knock_Level;
    J1939_MESSAGE->data[2] = KL2->Engine_Cylinder_10_Knock_Level;
    J1939_MESSAGE->data[3] = KL2->Engine_Cylinder_11_Knock_Level;
    J1939_MESSAGE->data[4] = KL2->Engine_Cylinder_12_Knock_Level;
    J1939_MESSAGE->data[5] = KL2->Engine_Cylinder_13_Knock_Level;
    J1939_MESSAGE->data[6] = KL2->Engine_Cylinder_14_Knock_Level;
    J1939_MESSAGE->data[7] = KL2->Engine_Cylinder_15_Knock_Level;
    J1939_MESSAGE->data[8] = KL2->Engine_Cylinder_16_Knock_Level;
}
void KL3 ( J1939_MESSAGE_T *J1939_MESSAGE,getKL3_t *KL3)
{
    J1939_MESSAGE->PGN = 0x00F019 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = KL3->Engine_Cylinder_17_Knock_Level;
    J1939_MESSAGE->data[2] = KL3->Engine_Cylinder_18_Knock_Level;
    J1939_MESSAGE->data[3] = KL3->Engine_Cylinder_19_Knock_Level;
    J1939_MESSAGE->data[4] = KL3->Engine_Cylinder_20_Knock_Level;
    J1939_MESSAGE->data[5] = KL3->Engine_Cylinder_21_Knock_Level;
    J1939_MESSAGE->data[6] = KL3->Engine_Cylinder_22_Knock_Level;
    J1939_MESSAGE->data[7] = KL3->Engine_Cylinder_23_Knock_Level;
    J1939_MESSAGE->data[8] = KL3->Engine_Cylinder_24_Knock_Level;
}
void TFAC ( J1939_MESSAGE_T *J1939_MESSAGE,getTFAC_t *TFAC)
{
    J1939_MESSAGE->PGN = 0x00F01A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TFAC->Engine_Throttle_Actuator_1_Control_Command>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TFAC->Engine_Throttle_Actuator_1_Control_Command);
    J1939_MESSAGE->data[3] = (uint8_t)(TFAC->Engine_Throttle_Actuator_2_Control_Command>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TFAC->Engine_Throttle_Actuator_2_Control_Command);
    J1939_MESSAGE->data[5] = (uint8_t)(TFAC->Engine_Fuel_Actuator_1_Control_Command>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TFAC->Engine_Fuel_Actuator_1_Control_Command);
    J1939_MESSAGE->data[7] = (uint8_t)(TFAC->Engine_Fuel_Actuator_2_Control_Command>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TFAC->Engine_Fuel_Actuator_2_Control_Command);
}
void SAS ( J1939_MESSAGE_T *J1939_MESSAGE,getSAS_t *SAS)
{
    J1939_MESSAGE->PGN = 0x00F01D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SAS->Steering_Wheel_Angle>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(SAS->Steering_Wheel_Angle);
    J1939_MESSAGE->data[3] |= (uint8_t)(SAS->bt3.Steering_Wheel_Angle_Range_Counter)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(SAS->bt3.Steering_Wheel_Angle_Range_Counter_Type)<<7;
    J1939_MESSAGE->data[5] = (uint8_t)(SAS->Steering_Wheel_Angle_Range>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(SAS->Steering_Wheel_Angle_Range);
    J1939_MESSAGE->data[7] |= (uint8_t)(SAS->bt7.Steering_Angle_Sensor_Active_Mode)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(SAS->bt7.Steering_Angle_Sensor_Calibrated)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(SAS->bt8.Message_Counter)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(SAS->bt8.Message_Checksum)<<5;
}
void ESSI ( J1939_MESSAGE_T *J1939_MESSAGE,getESSI_t *ESSI)
{
    J1939_MESSAGE->PGN = 0x00F021 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESSI->Engine_Speed_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESSI->Engine_Speed_1);
    J1939_MESSAGE->data[3] = (uint8_t)(ESSI->Engine_Speed_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESSI->Engine_Speed_2);
    J1939_MESSAGE->data[5] = (uint8_t)(ESSI->Engine_Speed_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESSI->Engine_Speed_3);
    J1939_MESSAGE->data[7] |= (uint8_t)(ESSI->bt7.Engine_Speed_Sensor_3_Timing_Pattern_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(ESSI->bt7.Engine_Speed_Sensor_2_Timing_Pattern_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(ESSI->bt7.Engine_Speed_Sensor_1_Timing_Pattern_Status)<<7;
}
void A1SCRDSI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRDSI1_t *A1SCRDSI1)
{
    J1939_MESSAGE->PGN = 0x00F023 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCRDSI1->bt3.Aftertreatment_1_SCR_System_State)<<1;
    J1939_MESSAGE->data[4] = (uint8_t)(A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator);
    J1939_MESSAGE->data[6] = A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Absolute_Pressure;
}
void A1SCRDSR1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRDSR1_t *A1SCRDSR1)
{
    J1939_MESSAGE->PGN = 0x00F024 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCRDSR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCRDSR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCRDSR1->bt3.Aftertreatment_1_SCR_System_Requested_State)<<1;
    J1939_MESSAGE->data[4] = (uint8_t)(A1SCRDSR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(A1SCRDSR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator);
}
void A1SCRAI ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRAI_t *A1SCRAI)
{
    J1939_MESSAGE->PGN = 0x00F025 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCRAI->Aftertreatment_1_Outlet_NH3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCRAI->Aftertreatment_1_Outlet_NH3);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCRAI->bt3.Aftertreatment_1_Outlet_NH3_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRAI->bt4.Aftertreatment_1_Outlet_NH3_Reading_Stable)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRAI->bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Power_In_Range)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRAI->bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_at_Temperature)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(A1SCRAI->bt5.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1SCRAI->bt6.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Control)<<1;
}
void A2SCRDSI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRDSI1_t *A2SCRDSI1)
{
    J1939_MESSAGE->PGN = 0x00F026 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCRDSI1->bt3.Aftertreatment_2_SCR_System_State)<<1;
    J1939_MESSAGE->data[4] = (uint8_t)(A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator);
    J1939_MESSAGE->data[6] = A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Absolute_Pressure;
}
void A2SCRDSR1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRDSR1_t *A2SCRDSR1)
{
    J1939_MESSAGE->PGN = 0x00F027 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCRDSR1->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCRDSR1->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCRDSR1->bt3.Aftertreatment_2_SCR_System_Requested_State)<<1;
    J1939_MESSAGE->data[4] = (uint8_t)(A2SCRDSR1->Aftertreatment_2_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(A2SCRDSR1->Aftertreatment_2_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator);
}
void A2SCRAI ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRAI_t *A2SCRAI)
{
    J1939_MESSAGE->PGN = 0x00F028 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCRAI->Aftertreatment_2_Outlet_NH3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCRAI->Aftertreatment_2_Outlet_NH3);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCRAI->bt3.Aftertreatment_2_Outlet_NH3_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRAI->bt4.Aftertreatment_2_Outlet_NH3_Reading_Stable)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRAI->bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Power_In_Range)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRAI->bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_at_Temperature)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(A2SCRAI->bt5.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCRAI->bt6.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Control)<<1;
}
void SSI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getSSI2_t *SSI2)
{
    J1939_MESSAGE->PGN = 0x00F029 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SSI2->Pitch_Angle_Extended_Range>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(SSI2->Pitch_Angle_Extended_Range>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(SSI2->Pitch_Angle_Extended_Range);
    J1939_MESSAGE->data[4] = (uint8_t)(SSI2->Roll_Angle_Extended_Range>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(SSI2->Roll_Angle_Extended_Range>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(SSI2->Roll_Angle_Extended_Range);
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI2->bt7.Pitch_Angle_Extended_Range_Compensation)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI2->bt7.Pitch_Angle_Extended_Range_Figure_of_Merit)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI2->bt7.Roll_Angle_Extended_Range_Compensation)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(SSI2->bt7.Roll_Angle_Extended_Range_Figure_of_Merit)<<7;
    J1939_MESSAGE->data[8] = SSI2->Roll_and_Pitch_Extended_Range_Measurement_Latency;
}
void ARI ( J1939_MESSAGE_T *J1939_MESSAGE,getARI_t *ARI)
{
    J1939_MESSAGE->PGN = 0x00F02A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ARI->Pitch_Rate_Extended_Range>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ARI->Pitch_Rate_Extended_Range);
    J1939_MESSAGE->data[3] = (uint8_t)(ARI->Roll_Rate_Extended_Range>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ARI->Roll_Rate_Extended_Range);
    J1939_MESSAGE->data[5] = (uint8_t)(ARI->Yaw_Rate_Extended_Range>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ARI->Yaw_Rate_Extended_Range);
    J1939_MESSAGE->data[7] |= (uint8_t)(ARI->bt7.Pitch_Rate_Extended_Range_Figure_of_Merit)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(ARI->bt7.Roll_Rate_Extended_Range_Figure_of_Merit)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(ARI->bt7.Yaw_Rate_Extended_Range_Figure_of_Merit)<<5;
    J1939_MESSAGE->data[8] = ARI->Angular_Rate_Measurement_Latency;
}
void CN ( J1939_MESSAGE_T *J1939_MESSAGE,getCN_t *CN)
{
    J1939_MESSAGE->PGN = 0x00F02B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CN->bt1.Crash_Type)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(CN->bt8.Crash_Counter)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(CN->bt8.Crash_Checksum)<<5;
}
void MSI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getMSI2_t *MSI2)
{
    J1939_MESSAGE->PGN = 0x00F02C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(MSI2->Magnet_Forward_Current>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(MSI2->Magnet_Forward_Current);
    J1939_MESSAGE->data[3] = MSI2->Magnet_Reverse_Current;
    J1939_MESSAGE->data[4] |= (uint8_t)(MSI2->bt4.Material_Lift_Switch)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(MSI2->bt4.Material_Drop_Switch)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(MSI2->bt4.Generator_Current_Boost_Active_Status)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(MSI2->bt4.Material_Lift_Active_Status)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(MSI2->bt5.Material_Drop_Active_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(MSI2->bt5.Lift_Relay_Control)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(MSI2->bt5.Drop_Relay_Control)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(MSI2->bt5.Magnet_Generator_Control)<<7;
}
void ACCS ( J1939_MESSAGE_T *J1939_MESSAGE,getACCS_t *ACCS)
{
    J1939_MESSAGE->PGN = 0x00F02D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ACCS->Lateral_Acceleration_Extended_Range>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ACCS->Lateral_Acceleration_Extended_Range);
    J1939_MESSAGE->data[3] = (uint8_t)(ACCS->Longitudinal_Acceleration_Extended_Range>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ACCS->Longitudinal_Acceleration_Extended_Range);
    J1939_MESSAGE->data[5] = (uint8_t)(ACCS->Vertical_Acceleration_Extended_Range>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ACCS->Vertical_Acceleration_Extended_Range);
    J1939_MESSAGE->data[7] |= (uint8_t)(ACCS->bt7.Lateral_Acceleration_Extended_Range_Figure_of_Merit)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(ACCS->bt7.Longitudinal_Acceleration_Extended_Range_Figure_of_Merit)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(ACCS->bt7.Vertical_Acceleration_Extended_Range_Figure_of_Merit)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(ACCS->bt7.Support_Variable_Transmission_Repetition_Rate_for_Acceleration_Sensor)<<7;
}
void Command ( J1939_MESSAGE_T *J1939_MESSAGE,getCommand_t *Command)
{
    J1939_MESSAGE->PGN = 0x00F02E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(Command->Engine_Turbocharger_Wastegate_Actuator_1_Command>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(Command->Engine_Turbocharger_Wastegate_Actuator_1_Command);
    J1939_MESSAGE->data[3] = (uint8_t)(Command->Engine_Turbocharger_Wastegate_Actuator_2_Command>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(Command->Engine_Turbocharger_Wastegate_Actuator_2_Command);
    J1939_MESSAGE->data[5] = (uint8_t)(Command->Engine_Exhaust_Back_Pressure_Regulator_Control_Command>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(Command->Engine_Exhaust_Back_Pressure_Regulator_Control_Command);
}
void AEBS1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAEBS1_t *AEBS1)
{
    J1939_MESSAGE->PGN = 0x00F02F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AEBS1->bt1.Advanced_emergency_braking_system_state)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AEBS1->bt1.Collision_warning_level)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(AEBS1->bt2.Relevant_object_detected_for_advanced_emergency_braking_system)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AEBS1->bt2.Bend_off_probability_of_relevant_object)<<4;
    J1939_MESSAGE->data[3] = AEBS1->Time_to_collision_with_relevant_object;
}
void WS ( J1939_MESSAGE_T *J1939_MESSAGE,getWS_t *WS)
{
    J1939_MESSAGE->PGN = 0x00F030 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(WS->Wireless_Rolling_Message_Counter>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(WS->Wireless_Rolling_Message_Counter);
    J1939_MESSAGE->data[3] |= (uint8_t)(WS->bt3.Transmitter_Command_State)<<5;
    J1939_MESSAGE->data[4] = (uint8_t)(WS->Transmitter_ID_1>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(WS->Transmitter_ID_1>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(WS->Transmitter_ID_1);
    J1939_MESSAGE->data[7] = WS->Wireless_Signal_Strength_1;
}
void WAND ( J1939_MESSAGE_T *J1939_MESSAGE,getWAND_t *WAND)
{
    J1939_MESSAGE->PGN = 0x00F031 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(WAND->Wand_Angle>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(WAND->Wand_Angle);
    J1939_MESSAGE->data[3] |= (uint8_t)(WAND->bt3.Wand_Sensor_Figure_of_Merit)<<1;
}
void LDISP ( J1939_MESSAGE_T *J1939_MESSAGE,getLDISP_t *LDISP)
{
    J1939_MESSAGE->PGN = 0x00F032 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LDISP->Measured_Linear_Displacement>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LDISP->Measured_Linear_Displacement);
    J1939_MESSAGE->data[3] |= (uint8_t)(LDISP->bt3.Linear_Displacement_Sensor_Sensor_Figure_of_Merit)<<1;
}
void A1SCRAI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRAI2_t *A1SCRAI2)
{
    J1939_MESSAGE->PGN = 0x00F033 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCRAI2->Aftertreatment_1_SCR_Intermediate_NH3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCRAI2->Aftertreatment_1_SCR_Intermediate_NH3);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCRAI2->bt3.Aftertreatment_1_SCR_Intermediate_NH3_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRAI2->bt4.Aftertreatment_1_SCR_Intermediate_NH3_Reading_Stable)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRAI2->bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRAI2->bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(A1SCRAI2->bt5.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1SCRAI2->bt6.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control)<<1;
}
void A2SCRAI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRAI2_t *A2SCRAI2)
{
    J1939_MESSAGE->PGN = 0x00F034 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCRAI2->Aftertreatment_2_SCR_Intermediate_NH3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCRAI2->Aftertreatment_2_SCR_Intermediate_NH3);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCRAI2->bt3.Aftertreatment_2_SCR_Intermediate_NH3_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRAI2->bt4.Aftertreatment_2_SCR_Intermediate_NH3_Reading_Stable)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRAI2->bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRAI2->bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(A2SCRAI2->bt5.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCRAI2->bt6.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control)<<1;
}
void HSS ( J1939_MESSAGE_T *J1939_MESSAGE,getHSS_t *HSS)
{
    J1939_MESSAGE->PGN = 0x00FCC2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(HSS->bt1.Hybrid_System_Warning_Indicator)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(HSS->bt1.Hybrid_System_Overheat_Indicator)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(HSS->bt1.Hybrid_System_Stop_Indicator)<<5;
}
void GFI4 ( J1939_MESSAGE_T *J1939_MESSAGE,getGFI4_t *GFI4)
{
    J1939_MESSAGE->PGN = 0x00FCC3 ;
    J1939_MESSAGE->data[1] = (uint8_t)(GFI4->Supply_Gas_Methane_Percentage>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(GFI4->Supply_Gas_Methane_Percentage);
}
void A2SCREGT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCREGT2_t *A2SCREGT2)
{
    J1939_MESSAGE->PGN = 0x00FCC4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCREGT2->Aftertreatment_2_SCR_Intermediate_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCREGT2->Aftertreatment_2_SCR_Intermediate_Gas_Temperature);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCREGT2->bt3.Aftertreatment_2_SCR_Intermediate_Gas_Temperature_Preliminary_FMI)<<1;
}
void A1SCREGT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCREGT2_t *A1SCREGT2)
{
    J1939_MESSAGE->PGN = 0x00FCC5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCREGT2->Aftertreatment_1_SCR_Intermediate_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCREGT2->Aftertreatment_1_SCR_Intermediate_Gas_Temperature);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCREGT2->bt3.Aftertreatment_1_SCR_Intermediate_Gas_Temperature_Preliminary_FMI)<<1;
}
void EEC13 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC13_t *EEC13)
{
    J1939_MESSAGE->PGN = 0x00FCC8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC13->bt1.Feedback_Engine_Fueling_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC13->bt1.Engine_Fueling_Inhibit_Allowed)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC13->bt1.Engine_Fueling_Inhibit_Prevented_Reason)<<5;
}
void EF_TVI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEF_TVI2_t *EF_TVI2)
{
    J1939_MESSAGE->PGN = 0x00FCC9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EF_TVI2->Engine_Throttle_Valve_1_Temperature;
    J1939_MESSAGE->data[2] = EF_TVI2->Engine_Throttle_Valve_2_Temperature;
    J1939_MESSAGE->data[3] = EF_TVI2->Engine_Fuel_Valve_1_Temperature;
    J1939_MESSAGE->data[4] = EF_TVI2->Engine_Fuel_Valve_2_Temperature;
    J1939_MESSAGE->data[5] = EF_TVI2->Engine_Turbocharger_Wastegate_Actuator_2_Temperature;
}
void EEGR1A ( J1939_MESSAGE_T *J1939_MESSAGE,getEEGR1A_t *EEGR1A)
{
    J1939_MESSAGE->PGN = 0x00FCCA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEGR1A->bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEGR1A->bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature_Status)<<6;
    J1939_MESSAGE->data[2] = EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature;
    J1939_MESSAGE->data[3] = EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Desired_Position;
    J1939_MESSAGE->data[4] |= (uint8_t)(EEGR1A->bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EEGR1A->bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature_Status)<<6;
    J1939_MESSAGE->data[5] = EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature;
    J1939_MESSAGE->data[6] = EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Desired_Position;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEGR1A->bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Operation_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEGR1A->bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Operation_Status)<<5;
}
void EEGR1B ( J1939_MESSAGE_T *J1939_MESSAGE,getEEGR1B_t *EEGR1B)
{
    J1939_MESSAGE->PGN = 0x00FCCB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEGR1B->bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEGR1B->bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature_Status)<<6;
    J1939_MESSAGE->data[2] = EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature;
    J1939_MESSAGE->data[3] = EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Desired_Position;
    J1939_MESSAGE->data[4] |= (uint8_t)(EEGR1B->bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EEGR1B->bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature_Status)<<6;
    J1939_MESSAGE->data[5] = EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature;
    J1939_MESSAGE->data[6] = EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Desired_Position;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEGR1B->bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Operation_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEGR1B->bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Operation_Status)<<5;
}
void EEC12 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC12_t *EEC12)
{
    J1939_MESSAGE->PGN = 0x00FCCC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC12->bt1.Aftertreatment_1_Intake_Gas_Sensor_Power_Supply)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC12->bt1.Aftertreatment_1_Outlet_Gas_Sensor_Power_Supply)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC12->bt1.Aftertreatment_2_Intake_Gas_Sensor_Power_Supply)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(EEC12->bt1.Aftertreatment_2_Outlet_Gas_Sensor_Power_Supply)<<7;
}
void NSSR ( J1939_MESSAGE_T *J1939_MESSAGE,getNSSR_t *NSSR)
{
    J1939_MESSAGE->PGN = 0x00FCCF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(NSSR->bt1.NOx_Sensor_ATO1_Self_diagnosis_Trigger)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(NSSR->bt1.NOx_Sensor_ATI1_Self_diagnosis_Trigger)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(NSSR->bt2.NOx_Sensor_ATO2_Self_diagnosis_Trigger)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(NSSR->bt2.NOx_Sensor_ATI2_Self_diagnosis_Trigger)<<5;
}
void EPSI ( J1939_MESSAGE_T *J1939_MESSAGE,getEPSI_t *EPSI)
{
    J1939_MESSAGE->PGN = 0x00FCD0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EPSI->Aftertreatment_1_Particulate_Sensor>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EPSI->Aftertreatment_1_Particulate_Sensor);
    J1939_MESSAGE->data[3] = (uint8_t)(EPSI->Aftertreatment_2_Particulate_Sensor>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EPSI->Aftertreatment_2_Particulate_Sensor);
}
void AT1P1I ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1P1I_t *AT1P1I)
{
    J1939_MESSAGE->PGN = 0x00FCD5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT1P1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater;
}
void AT1DPF2S5 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPF2S5_t *AT1DPF2S5)
{
    J1939_MESSAGE->PGN = 0x00FCD6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_3);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_3_Soot_Signal>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_3_Soot_Signal);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_4>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_4);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_4_Soot_Signal>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_4_Soot_Signal);
}
void AT1DPF2S4 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPF2S4_t *AT1DPF2S4)
{
    J1939_MESSAGE->PGN = 0x00FCD7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_1_Soot_Signal>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_1_Soot_Signal);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_2>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_2);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_2_Soot_Signal>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_2_Soot_Signal);
}
void AT1DPF2S3 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPF2S3_t *AT1DPF2S3)
{
    J1939_MESSAGE->PGN = 0x00FCD8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_2);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_3);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_4>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_4);
}
void AT1DPF1S5 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPF1S5_t *AT1DPF1S5)
{
    J1939_MESSAGE->PGN = 0x00FCD9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_3);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_3_Soot_Signal>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_3_Soot_Signal);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_4>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_4);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_4_Soot_Signal>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_4_Soot_Signal);
}
void AT1DPF1S4 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPF1S4_t *AT1DPF1S4)
{
    J1939_MESSAGE->PGN = 0x00FCDA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_1_Soot_Signal>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_1_Soot_Signal);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_2>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_2);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_2_Soot_Signal>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_2_Soot_Signal);
}
void AT1DPF1S3 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1DPF1S3_t *AT1DPF1S3)
{
    J1939_MESSAGE->PGN = 0x00FCDB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_2);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_3);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_4>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_4);
}
void CCVS3 ( J1939_MESSAGE_T *J1939_MESSAGE,getCCVS3_t *CCVS3)
{
    J1939_MESSAGE->PGN = 0x00FCDC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS3->bt1.Adaptive_Cruise_Control_Readiness_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS3->bt1.Cruise_Control_System_Command_State)<<3;
    J1939_MESSAGE->data[2] = CCVS3->Source_Address_of_Controlling_Device_for_Disabling_Cruise_Control;
    J1939_MESSAGE->data[3] = CCVS3->Source_Address_of_Controlling_Device_for_Pausing_Cruise_Control;
}
void AT2AC3 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2AC3_t *AT2AC3)
{
    J1939_MESSAGE->PGN = 0x00FCDD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2AC3->Aftertreatment_2_Secondary_Air_Absolute_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2AC3->Aftertreatment_2_Secondary_Air_Absolute_Pressure);
}
void AT1AC3 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1AC3_t *AT1AC3)
{
    J1939_MESSAGE->PGN = 0x00FCDE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1AC3->Aftertreatment_1_Secondary_Air_Absolute_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1AC3->Aftertreatment_1_Secondary_Air_Absolute_Pressure);
}
void EFL_P12 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P12_t *EFL_P12)
{
    J1939_MESSAGE->PGN = 0x00FCDF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EFL_P12->Engine_Fuel_Delivery_Absolute_Pressure;
    J1939_MESSAGE->data[2] = EFL_P12->Engine_Filtered_Fuel_Delivery_Pressure;
    J1939_MESSAGE->data[3] = EFL_P12->Engine_Filtered_Fuel_Delivery_Absolute_Pressure;
    J1939_MESSAGE->data[4] = EFL_P12->Engine_Fuel_Filter_Degradation;
}
void DPFC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getDPFC2_t *DPFC2)
{
    J1939_MESSAGE->PGN = 0x00FCE0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(DPFC2->Aftertreatment_1_Diesel_Particulate_Filter_Intake_Temperature_Set_Point>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(DPFC2->Aftertreatment_1_Diesel_Particulate_Filter_Intake_Temperature_Set_Point);
    J1939_MESSAGE->data[3] = (uint8_t)(DPFC2->Relative_Unburned_Fuel_Mass_from_Engine>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(DPFC2->Relative_Unburned_Fuel_Mass_from_Engine);
    J1939_MESSAGE->data[5] = (uint8_t)(DPFC2->Aftertreatment_1_Fuel_Mass_Rate>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(DPFC2->Aftertreatment_1_Fuel_Mass_Rate);
    J1939_MESSAGE->data[7] = (uint8_t)(DPFC2->Aftertreatment_2_Fuel_Mass_Rate>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(DPFC2->Aftertreatment_2_Fuel_Mass_Rate);
}
void LFE2 ( J1939_MESSAGE_T *J1939_MESSAGE,getLFE2_t *LFE2)
{
    J1939_MESSAGE->PGN = 0x00FCE1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LFE2->High_Resolution_Engine_Fuel_Rate>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(LFE2->High_Resolution_Engine_Fuel_Rate>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(LFE2->High_Resolution_Engine_Fuel_Rate>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LFE2->High_Resolution_Engine_Fuel_Rate);
}
void SFS ( J1939_MESSAGE_T *J1939_MESSAGE,getSFS_t *SFS)
{
    J1939_MESSAGE->PGN = 0x00FCE2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(SFS->bt1.Supplemental_Fan_Enable_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(SFS->bt1.Supplemental_Fan_Direction_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(SFS->bt1.Supplemental_Fan_Velocity_Status)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(SFS->bt2.Supplemental_Fan_Controller_Temperature_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(SFS->bt2.Supplemental_Fan_Drive_Status)<<4;
    J1939_MESSAGE->data[3] = SFS->Supplemental_Fan_Controller_ECU_Temperature;
    J1939_MESSAGE->data[4] = (uint8_t)(SFS->Supplemental_Fan_Speed>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(SFS->Supplemental_Fan_Speed);
    J1939_MESSAGE->data[6] = SFS->Supplemental_Fan_Current;
    J1939_MESSAGE->data[7] = (uint8_t)(SFS->Supplemental_Fan_Power>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(SFS->Supplemental_Fan_Power);
}
void EBCC ( J1939_MESSAGE_T *J1939_MESSAGE,getEBCC_t *EBCC)
{
    J1939_MESSAGE->PGN = 0x00FCE3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EBCC->Engine_Turbocharger_1_Turbine_Outlet_Pressure;
    J1939_MESSAGE->data[2] = EBCC->Desired_Engine_Turbocharger_1_Turbine_Outlet_Pressure;
    J1939_MESSAGE->data[3] = EBCC->Engine_Exhaust_Brake_Actuator_Command;
    J1939_MESSAGE->data[4] = EBCC->Engine_Turbocharger_2_Turbine_Outlet_Pressure;
    J1939_MESSAGE->data[5] = EBCC->Desired_Engine_Turbocharger_2_Turbine_Outlet_Pressure;
}
void EFP ( J1939_MESSAGE_T *J1939_MESSAGE,getEFP_t *EFP)
{
    J1939_MESSAGE->PGN = 0x00FCE4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFP->Engine_Fuel_Dynamic_Viscosity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFP->Engine_Fuel_Dynamic_Viscosity);
    J1939_MESSAGE->data[3] = (uint8_t)(EFP->Engine_Fuel_Density>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFP->Engine_Fuel_Density);
    J1939_MESSAGE->data[5] = (uint8_t)(EFP->Engine_Fuel_Dielectricity__high_resolution_>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFP->Engine_Fuel_Dielectricity__high_resolution_);
    J1939_MESSAGE->data[7] = (uint8_t)(EFP->Engine_Fuel_Temperature__High_Resolution_>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFP->Engine_Fuel_Temperature__High_Resolution_);
}
void HOP ( J1939_MESSAGE_T *J1939_MESSAGE,getHOP_t *HOP)
{
    J1939_MESSAGE->PGN = 0x00FCE5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(HOP->Hydraulic_Oil_Dynamic_Viscosity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(HOP->Hydraulic_Oil_Dynamic_Viscosity);
    J1939_MESSAGE->data[3] = (uint8_t)(HOP->Hydraulic_Oil_Density>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(HOP->Hydraulic_Oil_Density);
    J1939_MESSAGE->data[5] = (uint8_t)(HOP->Hydraulic_Oil_Relative_Dielectricity__high_resolution_>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(HOP->Hydraulic_Oil_Relative_Dielectricity__high_resolution_);
    J1939_MESSAGE->data[7] = (uint8_t)(HOP->Hydraulic_Oil_Temperature__High_Resolution_>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(HOP->Hydraulic_Oil_Temperature__High_Resolution_);
}
void VLS2 ( J1939_MESSAGE_T *J1939_MESSAGE,getVLS2_t *VLS2)
{
    J1939_MESSAGE->PGN = 0x00FCE6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(VLS2->bt1.Lubrication_Cycle_Mode_Lock_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(VLS2->bt1.Lubrication_Cycle_Mode_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(VLS2->bt1.Lubrication_Operation_Mode_Status)<<6;
    J1939_MESSAGE->data[2] |= (uint8_t)(VLS2->bt2.Lubrication_Pump_Enable_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(VLS2->bt2.Lubrication_Reservoir_Level)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(VLS2->bt2.Lubrication_Timing_Cycle_Status)<<5;
}
void EC3 ( J1939_MESSAGE_T *J1939_MESSAGE,getEC3_t *EC3)
{
    J1939_MESSAGE->PGN = 0x00FCE7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EC3->Engine_Friction_Percent_Torque_At_Idle_Point_1;
    J1939_MESSAGE->data[2] = EC3->Engine_Friction_Percent_Torque_Point_2;
    J1939_MESSAGE->data[3] = EC3->Engine_Friction_Percent_Torque_Point_3;
    J1939_MESSAGE->data[4] = EC3->Engine_Friction_Percent_Torque_Point_4;
    J1939_MESSAGE->data[5] = EC3->Engine_Friction_Percent_Torque_Point_5;
    J1939_MESSAGE->data[6] = EC3->Engine_Friction_Percent_Torque_Point_6;
    J1939_MESSAGE->data[7] = EC3->Engine_Friction_Percent_Torque_Point_7;
}
void IVAC ( J1939_MESSAGE_T *J1939_MESSAGE,getIVAC_t *IVAC)
{
    J1939_MESSAGE->PGN = 0x00FCE8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(IVAC->bt1.Intake_Valve_Actuation_System_Oil_Pressure_1_Solenoid_Control)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(IVAC->bt1.Intake_Valve_Actuation_System_Oil_Pressure_2_Solenoid_Control)<<3;
}
void ARMSWIMC ( J1939_MESSAGE_T *J1939_MESSAGE,getARMSWIMC_t *ARMSWIMC)
{
    J1939_MESSAGE->PGN = 0x00FCE9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ARMSWIMC->bt1.Armrest_1_Switch_1)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ARMSWIMC->bt1.Armrest_1_Switch_2)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(ARMSWIMC->bt1.Armrest_2_Switch_1)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ARMSWIMC->bt1.Armrest_2_Switch_2)<<7;
}
void VEP4 ( J1939_MESSAGE_T *J1939_MESSAGE,getVEP4_t *VEP4)
{
    J1939_MESSAGE->PGN = 0x00FCEA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VEP4->Hybrid_Battery_Pack_Remaining_Charge>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(VEP4->Hybrid_Battery_Pack_Remaining_Charge);
}
void AFT2NAI ( J1939_MESSAGE_T *J1939_MESSAGE,getAFT2NAI_t *AFT2NAI)
{
    J1939_MESSAGE->PGN = 0x00FCEB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AFT2NAI->bt1.Aftertreatment_2_NOx_Adsorber_deNOx_Regeneration_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AFT2NAI->bt1.Aftertreatment_2_NOx_Adsorber_deSOx_Regeneration_Status)<<3;
}
void AFT1NAI ( J1939_MESSAGE_T *J1939_MESSAGE,getAFT1NAI_t *AFT1NAI)
{
    J1939_MESSAGE->PGN = 0x00FCEC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AFT1NAI->bt1.Aftertreatment_1_NOx_Adsorber_deNOx_Regeneration_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AFT1NAI->bt1.Aftertreatment_1_NOx_Adsorber_deSOx_Regeneration_Status)<<3;
}
void AT2WUDOC ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2WUDOC_t *AT2WUDOC)
{
    J1939_MESSAGE->PGN = 0x00FCED ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2WUDOC->Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2WUDOC->Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2WUDOC->Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2WUDOC->Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature);
}
void LLRE ( J1939_MESSAGE_T *J1939_MESSAGE,getLLRE_t *LLRE)
{
    J1939_MESSAGE->PGN = 0x00FCEE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LLRE->Blade_Elevation_Deviation___Left>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LLRE->Blade_Elevation_Deviation___Left);
    J1939_MESSAGE->data[3] = (uint8_t)(LLRE->Blade_Elevation_Deviation___Right>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LLRE->Blade_Elevation_Deviation___Right);
    J1939_MESSAGE->data[5] = (uint8_t)(LLRE->Blade_Reference_Elevation_Offset___Left>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(LLRE->Blade_Reference_Elevation_Offset___Left);
    J1939_MESSAGE->data[7] = (uint8_t)(LLRE->Blade_Reference_Elevation_Offset___Right>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(LLRE->Blade_Reference_Elevation_Offset___Right);
}
void EFL_P11 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P11_t *EFL_P11)
{
    J1939_MESSAGE->PGN = 0x00FCEF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P11->Engine_Exhaust_Gas_Recirculation_1_Intake_Absolute_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P11->Engine_Exhaust_Gas_Recirculation_1_Intake_Absolute_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P11->Engine_Exhaust_Gas_Recirculation_1_Outlet_Absolute_Pressure__High_Resolution_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P11->Engine_Exhaust_Gas_Recirculation_1_Outlet_Absolute_Pressure__High_Resolution_);
}
void EFS2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFS2_t *EFS2)
{
    J1939_MESSAGE->PGN = 0x00FCF0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EFS2->Engine_Fuel_Filter__Suction_Side__Intake_Absolute_Pressure;
}
void Information ( J1939_MESSAGE_T *J1939_MESSAGE,getInformation_t *Information)
{
    J1939_MESSAGE->PGN = 0x00FCF1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(Information->bt1.Engine_Turbocharger_Wastegate_Actuator_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(Information->bt1.Engine_Turbocharger_Wastegate_Actuator_2_Temperature_Status)<<6;
    J1939_MESSAGE->data[2] |= (uint8_t)(Information->bt2.Engine_Turbocharger_Wastegate_Actuator_1_Operation_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(Information->bt2.Engine_Turbocharger_Wastegate_Actuator_2_Operation_Status)<<5;
    J1939_MESSAGE->data[3] = Information->Engine_Exhaust_Back_Pressure_Regulator_Position;
    J1939_MESSAGE->data[4] |= (uint8_t)(Information->bt4.Engine_Exhaust_Back_Pressure_Regulator_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(Information->bt4.Engine_Exhaust_Back_Pressure_Regulator_Temperature_Status)<<6;
    J1939_MESSAGE->data[5] |= (uint8_t)(Information->bt5.Engine_Exhaust_Back_Pressure_Regulator_Control_Operation_Status)<<1;
    J1939_MESSAGE->data[6] = Information->Engine_Turbocharger_Wastegate_Actuator_1_Temperature;
    J1939_MESSAGE->data[7] = Information->Engine_Exhaust_Back_Pressure_Actuator_1_Desired_Position;
    J1939_MESSAGE->data[8] = Information->Engine_Exhaust_Back_Pressure_Actuator_1_Temperature;
}
void EFTVI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFTVI1_t *EFTVI1)
{
    J1939_MESSAGE->PGN = 0x00FCF2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EFTVI1->Engine_Desired_Throttle_Valve_1_Position;
    J1939_MESSAGE->data[2] |= (uint8_t)(EFTVI1->bt2.Engine_Throttle_Valve_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(EFTVI1->bt2.Engine_Throttle_Valve_1_Temperature_Status)<<6;
    J1939_MESSAGE->data[3] = EFTVI1->Engine_Desired_Throttle_Valve_2_Position;
    J1939_MESSAGE->data[4] |= (uint8_t)(EFTVI1->bt4.Engine_Throttle_Valve_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EFTVI1->bt4.Engine_Throttle_Valve_2_Temperature_status)<<6;
    J1939_MESSAGE->data[5] |= (uint8_t)(EFTVI1->bt5.Engine_Fuel_Valve_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EFTVI1->bt5.Engine_Fuel_Valve_1_Temperature_Status)<<6;
    J1939_MESSAGE->data[6] |= (uint8_t)(EFTVI1->bt6.Engine_Fuel_Valve_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(EFTVI1->bt6.Engine_Fuel_Valve_2_Temperature_Status)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(EFTVI1->bt7.Engine_Throttle_Valve_1_Operation_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(EFTVI1->bt7.Engine_Throttle_Valve_2_Operation_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(EFTVI1->bt8.Engine_Fuel_Valve_1_Operation_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(EFTVI1->bt8.Engine_Fuel_Valve_2_Operation_Status)<<5;
}
void ETCBI ( J1939_MESSAGE_T *J1939_MESSAGE,getETCBI_t *ETCBI)
{
    J1939_MESSAGE->PGN = 0x00FCF3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ETCBI->Engine_Turbocharger_Compressor_Bypass_Actuator_2_Position;
    J1939_MESSAGE->data[2] = ETCBI->Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_2_Position;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETCBI->bt3.Engine_Turbocharger_compressor_Bypass_Actuator_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETCBI->bt3.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature_Status)<<6;
    J1939_MESSAGE->data[4] |= (uint8_t)(ETCBI->bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Operation_Status)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ETCBI->bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Operation_Status)<<5;
    J1939_MESSAGE->data[5] = ETCBI->Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature;
    J1939_MESSAGE->data[6] = ETCBI->Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature;
}
void CAC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getCAC2_t *CAC2)
{
    J1939_MESSAGE->PGN = 0x00FCF4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CAC2->Engine_Charge_Air_Cooler_2_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CAC2->Engine_Charge_Air_Cooler_2_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(CAC2->Engine_Charge_Air_Cooler_2_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CAC2->Engine_Charge_Air_Cooler_2_Outlet_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(CAC2->Engine_Charge_Air_Cooler_2_Ambient_Air_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(CAC2->Engine_Charge_Air_Cooler_2_Ambient_Air_Temperature);
    J1939_MESSAGE->data[7] = CAC2->Engine_Charge_Air_Cooler_2_Efficiency;
}
void CAC2P ( J1939_MESSAGE_T *J1939_MESSAGE,getCAC2P_t *CAC2P)
{
    J1939_MESSAGE->PGN = 0x00FCF5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Outlet_Temperature);
    J1939_MESSAGE->data[5] = CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Efficiency;
}
void CAC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getCAC1_t *CAC1)
{
    J1939_MESSAGE->PGN = 0x00FCF6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CAC1->Engine_Charge_Air_Cooler_1_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CAC1->Engine_Charge_Air_Cooler_1_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(CAC1->Engine_Charge_Air_Cooler_1_Ambient_Air_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CAC1->Engine_Charge_Air_Cooler_1_Ambient_Air_Temperature);
    J1939_MESSAGE->data[5] = CAC1->Engine_Charge_Air_Cooler_1_Efficiency;
}
void CAC1P ( J1939_MESSAGE_T *J1939_MESSAGE,getCAC1P_t *CAC1P)
{
    J1939_MESSAGE->PGN = 0x00FCF7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Outlet_Temperature);
    J1939_MESSAGE->data[5] = CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Efficiency;
}
void DPF2S2 ( J1939_MESSAGE_T *J1939_MESSAGE,getDPF2S2_t *DPF2S2)
{
    J1939_MESSAGE->PGN = 0x00FCF8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Standard_Deviation>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Standard_Deviation);
    J1939_MESSAGE->data[3] = (uint8_t)(DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Maximum>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Maximum);
    J1939_MESSAGE->data[5] = (uint8_t)(DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Minimum>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Minimum);
}
void DPF1S2 ( J1939_MESSAGE_T *J1939_MESSAGE,getDPF1S2_t *DPF1S2)
{
    J1939_MESSAGE->PGN = 0x00FCF9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Standard_Deviation>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Standard_Deviation);
    J1939_MESSAGE->data[3] = (uint8_t)(DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Maximum>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Maximum);
    J1939_MESSAGE->data[5] = (uint8_t)(DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Minimum>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Minimum);
}
void EEC11 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC11_t *EEC11)
{
    J1939_MESSAGE->PGN = 0x00FCFA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_Control>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_Control);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_2_Control>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_2_Control);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2_Valve_1_Position_Error>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2_Valve_1_Position_Error);
    J1939_MESSAGE->data[7] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position_Error>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EEC11->Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position_Error);
}
void EMAP ( J1939_MESSAGE_T *J1939_MESSAGE,getEMAP_t *EMAP)
{
    J1939_MESSAGE->PGN = 0x00FCFB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EMAP->Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Position>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EMAP->Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Position);
    J1939_MESSAGE->data[3] = (uint8_t)(EMAP->Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Position>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EMAP->Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Position);
}
void EMAC ( J1939_MESSAGE_T *J1939_MESSAGE,getEMAC_t *EMAC)
{
    J1939_MESSAGE->PGN = 0x00FCFC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EMAC->Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Control>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EMAC->Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Control);
    J1939_MESSAGE->data[3] = (uint8_t)(EMAC->Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Control>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EMAC->Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Control);
}
void EEC9 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC9_t *EEC9)
{
    J1939_MESSAGE->PGN = 0x00FCFD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC9->Engine_Exhaust_Gas_Recirculation_2_Valve_Position>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC9->Engine_Exhaust_Gas_Recirculation_2_Valve_Position);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC9->Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC9->Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC9->Commanded_Engine_Fuel_Rail_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC9->Commanded_Engine_Fuel_Rail_Pressure);
    J1939_MESSAGE->data[7] = (uint8_t)(EEC9->Commanded_Engine_Fuel_Injection_Control_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EEC9->Commanded_Engine_Fuel_Injection_Control_Pressure);
}
void EEC10 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC10_t *EEC10)
{
    J1939_MESSAGE->PGN = 0x00FCFE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Gas_Absolute_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Gas_Absolute_Pressure);
    J1939_MESSAGE->data[5] = EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler;
    J1939_MESSAGE->data[6] = EEC10->EGR_2_Cooler_Bypass_Actuator_Position;
}
void ET5 ( J1939_MESSAGE_T *J1939_MESSAGE,getET5_t *ET5)
{
    J1939_MESSAGE->PGN = 0x00FCFF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ET5->Engine_Exhaust_Gas_Recirculation_2_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ET5->Engine_Exhaust_Gas_Recirculation_2_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(ET5->Engine_Exhaust_Gas_Recirculation_2_Mixer_Intake_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ET5->Engine_Exhaust_Gas_Recirculation_2_Mixer_Intake_Temperature);
}
void EFL_P10 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P10_t *EFL_P10)
{
    J1939_MESSAGE->PGN = 0x00FD00 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Differential_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Differential_Pressure);
    J1939_MESSAGE->data[3] = EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Intake_Pressure;
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Outlet_Absolute_Pressure>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Outlet_Absolute_Pressure);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Intake_Absolute_Pressure>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Intake_Absolute_Pressure);
    J1939_MESSAGE->data[8] = EFL_P10->Engine_Coolant_Pressure_2;
}
void LVDS ( J1939_MESSAGE_T *J1939_MESSAGE,getLVDS_t *LVDS)
{
    J1939_MESSAGE->PGN = 0x00FD01 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(LVDS->bt1.Low_Voltage_Disconnect_Manual_Disconnect_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(LVDS->bt1.Low_Voltage_Disconnect_Manual_Connect_State)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(LVDS->bt1.Low_Voltage_Disconnect_Current_Operating_Mode)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(LVDS->bt2.Low_Voltage_Disconnect_Output_3_State)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(LVDS->bt2.Low_Voltage_Disconnect_Output_2_State)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(LVDS->bt3.Low_Voltage_Disconnect_Output_1_State)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(LVDS->bt3.Low_Voltage_Disconnect_Vout_Output_State)<<5;
    J1939_MESSAGE->data[4] = LVDS->Low_Voltage_Disconnect_Temperature;
}
void DLCD2 ( J1939_MESSAGE_T *J1939_MESSAGE,getDLCD2_t *DLCD2)
{
    J1939_MESSAGE->PGN = 0x00FD04 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD2->bt1.Vehicle_Battery_Voltage_Low_Lamp_Data)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD2->bt1.Vehicle_Fuel_Level_Low_Lamp_Data)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD2->bt1.Vehicle_Air_Pressure_Low_Lamp_Data)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD2->bt1.Vehicle_HVAC_Recirculation_Lamp_Data)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCD2->bt2.Vehicle_Battery_Charging_Lamp_Data)<<1;
}
void DLCD1 ( J1939_MESSAGE_T *J1939_MESSAGE,getDLCD1_t *DLCD1)
{
    J1939_MESSAGE->PGN = 0x00FD05 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD1->bt1.Engine_Protect_Lamp_Data)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD1->bt1.Engine_Amber_Warning_Lamp_Data)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD1->bt1.Engine_Red_Stop_Lamp_Data)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCD1->bt1.OBD_Malfunction_Indicator_Lamp_Data)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCD1->bt2.Engine_Brake_Active_Lamp_Data)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCD1->bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Data)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCD1->bt2.Engine_Oil_Pressure_Low_Lamp_Data)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCD1->bt2.Engine_Coolant_Temperature_High_Lamp_Data)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCD1->bt3.Engine_Coolant_Level_Low_Lamp_Data)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCD1->bt3.Engine_Idle_Management_Active_Lamp_Data)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCD1->bt3.Engine_Air_Filter_Restriction_Lamp_Data)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCD1->bt3.Engine_Fuel_Filter_Restricted_Lamp_Data)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(DLCD1->bt8.Engine_Wait_To_Start_Lamp_Data)<<7;
}
void DLCC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getDLCC2_t *DLCC2)
{
    J1939_MESSAGE->PGN = 0x00FD06 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC2->bt1.Vehicle_Battery_Voltage_Low_Lamp_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC2->bt1.Vehicle_Fuel_Level_Low_Lamp_Command)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC2->bt1.Vehicle_Air_Pressure_Low_Lamp_Command)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC2->bt1.Vehicle_HVAC_Recirculation_Lamp_Command)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCC2->bt2.Vehicle_Battery_Charging_Lamp_Command)<<1;
}
void DLCC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getDLCC1_t *DLCC1)
{
    J1939_MESSAGE->PGN = 0x00FD07 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC1->bt1.Engine_Protect_Lamp_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC1->bt1.Engine_Amber_Warning_Lamp_Command)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC1->bt1.Engine_Red_Stop_Lamp_Command)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(DLCC1->bt1.OBD_Malfunction_Indicator_Lamp_Command)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCC1->bt2.Engine_Brake_Active_Lamp_Command)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCC1->bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Command)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCC1->bt2.Engine_Oil_Pressure_Low_Lamp_Command)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(DLCC1->bt2.Engine_Coolant_Temperature_High_Lamp_Command)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCC1->bt3.Engine_Coolant_Level_Low_Lamp_Command)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCC1->bt3.Engine_Idle_Management_Active_Lamp_Command)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCC1->bt3.Engine_Air_Filter_Restriction_Lamp_Command)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(DLCC1->bt3.Engine_Fuel_Filter_Restricted_Lamp_Command)<<7;
}
void EOM ( J1939_MESSAGE_T *J1939_MESSAGE,getEOM_t *EOM)
{
    J1939_MESSAGE->PGN = 0x00FD08 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EOM->Engine_Oil_Viscosity>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EOM->Engine_Oil_Viscosity);
    J1939_MESSAGE->data[3] = (uint8_t)(EOM->Engine_Oil_Density>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EOM->Engine_Oil_Density);
    J1939_MESSAGE->data[5] = (uint8_t)(EOM->Engine_Oil_Relative_Dielectricity__high_resolution_>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EOM->Engine_Oil_Relative_Dielectricity__high_resolution_);
    J1939_MESSAGE->data[5] = (uint8_t)(EOM->High_Resolution_Engine_Total_Fuel_Used>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(EOM->High_Resolution_Engine_Total_Fuel_Used>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(EOM->High_Resolution_Engine_Total_Fuel_Used>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EOM->High_Resolution_Engine_Total_Fuel_Used);
}
void AT2OGC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2OGC2_t *AT2OGC2)
{
    J1939_MESSAGE->PGN = 0x00FD0A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Lambda;
    J1939_MESSAGE->data[2] = AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Nox;
    J1939_MESSAGE->data[3] = AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_NO2_Correction;
    J1939_MESSAGE->data[4] = AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_NH3_Correction;
    J1939_MESSAGE->data[5] = AT2OGC2->NOx_Sensor_ATO2_Self_diagnosis_Final_Result;
}
void AT2OGC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2OGC1_t *AT2OGC1)
{
    J1939_MESSAGE->PGN = 0x00FD0B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Heater_Ratio>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Heater_Ratio);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Gain>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Gain);
    J1939_MESSAGE->data[5] = AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Offset;
    J1939_MESSAGE->data[6] = (uint8_t)(AT2OGC1->NOx_Sensor_ATO2_Operation_Hours_Counter>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(AT2OGC1->NOx_Sensor_ATO2_Operation_Hours_Counter);
}
void AT2IGC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2IGC2_t *AT2IGC2)
{
    J1939_MESSAGE->PGN = 0x00FD0C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Lambda;
    J1939_MESSAGE->data[2] = AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Nox;
    J1939_MESSAGE->data[3] = AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_NO2_Correction;
    J1939_MESSAGE->data[4] = AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_NH3_Correction;
    J1939_MESSAGE->data[5] = AT2IGC2->NOx_Sensor_ATI2_Self_diagnosis_Final_Result;
}
void AT2IGC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2IGC1_t *AT2IGC1)
{
    J1939_MESSAGE->PGN = 0x00FD0D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_Heater_Ratio>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_Heater_Ratio);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain);
    J1939_MESSAGE->data[5] = AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset;
    J1939_MESSAGE->data[6] = (uint8_t)(AT2IGC1->NOx_Sensor_ATI2_Operation_Hours_Counter>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(AT2IGC1->NOx_Sensor_ATI2_Operation_Hours_Counter);
}
void AT1OGC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1OGC2_t *AT1OGC2)
{
    J1939_MESSAGE->PGN = 0x00FD0E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_Lambda;
    J1939_MESSAGE->data[2] = AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_NOx;
    J1939_MESSAGE->data[3] = AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_NO2_Correction;
    J1939_MESSAGE->data[4] = AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_NH3_Correction;
    J1939_MESSAGE->data[5] = AT1OGC2->NOx_Sensor_ATO1_Self_diagnosis_Final_Result;
}
void AT1OGC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1OGC1_t *AT1OGC1)
{
    J1939_MESSAGE->PGN = 0x00FD0F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Heater_Ratio>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Heater_Ratio);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Gain>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Gain);
    J1939_MESSAGE->data[5] = AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Offset;
    J1939_MESSAGE->data[6] = (uint8_t)(AT1OGC1->NOx_Sensor_ATO1_Operation_Hours_Counter>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1OGC1->NOx_Sensor_ATO1_Operation_Hours_Counter);
}
void AT1IGC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1IGC2_t *AT1IGC2)
{
    J1939_MESSAGE->PGN = 0x00FD10 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_Lambda;
    J1939_MESSAGE->data[2] = AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_NOx;
    J1939_MESSAGE->data[3] = AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_NO2_Correction;
    J1939_MESSAGE->data[4] = AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_NH3_Correction;
    J1939_MESSAGE->data[5] = AT1IGC2->NOx_Sensor_ATI1_Self_diagnosis_Final_Result;
}
void AT1IGC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1IGC1_t *AT1IGC1)
{
    J1939_MESSAGE->PGN = 0x00FD11 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_Heater_Ratio>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_Heater_Ratio);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain);
    J1939_MESSAGE->data[5] = AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset;
    J1939_MESSAGE->data[6] = (uint8_t)(AT1IGC1->NOx_Sensor_ATI1_Operation_Hours_Counter>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1IGC1->NOx_Sensor_ATI1_Operation_Hours_Counter);
}
void MSI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getMSI1_t *MSI1)
{
    J1939_MESSAGE->PGN = 0x00FD12 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(MSI1->bt1.Generator_Overheat_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(MSI1->bt1.Genset_System_Output_Voltage_Range_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(MSI1->bt1.Grapple_Magnet_Selection_Switch)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(MSI1->bt1.Genset_Softstart_Active_Status)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(MSI1->bt2.Reverse_Current_Range_Setting)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(MSI1->bt3.Genset_Enable_Active_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(MSI1->bt3.Voltage_Monitor_Active_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(MSI1->bt3.Generator_Duty_Cycle_Exceeded_Status)<<5;
}
void MSCI ( J1939_MESSAGE_T *J1939_MESSAGE,getMSCI_t *MSCI)
{
    J1939_MESSAGE->PGN = 0x00FD13 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = MSCI->Magnet_Boost_Time;
    J1939_MESSAGE->data[2] = (uint8_t)(MSCI->Magnet_Rated_Power>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(MSCI->Magnet_Rated_Power);
}
void BCH2 ( J1939_MESSAGE_T *J1939_MESSAGE,getBCH2_t *BCH2)
{
    J1939_MESSAGE->PGN = 0x00FD14 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BCH2->bt1.Battery_Charger_2_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BCH2->bt1.Battery_Charger_2_Power_Line_State)<<5;
    J1939_MESSAGE->data[2] = (uint8_t)(BCH2->Battery_Charger_2_Output_Voltage>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(BCH2->Battery_Charger_2_Output_Voltage);
    J1939_MESSAGE->data[4] = (uint8_t)(BCH2->Battery_Charger_2_Output_Current>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(BCH2->Battery_Charger_2_Output_Current);
}
void BCH1 ( J1939_MESSAGE_T *J1939_MESSAGE,getBCH1_t *BCH1)
{
    J1939_MESSAGE->PGN = 0x00FD15 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BCH1->bt1.Battery_Charger_1_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BCH1->bt1.Battery_Charger_1_Power_Line_State)<<5;
    J1939_MESSAGE->data[2] = (uint8_t)(BCH1->Battery_Charger_1_Output_Voltage>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(BCH1->Battery_Charger_1_Output_Voltage);
    J1939_MESSAGE->data[4] = (uint8_t)(BCH1->Battery_Charger_1_Output_Current>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(BCH1->Battery_Charger_1_Output_Current);
}
void OCSI ( J1939_MESSAGE_T *J1939_MESSAGE,getOCSI_t *OCSI)
{
    J1939_MESSAGE->PGN = 0x00FD16 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(OCSI->bt1.Driver_Occupant_Classification_System_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(OCSI->bt1.Passenger_Occupant_Classification_System_Status)<<4;
    J1939_MESSAGE->data[2] |= (uint8_t)(OCSI->bt2.Occupant_Classification_System_3_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(OCSI->bt2.Occupant_Classification_System_4_Status)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(OCSI->bt2.Occupant_Classification_System_5_Status)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(OCSI->bt2.Occupant_Classification_System_6_Status)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(OCSI->bt3.Occupant_Classification_System_7_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(OCSI->bt3.Occupant_Classification_System_8_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(OCSI->bt3.Occupant_Classification_System_9_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(OCSI->bt3.Occupant_Classification_System_10_Status)<<7;
}
void BDS ( J1939_MESSAGE_T *J1939_MESSAGE,getBDS_t *BDS)
{
    J1939_MESSAGE->PGN = 0x00FD17 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BDS->bt1.Driver_Beltlock_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BDS->bt1.Passenger_Beltlock_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BDS->bt1.Beltlock_3_Status)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(BDS->bt1.Beltlock_4_Status)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(BDS->bt2.Beltlock_5_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(BDS->bt2.Beltlock_6_Status)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(BDS->bt2.Beltlock_7_Status)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(BDS->bt2.Beltlock_8_Status)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(BDS->bt3.Beltlock_9_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BDS->bt3.Beltlock_10_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BDS->bt3.Passenger_Airbag_Deactivation_Switch_Status)<<5;
}
void CSI ( J1939_MESSAGE_T *J1939_MESSAGE,getCSI_t *CSI)
{
    J1939_MESSAGE->PGN = 0x00FD18 ;
    J1939_MESSAGE->data[1] |= (uint8_t)(CSI->bt1.Frontal_Collision_Sensor_1___Type)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(CSI->bt1.Frontal_Collision_Sensor_2___Type)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(CSI->bt2.Frontal_Collision_Sensor_3___Type)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(CSI->bt2.Frontal_Collision_Sensor_4___Type)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(CSI->bt3.Side_Collision_Sensor_Front_Left___Type)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(CSI->bt3.Side_Collision_Sensor_Mid_Front_Left___Type)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(CSI->bt4.Side_Collision_Sensor_Mid_Rear_Left___Type)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(CSI->bt4.Side_Collision_Sensor_Rear_Left___Type)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(CSI->bt5.Side_Collision_Sensor_Front_Right___Type)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(CSI->bt5.Side_Collision_Sensor_Mid_Front_Right___Type)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(CSI->bt6.Side_Collision_Sensor_Mid_Rear_Right___Type)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(CSI->bt6.Side_Collision_Sensor_Rear_Right___Type)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(CSI->bt7.Rear_Collision_Sensor_1___Type)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(CSI->bt7.Rear_Collision_Sensor_2___Type)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(CSI->bt8.Rear_Collision_Sensor_3___Type)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(CSI->bt8.Rear_Collision_Sensor_4___Type)<<5;
    J1939_MESSAGE->data[9] |= (uint8_t)(CSI->bt9.Rollover_Sensor___Type)<<1;
}
void ILI ( J1939_MESSAGE_T *J1939_MESSAGE,getILI_t *ILI)
{
    J1939_MESSAGE->PGN = 0x00FD19 ;
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Driver_Airbag_Ignitor_Loop_1st_Stage___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Driver_Airbag_Ignitor_Loop_1st_Stage___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Passenger_Airbag_Ignitor_Loop_1st_Stage___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Passenger_Airbag_Ignitor_Loop_1st_Stage___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Driver_Airbag_Ignitor_Loop_2nd_Stage___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Driver_Airbag_Ignitor_Loop_2nd_Stage___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Passenger_Airbag_Ignitor_Loop_2nd_Stage___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Passenger_Airbag_Ignitor_Loop_2nd_Stage___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Driver_Belt_Tensioner_Ignitior_Loop___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Driver_Belt_Tensioner_Ignitior_Loop___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Passenger_Belt_Tensioner_Ignitor_Loop___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Passenger_Belt_Tensioner_Ignitor_Loop___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_1___Left___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_1___Left___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_2___Left___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_2___Left___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_1___Right___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_1___Right___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_2___Right___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Side_Bag_Ignitor_Loop_2___Right___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_1___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_1___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_2___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_2___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_3___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_3___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_4___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_4___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_5___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_5___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_6___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_6___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_7___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_7___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_8___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_8___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_9___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_9___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_10___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_10___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_11___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_11___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_12___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_12___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_13___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_13___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_14___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_14___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_15___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_15___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_16___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_16___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_17___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_17___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_18___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_18___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_19___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_19___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_20___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_20___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_21___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_21___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_22___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_22___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_23___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_23___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_24___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_24___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_25___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_25___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_26___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_26___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_27___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_27___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_28___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_28___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_29___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_29___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_30___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_30___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_31___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_31___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_32___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_32___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_33___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_33___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_34___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_34___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_35___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_35___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_36___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_36___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_37___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_37___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_38___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_38___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_39___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_39___Resistance);
    J1939_MESSAGE->data[0] = (uint8_t)(ILI->Special_Ignitor_Loop_40___Resistance>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_40___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_41___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_41___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_42___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_42___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_43___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_43___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_44___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_44___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_45___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_45___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_46___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_46___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_47___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_47___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_48___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_48___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_49___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_49___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_50___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_50___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_51___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_51___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_52___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_52___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_53___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_53___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_54___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_54___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_55___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_55___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_56___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_56___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_57___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_57___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_58___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_58___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_59___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_59___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_60___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_60___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_61___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_61___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_62___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_62___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_63___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_63___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_64___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_64___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_65___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_65___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_66___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_66___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_67___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_67___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_68___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_68___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_69___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_69___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_70___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_70___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_71___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_71___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_72___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_72___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_73___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_73___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_74___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_74___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_75___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_75___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_76___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_76___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_77___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_77___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_78___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_78___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_79___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_79___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_80___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_80___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_81___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_81___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_82___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_82___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_83___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_83___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_84___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_84___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_85___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_85___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_86___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_86___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_87___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_87___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_88___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_88___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_89___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_89___Resistance);
    J1939_MESSAGE->data[1] = (uint8_t)(ILI->Special_Ignitor_Loop_90___Resistance>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ILI->Special_Ignitor_Loop_90___Resistance);
}
void AT1WUDOC ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1WUDOC_t *AT1WUDOC)
{
    J1939_MESSAGE->PGN = 0x00FD1A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1WUDOC->Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1WUDOC->Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1WUDOC->Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1WUDOC->Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature);
}
void DPF2S ( J1939_MESSAGE_T *J1939_MESSAGE,getDPF2S_t *DPF2S)
{
    J1939_MESSAGE->PGN = 0x00FD1B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = DPF2S->Diesel_Particulate_Filter_2_Soot_Mass;
    J1939_MESSAGE->data[2] = DPF2S->Diesel_Particulate_Filter_2_Soot_Density;
    J1939_MESSAGE->data[3] = (uint8_t)(DPF2S->Diesel_Particulate_Filter_2_Mean_Soot_Signal>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(DPF2S->Diesel_Particulate_Filter_2_Mean_Soot_Signal);
    J1939_MESSAGE->data[5] = (uint8_t)(DPF2S->Diesel_Particulate_Filter_2_Median_Soot_Signal>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(DPF2S->Diesel_Particulate_Filter_2_Median_Soot_Signal);
    J1939_MESSAGE->data[7] |= (uint8_t)(DPF2S->bt7.Diesel_Particulate_Filter_2_Soot_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[8] = DPF2S->Diesel_Particulate_Filter_2_Soot_Sensor_ECU_Internal_Temperature;
}
void DPF1S ( J1939_MESSAGE_T *J1939_MESSAGE,getDPF1S_t *DPF1S)
{
    J1939_MESSAGE->PGN = 0x00FD1C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = DPF1S->Diesel_Particulate_Filter_1_Soot_Mass;
    J1939_MESSAGE->data[2] = DPF1S->Diesel_Particulate_Filter_1_Soot_Density;
    J1939_MESSAGE->data[3] = (uint8_t)(DPF1S->Diesel_Particulate_Filter_1_Mean_Soot_Signal>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(DPF1S->Diesel_Particulate_Filter_1_Mean_Soot_Signal);
    J1939_MESSAGE->data[5] = (uint8_t)(DPF1S->Diesel_Particulate_Filter_1_Median_Soot_Signal>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(DPF1S->Diesel_Particulate_Filter_1_Median_Soot_Signal);
    J1939_MESSAGE->data[7] |= (uint8_t)(DPF1S->bt7.Diesel_Particulate_Filter_1_Soot_Sensor_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[8] = DPF1S->Diesel_Particulate_Filter_1_Soot_Sensor_ECU_Internal_Temperature;
}
void ATDT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getATDT2_t *ATDT2)
{
    J1939_MESSAGE->PGN = 0x00FD1D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ATDT2->Aftertreatment_1_Three_Way_Catalyst_Differential_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ATDT2->Aftertreatment_1_Three_Way_Catalyst_Differential_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(ATDT2->Aftertreatment_2_Three_Way_Catalyst_Differential_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ATDT2->Aftertreatment_2_Three_Way_Catalyst_Differential_Gas_Temperature);
}
void ATDT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getATDT1_t *ATDT1)
{
    J1939_MESSAGE->PGN = 0x00FD1E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ATDT1->Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ATDT1->Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(ATDT1->Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ATDT1->Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Gas_Temperature);
}
void A2DOC ( J1939_MESSAGE_T *J1939_MESSAGE,getA2DOC_t *A2DOC)
{
    J1939_MESSAGE->PGN = 0x00FD1F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(A2DOC->bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A2DOC->bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(A2DOC->bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(A2DOC->bt8.Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI)<<3;
}
void A1DOC ( J1939_MESSAGE_T *J1939_MESSAGE,getA1DOC_t *A1DOC)
{
    J1939_MESSAGE->PGN = 0x00FD20 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(A1DOC->bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A1DOC->bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(A1DOC->bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(A1DOC->bt8.Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI)<<3;
}
void A2GOC ( J1939_MESSAGE_T *J1939_MESSAGE,getA2GOC_t *A2GOC)
{
    J1939_MESSAGE->PGN = 0x00FD21 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(A2GOC->bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A2GOC->bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(A2GOC->bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(A2GOC->bt8.Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI)<<3;
}
void A1GOC ( J1939_MESSAGE_T *J1939_MESSAGE,getA1GOC_t *A1GOC)
{
    J1939_MESSAGE->PGN = 0x00FD22 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(A1GOC->bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A1GOC->bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(A1GOC->bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(A1GOC->bt8.Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI)<<3;
}
void EJM10 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM10_t *EJM10)
{
    J1939_MESSAGE->PGN = 0x00FD23 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM10->bt1.Joystick_10_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM10->bt1.Joystick_10_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM10->bt1.Joystick_10_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM10->bt3.Joystick_10_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM10->bt3.Joystick_10_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM10->bt3.Joystick_10_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM10->bt5.Joystick_10_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM10->bt5.Joystick_10_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM10->bt5.Joystick_10_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM10->bt7.Joystick_10_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM10->bt7.Joystick_10_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM10->bt7.Joystick_10_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM10 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM10_t *BJM10)
{
    J1939_MESSAGE->PGN = 0x00FD24 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM10->bt1.Joystick_10_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM10->bt1.Joystick_10_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM10->bt1.Joystick_10_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM10->bt3.Joystick_10_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM10->bt3.Joystick_10_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM10->bt3.Joystick_10_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM10->bt5.Joystick_10_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM10->bt5.Joystick_10_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM10->bt6.Joystick_10_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM10->bt6.Joystick_10_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM10->bt6.Joystick_10_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM10->bt6.Joystick_10_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM10->bt7.Joystick_10_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM10->bt7.Joystick_10_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM10->bt7.Joystick_10_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM10->bt7.Joystick_10_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM10->bt8.Joystick_10_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM10->bt8.Joystick_10_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM10->bt8.Joystick_10_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM10->bt8.Joystick_10_Button_9_Pressed_Status)<<7;
}
void EJM9 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM9_t *EJM9)
{
    J1939_MESSAGE->PGN = 0x00FD25 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM9->bt1.Joystick_9_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM9->bt1.Joystick_9_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM9->bt1.Joystick_9_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM9->bt3.Joystick_9_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM9->bt3.Joystick_9_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM9->bt3.Joystick_9_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM9->bt5.Joystick_9_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM9->bt5.Joystick_9_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM9->bt5.Joystick_9_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM9->bt7.Joystick_9_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM9->bt7.Joystick_9_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM9->bt7.Joystick_9_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM9 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM9_t *BJM9)
{
    J1939_MESSAGE->PGN = 0x00FD26 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM9->bt1.Joystick_9_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM9->bt1.Joystick_9_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM9->bt1.Joystick_9_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM9->bt3.Joystick_9_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM9->bt3.Joystick_9_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM9->bt3.Joystick_9_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM9->bt5.Joystick_9_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM9->bt5.Joystick_9_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM9->bt6.Joystick_9_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM9->bt6.Joystick_9_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM9->bt6.Joystick_9_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM9->bt6.Joystick_9_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM9->bt7.Joystick_9_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM9->bt7.Joystick_9_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM9->bt7.Joystick_9_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM9->bt7.Joystick_9_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM9->bt8.Joystick_9_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM9->bt8.Joystick_9_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM9->bt8.Joystick_9_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM9->bt8.Joystick_9_Button_9_Pressed_Status)<<7;
}
void EJM8 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM8_t *EJM8)
{
    J1939_MESSAGE->PGN = 0x00FD27 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM8->bt1.Joystick_8_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM8->bt1.Joystick_8_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM8->bt1.Joystick_8_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM8->bt3.Joystick_8_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM8->bt3.Joystick_8_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM8->bt3.Joystick_8_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM8->bt5.Joystick_8_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM8->bt5.Joystick_8_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM8->bt5.Joystick_8_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM8->bt7.Joystick_8_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM8->bt7.Joystick_8_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM8->bt7.Joystick_8_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM8 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM8_t *BJM8)
{
    J1939_MESSAGE->PGN = 0x00FD28 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM8->bt1.Joystick_8_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM8->bt1.Joystick_8_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM8->bt1.Joystick_8_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM8->bt3.Joystick_8_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM8->bt3.Joystick_8_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM8->bt3.Joystick_8_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM8->bt5.Joystick_8_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM8->bt5.Joystick_8_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM8->bt6.Joystick_8_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM8->bt6.Joystick_8_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM8->bt6.Joystick_8_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM8->bt6.Joystick_8_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM8->bt7.Joystick_8_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM8->bt7.Joystick_8_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM8->bt7.Joystick_8_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM8->bt7.Joystick_8_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM8->bt8.Joystick_8_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM8->bt8.Joystick_8_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM8->bt8.Joystick_8_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM8->bt8.Joystick_8_Button_9_Pressed_Status)<<7;
}
void EJM7 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM7_t *EJM7)
{
    J1939_MESSAGE->PGN = 0x00FD29 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM7->bt1.Joystick_7_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM7->bt1.Joystick_7_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM7->bt1.Joystick_7_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM7->bt3.Joystick_7_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM7->bt3.Joystick_7_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM7->bt3.Joystick_7_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM7->bt5.Joystick_7_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM7->bt5.Joystick_7_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM7->bt5.Joystick_7_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM7->bt7.Joystick_7_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM7->bt7.Joystick_7_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM7->bt7.Joystick_7_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM7 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM7_t *BJM7)
{
    J1939_MESSAGE->PGN = 0x00FD2A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM7->bt1.Joystick_7_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM7->bt1.Joystick_7_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM7->bt1.Joystick_7_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM7->bt3.Joystick_7_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM7->bt3.Joystick_7_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM7->bt3.Joystick_7_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM7->bt5.Joystick_7_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM7->bt5.Joystick_7_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM7->bt6.Joystick_7_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM7->bt6.Joystick_7_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM7->bt6.Joystick_7_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM7->bt6.Joystick_7_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM7->bt7.Joystick_7_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM7->bt7.Joystick_7_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM7->bt7.Joystick_7_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM7->bt7.Joystick_7_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM7->bt8.Joystick_7_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM7->bt8.Joystick_7_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM7->bt8.Joystick_7_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM7->bt8.Joystick_7_Button_9_Pressed_Status)<<7;
}
void EJM6 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM6_t *EJM6)
{
    J1939_MESSAGE->PGN = 0x00FD2B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM6->bt1.Joystick_6_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM6->bt1.Joystick_6_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM6->bt1.Joystick_6_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM6->bt3.Joystick_6_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM6->bt3.Joystick_6_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM6->bt3.Joystick_6_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM6->bt5.Joystick_6_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM6->bt5.Joystick_6_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM6->bt5.Joystick_6_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM6->bt7.Joystick_6_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM6->bt7.Joystick_6_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM6->bt7.Joystick_6_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM6 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM6_t *BJM6)
{
    J1939_MESSAGE->PGN = 0x00FD2C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM6->bt1.Joystick_6_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM6->bt1.Joystick_6_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM6->bt1.Joystick_6_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM6->bt3.Joystick_6_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM6->bt3.Joystick_6_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM6->bt3.Joystick_6_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM6->bt5.Joystick_6_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM6->bt5.Joystick_6_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM6->bt6.Joystick_6_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM6->bt6.Joystick_6_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM6->bt6.Joystick_6_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM6->bt6.Joystick_6_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM6->bt7.Joystick_6_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM6->bt7.Joystick_6_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM6->bt7.Joystick_6_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM6->bt7.Joystick_6_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM6->bt8.Joystick_6_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM6->bt8.Joystick_6_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM6->bt8.Joystick_6_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM6->bt8.Joystick_6_Button_9_Pressed_Status)<<7;
}
void EJM5 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM5_t *EJM5)
{
    J1939_MESSAGE->PGN = 0x00FD2D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM5->bt1.Joystick_5_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM5->bt1.Joystick_5_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM5->bt1.Joystick_5_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM5->bt3.Joystick_5_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM5->bt3.Joystick_5_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM5->bt3.Joystick_5_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM5->bt5.Joystick_5_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM5->bt5.Joystick_5_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM5->bt5.Joystick_5_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM5->bt7.Joystick_5_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM5->bt7.Joystick_5_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM5->bt7.Joystick_5_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM5 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM5_t *BJM5)
{
    J1939_MESSAGE->PGN = 0x00FD2E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM5->bt1.Joystick_5_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM5->bt1.Joystick_5_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM5->bt1.Joystick_5_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM5->bt3.Joystick_5_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM5->bt3.Joystick_5_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM5->bt3.Joystick_5_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM5->bt5.Joystick_5_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM5->bt5.Joystick_5_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM5->bt6.Joystick_5_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM5->bt6.Joystick_5_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM5->bt6.Joystick_5_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM5->bt6.Joystick_5_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM5->bt7.Joystick_5_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM5->bt7.Joystick_5_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM5->bt7.Joystick_5_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM5->bt7.Joystick_5_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM5->bt8.Joystick_5_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM5->bt8.Joystick_5_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM5->bt8.Joystick_5_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM5->bt8.Joystick_5_Button_9_Pressed_Status)<<7;
}
void EJM4 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM4_t *EJM4)
{
    J1939_MESSAGE->PGN = 0x00FD2F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM4->bt1.Joystick_4_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM4->bt1.Joystick_4_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM4->bt1.Joystick_4_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM4->bt3.Joystick_4_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM4->bt3.Joystick_4_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM4->bt3.Joystick_4_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM4->bt5.Joystick_4_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM4->bt5.Joystick_4_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM4->bt5.Joystick_4_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM4->bt7.Joystick_4_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM4->bt7.Joystick_4_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM4->bt7.Joystick_4_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM4 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM4_t *BJM4)
{
    J1939_MESSAGE->PGN = 0x00FD30 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM4->bt1.Joystick_4_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM4->bt1.Joystick_4_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM4->bt1.Joystick_4_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM4->bt3.Joystick_4_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM4->bt3.Joystick_4_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM4->bt3.Joystick_4_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM4->bt5.Joystick_4_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM4->bt5.Joystick_4_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM4->bt6.Joystick_4_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM4->bt6.Joystick_4_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM4->bt6.Joystick_4_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM4->bt6.Joystick_4_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM4->bt7.Joystick_4_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM4->bt7.Joystick_4_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM4->bt7.Joystick_4_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM4->bt7.Joystick_4_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM4->bt8.Joystick_4_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM4->bt8.Joystick_4_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM4->bt8.Joystick_4_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM4->bt8.Joystick_4_Button_9_Pressed_Status)<<7;
}
void FD2 ( J1939_MESSAGE_T *J1939_MESSAGE,getFD2_t *FD2)
{
    J1939_MESSAGE->PGN = 0x00FD31 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = FD2->Estimated_Percent_Fan_2_Speed;
    J1939_MESSAGE->data[2] |= (uint8_t)(FD2->bt2.Fan_2_Drive_State)<<1;
    J1939_MESSAGE->data[3] = (uint8_t)(FD2->Fan_2_Speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(FD2->Fan_2_Speed);
    J1939_MESSAGE->data[5] = (uint8_t)(FD2->Hydraulic_Fan_2_Motor_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(FD2->Hydraulic_Fan_2_Motor_Pressure);
    J1939_MESSAGE->data[7] = FD2->Fan_2_Drive_Bypass_Command_Status;
}
void A2DEFSI ( J1939_MESSAGE_T *J1939_MESSAGE,getA2DEFSI_t *A2DEFSI)
{
    J1939_MESSAGE->PGN = 0x00FD33 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Motor_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Motor_Speed);
    J1939_MESSAGE->data[3] = A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Drive_Percentage;
    J1939_MESSAGE->data[4] = A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Return_Valve;
    J1939_MESSAGE->data[5] = A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2DEFSI->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_State)<<1;
    J1939_MESSAGE->data[7] = A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command;
}
void A2SCRRT2I ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRRT2I_t *A2SCRRT2I)
{
    J1939_MESSAGE->PGN = 0x00FD34 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level;
    J1939_MESSAGE->data[2] = A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature;
    J1939_MESSAGE->data[3] = (uint8_t)(A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_2);
    J1939_MESSAGE->data[5] |= (uint8_t)(A2SCRRT2I->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCRRT2I->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A2SCRRT2I->bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater)<<0;
    J1939_MESSAGE->data[8] |= (uint8_t)(A2SCRRT2I->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI)<<1;
}
void A2SCRRT1I ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRRT1I_t *A2SCRRT1I)
{
    J1939_MESSAGE->PGN = 0x00FD35 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level;
    J1939_MESSAGE->data[2] = A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Temperature;
    J1939_MESSAGE->data[3] = (uint8_t)(A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_2);
    J1939_MESSAGE->data[5] |= (uint8_t)(A2SCRRT1I->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCRRT1I->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] = A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater;
    J1939_MESSAGE->data[8] |= (uint8_t)(A2SCRRT1I->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI)<<1;
}
void A2DEFI ( J1939_MESSAGE_T *J1939_MESSAGE,getA2DEFI_t *A2DEFI)
{
    J1939_MESSAGE->PGN = 0x00FD36 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A2DEFI->Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2;
    J1939_MESSAGE->data[2] = A2DEFI->Aftertreatment_2_Diesel_Exhaust_Fluid_Concentration;
    J1939_MESSAGE->data[3] = A2DEFI->Aftertreatment_2_Diesel_Exhaust_Fluid_Conductivity;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2DEFI->bt4.Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(A2DEFI->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2DEFI->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Type)<<1;
}
void A2SCRSI ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRSI_t *A2SCRSI)
{
    J1939_MESSAGE->PGN = 0x00FD37 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCRSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Average_Consumption>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCRSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Average_Consumption);
    J1939_MESSAGE->data[3] = (uint8_t)(A2SCRSI->Aftertreatment_2_SCR_Commanded_Catalyst_Diesel_Exhaust_Fluid_Consumption>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A2SCRSI->Aftertreatment_2_SCR_Commanded_Catalyst_Diesel_Exhaust_Fluid_Consumption);
    J1939_MESSAGE->data[5] = A2SCRSI->Aftertreatment_2_SCR_Conversion_Efficiency;
}
void A2SCREGT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCREGT1_t *A2SCREGT1)
{
    J1939_MESSAGE->PGN = 0x00FD38 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCREGT1->Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCREGT1->Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCREGT1->bt3.Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] = (uint8_t)(A2SCREGT1->Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(A2SCREGT1->Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCREGT1->bt6.Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)<<1;
}
void A2SCREGP ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCREGP_t *A2SCREGP)
{
    J1939_MESSAGE->PGN = 0x00FD39 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A2SCREGP->Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A2SCREGP->Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure);
    J1939_MESSAGE->data[3] |= (uint8_t)(A2SCREGP->bt3.Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI)<<1;
}
void A2SCRDSR2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRDSR2_t *A2SCRDSR2)
{
    J1939_MESSAGE->PGN = 0x00FD3A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(A2SCRDSR2->bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Request)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(A2SCRDSR2->bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4)<<7;
    J1939_MESSAGE->data[3] = A2SCRDSR2->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater_Command;
    J1939_MESSAGE->data[4] = A2SCRDSR2->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Command;
}
void A2SCRDSI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA2SCRDSI2_t *A2SCRDSI2)
{
    J1939_MESSAGE->PGN = 0x00FD3B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A2SCRDSI2->Aftertreatment_2_SCR_Dosing_Air_Assist_Absolute_Pressure;
    J1939_MESSAGE->data[2] = A2SCRDSI2->Aftertreatment_2_SCR_Dosing_Air_Assist_Valve;
    J1939_MESSAGE->data[3] = A2SCRDSI2->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Temperature;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRDSI2->bt4.Aftertreatment_2_SCR_Dosing_Valve_Exhaust_Temp__Reduction_Request)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A2SCRDSI2->bt4.Aftertreatment_2_SCR_Feedback_Control_Status)<<4;
    J1939_MESSAGE->data[5] |= (uint8_t)(A2SCRDSI2->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_State)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(A2SCRDSI2->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCRDSI2->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_State)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A2SCRDSI2->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(A2SCRDSI2->bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_State)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A2SCRDSI2->bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(A2SCRDSI2->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_State)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(A2SCRDSI2->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI)<<3;
}
void A1DEFSI ( J1939_MESSAGE_T *J1939_MESSAGE,getA1DEFSI_t *A1DEFSI)
{
    J1939_MESSAGE->PGN = 0x00FD3C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Motor_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Motor_Speed);
    J1939_MESSAGE->data[3] = A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Drive_Percentage;
    J1939_MESSAGE->data[4] = A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Return_Valve;
    J1939_MESSAGE->data[5] = A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1DEFSI->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_State)<<1;
    J1939_MESSAGE->data[7] = A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command;
}
void A1SCRRT2I ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRRT2I_t *A1SCRRT2I)
{
    J1939_MESSAGE->PGN = 0x00FD3D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level;
    J1939_MESSAGE->data[2] = A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature;
    J1939_MESSAGE->data[3] = (uint8_t)(A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_2);
    J1939_MESSAGE->data[5] |= (uint8_t)(A1SCRRT2I->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1SCRRT2I->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI)<<1;
    J1939_MESSAGE->data[7] = A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater;
    J1939_MESSAGE->data[8] |= (uint8_t)(A1SCRRT2I->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI)<<1;
}
void A1SCREGT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCREGT1_t *A1SCREGT1)
{
    J1939_MESSAGE->PGN = 0x00FD3E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCREGT1->Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCREGT1->Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCREGT1->bt3.Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[4] = (uint8_t)(A1SCREGT1->Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(A1SCREGT1->Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[6] |= (uint8_t)(A1SCREGT1->bt6.Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI)<<1;
}
void A1SCREGP ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCREGP_t *A1SCREGP)
{
    J1939_MESSAGE->PGN = 0x00FD3F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(A1SCREGP->Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(A1SCREGP->Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure);
    J1939_MESSAGE->data[3] |= (uint8_t)(A1SCREGP->bt3.Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI)<<1;
}
void A1SCRDSR2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRDSR2_t *A1SCRDSR2)
{
    J1939_MESSAGE->PGN = 0x00FD40 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(A1SCRDSR2->bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Fault_Suppression_Request)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(A1SCRDSR2->bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4)<<7;
    J1939_MESSAGE->data[3] = A1SCRDSR2->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater_Command;
    J1939_MESSAGE->data[4] = A1SCRDSR2->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Command;
    J1939_MESSAGE->data[5] = A1SCRDSR2->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater_Command;
}
void A1SCRDSI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1SCRDSI2_t *A1SCRDSI2)
{
    J1939_MESSAGE->PGN = 0x00FD41 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A1SCRDSI2->Aftertreatment_1_SCR_Dosing_Air_Assist_Absolute_Pressure;
    J1939_MESSAGE->data[2] = A1SCRDSI2->Aftertreatment_1_SCR_Dosing_Air_Assist_Valve;
    J1939_MESSAGE->data[3] = A1SCRDSI2->Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Temperature;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRDSI2->bt4.Aftertreatment_1_SCR_Dosing_Valve_Exhaust_Temperature_Reduction_Request)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1SCRDSI2->bt4.Aftertreatment_1_SCR_Feedback_Control_Status)<<4;
    J1939_MESSAGE->data[5] |= (uint8_t)(A1SCRDSI2->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_State)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(A1SCRDSI2->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1SCRDSI2->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_State)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1SCRDSI2->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(A1SCRDSI2->bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_State)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(A1SCRDSI2->bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(A1SCRDSI2->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_State)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(A1SCRDSI2->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI)<<3;
}
void AT2FC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2FC2_t *AT2FC2)
{
    J1939_MESSAGE->PGN = 0x00FD44 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2FC2->Aftertreatment_2_Fuel_Pressure_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2FC2->Aftertreatment_2_Fuel_Pressure_2);
    J1939_MESSAGE->data[3] |= (uint8_t)(AT2FC2->bt3.Aftertreatment_2_Fuel_Pump_Relay_Control)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AT2FC2->bt3.Aftertreatment_2_Fuel_Flow_Diverter_Valve_Control)<<3;
    J1939_MESSAGE->data[4] = (uint8_t)(AT2FC2->Aftertreatment_2_Fuel_Pressure_2_Control>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2FC2->Aftertreatment_2_Fuel_Pressure_2_Control);
}
void AT2TWCC ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2TWCC_t *AT2TWCC)
{
    J1939_MESSAGE->PGN = 0x00FD45 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2TWCC->bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2TWCC->bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(AT2TWCC->bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2TWCC->bt8.Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI)<<3;
}
void AT1TWCC ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1TWCC_t *AT1TWCC)
{
    J1939_MESSAGE->PGN = 0x00FD46 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1TWCC->bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1TWCC->bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(AT1TWCC->bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1TWCC->bt8.Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI)<<3;
}
void O2FT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getO2FT2_t *O2FT2)
{
    J1939_MESSAGE->PGN = 0x00FD48 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(O2FT2->Long_term_Fuel_Trim___Bank_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(O2FT2->Long_term_Fuel_Trim___Bank_2);
    J1939_MESSAGE->data[3] = (uint8_t)(O2FT2->Short_term_Fuel_Trim___Bank_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(O2FT2->Short_term_Fuel_Trim___Bank_2);
    J1939_MESSAGE->data[5] |= (uint8_t)(O2FT2->bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_2)<<1;
}
void O2FT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getO2FT1_t *O2FT1)
{
    J1939_MESSAGE->PGN = 0x00FD49 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(O2FT1->Long_term_Fuel_Trim___Bank_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(O2FT1->Long_term_Fuel_Trim___Bank_1);
    J1939_MESSAGE->data[3] = (uint8_t)(O2FT1->Short_term_Fuel_Trim___Bank_1>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(O2FT1->Short_term_Fuel_Trim___Bank_1);
    J1939_MESSAGE->data[5] |= (uint8_t)(O2FT1->bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_1)<<1;
}
void ACCVC ( J1939_MESSAGE_T *J1939_MESSAGE,getACCVC_t *ACCVC)
{
    J1939_MESSAGE->PGN = 0x00FD51 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ACCVC->bt1.Aftercooler_Coolant_Thermostat_Mode)<<1;
    J1939_MESSAGE->data[2] = ACCVC->Desired_Aftercooler_Coolant_Intake_Temperature;
    J1939_MESSAGE->data[3] = ACCVC->Desired_Aftercooler_Coolant_Thermostat_Opening;
}
void ECCVC ( J1939_MESSAGE_T *J1939_MESSAGE,getECCVC_t *ECCVC)
{
    J1939_MESSAGE->PGN = 0x00FD52 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ECCVC->bt1.Engine_Coolant_Thermostat_Mode)<<1;
    J1939_MESSAGE->data[2] = ECCVC->Desired_Engine_Coolant_Pump_Outlet_Temperature;
    J1939_MESSAGE->data[3] = ECCVC->Desired_Engine_Coolant_Thermostat_Opening;
    J1939_MESSAGE->data[4] = ECCVC->Engine_Auxiliary_Cooler_Supply_Valve_1_Actuator_Command;
    J1939_MESSAGE->data[5] = ECCVC->Engine_Auxiliary_Cooler_Supply_Valve_2_Actuator_Command;
}
void EAI ( J1939_MESSAGE_T *J1939_MESSAGE,getEAI_t *EAI)
{
    J1939_MESSAGE->PGN = 0x00FD53 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EAI->Engine_Exhaust_Gas_Temperature_Average>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EAI->Engine_Exhaust_Gas_Temperature_Average);
    J1939_MESSAGE->data[3] = (uint8_t)(EAI->Engine_Exhaust_Gas_Temperature_Average___Bank_1>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EAI->Engine_Exhaust_Gas_Temperature_Average___Bank_1);
    J1939_MESSAGE->data[5] = (uint8_t)(EAI->Engine_Exhaust_Gas_Temperature_Average___Bank_2>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EAI->Engine_Exhaust_Gas_Temperature_Average___Bank_2);
}
void AT1FC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1FC2_t *AT1FC2)
{
    J1939_MESSAGE->PGN = 0x00FD65 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1FC2->Aftertreatment_1_Fuel_Pressure_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1FC2->Aftertreatment_1_Fuel_Pressure_2);
    J1939_MESSAGE->data[3] |= (uint8_t)(AT1FC2->bt3.Aftertreatment_1_Fuel_Pump_Relay_Control)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AT1FC2->bt3.Aftertreatment_1_Fuel_Flow_Diverter_Valve_Control)<<3;
    J1939_MESSAGE->data[4] = (uint8_t)(AT1FC2->Aftertreatment_1_Fuel_Pressure_2_Actuator_Control>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1FC2->Aftertreatment_1_Fuel_Pressure_2_Actuator_Control);
    J1939_MESSAGE->data[6] = AT1FC2->Aftertreatment_1_Hydrocarbon_Doser_Intake_Fuel_Temperature;
}
void ET4 ( J1939_MESSAGE_T *J1939_MESSAGE,getET4_t *ET4)
{
    J1939_MESSAGE->PGN = 0x00FD66 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ET4->Engine_Coolant_Temperature_2;
    J1939_MESSAGE->data[2] = ET4->Engine_Coolant_Pump_Outlet_Temperature;
    J1939_MESSAGE->data[3] = ET4->Engine_Coolant_Thermostat_Opening;
    J1939_MESSAGE->data[4] = (uint8_t)(ET4->Engine_Exhaust_Valve_Actuation_System_Oil_Temperature>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(ET4->Engine_Exhaust_Valve_Actuation_System_Oil_Temperature);
    J1939_MESSAGE->data[6] = (uint8_t)(ET4->Engine_Exhaust_Gas_Recirculation_1_Mixer_Intake_Temperature>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(ET4->Engine_Exhaust_Gas_Recirculation_1_Mixer_Intake_Temperature);
}
void ZNVW ( J1939_MESSAGE_T *J1939_MESSAGE,getZNVW_t *ZNVW)
{
    J1939_MESSAGE->PGN = 0x00FD67 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ZNVW->bt1.Zero_Net_Vehicle_Weight_Change)<<1;
}
void GCVW ( J1939_MESSAGE_T *J1939_MESSAGE,getGCVW_t *GCVW)
{
    J1939_MESSAGE->PGN = 0x00FD68 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GCVW->Gross_Combination_Weight>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(GCVW->Gross_Combination_Weight>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(GCVW->Gross_Combination_Weight);
    J1939_MESSAGE->data[4] = (uint8_t)(GCVW->Net_Vehicle_Weight_Change>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(GCVW->Net_Vehicle_Weight_Change>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(GCVW->Net_Vehicle_Weight_Change);
}
void AGCW ( J1939_MESSAGE_T *J1939_MESSAGE,getAGCW_t *AGCW)
{
    J1939_MESSAGE->PGN = 0x00FD69 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AGCW->bt1.Axle_Group_Location)<<1;
    J1939_MESSAGE->data[2] = (uint8_t)(AGCW->Axle_Group_Empty_Weight_Calibration>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AGCW->Axle_Group_Empty_Weight_Calibration);
    J1939_MESSAGE->data[4] = (uint8_t)(AGCW->Axle_Group_Full_Weight_Calibration>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AGCW->Axle_Group_Full_Weight_Calibration);
}
void AGW ( J1939_MESSAGE_T *J1939_MESSAGE,getAGW_t *AGW)
{
    J1939_MESSAGE->PGN = 0x00FD6A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AGW->bt1.Axle_Group_Location)<<1;
    J1939_MESSAGE->data[2] = (uint8_t)(AGW->Axle_Group_Weight>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AGW->Axle_Group_Weight);
}
void AAGW ( J1939_MESSAGE_T *J1939_MESSAGE,getAAGW_t *AAGW)
{
    J1939_MESSAGE->PGN = 0x00FD6B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AAGW->bt1.Steer_Axle_Group_Weight_Available)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AAGW->bt1.Lift_Axle_Group_Weight_Available)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(AAGW->bt1.Drive_Axle_Group_Weight_Available)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(AAGW->bt1.Tag_Axle_Group_Weight_Available)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(AAGW->bt2.Additional_Tractor_Axle_Group_Weight_Available)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AAGW->bt2.Trailer_A_Axle_Group_Weight_Available)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(AAGW->bt2.Trailer_B_Axle_Group_Weight_Available)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(AAGW->bt2.Trailer_C_Axle_Group_Weight_Available)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(AAGW->bt3.Trailer_D_Axle_Group_Weight_Available)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AAGW->bt3.Trailer_E_Axle_Group_Weight_Available)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(AAGW->bt3.Trailer_F_Axle_Group_Weight_Available)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(AAGW->bt3.Trailer_G_Axle_Group_Weight_Available)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(AAGW->bt4.Trailer_H_Axle_Group_Weight_Available)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(AAGW->bt4.Additional_Trailer_Axle_Group_Weight_Available)<<3;
}
void AT2AC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2AC2_t *AT2AC2)
{
    J1939_MESSAGE->PGN = 0x00FD6C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Differential_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Differential_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Mass_Flow>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Mass_Flow);
    J1939_MESSAGE->data[7] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT2AC2->Aftertreatment_2_Secondary_Air_Pressure);
}
void AT1AC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1AC2_t *AT1AC2)
{
    J1939_MESSAGE->PGN = 0x00FD6D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Differential_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Differential_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Mass_Flow>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Mass_Flow);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1AC2->Aftertreatment_1_Secondary_Air_Pressure);
}
void SCR1 ( J1939_MESSAGE_T *J1939_MESSAGE,getSCR1_t *SCR1)
{
    J1939_MESSAGE->PGN = 0x00FD6E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SCR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Average_Consumption>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(SCR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Average_Consumption);
    J1939_MESSAGE->data[3] = (uint8_t)(SCR1->Aftertreatment_1_Commanded_Diesel_Exhaust_Fluid_Consumption>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(SCR1->Aftertreatment_1_Commanded_Diesel_Exhaust_Fluid_Consumption);
    J1939_MESSAGE->data[5] = SCR1->Aftertreatment_1_SCR_Conversion_Efficiency;
    J1939_MESSAGE->data[6] = (uint8_t)(SCR1->Aftertreatment_1_SCR_Operator_Inducement_Active_Traveled_Distance>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(SCR1->Aftertreatment_1_SCR_Operator_Inducement_Active_Traveled_Distance);
}
void EEC8 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC8_t *EEC8)
{
    J1939_MESSAGE->PGN = 0x00FD6F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_2_Control>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_2_Control);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Gas_Absolute_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Gas_Absolute_Pressure);
    J1939_MESSAGE->data[7] = EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Efficiency;
}
void DRC ( J1939_MESSAGE_T *J1939_MESSAGE,getDRC_t *DRC)
{
    J1939_MESSAGE->PGN = 0x00FD70 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DRC->bt1.Retract_Status_of_ramp_1)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DRC->bt1.Enable_status_of_ramp_1)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(DRC->bt1.Movement_status_of_ramp_1)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(DRC->bt2.Retract_Status_of_ramp_2)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(DRC->bt2.Enable_status_of_ramp_2)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(DRC->bt2.Movement_status_of_ramp_2)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(DRC->bt3.Retract_Status_of_ramp_3)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(DRC->bt3.Enable_status_of_ramp_3)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(DRC->bt3.Movement_status_of_ramp_3)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(DRC->bt4.Retract_Status_of_ramp_4)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(DRC->bt4.Enable_status_of_ramp_4)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(DRC->bt4.Movement_status_of_ramp_4)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(DRC->bt5.Retract_Status_of_ramp_5)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(DRC->bt5.Enable_status_of_ramp_5)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(DRC->bt5.Movement_status_of_ramp_5)<<5;
}
void BSA ( J1939_MESSAGE_T *J1939_MESSAGE,getBSA_t *BSA)
{
    J1939_MESSAGE->PGN = 0x00FD71 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BSA->bt1.Tractor_Brake_Stroke_Axle_1_Left)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BSA->bt1.Tractor_Brake_Stroke_Axle_1_Right)<<4;
    J1939_MESSAGE->data[1] |= (uint8_t)(BSA->bt1.Tractor_Brake_Stroke_Axle_2_Left)<<7;
    J1939_MESSAGE->data[1] |=(uint16_t)(BSA->bt1.Tractor_Brake_Stroke_Axle_2_Left)>>8;
    J1939_MESSAGE->data[2] |= (uint8_t)(BSA->bt2.Tractor_Brake_Stroke_Axle_2_Right)<<2;
    J1939_MESSAGE->data[2] |= (uint8_t)(BSA->bt2.Tractor_Brake_Stroke_Axle_3_Left)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(BSA->bt2.Tractor_Brake_Stroke_Axle_3_Right)<<8;
    J1939_MESSAGE->data[2] |=(uint16_t)(BSA->bt2.Tractor_Brake_Stroke_Axle_3_Right)>>8;
    J1939_MESSAGE->data[3] |= (uint8_t)(BSA->bt3.Tractor_Brake_Stroke_Axle_4_Left)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BSA->bt3.Tractor_Brake_Stroke_Axle_4_Right)<<6;
    J1939_MESSAGE->data[4] |= (uint8_t)(BSA->bt4.Tractor_Brake_Stroke_Axle_5_Left)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(BSA->bt4.Tractor_Brake_Stroke_Axle_5_Right)<<4;
    J1939_MESSAGE->data[4] |= (uint8_t)(BSA->bt4.Trailer_Brake_Stroke_Axle_1_Left)<<7;
    J1939_MESSAGE->data[4] |=(uint16_t)(BSA->bt4.Trailer_Brake_Stroke_Axle_1_Left)>>8;
    J1939_MESSAGE->data[5] |= (uint8_t)(BSA->bt5.Trailer_Brake_Stroke_Axle_1_Right)<<2;
    J1939_MESSAGE->data[5] |= (uint8_t)(BSA->bt5.Trailer_Brake_Stroke_Axle_2_Left)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BSA->bt5.Trailer_Brake_Stroke_Axle_2_Right)<<8;
    J1939_MESSAGE->data[5] |=(uint16_t)(BSA->bt5.Trailer_Brake_Stroke_Axle_2_Right)>>8;
    J1939_MESSAGE->data[6] |= (uint8_t)(BSA->bt6.Trailer_Brake_Stroke_Axle_3_Left)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BSA->bt6.Trailer_Brake_Stroke_Axle_3_Right)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(BSA->bt7.Trailer_Brake_Stroke_Axle_4_Left)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BSA->bt7.Trailer_Brake_Stroke_Axle_4_Right)<<4;
    J1939_MESSAGE->data[7] |= (uint8_t)(BSA->bt7.Trailer_Brake_Stroke_Axle_5_Left)<<7;
    J1939_MESSAGE->data[7] |=(uint16_t)(BSA->bt7.Trailer_Brake_Stroke_Axle_5_Left)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(BSA->bt8.Trailer_Brake_Stroke_Axle_5_Right)<<2;
}
void ESV6 ( J1939_MESSAGE_T *J1939_MESSAGE,getESV6_t *ESV6)
{
    J1939_MESSAGE->PGN = 0x00FD72 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESV6->Engine_Spark_Plug_21>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESV6->Engine_Spark_Plug_21);
    J1939_MESSAGE->data[3] = (uint8_t)(ESV6->Engine_Spark_Plug_22>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESV6->Engine_Spark_Plug_22);
    J1939_MESSAGE->data[5] = (uint8_t)(ESV6->Engine_Spark_Plug_23>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESV6->Engine_Spark_Plug_23);
    J1939_MESSAGE->data[7] = (uint8_t)(ESV6->Engine_Spark_Plug_24>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ESV6->Engine_Spark_Plug_24);
}
void ESV5 ( J1939_MESSAGE_T *J1939_MESSAGE,getESV5_t *ESV5)
{
    J1939_MESSAGE->PGN = 0x00FD73 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESV5->Engine_Spark_Plug_17>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESV5->Engine_Spark_Plug_17);
    J1939_MESSAGE->data[3] = (uint8_t)(ESV5->Engine_Spark_Plug_18>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESV5->Engine_Spark_Plug_18);
    J1939_MESSAGE->data[5] = (uint8_t)(ESV5->Engine_Spark_Plug_19>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESV5->Engine_Spark_Plug_19);
    J1939_MESSAGE->data[7] = (uint8_t)(ESV5->Engine_Spark_Plug_20>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ESV5->Engine_Spark_Plug_20);
}
void ESV4 ( J1939_MESSAGE_T *J1939_MESSAGE,getESV4_t *ESV4)
{
    J1939_MESSAGE->PGN = 0x00FD74 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESV4->Engine_Spark_Plug_13>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESV4->Engine_Spark_Plug_13);
    J1939_MESSAGE->data[3] = (uint8_t)(ESV4->Engine_Spark_Plug_14>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESV4->Engine_Spark_Plug_14);
    J1939_MESSAGE->data[5] = (uint8_t)(ESV4->Engine_Spark_Plug_15>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESV4->Engine_Spark_Plug_15);
    J1939_MESSAGE->data[7] = (uint8_t)(ESV4->Engine_Spark_Plug_16>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ESV4->Engine_Spark_Plug_16);
}
void ESV3 ( J1939_MESSAGE_T *J1939_MESSAGE,getESV3_t *ESV3)
{
    J1939_MESSAGE->PGN = 0x00FD75 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESV3->Engine_Spark_Plug_9>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESV3->Engine_Spark_Plug_9);
    J1939_MESSAGE->data[3] = (uint8_t)(ESV3->Engine_Spark_Plug_10>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESV3->Engine_Spark_Plug_10);
    J1939_MESSAGE->data[5] = (uint8_t)(ESV3->Engine_Spark_Plug_11>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESV3->Engine_Spark_Plug_11);
    J1939_MESSAGE->data[7] = (uint8_t)(ESV3->Engine_Spark_Plug_12>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ESV3->Engine_Spark_Plug_12);
}
void ESV2 ( J1939_MESSAGE_T *J1939_MESSAGE,getESV2_t *ESV2)
{
    J1939_MESSAGE->PGN = 0x00FD76 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESV2->Engine_Spark_Plug_5>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESV2->Engine_Spark_Plug_5);
    J1939_MESSAGE->data[3] = (uint8_t)(ESV2->Engine_Spark_Plug_6>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESV2->Engine_Spark_Plug_6);
    J1939_MESSAGE->data[5] = (uint8_t)(ESV2->Engine_Spark_Plug_7>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESV2->Engine_Spark_Plug_7);
    J1939_MESSAGE->data[7] = (uint8_t)(ESV2->Engine_Spark_Plug_8>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ESV2->Engine_Spark_Plug_8);
}
void ESV1 ( J1939_MESSAGE_T *J1939_MESSAGE,getESV1_t *ESV1)
{
    J1939_MESSAGE->PGN = 0x00FD77 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ESV1->Engine_Spark_Plug_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ESV1->Engine_Spark_Plug_1);
    J1939_MESSAGE->data[3] = (uint8_t)(ESV1->Engine_Spark_Plug_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ESV1->Engine_Spark_Plug_2);
    J1939_MESSAGE->data[5] = (uint8_t)(ESV1->Engine_Spark_Plug_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ESV1->Engine_Spark_Plug_3);
    J1939_MESSAGE->data[7] = (uint8_t)(ESV1->Engine_Spark_Plug_4>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ESV1->Engine_Spark_Plug_4);
}
void AT2TI ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2TI_t *AT2TI)
{
    J1939_MESSAGE->PGN = 0x00FD78 ;
    J1939_MESSAGE->byte_count = 32;
    J1939_MESSAGE->data[0] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used);
    J1939_MESSAGE->data[0] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests);
}
void AT1TI ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1TI_t *AT1TI)
{
    J1939_MESSAGE->PGN = 0x00FD79 ;
    J1939_MESSAGE->byte_count = 32;
    J1939_MESSAGE->data[0] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used);
    J1939_MESSAGE->data[0] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests);
}
void AT2S ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2S_t *AT2S)
{
    J1939_MESSAGE->PGN = 0x00FD7A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT2S->Diesel_Particulate_Filter_2_Soot_Load_Percent;
    J1939_MESSAGE->data[2] = AT2S->Diesel_Particulate_Filter_2_Ash_Load_Percent;
    J1939_MESSAGE->data[3] = (uint8_t)(AT2S->Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2S->Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2S->Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2S->Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration);
    J1939_MESSAGE->data[7] = (uint8_t)(AT2S->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT2S->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold);
}
void AT1S ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1S_t *AT1S)
{
    J1939_MESSAGE->PGN = 0x00FD7B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT1S->Diesel_Particulate_Filter_1_Soot_Load_Percent;
    J1939_MESSAGE->data[2] = AT1S->Diesel_Particulate_Filter_1_Ash_Load_Percent;
    J1939_MESSAGE->data[3] = (uint8_t)(AT1S->Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1S->Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1S->Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1S->Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration);
    J1939_MESSAGE->data[7] = (uint8_t)(AT1S->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AT1S->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold);
}
void DPFC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getDPFC1_t *DPFC1)
{
    J1939_MESSAGE->PGN = 0x00FD7C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DPFC1->bt1.Diesel_Particulate_Filter_Lamp_Command)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(DPFC1->bt2.Diesel_Particulate_Filter_Passive_Regeneration_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(DPFC1->bt2.Diesel_Particulate_Filter_Active_Regeneration_Status)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(DPFC1->bt2.Diesel_Particulate_Filter_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Inhibit_Switch)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Clutch_Disengaged)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Service_Brake_Active)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_PTO_Active)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Accelerator_Pedal_Off_Idle)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Out_of_Neutral)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Above_Allowed_Speed)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Parking_Brake_Not_Set)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Temperature)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Fault_Active)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Timeout)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Temporary_System_Lockout)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Permanent_System_Lockout)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Engine_Not_Warmed_Up)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Below_Allowed_Speed)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(DPFC1->bt7.Diesel_Particulate_Filter_Automatic_Active_Regeneration_Initiation_Configuration)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(DPFC1->bt7.Exhaust_System_High_Temperature_Lamp_Command)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(DPFC1->bt7.Diesel_Particulate_Filter_Active_Regeneration_Forced_Status)<<6;
    J1939_MESSAGE->data[8] |= (uint8_t)(DPFC1->bt8.Hydrocarbon_Doser_Purging_Enable)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(DPFC1->bt8.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Pressure)<<3;
}
void AFSS ( J1939_MESSAGE_T *J1939_MESSAGE,getAFSS_t *AFSS)
{
    J1939_MESSAGE->PGN = 0x00FD7E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AFSS->bt1.Left_Headlamp_Dynamic_Bending_Light)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AFSS->bt1.Right_Headlamp_Dynamic_Bending_Light)<<4;
    J1939_MESSAGE->data[2] |= (uint8_t)(AFSS->bt2.Left_Headlamp_Light_Distribution)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AFSS->bt2.Right_Headlamp_Light_Distribution)<<5;
}
void EC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEC2_t *EC2)
{
    J1939_MESSAGE->PGN = 0x00FD7F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EC2->Maximum_Crank_Attempts_per_Start_Attempt;
}
void EGRBV ( J1939_MESSAGE_T *J1939_MESSAGE,getEGRBV_t *EGRBV)
{
    J1939_MESSAGE->PGN = 0x00FD81 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EGRBV->EGR1_Cooler_Bypass_Actuator_Postion;
}
void TCI ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI_t *TCI)
{
    J1939_MESSAGE->PGN = 0x00FD83 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TCI->bt1.Transfer_case_status)<<1;
}
void EFL_P9 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P9_t *EFL_P9)
{
    J1939_MESSAGE->PGN = 0x00FD84 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_17>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_17);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_18>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_18);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_19>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_19);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_20>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_20);
}
void EFL_P8 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P8_t *EFL_P8)
{
    J1939_MESSAGE->PGN = 0x00FD85 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_13>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_13);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_14>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_14);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_15>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_15);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_16>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_16);
}
void EFL_P7 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P7_t *EFL_P7)
{
    J1939_MESSAGE->PGN = 0x00FD86 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_9>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_9);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_10>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_10);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_11>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_11);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_12>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_12);
}
void EFL_P6 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P6_t *EFL_P6)
{
    J1939_MESSAGE->PGN = 0x00FD87 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_5>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_5);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_6>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_6);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_7>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_7);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_8>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_8);
}
void EFL_P5 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P5_t *EFL_P5)
{
    J1939_MESSAGE->PGN = 0x00FD88 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_1);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_2);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_3);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_4>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_4);
}
void VDS2 ( J1939_MESSAGE_T *J1939_MESSAGE,getVDS2_t *VDS2)
{
    J1939_MESSAGE->PGN = 0x00FD89 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VDS2->Vehicle_Roll>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(VDS2->Vehicle_Roll);
}
void J2012 ( J1939_MESSAGE_T *J1939_MESSAGE,getJ2012_t *J2012)
{
    J1939_MESSAGE->PGN = 0x00FD8A ;
    J1939_MESSAGE->data[1] = J2012->Number_of_J2012_DTCs;
    J1939_MESSAGE->data[2] = (uint8_t)(J2012->J2012_DTC>>40);
    J1939_MESSAGE->data[3] = (uint8_t)(J2012->J2012_DTC>>32);
    J1939_MESSAGE->data[4] = (uint8_t)(J2012->J2012_DTC>>24);
    J1939_MESSAGE->data[5] = (uint8_t)(J2012->J2012_DTC>>16);
    J1939_MESSAGE->data[6] = (uint8_t)(J2012->J2012_DTC>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(J2012->J2012_DTC);
    J1939_MESSAGE->data[7] |= (uint8_t)(J2012->bt7.J2012_DTC_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(J2012->bt7.J2012_DTC_Occurrence_Count)<<2;
}
void AT2GP ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2GP_t *AT2GP)
{
    J1939_MESSAGE->PGN = 0x00FD8B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2GP->Diesel_Particulate_Filter_Intake_Pressure_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2GP->Diesel_Particulate_Filter_Intake_Pressure_2);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2GP->Diesel_Particulate_Filter_Outlet_Pressure_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2GP->Diesel_Particulate_Filter_Outlet_Pressure_2);
}
void AT1GP ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1GP_t *AT1GP)
{
    J1939_MESSAGE->PGN = 0x00FD8C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1GP->Diesel_Particulate_Filter_Intake_Pressure_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1GP->Diesel_Particulate_Filter_Intake_Pressure_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1GP->Diesel_Particulate_Filter_Outlet_Pressure_1>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1GP->Diesel_Particulate_Filter_Outlet_Pressure_1);
}
void AETC ( J1939_MESSAGE_T *J1939_MESSAGE,getAETC_t *AETC)
{
    J1939_MESSAGE->PGN = 0x00FD90 ;
    J1939_MESSAGE->data[1] |= (uint8_t)(AETC->bt1.AETC_Data_Collection_Standard)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AETC->bt1.Number_of_AETC_data_points)<<5;
}
void EOI ( J1939_MESSAGE_T *J1939_MESSAGE,getEOI_t *EOI)
{
    J1939_MESSAGE->PGN = 0x00FD92 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EOI->bt1.Engine_Operating_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EOI->bt1.Fuel_Pump_Primer_Control)<<5;
    J1939_MESSAGE->data[2] = (uint8_t)(EOI->Time_Remaining_in_Engine_Operating_State>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(EOI->Time_Remaining_in_Engine_Operating_State);
    J1939_MESSAGE->data[4] |= (uint8_t)(EOI->bt4.Engine_Fuel_Shutoff_Vent_Control)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EOI->bt4.Engine_Fuel_Shutoff_1_Control)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(EOI->bt4.Engine_Fuel_Shutoff_2_Control)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(EOI->bt4.Engine_Fuel_Shutoff_Valve_Leak_Test_Control)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(EOI->bt5.Engine_Oil_Priming_Pump_Control)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EOI->bt5.Engine_Oil_Pre_heater_Control)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EOI->bt5.Engine_Electrical_System_Power_Conservation_Control)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EOI->bt5.Engine_Block___Coolant_Pre_heater_Control)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(EOI->bt6.Engine_Coolant_Circulating_Pump_Control)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(EOI->bt6.Engine_Controlled_Shutdown_Request)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(EOI->bt6.Engine_Emergency__Immediate__Shutdown_Indication)<<5;
    J1939_MESSAGE->data[8] = EOI->Engine_Derate_Request;
}
void EEC7 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC7_t *EEC7)
{
    J1939_MESSAGE->PGN = 0x00FD94 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC7->Engine_Exhaust_Gas_Recirculation_1_Valve_Position>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC7->Engine_Exhaust_Gas_Recirculation_1_Valve_Position);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC7->Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC7->Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC7->Engine_Crankcase_Breather_Oil_Separator_Speed>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC7->Engine_Crankcase_Breather_Oil_Separator_Speed);
    J1939_MESSAGE->data[7] = (uint8_t)(EEC7->Commanded_Engine_Intake_Manifold_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EEC7->Commanded_Engine_Intake_Manifold_Pressure);
}
void TRF2 ( J1939_MESSAGE_T *J1939_MESSAGE,getTRF2_t *TRF2)
{
    J1939_MESSAGE->PGN = 0x00FD95 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TRF2->bt1.Transmission_Oil_Filter_Restriction_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(TRF2->bt1.Transmission_Oil_Level_Switch)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(TRF2->bt1.Transmission_Overheat_Indicator)<<5;
    J1939_MESSAGE->data[2] = (uint8_t)(TRF2->Transmission_Torque_Converter_Oil_Outlet_Temperature>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TRF2->Transmission_Torque_Converter_Oil_Outlet_Temperature);
    J1939_MESSAGE->data[4] = TRF2->Transmission_Oil_Life_Remaining;
    J1939_MESSAGE->data[5] = (uint8_t)(TRF2->Transmission_Oil_Temperature_2>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TRF2->Transmission_Oil_Temperature_2);
    J1939_MESSAGE->data[7] = TRF2->Transmission_Oil_Level_2_High___Low;
    J1939_MESSAGE->data[8] |= (uint8_t)(TRF2->bt8.Transmission_Oil_Level_2_Countdown_Timer)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(TRF2->bt8.Transmission_Oil_Level_2_Measurement_Status)<<5;
}
void AT1HI ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1HI_t *AT1HI)
{
    J1939_MESSAGE->PGN = 0x00FD98 ;
    J1939_MESSAGE->data[0] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Fuel_Used);
    J1939_MESSAGE->data[0] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Regeneration_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Regeneration_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Regeneration_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Regeneration_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Disabled_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Disabled_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Disabled_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Disabled_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Number_of_Active_Regenerations>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Number_of_Active_Regenerations>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Number_of_Active_Regenerations>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Total_Number_of_Active_Regenerations);
    J1939_MESSAGE->data[1] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Time_Between_Active_Regenerations>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Time_Between_Active_Regenerations>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Time_Between_Active_Regenerations>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Time_Between_Active_Regenerations);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1HI->Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations);
}
void AT2HI ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2HI_t *AT2HI)
{
    J1939_MESSAGE->PGN = 0x00FD99 ;
    J1939_MESSAGE->data[0] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Fuel_Used);
    J1939_MESSAGE->data[0] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Regeneration_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Regeneration_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Regeneration_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Regeneration_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Disabled_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Disabled_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Disabled_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Disabled_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Number_of_Active_Regenerations>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Number_of_Active_Regenerations>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Number_of_Active_Regenerations>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Total_Number_of_Active_Regenerations);
    J1939_MESSAGE->data[1] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Time_Between_Active_Regenerations>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Time_Between_Active_Regenerations>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Time_Between_Active_Regenerations>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Time_Between_Active_Regenerations);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2HI->Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations);
}
void A1DEFI ( J1939_MESSAGE_T *J1939_MESSAGE,getA1DEFI_t *A1DEFI)
{
    J1939_MESSAGE->PGN = 0x00FD9B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A1DEFI->Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2;
    J1939_MESSAGE->data[2] = A1DEFI->Aftertreatment_1_Diesel_Exhaust_Fluid_Concentration;
    J1939_MESSAGE->data[3] = A1DEFI->Aftertreatment_1_Diesel_Exhaust_Fluid_Conductivity;
    J1939_MESSAGE->data[4] |= (uint8_t)(A1DEFI->bt4.Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(A1DEFI->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(A1DEFI->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Property)<<1;
}
void SEP2 ( J1939_MESSAGE_T *J1939_MESSAGE,getSEP2_t *SEP2)
{
    J1939_MESSAGE->PGN = 0x00FD9C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SEP2->Sensor_supply_voltage_5>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(SEP2->Sensor_supply_voltage_5);
    J1939_MESSAGE->data[3] = (uint8_t)(SEP2->Sensor_supply_voltage_6>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(SEP2->Sensor_supply_voltage_6);
    J1939_MESSAGE->data[5] = (uint8_t)(SEP2->Sensor_supply_voltage_7>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(SEP2->Sensor_supply_voltage_7);
    J1939_MESSAGE->data[7] = (uint8_t)(SEP2->Sensor_supply_voltage_8>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(SEP2->Sensor_supply_voltage_8);
}
void SEP1 ( J1939_MESSAGE_T *J1939_MESSAGE,getSEP1_t *SEP1)
{
    J1939_MESSAGE->PGN = 0x00FD9D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SEP1->Sensor_supply_voltage_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(SEP1->Sensor_supply_voltage_1);
    J1939_MESSAGE->data[3] = (uint8_t)(SEP1->Sensor_supply_voltage_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(SEP1->Sensor_supply_voltage_2);
    J1939_MESSAGE->data[5] = (uint8_t)(SEP1->Sensor_supply_voltage_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(SEP1->Sensor_supply_voltage_3);
    J1939_MESSAGE->data[7] = (uint8_t)(SEP1->Sensor_supply_voltage_4>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(SEP1->Sensor_supply_voltage_4);
}
void AT2AC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2AC1_t *AT2AC1)
{
    J1939_MESSAGE->PGN = 0x00FD9E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2AC1->Aftertreatment_2_Supply_Air_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2AC1->Aftertreatment_2_Supply_Air_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2AC1->Aftertreatment_2_Purge_Air_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2AC1->Aftertreatment_2_Purge_Air_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2AC1->Aftertreatment_2_Air_Pressure_Control>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2AC1->Aftertreatment_2_Air_Pressure_Control);
    J1939_MESSAGE->data[7]= AT2AC1->Aftertreatment_2_Air_Pressure_Actuator_Position;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2AC1->bt7.Aftertreatment_2_Air_Pressure_Actuator_Position)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2AC1->bt8.Aftertreatment_2_Air_System_Relay)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2AC1->bt8.Aftertreatment_2_Atomization_Air_Actuator)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2AC1->bt8.Aftertreatment_2_Purge_Air_Actuator)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2AC1->bt8.Aftertreatment_2_Air_Enable_Actuator)<<7;
}
void AT1AC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1AC1_t *AT1AC1)
{
    J1939_MESSAGE->PGN = 0x00FD9F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1AC1->Aftertreatment_1_Supply_Air_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1AC1->Aftertreatment_1_Supply_Air_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1AC1->Aftertreatment_1_Purge_Air_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1AC1->Aftertreatment_1_Purge_Air_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1AC1->Aftertreatment_1_Air_Pressure_Control>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1AC1->Aftertreatment_1_Air_Pressure_Control);
    J1939_MESSAGE->data[7] = AT1AC1->Aftertreatment_1_Air_Pressure_Actuator_Position;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1AC1->bt7.Aftertreatment_1_Air_Pressure_Actuator_Position)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1AC1->bt8.Aftertreatment_1_Air_System_Relay)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1AC1->bt8.Aftertreatment_1_Atomization_Air_Actuator)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1AC1->bt8.Aftertreatment_1_Purge_Air_Actuator)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1AC1->bt8.Aftertreatment_1_Air_Enable_Actuator)<<7;
}
void AT2FC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2FC1_t *AT2FC1)
{
    J1939_MESSAGE->PGN = 0x00FDA0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2FC1->Aftertreatment_2_Fuel_Pressure_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2FC1->Aftertreatment_2_Fuel_Pressure_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2FC1->Aftertreatment_2_Fuel_Rate>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2FC1->Aftertreatment_2_Fuel_Rate);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2FC1->Aftertreatment_2_Fuel_Pressure_1_Control>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2FC1->Aftertreatment_2_Fuel_Pressure_1_Control);
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2FC1->bt7.Aftertreatment_2_Fuel_Drain_Actuator)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2FC1->bt7.Aftertreatment_2_Ignition)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2FC1->bt7.Aftertreatment_2_Regeneration_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2FC1->bt7.Aftertreatment_2_Fuel_Enable_Actuator)<<7;
    J1939_MESSAGE->data[8] = AT2FC1->Aftertreatment_2_Fuel_Injector_1_Heater_Control;
}
void AT1FC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1FC1_t *AT1FC1)
{
    J1939_MESSAGE->PGN = 0x00FDA1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1FC1->Aftertreatment_1_Fuel_Pressure_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1FC1->Aftertreatment_1_Fuel_Pressure_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1FC1->Aftertreatment_1_Fuel_Rate>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1FC1->Aftertreatment_1_Fuel_Rate);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1FC1->Aftertreatment_1_Fuel_Pressure_1_Control>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1FC1->Aftertreatment_1_Fuel_Pressure_1_Control);
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1FC1->bt7.Aftertreatment_1_Fuel_Drain_Actuator)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1FC1->bt7.Aftertreatment_1_Ignition)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1FC1->bt7.Aftertreatment_1_Regeneration_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1FC1->bt7.Aftertreatment_1_Fuel_Enable_Actuator)<<7;
    J1939_MESSAGE->data[8] = AT1FC1->Aftertreatment_1_Fuel_Injector_1_Heater_Control;
}
void GFI ( J1939_MESSAGE_T *J1939_MESSAGE,getGFI_t *GFI)
{
    J1939_MESSAGE->PGN = 0x00FDA2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GFI->Engine_Fuel_Valve_2_Intake_Absolute_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(GFI->Engine_Fuel_Valve_2_Intake_Absolute_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(GFI->Engine_Gas_2_Mass_Flow_Rate>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GFI->Engine_Gas_2_Mass_Flow_Rate);
    J1939_MESSAGE->data[5] = GFI->Engine_Fuel_Temperature_2;
    J1939_MESSAGE->data[7] = (uint8_t)(GFI->Engine_Fuel>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(GFI->Engine_Fuel);
}
void EEC6 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC6_t *EEC6)
{
    J1939_MESSAGE->PGN = 0x00FDA3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_1_Command>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_1_Command);
    J1939_MESSAGE->data[3] = EEC6->Engine_Variable_Geometry_Turbocharger_Actuator_1;
    J1939_MESSAGE->data[4] = EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_1;
    J1939_MESSAGE->data[5] = (uint8_t)(EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_2_command>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_2_command);
    J1939_MESSAGE->data[7] = EEC6->Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_1_Position;
    J1939_MESSAGE->data[8] |= (uint8_t)(EEC6->bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(EEC6->bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature_Status)<<6;
}
void PTODE ( J1939_MESSAGE_T *J1939_MESSAGE,getPTODE_t *PTODE)
{
    J1939_MESSAGE->PGN = 0x00FDA4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(PTODE->bt1.Enable_Switch_–_Transfer_case_output_shaft_PTO)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(PTODE->bt1.Enable_Switch_–_Transmission_output_shaft_PTO)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(PTODE->bt1.Enable_Switch_–_Transmission_input_shaft_PTO_2)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(PTODE->bt1.Enable_Switch_–_Transmission_input_shaft_PTO_1)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(PTODE->bt2.Enable_Switch___PTO_Engine_Flywheel)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(PTODE->bt2.Enable_Switch___PTO_Engine_Accessory_Drive_1)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(PTODE->bt2.Enable_Switch___PTO_Engine_Accessory_Drive_2)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(PTODE->bt3.Engagement_Consent_–_Transfer_case_output_shaft_PTO)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(PTODE->bt3.Engagement_Consent_–_Transmission_output_shaft_PTO)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(PTODE->bt3.Engagement_Consent_–_Transmission_input_shaft_PTO_2)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(PTODE->bt3.Engagement_Consent_–_Transmission_input_shaft_PTO_1)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(PTODE->bt4.Engagement_Consent___PTO_Engine_Flywheel)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(PTODE->bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_1)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(PTODE->bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_2)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(PTODE->bt5.Engagement_Status_–_Transfer_case_output_shaft_PTO)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(PTODE->bt5.Engagement_Status_–_Transmission_output_shaft_PTO)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(PTODE->bt5.Engagement_Status_–_Transmission_input_shaft_PTO_2)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(PTODE->bt5.Engagement_Status_–_Transmission_input_shaft_PTO_1)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(PTODE->bt6.Engagement_Status___PTO_Engine_Flywheel)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(PTODE->bt6.Engagement_Status___PTO_Engine_Accessory_Drive_1)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(PTODE->bt6.Engagement_Status___PTO_Engine_Accessory_Drive_2)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(PTODE->bt7.At_least_one_PTO_engaged)<<1;
}
void DC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getDC2_t *DC2)
{
    J1939_MESSAGE->PGN = 0x00FDA5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC2->bt1.Lock_Status_of_Door_1)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC2->bt1.Open_Status_of_Door_1)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC2->bt1.Enable_Status_of_Door_1)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC2->bt1.Lock_Status_of_Door_2)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(DC2->bt2.Open_Status_of_Door_2)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(DC2->bt2.Enable_Status_of_Door_2)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(DC2->bt2.Lock_Status_of_Door_3)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(DC2->bt2.Open_Status_of_Door_3)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(DC2->bt3.Enable_Status_of_Door_3)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(DC2->bt3.Lock_Status_of_Door_4)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(DC2->bt3.Open_Status_of_Door_4)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(DC2->bt3.Enable_Status_of_Door_4)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(DC2->bt4.Lock_Status_of_Door_5)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(DC2->bt4.Open_Status_of_Door_5)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(DC2->bt4.Enable_Status_of_Door_5)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(DC2->bt4.Lock_Status_of_Door_6)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(DC2->bt5.Open_Status_of_Door_6)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(DC2->bt5.Enable_Status_of_Door_6)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(DC2->bt5.Lock_Status_of_Door_7)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(DC2->bt5.Open_Status_of_Door_7)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(DC2->bt6.Enable_Status_of_Door_7)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(DC2->bt6.Lock_Status_of_Door_8)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(DC2->bt6.Open_Status_of_Door_8)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(DC2->bt6.Enable_Status_of_Door_8)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(DC2->bt7.Lock_Status_of_Door_9)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(DC2->bt7.Open_Status_of_Door_9)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(DC2->bt7.Enable_Status_of_Door_9)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(DC2->bt7.Lock_Status_of_Door_10)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(DC2->bt8.Open_Status_of_Door_10)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(DC2->bt8.Enable_Status_of_Door_10)<<3;
}
void WCM2 ( J1939_MESSAGE_T *J1939_MESSAGE,getWCM2_t *WCM2)
{
    J1939_MESSAGE->PGN = 0x00FDA8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(WCM2->bt1.Network_Transceiver_Status_2)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(WCM2->bt2.Network_Service_Status_2)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(WCM2->bt3.Network_Antenna_Status_2)<<1;
    J1939_MESSAGE->data[4] = WCM2->Network_Signal_Strength_2;
    J1939_MESSAGE->data[5] |= (uint8_t)(WCM2->bt5.Wireless_Communication_Network_Type_2)<<1;
}
void WCM1 ( J1939_MESSAGE_T *J1939_MESSAGE,getWCM1_t *WCM1)
{
    J1939_MESSAGE->PGN = 0x00FDA9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(WCM1->bt1.Network_Transceiver_Status_1)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(WCM1->bt2.Network_Service_Status_1)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(WCM1->bt3.Network_Antenna_Status_1)<<1;
    J1939_MESSAGE->data[4] = WCM1->Network_Signal_Strength_1;
    J1939_MESSAGE->data[5] |= (uint8_t)(WCM1->bt5.Wireless_Communication_Network_Type_1)<<1;
}
void EFL_P4 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P4_t *EFL_P4)
{
    J1939_MESSAGE->PGN = 0x00FDAA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EFL_P4->Engine_Charge_Air_Cooler_1_Intake_Pressure;
    J1939_MESSAGE->data[2] = EFL_P4->Engine_Charge_Air_Cooler_2_Intake_Pressure;
    J1939_MESSAGE->data[3] = EFL_P4->Engine_Coolant_Pump_Differential_Pressure;
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P4->Engine_Centrifugal_Oil_Filter_speed>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P4->Engine_Centrifugal_Oil_Filter_speed);
    J1939_MESSAGE->data[6] = EFL_P4->Engine_Intercooler_Coolant_Level;
    J1939_MESSAGE->data[8] = EFL_P4->Engine_Charge_Air_Cooler_Outlet_Pressure;
}
void FWSS2 ( J1939_MESSAGE_T *J1939_MESSAGE,getFWSS2_t *FWSS2)
{
    J1939_MESSAGE->PGN = 0x00FDAE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FWSS2->bt1.Fifth_Wheel_Error_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(FWSS2->bt1.Fifth_Wheel_Lock_Ready_to_Couple_Indicator)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(FWSS2->bt1.Fifth_Wheel_Lock_Couple_Status_Indicator)<<7;
    J1939_MESSAGE->data[2] = FWSS2->Fifth_Wheel_Slider_Position;
    J1939_MESSAGE->data[3] |= (uint8_t)(FWSS2->bt3.Fifth_Wheel_Slider_Lock_Indicator)<<1;
}
void AT2IMG ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2IMG_t *AT2IMG)
{
    J1939_MESSAGE->PGN = 0x00FDAF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2IMG->Aftertreatment_2_Exhaust_Gas_Temperature_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2IMG->Aftertreatment_2_Exhaust_Gas_Temperature_2);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2IMG->Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2IMG->Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(AT2IMG->Aftertreatment_2_Diesel_Particulate_Filter_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT2IMG->Aftertreatment_2_Diesel_Particulate_Filter_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2IMG->bt7.Aftertreatment_2_Exhaust_Gas_Temperature_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT2IMG->bt7.Aftertreatment_2_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(AT2IMG->bt7.Aftertreatment_2_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT2IMG->bt8.Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI)<<3;
}
void AT2OG2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2OG2_t *AT2OG2)
{
    J1939_MESSAGE->PGN = 0x00FDB0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2OG2->Aftertreatment_2_Exhaust_Gas_Temperature_3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2OG2->Aftertreatment_2_Exhaust_Gas_Temperature_3);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2OG2->Aftertreatment_2_Diesel_Particulate_Filter_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2OG2->Aftertreatment_2_Diesel_Particulate_Filter_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2OG2->bt5.Aftertreatment_2_Exhaust_Gas_Temperature_3_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT2OG2->bt6.Aftertreatment_2_Diesel_Particulate_Filter_Exhaust_Gas)<<1;
}
void AT2IG2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT2IG2_t *AT2IG2)
{
    J1939_MESSAGE->PGN = 0x00FDB1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT2IG2->Aftertreatment_2_Exhaust_Gas_Temperature_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT2IG2->Aftertreatment_2_Exhaust_Gas_Temperature_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT2IG2->Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT2IG2->Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT2IG2->bt5.Aftertreatment_2_Exhaust_Gas_Temperature_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT2IG2->bt6.Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI)<<1;
}
void AT1IMG ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1IMG_t *AT1IMG)
{
    J1939_MESSAGE->PGN = 0x00FDB2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1IMG->Aftertreatment_1_Exhaust_Gas_Temperature_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1IMG->Aftertreatment_1_Exhaust_Gas_Temperature_2);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1IMG->Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1IMG->Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(AT1IMG->Aftertreatment_1_Diesel_Particulate_Filter_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AT1IMG->Aftertreatment_1_Diesel_Particulate_Filter_Differential_Pressure);
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1IMG->bt7.Aftertreatment_1_Exhaust_Gas_Temperature_2_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(AT1IMG->bt7.Aftertreatment_1_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI)<<6;
    J1939_MESSAGE->data[7] |=(uint16_t)(AT1IMG->bt7.Aftertreatment_1_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI)>>8;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1IMG->bt8.Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI)<<3;
}
void AT1OG2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1OG2_t *AT1OG2)
{
    J1939_MESSAGE->PGN = 0x00FDB3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1OG2->Aftertreatment_1_Exhaust_Gas_Temperature_3>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1OG2->Aftertreatment_1_Exhaust_Gas_Temperature_3);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1OG2->Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1OG2->Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Gas_Temperature);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1OG2->bt5.Aftertreatment_1_Exhaust_Gas_Temperature_3_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1OG2->bt6.Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Exhaust_Gas)<<1;
}
void AT1IG2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1IG2_t *AT1IG2)
{
    J1939_MESSAGE->PGN = 0x00FDB4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AT1IG2->Aftertreatment_1_Exhaust_Gas_Temperature_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AT1IG2->Aftertreatment_1_Exhaust_Gas_Temperature_1);
    J1939_MESSAGE->data[3] = (uint8_t)(AT1IG2->Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1IG2->Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1IG2->bt5.Aftertreatment_1_Exhaust_Gas_Temperature_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1IG2->bt6.Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI)<<1;
}
void TPRI ( J1939_MESSAGE_T *J1939_MESSAGE,getTPRI_t *TPRI)
{
    J1939_MESSAGE->PGN = 0x00FDB9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TPRI->bt1.Tire_Location)<<1;
    J1939_MESSAGE->data[2] = TPRI->Reference_Tire_Pressure;
}
void TR6 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR6_t *TR6)
{
    J1939_MESSAGE->PGN = 0x00FDBA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR6->bt1.Farebox_Emergency_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(TR6->bt2.Farebox_Alarm_Identifier)<<1;
}
void TR5 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR5_t *TR5)
{
    J1939_MESSAGE->PGN = 0x00FDBB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR5->bt1.Transaction_Type)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR5->bt1.Passenger_Type)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(TR5->bt2.Type_of_Fare)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(TR5->bt2.Payment_Details)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(TR5->bt3.Fare_Validity)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(TR5->bt3.Pass_Category)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(TR5->bt4.Initial_Fare_Agency)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(TR5->bt5.Type_of_Service)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(TR5->bt5.Transfer_Type)<<4;
    J1939_MESSAGE->data[8] = TR5->Transfer_Sold;
}
void TR4 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR4_t *TR4)
{
    J1939_MESSAGE->PGN = 0x00FDBC ;
    J1939_MESSAGE->byte_count = 15;
    J1939_MESSAGE->data[0] = (uint8_t)(TR4->Trip_Number>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(TR4->Trip_Number);
    J1939_MESSAGE->data[0] = (uint8_t)(TR4->Pattern_Number>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(TR4->Pattern_Number);
    J1939_MESSAGE->data[0] = (uint8_t)(TR4->Assigned_Route>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(TR4->Assigned_Route);
    J1939_MESSAGE->data[1] = (uint8_t)(TR4->Assigned_Run>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TR4->Assigned_Run);
    J1939_MESSAGE->data[1] = (uint8_t)(TR4->Assigned_Block>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TR4->Assigned_Block);
    J1939_MESSAGE->data[1] = (uint8_t)(TR4->Driver_s_farebox_security_code>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TR4->Driver_s_farebox_security_code);
}
void TR3 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR3_t *TR3)
{
    J1939_MESSAGE->PGN = 0x00FDBD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR3->bt1.Range_Code_Enable)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR3->bt1.Transit_Route_ID_Usage)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR3->bt1.Intersection_Preemption_Request_Response)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(TR3->bt2.Priority_of_Response_Sent_by_Emitter)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(TR3->bt2.Transit_Door_Enable)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(TR3->bt2.Strobe_Activation_Control_Status)<<7;
    J1939_MESSAGE->data[3] = (uint8_t)(TR3->Vehicle_ID>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TR3->Vehicle_ID);
}
void TR1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR1_t *TR1)
{
    J1939_MESSAGE->PGN = 0x00FDBE ;
    J1939_MESSAGE->data[1] = TR1->Agency;
    J1939_MESSAGE->data[2] = TR1->Number_of_bytes_in_the_Transit_Assigned_Route_Identity;
    J1939_MESSAGE->data[3] = TR1->Number_of_bytes_in_the_Transit_Assigned_Run_Identity;
    J1939_MESSAGE->data[4] = TR1->Number_of_bytes_in_the_Transit_Assigned_Block_Identity;
}
void TR2 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR2_t *TR2)
{
    J1939_MESSAGE->PGN = 0x00FDBF ;
    J1939_MESSAGE->data[1] = TR2->Number_of_bytes_in_the_Milepost_Identification;
}
void TR7 ( J1939_MESSAGE_T *J1939_MESSAGE,getTR7_t *TR7)
{
    J1939_MESSAGE->PGN = 0x00FDC0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TR7->bt1.Type_of_Passenger_Count)<<1;
    J1939_MESSAGE->data[2] = TR7->Patron_Count;
    J1939_MESSAGE->data[3] |= (uint8_t)(TR7->bt3.Silent_Alarm_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(TR7->bt3.Vehicle_Use_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(TR7->bt3.Transit_Run_Status)<<5;
}
void EFL_P3 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P3_t *EFL_P3)
{
    J1939_MESSAGE->PGN = 0x00FDC1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P3->Engine_Intake_Valve_Actuation_System_Oil_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P3->Engine_Intake_Valve_Actuation_System_Oil_Pressure);
    J1939_MESSAGE->data[3] = EFL_P3->Engine_Exhaust_Gas_Recirculation_1_Intake_Pressure;
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P3->Engine_Exhaust_Valve_Actuation_System_Oil_Pressure>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P3->Engine_Exhaust_Valve_Actuation_System_Oil_Pressure);
    J1939_MESSAGE->data[6] = EFL_P3->Engine_Exhaust_Gas_Recirculation_1_Outlet_Pressure;
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P3->Engine_Throttle_Valve_1_Differential_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P3->Engine_Throttle_Valve_1_Differential_Pressure);
}
void EEC14 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC14_t *EEC14)
{
    J1939_MESSAGE->PGN = 0x00FDC2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC14->Engine_Exhaust_Gas_Recirculation_1_Valve_1_Position_Error>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC14->Engine_Exhaust_Gas_Recirculation_1_Valve_1_Position_Error);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC14->Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position_Error>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC14->Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position_Error);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC14->Engine_Fuel_Mass_Flow_Rate>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC14->Engine_Fuel_Mass_Flow_Rate);
    J1939_MESSAGE->data[7] |= (uint8_t)(EEC14->bt7.Fuel_Type)<<1;
}
void EEC15 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC15_t *EEC15)
{
    J1939_MESSAGE->PGN = 0x00FDC3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EEC15->Accelerator_Pedal_1_Channel_2;
    J1939_MESSAGE->data[2] = EEC15->Accelerator_Pedal_1_Channel_3;
    J1939_MESSAGE->data[3] = EEC15->Accelerator_Pedal_2_Channel_2;
    J1939_MESSAGE->data[4] = EEC15->Accelerator_Pedal_2_Channel_3;
}
void EBC5 ( J1939_MESSAGE_T *J1939_MESSAGE,getEBC5_t *EBC5)
{
    J1939_MESSAGE->PGN = 0x00FDC4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC5->bt1.Brake_Temperature_Warning)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC5->bt1.Halt_brake_mode)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EBC5->bt1.Hill_holder_mode)<<6;
    J1939_MESSAGE->data[2] |= (uint8_t)(EBC5->bt2.Foundation_Brake_Use)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(EBC5->bt2.XBR_System_State)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(EBC5->bt2.XBR_Active_Control_Mode)<<5;
    J1939_MESSAGE->data[3] = EBC5->XBR_Acceleration_Limit;
    J1939_MESSAGE->data[4] |= (uint8_t)(EBC5->bt4.Parking_Brake_Actuator_Fully_Activated)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(EBC5->bt4.Emergency_Braking_Active)<<3;
}
void CSA ( J1939_MESSAGE_T *J1939_MESSAGE,getCSA_t *CSA)
{
    J1939_MESSAGE->PGN = 0x00FDC6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CSA->bt1.Engine_Start_Enable_Device_1)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(CSA->bt1.Engine_Start_Enable_Device_2)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(CSA->bt2.Engine_Start_Enable_Device_1_Configuration)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(CSA->bt2.Engine_Start_Enable_Device_2_Configuration)<<5;
    J1939_MESSAGE->data[3] = CSA->Engine_Cold_Start_Fuel_Igniter_Command;
    J1939_MESSAGE->data[4] |= (uint8_t)(CSA->bt4.Engine_Cold_Start_Fuel_Igniter_Relay)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(CSA->bt4.Engine_Cold_Start_Fuel_Igniter_Relay_Feedback)<<3;
}
void OHCSS ( J1939_MESSAGE_T *J1939_MESSAGE,getOHCSS_t *OHCSS)
{
    J1939_MESSAGE->PGN = 0x00FDC7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(OHCSS->bt1.Engine_Auxiliary_Governor_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(OHCSS->bt1.Engine_Multi_Unit_Sync_State)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(OHCSS->bt1.Engine_Alternate_Low_Idle_Select_State)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(OHCSS->bt2.Engine_Alternate_Rating_Select_State)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(OHCSS->bt3.Engine_Alternate_Droop_Accelerator_1_Select_State)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(OHCSS->bt3.Engine_Alternate_Droop_Accelerator_2_Select_State)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(OHCSS->bt4.Engine_Alternate_Droop_Remote_Accelerator_Select_State)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(OHCSS->bt4.Engine_Alternate_Droop_Auxiliary_Input_Select_State)<<5;
}
void ISCS ( J1939_MESSAGE_T *J1939_MESSAGE,getISCS_t *ISCS)
{
    J1939_MESSAGE->PGN = 0x00FDC8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ISCS->bt1.Engine_Operator_Primary_Intermediate_Speed_Select_State)<<1;
}
void CMI ( J1939_MESSAGE_T *J1939_MESSAGE,getCMI_t *CMI)
{
    J1939_MESSAGE->PGN = 0x00FDC9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CMI->Total_Count_of_Configuration_Changes_Made>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CMI->Total_Count_of_Configuration_Changes_Made);
}
void ISC ( J1939_MESSAGE_T *J1939_MESSAGE,getISC_t *ISC)
{
    J1939_MESSAGE->PGN = 0x00FDCA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ISC->bt1.Engine_Operator_Primary_Intermediate_Speed_Select)<<1;
}
void OHECS ( J1939_MESSAGE_T *J1939_MESSAGE,getOHECS_t *OHECS)
{
    J1939_MESSAGE->PGN = 0x00FDCB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(OHECS->bt1.Engine_Auxiliary_Governor_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(OHECS->bt1.Engine_Synchronization_Switch)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(OHECS->bt1.Engine_Alternate_Low_Idle_Switch)<<5;
    J1939_MESSAGE->data[2] = OHECS->Engine_Alternate_Rating_Select;
    J1939_MESSAGE->data[3] |= (uint8_t)(OHECS->bt3.Engine_Alternate_Droop_Accelerator_1_Select)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(OHECS->bt3.Engine_Alternate_Droop_Accelerator_2_Select)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(OHECS->bt4.Engine_Alternate_Droop_Remote_Accelerator_Select)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(OHECS->bt4.Engine_Alternate_Droop_Auxiliary_Input_Select)<<5;
}
void OEL ( J1939_MESSAGE_T *J1939_MESSAGE,getOEL_t *OEL)
{
    J1939_MESSAGE->PGN = 0x00FDCC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(OEL->bt1.Work_Light_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(OEL->bt1.Main_Light_Switch)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(OEL->bt2.Turn_Signal_Switch)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(OEL->bt2.Hazard_Light_Switch)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(OEL->bt2.High_Low_Beam_Switch)<<7;
    J1939_MESSAGE->data[3] = OEL->Operators_Desired_Back_light;
    J1939_MESSAGE->data[4] = (uint8_t)(OEL->Operators_Desired___Delayed_Lamp_Off_Time>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(OEL->Operators_Desired___Delayed_Lamp_Off_Time);
}
void OWW ( J1939_MESSAGE_T *J1939_MESSAGE,getOWW_t *OWW)
{
    J1939_MESSAGE->PGN = 0x00FDCD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(OWW->bt1.Front_Non_operator_Wiper_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(OWW->bt1.Front_Operator_Wiper_Switch)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(OWW->bt2.Rear_Wiper_Switch)<<5;
    J1939_MESSAGE->data[3] = OWW->Front_Operator_Wiper_Delay_Control;
    J1939_MESSAGE->data[4] = OWW->Front_Non_operator_Wiper_Delay_Control;
    J1939_MESSAGE->data[5] = OWW->Rear_Wiper_Delay_Control;
    J1939_MESSAGE->data[6] |= (uint8_t)(OWW->bt6.Front_Non_operator_Washer_Switch)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(OWW->bt6.Front_Operator_Washer_Switch)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(OWW->bt7.Rear_Washer_Function)<<6;
}
void IC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getIC2_t *IC2)
{
    J1939_MESSAGE->PGN = 0x00FDD0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = IC2->Engine_Air_Filter_2_Differential_Pressure;
    J1939_MESSAGE->data[2] = IC2->Engine_Air_Filter_3_Differential_Pressure;
    J1939_MESSAGE->data[3] = IC2->Engine_Air_Filter_4_Differential_Pressure;
    J1939_MESSAGE->data[4] = IC2->Engine_Intake_Manifold_2_Pressure;
    J1939_MESSAGE->data[5] = IC2->Engine_Intake_Manifold_1_Absolute_Pressure;
    J1939_MESSAGE->data[6] = (uint8_t)(IC2->Engine_Intake_Manifold_1_Absolute_Pressure__High_Resolution_>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(IC2->Engine_Intake_Manifold_1_Absolute_Pressure__High_Resolution_);
    J1939_MESSAGE->data[8] = IC2->Engine_Intake_Manifold_2_Absolute_Pressure;
}
void FMS ( J1939_MESSAGE_T *J1939_MESSAGE,getFMS_t *FMS)
{
    J1939_MESSAGE->PGN = 0x00FDD1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FMS->bt1.FMS_standard_Diagnostics_Supported)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(FMS->bt1.FMS_standard_Requests_Supported)<<3;
    J1939_MESSAGE->data[2] = (uint8_t)(FMS->FMS_standard_SW_version_supported_>>24);
    J1939_MESSAGE->data[3] = (uint8_t)(FMS->FMS_standard_SW_version_supported_>>16);
    J1939_MESSAGE->data[4] = (uint8_t)(FMS->FMS_standard_SW_version_supported_>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(FMS->FMS_standard_SW_version_supported_);
}
void EP ( J1939_MESSAGE_T *J1939_MESSAGE,getEP_t *EP)
{
    J1939_MESSAGE->PGN = 0x00FDD2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EP->Keep_Alive_Battery_Consumption>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EP->Keep_Alive_Battery_Consumption);
    J1939_MESSAGE->data[3] = EP->Data_Memory_Usage;
}
void TCI6 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI6_t *TCI6)
{
    J1939_MESSAGE->PGN = 0x00FDD3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TCI6->Engine_Turbocharger_1_Compressor_Outlet_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TCI6->Engine_Turbocharger_1_Compressor_Outlet_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(TCI6->Engine_Turbocharger_2_Compressor_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TCI6->Engine_Turbocharger_2_Compressor_Outlet_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(TCI6->Engine_Turbocharger_3_Compressor_Outlet_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TCI6->Engine_Turbocharger_3_Compressor_Outlet_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(TCI6->Engine_Turbocharger_4_Compressor_Outlet_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TCI6->Engine_Turbocharger_4_Compressor_Outlet_Temperature);
}
void CM3 ( J1939_MESSAGE_T *J1939_MESSAGE,getCM3_t *CM3)
{
    J1939_MESSAGE->PGN = 0x00FDD4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CM3->bt1.Transfer_Case_Selector_Switch)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(CM3->bt2.Fifth_Wheel_Release_Control)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(CM3->bt2.Fifth_Wheel_Release_Control_Security_Lockout)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(CM3->bt3.Transmission_Oil_Level_Request)<<1;
}
void EEC5 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC5_t *EEC5)
{
    J1939_MESSAGE->PGN = 0x00FDD5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC5->Engine_Turbocharger_1_Calculated_Turbine_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC5->Engine_Turbocharger_1_Calculated_Turbine_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC5->Engine_Turbocharger_1_Calculated_Turbine_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC5->Engine_Turbocharger_1_Calculated_Turbine_Outlet_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EEC5->Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_Control>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EEC5->Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_Control);
    J1939_MESSAGE->data[7] |= (uint8_t)(EEC5->bt7.Engine_Variable_Geometry_Turbocharger__VGT__Air_Control_Shutoff_Valve)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEC5->bt7.Engine_Fuel_Control_Control_Mode)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EEC5->bt7.Engine_Variable_Geometry_Turbocharger_1_Control_Mode)<<5;
    J1939_MESSAGE->data[8] = EEC5->Engine_Variable_Geometry_Turbocharger__VGT__1_Actuator_Position;
}
void BJM1 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM1_t *BJM1)
{
    J1939_MESSAGE->PGN = 0x00FDD6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM1->bt1.Joystick_1_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM1->bt1.Joystick_1_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM1->bt1.Joystick_1_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM1->bt3.Joystick_1_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM1->bt3.Joystick_1_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM1->bt3.Joystick_1_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM1->bt5.Joystick_1_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM1->bt5.Joystick_1_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM1->bt6.Joystick_1_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM1->bt6.Joystick_1_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM1->bt6.Joystick_1_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM1->bt6.Joystick_1_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM1->bt7.Joystick_1_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM1->bt7.Joystick_1_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM1->bt7.Joystick_1_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM1->bt7.Joystick_1_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM1->bt8.Joystick_1_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM1->bt8.Joystick_1_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM1->bt8.Joystick_1_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM1->bt8.Joystick_1_Button_9_Pressed_Status)<<7;
}
void EJM1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM1_t *EJM1)
{
    J1939_MESSAGE->PGN = 0x00FDD7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM1->bt1.Joystick_1_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM1->bt1.Joystick_1_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM1->bt1.Joystick_1_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM1->bt3.Joystick_1_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM1->bt3.Joystick_1_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM1->bt3.Joystick_1_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM1->bt5.Joystick_1_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM1->bt5.Joystick_1_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM1->bt5.Joystick_1_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM1->bt7.Joystick_1_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM1->bt7.Joystick_1_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM1->bt7.Joystick_1_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM2 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM2_t *BJM2)
{
    J1939_MESSAGE->PGN = 0x00FDD8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM2->bt1.Joystick_2_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM2->bt1.Joystick_2_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM2->bt1.Joystick_2_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM2->bt3.Joystick_2_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM2->bt3.Joystick_2_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM2->bt3.Joystick_2_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM2->bt5.Joystick_2_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM2->bt5.Joystick_2_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM2->bt6.Joystick_2_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM2->bt6.Joystick_2_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM2->bt6.Joystick_2_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM2->bt6.Joystick_2_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM2->bt7.Joystick_2_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM2->bt7.Joystick_2_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM2->bt7.Joystick_2_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM2->bt7.Joystick_2_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM2->bt8.Joystick_2_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM2->bt8.Joystick_2_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM2->bt8.Joystick_2_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM2->bt8.Joystick_2_Button_9_Pressed_Status)<<7;
}
void EJM2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM2_t *EJM2)
{
    J1939_MESSAGE->PGN = 0x00FDD9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM2->bt1.Joystick_2_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM2->bt1.Joystick_2_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM2->bt1.Joystick_2_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM2->bt3.Joystick_2_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM2->bt3.Joystick_2_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM2->bt3.Joystick_2_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM2->bt5.Joystick_2_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM2->bt5.Joystick_2_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM2->bt5.Joystick_2_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM2->bt7.Joystick_2_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM2->bt7.Joystick_2_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM2->bt7.Joystick_2_Grip_X_Axis_Detent_Position_Status)<<7;
}
void BJM3 ( J1939_MESSAGE_T *J1939_MESSAGE,getBJM3_t *BJM3)
{
    J1939_MESSAGE->PGN = 0x00FDDA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM3->bt1.Joystick_3_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM3->bt1.Joystick_3_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(BJM3->bt1.Joystick_3_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM3->bt3.Joystick_3_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM3->bt3.Joystick_3_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(BJM3->bt3.Joystick_3_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM3->bt5.Joystick_3_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(BJM3->bt5.Joystick_3_X_Axis_Detent_Position_Status)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM3->bt6.Joystick_3_Button_4_Pressed_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM3->bt6.Joystick_3_Button_3_Pressed_Status)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM3->bt6.Joystick_3_Button_2_Pressed_Status)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(BJM3->bt6.Joystick_3_Button_1_Pressed_Status)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM3->bt7.Joystick_3_Button_8_Pressed_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM3->bt7.Joystick_3_Button_7_Pressed_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM3->bt7.Joystick_3_Button_6_Pressed_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(BJM3->bt7.Joystick_3_Button_5_Pressed_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM3->bt8.Joystick_3_Button_12_Pressed_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM3->bt8.Joystick_3_Button_11_Pressed_Status)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM3->bt8.Joystick_3_Button_10_Pressed_Status)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(BJM3->bt8.Joystick_3_Button_9_Pressed_Status)<<7;
}
void EJM3 ( J1939_MESSAGE_T *J1939_MESSAGE,getEJM3_t *EJM3)
{
    J1939_MESSAGE->PGN = 0x00FDDB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM3->bt1.Joystick_3_Grip_X_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM3->bt1.Joystick_3_Grip_X_Axis_Lever_Left_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(EJM3->bt1.Joystick_3_Grip_X_Axis_Lever_Right_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM3->bt3.Joystick_3_Grip_Y_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM3->bt3.Joystick_3_Grip_Y_Axis_Lever_Back_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(EJM3->bt3.Joystick_3_Grip_Y_Axis_Lever_Forward_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM3->bt5.Joystick_3_Theta_Axis_Neutral_Position_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM3->bt5.Joystick_3_Theta_Axis_Counter_Clockwise_Negative_Position_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(EJM3->bt5.Joystick_3_Theta_Axis_Clockwise_Positive_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM3->bt7.Joystick_3_Theta_Axis_Detent_Position_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM3->bt7.Joystick_3_Grip_Y_Axis_Detent_Position_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(EJM3->bt7.Joystick_3_Grip_X_Axis_Detent_Position_Status)<<7;
}
void MCI ( J1939_MESSAGE_T *J1939_MESSAGE,getMCI_t *MCI)
{
    J1939_MESSAGE->PGN = 0x00FDDC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(MCI->bt1.Engine_Throttle_Synchronization_Mode_Status)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(MCI->bt1.Trolling_Mode_Status)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(MCI->bt1.Slow_Vessel_Mode_Status)<<7;
}
void FWD ( J1939_MESSAGE_T *J1939_MESSAGE,getFWD_t *FWD)
{
    J1939_MESSAGE->PGN = 0x00FDDF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FWD->bt1.Front_Wheel_Drive_Actuator_Status)<<1;
}
void AMB2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAMB2_t *AMB2)
{
    J1939_MESSAGE->PGN = 0x00FDE0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AMB2->Solar_Intensity_Percent;
    J1939_MESSAGE->data[2] = AMB2->Solar_Sensor_Maximum;
    J1939_MESSAGE->data[3] = (uint8_t)(AMB2->Specific_Humidity>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AMB2->Specific_Humidity);
    J1939_MESSAGE->data[5] = (uint8_t)(AMB2->Calculated_Ambient_Air_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AMB2->Calculated_Ambient_Air_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(AMB2->Barometric_Absolute_Pressure__High_Resolution_>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AMB2->Barometric_Absolute_Pressure__High_Resolution_);
}
void CACI ( J1939_MESSAGE_T *J1939_MESSAGE,getCACI_t *CACI)
{
    J1939_MESSAGE->PGN = 0x00FDE1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = CACI->Cab_A_C_Refrigerant_Compressor_Outlet_Pressure;
}
void SPR ( J1939_MESSAGE_T *J1939_MESSAGE,getSPR_t *SPR)
{
    J1939_MESSAGE->PGN = 0x00FDE2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = SPR->Pneumatic_Supply_Pressure_Request;
    J1939_MESSAGE->data[2] = SPR->Parking_and_or_Trailer_Air_Pressure_Request;
    J1939_MESSAGE->data[3] = SPR->Service_Brake_Air_Pressure_Request_Circuit_1;
    J1939_MESSAGE->data[4] = SPR->Service_Brake_Air_Pressure_Request_Circuit_2;
    J1939_MESSAGE->data[5] = SPR->Auxiliary_Equipment_Supply_Pressure_Request;
    J1939_MESSAGE->data[6] = SPR->Air_Suspension_Supply_Pressure_Request;
}
void EOAC ( J1939_MESSAGE_T *J1939_MESSAGE,getEOAC_t *EOAC)
{
    J1939_MESSAGE->PGN = 0x00FDE3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EOAC->Travel_Velocity_Control_Position;
}
void EPD ( J1939_MESSAGE_T *J1939_MESSAGE,getEPD_t *EPD)
{
    J1939_MESSAGE->PGN = 0x00FDE4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EPD->Payload_Percentage;
}
void MVS ( J1939_MESSAGE_T *J1939_MESSAGE,getMVS_t *MVS)
{
    J1939_MESSAGE->PGN = 0x00FDE5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = MVS->Maximum_Vehicle_Speed_Limit_1;
    J1939_MESSAGE->data[2] = MVS->Maximum_Vehicle_Speed_Limit_2;
    J1939_MESSAGE->data[3] = MVS->Maximum_Vehicle_Speed_Limit_3;
    J1939_MESSAGE->data[4] = MVS->Maximum_Vehicle_Speed_Limit_4;
    J1939_MESSAGE->data[5] = MVS->Maximum_Vehicle_Speed_Limit_5;
    J1939_MESSAGE->data[6] = MVS->Maximum_Vehicle_Speed_Limit_6;
    J1939_MESSAGE->data[7] = MVS->Maximum_Vehicle_Speed_Limit_7;
    J1939_MESSAGE->data[8] = MVS->Applied_Vehicle_Speed_Limit;
}
void HBS ( J1939_MESSAGE_T *J1939_MESSAGE,getHBS_t *HBS)
{
    J1939_MESSAGE->PGN = 0x00FDE6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = HBS->Hydraulic_Brake_Pressure_Circuit_1;
    J1939_MESSAGE->data[2] = HBS->Hydraulic_Brake_Pressure_Circuit_2;
    J1939_MESSAGE->data[3] |= (uint8_t)(HBS->bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_1)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(HBS->bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_2)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(HBS->bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_1)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(HBS->bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_2)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(HBS->bt4.Hydraulic_Brake_System_Audible_Warning_Command)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(HBS->bt4.Hydraulic_Brake_Fluid_Level_Switch)<<3;
}
void ET ( J1939_MESSAGE_T *J1939_MESSAGE,getET_t *ET)
{
    J1939_MESSAGE->PGN = 0x00FE07 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ET->Engine_Exhaust_Gas_Temperature___Right_Manifold>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ET->Engine_Exhaust_Gas_Temperature___Right_Manifold);
    J1939_MESSAGE->data[3] = (uint8_t)(ET->Engine_Exhaust_Gas_Temperature___Left_Manifold>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ET->Engine_Exhaust_Gas_Temperature___Left_Manifold);
}
void LD ( J1939_MESSAGE_T *J1939_MESSAGE,getLD_t *LD)
{
    J1939_MESSAGE->PGN = 0x00FE40 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(LD->bt1.Running_Light)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(LD->bt1.Alternate_Beam_Head_Light_Data)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(LD->bt1.Low_Beam_Head_Light_Data)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(LD->bt1.High_Beam_Head_Light_Data)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(LD->bt2.Tractor_Front_Fog_Lights)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(LD->bt2.Rotating_Beacon_Light)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(LD->bt2.Right_Turn_Signal_Lights)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(LD->bt2.Left_Turn_Signal_Lights)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(LD->bt3.Back_Up_Light_and_Alarm_Horn)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(LD->bt3.Center_Stop_Light)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(LD->bt3.Right_Stop_Light)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(LD->bt3.Left_Stop_Light)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(LD->bt4.Implement_Clearance_Light)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(LD->bt4.Tractor_Clearance_Light)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(LD->bt4.Implement_Marker_Light)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(LD->bt4.Tractor_Marker_Light)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(LD->bt5.Rear_Fog_Lights)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(LD->bt5.Tractor_Underside_Mounted_Work_Lights)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(LD->bt5.Tractor_Rear_Low_Mounted_Work_Lights)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(LD->bt5.Tractor_Rear_High_Mounted_Work_Lights)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(LD->bt6.Tractor_Side_Low_Mounted_Work_Lights)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(LD->bt6.Tractor_Side_High_Mounted_Work_Lights)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(LD->bt6.Tractor_Front_Low_Mounted_Work_Lights)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(LD->bt6.Tractor_Front_High_Mounted_Work_Lights)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(LD->bt7.Implement_OEM_Option_2_Light)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(LD->bt7.Implement_OEM_Option_1_Light)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(LD->bt7.Implement_Right_Facing_Work_Light)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(LD->bt7.Implement_Left_Forward_Work_Light)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(LD->bt8.Implement_Right_Forward_Work_Light)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(LD->bt8.Implement_Left_Facing_Work_Light)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(LD->bt8.Implement_Rear_Work_Light)<<7;
}
void LCMD ( J1939_MESSAGE_T *J1939_MESSAGE,getLCMD_t *LCMD)
{
    J1939_MESSAGE->PGN = 0x00FE41 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt1.Running_Light_Command)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt1.Alternate_Beam_Head_Light_Command)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt1.Low_Beam_Head_Light_Command)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt1.High_Beam_Head_Light_Command)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt2.Tractor_Front_Fog_Lights_Command)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt2.Rotating_Beacon_Light_Command)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt2.Right_Turn_Signal_Lights_Command)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt2.Left_Turn_Signal_Lights_Command)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt3.Back_Up_Light_and_Alarm_Horn_Command)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt3.Center_Stop_Light_Command)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt3.Right_Stop_Light_Command)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt3.Left_Stop_Light_Command)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt4.Implement_Clearance_Light_Command)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt4.Tractor_Clearance_Light_Command)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt4.Implement_Marker_Light_Command)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt4.Tractor_Marker_Light_Command)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt5.Rear_Fog_Light_Command)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt5.Tractor_Underside_Mounted_Work_Lights_Command)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt5.Tractor_Rear_Low_Mounted_Work_Lights_Command)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt5.Tractor_Rear_High_Mounted_Work_Lights_Command)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt6.Tractor_Side_Low_Mounted_Work_Lights_Command)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt6.Tractor_Side_High_Mounted_Work_Lights_Command)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt6.Tractor_Front_Low_Mounted_Work_Lights_Command)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt6.Tractor_Front_High_Mounted_Work_Lights_Command)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt7.Implement_OEM_Option_2_Light_Command)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt7.Implement_OEM_Option_1_Light_Command)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt7.Implement_Right_Facing_Work_Light_Command)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt7.Implement_Left_Forward_Work_Light_Command)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(LCMD->bt8.Lighting_Data_Request_Command)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(LCMD->bt8.Implement_Right_Forward_Work_Light_Command)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(LCMD->bt8.Implement_Left_Facing_Work_Light_Command)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(LCMD->bt8.Implement_Rear_Work_Light_Command)<<7;
}
void ETC7 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC7_t *ETC7)
{
    J1939_MESSAGE->PGN = 0x00FE4A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC7->bt1.Transmission_Current_Range_Display_Blank_State)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC7->bt1.Transmission_Service_Indicator)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC7->bt1.Transmission_Requested_Range_Display_Blank_State)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC7->bt1.Transmission_Requested_Range_Display_Flash_State)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC7->bt2.Transmission_Ready_for_Brake_Release)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC7->bt2.Active_Shift_Console_Indicator)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC7->bt2.Transmission_Engine_Crank_Enable)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC7->bt2.Transmission_Shift_Inhibit_Indicator)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC7->bt3.Transmission_Mode_4_Indicator)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC7->bt3.Transmission_Mode_3_Indicator)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC7->bt3.Transmission_Mode_2_Indicator)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC7->bt3.Transmission_Mode_1_Indicator)<<7;
    J1939_MESSAGE->data[4] = ETC7->Transmission_Requested_Gear_Feedback;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC7->bt5.Transmission_Mode_5_Indicator)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC7->bt5.Transmission_Mode_6_Indicator)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC7->bt5.Transmission_Mode_7_Indicator)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC7->bt5.Transmission_Mode_8_Indicator)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(ETC7->bt6.Transmission_Reverse_Gear_Shift_Inhibit_Status)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(ETC7->bt6.Transmission_Warning_Indicator)<<3;
}
void TCFG2 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCFG2_t *TCFG2)
{
    J1939_MESSAGE->PGN = 0x00FE4B ;
    J1939_MESSAGE->data[1] = (uint8_t)(TCFG2->Transmission_Torque_Limit>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TCFG2->Transmission_Torque_Limit);
}
void ML ( J1939_MESSAGE_T *J1939_MESSAGE,getML_t *ML)
{
    J1939_MESSAGE->PGN = 0x00FE4C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ML->bt1.Rear_Black_Out_Marker_Select)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ML->bt1.Front_Black_Out_Marker_Lamp_Select)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(ML->bt1.Convoy_Lamp_Select)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(ML->bt1.Convoy_Driving_Lamp_Select)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(ML->bt3.Black_Out_Brake_Stop_Lamp_Select)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(ML->bt4.Night_Vision_Illuminator_Select)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ML->bt4.Black_Out_Work_Lamp_Select)<<7;
    J1939_MESSAGE->data[8] = ML->Operators_Black_Out_Intensity_Selection;
}
void TAVG ( J1939_MESSAGE_T *J1939_MESSAGE,getTAVG_t *TAVG)
{
    J1939_MESSAGE->PGN = 0x00FE4D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TAVG->Engine_Total_Average_Fuel_Rate>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TAVG->Engine_Total_Average_Fuel_Rate);
    J1939_MESSAGE->data[3] = (uint8_t)(TAVG->Engine_Total_Average_Fuel_Economy>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TAVG->Engine_Total_Average_Fuel_Economy);
}
void DC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getDC1_t *DC1)
{
    J1939_MESSAGE->PGN = 0x00FE4E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC1->bt1.Position_of_doors)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC1->bt1.Ramp___Wheel_Chair_Lift_Position)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(DC1->bt1.Status_2_of_doors)<<7;
}
void VDC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getVDC1_t *VDC1)
{
    J1939_MESSAGE->PGN = 0x00FE4F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(VDC1->bt1.VDC_Information_Signal)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(VDC1->bt1.VDC_Fully_Operational)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(VDC1->bt1.VDC_brake_light_request)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(VDC1->bt2.ROP_Engine_Control_active)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(VDC1->bt2.ROP_Brake_Control_active)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(VDC1->bt2.YC_Engine_Control_active)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(VDC1->bt2.YC_Brake_Control_active)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(VDC1->bt3.Trailer_VDC_Active)<<1;
}
void BT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getBT1_t *BT1)
{
    J1939_MESSAGE->PGN = 0x00FE50 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = BT1->Battery_1_Temperature;
    J1939_MESSAGE->data[2] = BT1->Battery_2_Temperature;
}
void ACC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getACC2_t *ACC2)
{
    J1939_MESSAGE->PGN = 0x00FE51 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ACC2->bt1.ACC_usage_demand)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ACC2->bt1.Requested_ACC_Distance_Mode)<<6;
}
void VEP3 ( J1939_MESSAGE_T *J1939_MESSAGE,getVEP3_t *VEP3)
{
    J1939_MESSAGE->PGN = 0x00FE52 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VEP3->Alternator_Current__High_Range_Resolution_>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(VEP3->Alternator_Current__High_Range_Resolution_);
    J1939_MESSAGE->data[3] = (uint8_t)(VEP3->Net_Battery_Current__High_Range_Resolution_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VEP3->Net_Battery_Current__High_Range_Resolution_);
}
void RTC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getRTC1_t *RTC1)
{
    J1939_MESSAGE->PGN = 0x00FE53 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = RTC1->Low_Limit_Threshold_for_Maximum_RPM_from_Retarder;
    J1939_MESSAGE->data[2] = RTC1->High_Limit_Threshold_for_Minimum_Continuous_RPM_from_Retarder;
    J1939_MESSAGE->data[3] = RTC1->Low_Limit_Threshold_for_Maximum_Torque_from_Retarder;
    J1939_MESSAGE->data[4] = RTC1->High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Retarder;
    J1939_MESSAGE->data[5] = RTC1->Maximum_Continuous_Retarder_Speed;
    J1939_MESSAGE->data[6] = RTC1->Minimum_Continuous_Retarder_Speed;
    J1939_MESSAGE->data[7] = RTC1->Maximum_Continuous_Retarder_Torque;
    J1939_MESSAGE->data[8] = RTC1->Minimum_Continuous_Retarder_Torque;
}
void ECT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getECT1_t *ECT1)
{
    J1939_MESSAGE->PGN = 0x00FE54 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ECT1->Engine_Low_Limit_Threshold_for_Maximum_RPM_from_Engine;
    J1939_MESSAGE->data[2] = ECT1->Engine_High_Limit_Threshold_for_Minimum_Continuous_Engine_RPM;
    J1939_MESSAGE->data[3] = ECT1->Engine_Low_Limit_Threshold_for_Maximum_Torque_from_Engine;
    J1939_MESSAGE->data[4] = ECT1->Engine_High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Engine;
    J1939_MESSAGE->data[5] = ECT1->Engine_Maximum_Continuous_RPM;
    J1939_MESSAGE->data[6] = ECT1->Engine_Minimum_Continuous_RPM;
    J1939_MESSAGE->data[7] = ECT1->Engine_Maximum_Continuous_Torque;
    J1939_MESSAGE->data[8] = ECT1->Engine_Minimum_Continuous_Torque;
}
void GFD ( J1939_MESSAGE_T *J1939_MESSAGE,getGFD_t *GFD)
{
    J1939_MESSAGE->PGN = 0x00FE55 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GFD->Specific_Heat_Ratio>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(GFD->Specific_Heat_Ratio);
    J1939_MESSAGE->data[3] = (uint8_t)(GFD->Reference_Engine_Gas_Mass_Flow_Rate>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GFD->Reference_Engine_Gas_Mass_Flow_Rate);
    J1939_MESSAGE->data[5] = (uint8_t)(GFD->Fuel_energy_content>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(GFD->Fuel_energy_content);
}
void AT1T1I ( J1939_MESSAGE_T *J1939_MESSAGE,getAT1T1I_t *AT1T1I)
{
    J1939_MESSAGE->PGN = 0x00FE56 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level;
    J1939_MESSAGE->data[2] = AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Temperature;
    J1939_MESSAGE->data[3] = (uint8_t)(AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_2);
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1T1I->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(AT1T1I->bt5.Aftertreatment_Selective_Catalytic_Reduction_Operator_Inducement_Active)<<6;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1T1I->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(AT1T1I->bt6.Aftertreatment_SCR_Operator_Inducement_Severity)<<6;
    J1939_MESSAGE->data[7] = AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater;
    J1939_MESSAGE->data[8] |= (uint8_t)(AT1T1I->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI)<<1;
}
void ASC5 ( J1939_MESSAGE_T *J1939_MESSAGE,getASC5_t *ASC5)
{
    J1939_MESSAGE->PGN = 0x00FE57 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ASC5->Damper_Stiffness_Front_Axle;
    J1939_MESSAGE->data[2] = ASC5->Damper_Stiffness_Rear_Axle;
    J1939_MESSAGE->data[3] = ASC5->Damper_Stiffness_Lift___Tag_Axle;
    J1939_MESSAGE->data[4] |= (uint8_t)(ASC5->bt4.Electronic_Shock_Absorber_Control_Mode__)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ASC5->bt4.Electronic_Shock_Absorber_Control_Mode___Rear_Axle)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(ASC5->bt4.Electronic_Shock_Absorber_Control_Mode___Lift_Tag_Axle)<<5;
}
void ASC4 ( J1939_MESSAGE_T *J1939_MESSAGE,getASC4_t *ASC4)
{
    J1939_MESSAGE->PGN = 0x00FE58 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ASC4->Bellow_Pressure_Front_Axle_Left>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ASC4->Bellow_Pressure_Front_Axle_Left);
    J1939_MESSAGE->data[3] = (uint8_t)(ASC4->Bellow_Pressure_Front_Axle_Right>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ASC4->Bellow_Pressure_Front_Axle_Right);
    J1939_MESSAGE->data[5] = (uint8_t)(ASC4->Bellow_Pressure_Rear_Axle_Left>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ASC4->Bellow_Pressure_Rear_Axle_Left);
    J1939_MESSAGE->data[7] = (uint8_t)(ASC4->Bellow_Pressure_Rear_Axle_Right>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ASC4->Bellow_Pressure_Rear_Axle_Right);
    J1939_MESSAGE->data[3] = (uint8_t)(ASC4->Relative_Level_Front_Axle_Right>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ASC4->Relative_Level_Front_Axle_Right);
    J1939_MESSAGE->data[5] = (uint8_t)(ASC4->Relative_Level_Rear_Axle_Left>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ASC4->Relative_Level_Rear_Axle_Left);
    J1939_MESSAGE->data[7] = (uint8_t)(ASC4->Relative_Level_Rear_Axle_Right>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ASC4->Relative_Level_Rear_Axle_Right);
}
void ASC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getASC1_t *ASC1)
{
    J1939_MESSAGE->PGN = 0x00FE5A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ASC1->bt1.Nominal_Level_Front_Axle)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ASC1->bt1.Nominal_Level_Rear_Axle)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(ASC1->bt2.Below_Nominal_Level_Front_Axle)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(ASC1->bt2.Below_Nominal_Level_Rear_Axle)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(ASC1->bt2.Above_Nominal_Level_Front_Axle)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(ASC1->bt2.Above_Nominal_Level_Rear_Axle)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC1->bt3.Lowering_Control_Mode_Front_Axle)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC1->bt3.Lowering_Control_Mode_Rear_Axle)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC1->bt3.Lifting_Control_Mode_Front_Axle)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(ASC1->bt3.Lifting_Control_Mode_Rear_Axle)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(ASC1->bt4.Kneeling_Information)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ASC1->bt4.Level_Control_Mode)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(ASC1->bt5.Security_Device)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(ASC1->bt5.Vehicle_Motion_Inhibit)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(ASC1->bt5.Door_Release)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(ASC1->bt5.Lift_Axle_1_Position)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(ASC1->bt6.Front_Axle_in_Bumper_Range)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(ASC1->bt6.Rear_Axle_in_Bumper_Range)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(ASC1->bt6.Lift_Axle_2_Position)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC1->bt7.Suspension_Remote_Control_1)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC1->bt7.Suspension_Remote_control_2)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC1->bt7.Allow_Level_Control_During_Braking_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(ASC1->bt7.Speed_Dependant_Level_Control_Status)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(ASC1->bt8.Suspension_Control_Refusal_Information)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(ASC1->bt8.Memory_level)<<5;
}
void FLI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getFLI2_t *FLI2)
{
    J1939_MESSAGE->PGN = 0x00FE5B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI2->bt1.Lane_Tracking_Status_Right_Side)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI2->bt1.Lane_Tracking_Status_Left_Side)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(FLI2->bt1.Lane_Departure_Indication_Enable_Status)<<7;
}
void BM ( J1939_MESSAGE_T *J1939_MESSAGE,getBM_t *BM)
{
    J1939_MESSAGE->PGN = 0x00FE66 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(BM->bt1.Battery_Main_Switch_Hold_State)<<1;
}
void CCC ( J1939_MESSAGE_T *J1939_MESSAGE,getCCC_t *CCC)
{
    J1939_MESSAGE->PGN = 0x00FE67 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CCC->Auxiliary_Heater_Maximum_Output_Power>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CCC->Auxiliary_Heater_Maximum_Output_Power);
}
void VF ( J1939_MESSAGE_T *J1939_MESSAGE,getVF_t *VF)
{
    J1939_MESSAGE->PGN = 0x00FE68 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = VF->Hydraulic_Temperature;
    J1939_MESSAGE->data[2] |= (uint8_t)(VF->bt2.Hydraulic_Oil_Filter_Restriction_Switch)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(VF->bt2.Winch_Oil_Pressure_Switch)<<3;
    J1939_MESSAGE->data[3] = VF->Hydraulic_Oil_Level;
}
void ET3 ( J1939_MESSAGE_T *J1939_MESSAGE,getET3_t *ET3)
{
    J1939_MESSAGE->PGN = 0x00FE69 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ET3->Engine_Intake_Manifold_1_Air_Temperature__High_Resolution_>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ET3->Engine_Intake_Manifold_1_Air_Temperature__High_Resolution_);
    J1939_MESSAGE->data[3] = (uint8_t)(ET3->Engine_Coolant_Temperature__High_Resolution_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ET3->Engine_Coolant_Temperature__High_Resolution_);
    J1939_MESSAGE->data[5] = (uint8_t)(ET3->Engine_Intake_Valve_Actuation_System_Oil_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ET3->Engine_Intake_Valve_Actuation_System_Oil_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(ET3->Engine_Charge_Air_Cooler_1_Outlet_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ET3->Engine_Charge_Air_Cooler_1_Outlet_Temperature);
}
void EFS ( J1939_MESSAGE_T *J1939_MESSAGE,getEFS_t *EFS)
{
    J1939_MESSAGE->PGN = 0x00FE6A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EFS->Engine_Oil_Level_Remote_Reservoir;
    J1939_MESSAGE->data[2] = EFS->Engine_Fuel_Supply_Pump_Intake_Pressure;
    J1939_MESSAGE->data[3] = EFS->Engine_Fuel_Filter__suction_side__Differential_Pressure;
    J1939_MESSAGE->data[4] = EFS->Engine_Waste_Oil_Reservoir_Level;
    J1939_MESSAGE->data[5] = EFS->Engine_Oil_Filter_Outlet_Pressure;
    J1939_MESSAGE->data[6] |= (uint8_t)(EFS->bt6.Engine_Oil_Priming_Pump_Switch)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(EFS->bt6.Engine_Oil_Priming_State)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(EFS->bt6.Engine_Oil_Pre_Heated_State)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(EFS->bt6.Engine_Coolant_Pre_heated_State)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(EFS->bt7.Engine_Ventilation_Status)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(EFS->bt7.Fuel_Pump_Primer_Status)<<4;
}
void TCO1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCO1_t *TCO1)
{
    J1939_MESSAGE->PGN = 0x00FE6C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TCO1->bt1.Driver_1_working_state)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(TCO1->bt1.Driver_2_working_state)<<4;
    J1939_MESSAGE->data[1] |= (uint8_t)(TCO1->bt1.Vehicle_motion)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(TCO1->bt2.Driver_1_Time_Related_States)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(TCO1->bt2.Driver_card_driver_1)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(TCO1->bt2.Vehicle_Overspeed)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(TCO1->bt3.Driver_2_Time_Related_States)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(TCO1->bt3.Driver_card_driver_2)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(TCO1->bt4.System_event)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(TCO1->bt4.Handling_information)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(TCO1->bt4.Tachograph_performance)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(TCO1->bt4.Direction_indicator)<<7;
    J1939_MESSAGE->data[5] = (uint8_t)(TCO1->Tachograph_output_shaft_speed>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TCO1->Tachograph_output_shaft_speed);
    J1939_MESSAGE->data[7] = (uint8_t)(TCO1->Tachograph_vehicle_speed>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TCO1->Tachograph_vehicle_speed);
}
void HTR ( J1939_MESSAGE_T *J1939_MESSAGE,getHTR_t *HTR)
{
    J1939_MESSAGE->PGN = 0x00FE6D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = HTR->Auxiliary_Heater_Output_Coolant_Temperature;
    J1939_MESSAGE->data[2] = HTR->Auxiliary_Heater_Input_Air_Temperature;
    J1939_MESSAGE->data[3] = HTR->Auxiliary_Heater_Output_Power_Percent;
    J1939_MESSAGE->data[4] |= (uint8_t)(HTR->bt4.Auxiliary_Heater_Mode)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(HTR->bt5.Auxiliary_Heater_Water_Pump_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(HTR->bt5.Cab_Ventilation)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(HTR->bt5.Engine_Heating_Zone)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(HTR->bt5.Cab_Heating_Zone)<<7;
}
void HRW ( J1939_MESSAGE_T *J1939_MESSAGE,getHRW_t *HRW)
{
    J1939_MESSAGE->PGN = 0x00FE6E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(HRW->Front_Axle_Left_Wheel_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(HRW->Front_Axle_Left_Wheel_Speed);
    J1939_MESSAGE->data[3] = (uint8_t)(HRW->Front_axle_right_wheel_speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(HRW->Front_axle_right_wheel_speed);
    J1939_MESSAGE->data[5] = (uint8_t)(HRW->Rear_axle_left_wheel_speed>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(HRW->Rear_axle_left_wheel_speed);
    J1939_MESSAGE->data[7] = (uint8_t)(HRW->Rear_axle_right_wheel_speed>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(HRW->Rear_axle_right_wheel_speed);
}
void ACC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getACC1_t *ACC1)
{
    J1939_MESSAGE->PGN = 0x00FE6F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ACC1->Speed_of_forward_vehicle;
    J1939_MESSAGE->data[2] = ACC1->Distance_to_forward_vehicle;
    J1939_MESSAGE->data[3] = ACC1->Adaptive_Cruise_Control_Set_Speed;
    J1939_MESSAGE->data[4] |= (uint8_t)(ACC1->bt4.Adaptive_Cruise_Control_Mode)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ACC1->bt4.Adaptive_cruise_control_set_distance_mode)<<4;
    J1939_MESSAGE->data[5] = (uint8_t)(ACC1->Road_curvature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ACC1->Road_curvature);
    J1939_MESSAGE->data[7] |= (uint8_t)(ACC1->bt7.ACC_Target_Detected)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(ACC1->bt7.ACC_System_Shutoff_Warning)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(ACC1->bt7.ACC_Distance_Alert_Signal)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(ACC1->bt7.Forward_Collision_Warning)<<7;
}
void CVW ( J1939_MESSAGE_T *J1939_MESSAGE,getCVW_t *CVW)
{
    J1939_MESSAGE->PGN = 0x00FE70 ;
    J1939_MESSAGE->data[1] = (uint8_t)(CVW->Powered_Vehicle_Weight>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CVW->Powered_Vehicle_Weight);
    J1939_MESSAGE->data[3] = (uint8_t)(CVW->Gross_Combination_Vehicle_Weight>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CVW->Gross_Combination_Vehicle_Weight);
}
void LTP ( J1939_MESSAGE_T *J1939_MESSAGE,getLTP_t *LTP)
{
    J1939_MESSAGE->PGN = 0x00FE71 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LTP->Laser_Tracer_Target_Deviation>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LTP->Laser_Tracer_Target_Deviation);
    J1939_MESSAGE->data[3] = (uint8_t)(LTP->Laser_Tracer_Vertical_Distance>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LTP->Laser_Tracer_Vertical_Distance);
    J1939_MESSAGE->data[5] = LTP->Laser_Tracer_Horizontal_Deviation;
    J1939_MESSAGE->data[6] |= (uint8_t)(LTP->bt6.LED_Display_Data_2)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(LTP->bt7.Laser_Tracer_Information)<<1;
}
void LBC ( J1939_MESSAGE_T *J1939_MESSAGE,getLBC_t *LBC)
{
    J1939_MESSAGE->PGN = 0x00FE72 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LBC->Blade_Duration_and_Direction>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LBC->Blade_Duration_and_Direction);
    J1939_MESSAGE->data[3] |= (uint8_t)(LBC->bt3.Blade_Control_Mode)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(LBC->bt4.Blade_Control_Mode___Left)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(LBC->bt4.Blade_Control_Mode___Right)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(LBC->bt5.Land_Leveling_System_Enable_Status)<<1;
}
void LMP ( J1939_MESSAGE_T *J1939_MESSAGE,getLMP_t *LMP)
{
    J1939_MESSAGE->PGN = 0x00FE73 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LMP->Mast_Position>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LMP->Mast_Position);
}
void LSP ( J1939_MESSAGE_T *J1939_MESSAGE,getLSP_t *LSP)
{
    J1939_MESSAGE->PGN = 0x00FE74 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LSP->Modify_Leveling_System_Set_Point>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LSP->Modify_Leveling_System_Set_Point);
    J1939_MESSAGE->data[3] = (uint8_t)(LSP->Blade_Height_Set_Point___High_Resolution>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(LSP->Blade_Height_Set_Point___High_Resolution>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(LSP->Blade_Height_Set_Point___High_Resolution>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(LSP->Blade_Height_Set_Point___High_Resolution);
}
void LVD ( J1939_MESSAGE_T *J1939_MESSAGE,getLVD_t *LVD)
{
    J1939_MESSAGE->PGN = 0x00FE75 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LVD->Laser_Strike_Vertical_Deviation>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LVD->Laser_Strike_Vertical_Deviation);
    J1939_MESSAGE->data[3] = LVD->Laser_Receiver_Type;
    J1939_MESSAGE->data[4] = (uint8_t)(LVD->Laser_Strike_Data_Latency>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(LVD->Laser_Strike_Data_Latency);
    J1939_MESSAGE->data[6] = (uint8_t)(LVD->Absolute_Laser_Strike_Position>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(LVD->Absolute_Laser_Strike_Position);
}
void LVDD ( J1939_MESSAGE_T *J1939_MESSAGE,getLVDD_t *LVDD)
{
    J1939_MESSAGE->PGN = 0x00FE76 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(LVDD->bt1.LED_Display_Data_1)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(LVDD->bt2.LED_Display_Mode_Control)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(LVDD->bt2.LED_Display_Deadband_Control)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(LVDD->bt3.LED_Pattern_Control)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(LVDD->bt3.Display_Deadbands)<<5;
}
void AP ( J1939_MESSAGE_T *J1939_MESSAGE,getAP_t *AP)
{
    J1939_MESSAGE->PGN = 0x00FE77 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AP->Auxiliary_Vacuum_Pressure_Reading>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AP->Auxiliary_Vacuum_Pressure_Reading);
    J1939_MESSAGE->data[3] = (uint8_t)(AP->Auxiliary_Gage_Pressure_Reading_1>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(AP->Auxiliary_Gage_Pressure_Reading_1);
    J1939_MESSAGE->data[5] = (uint8_t)(AP->Auxiliary_Absolute_Pressure_Reading>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AP->Auxiliary_Absolute_Pressure_Reading);
}
void TP1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTP1_t *TP1)
{
    J1939_MESSAGE->PGN = 0x00FE78 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TP1->Tire_Pressure_Check_Interval;
    J1939_MESSAGE->data[2] |= (uint8_t)(TP1->bt2.Steer_Channel_Mode)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(TP1->bt3.Trailer_tag_Channel_Mode)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(TP1->bt3.Drive_Channel_Mode)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(TP1->bt4.PCU_Drive_Solenoid_Status)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(TP1->bt4.PCU_Steer_Solenoid_Status)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(TP1->bt4.Tire_Pressure_Supply_Switch_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(TP1->bt5.PCU_Deflate_Solenoid_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(TP1->bt5.PCU_Control_Solenoid_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(TP1->bt5.PCU_Supply_Solenoid_Status)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(TP1->bt5.PCU_Trailer_Tag_or_Push_Solenoid_Status)<<7;
}
void TP2 ( J1939_MESSAGE_T *J1939_MESSAGE,getTP2_t *TP2)
{
    J1939_MESSAGE->PGN = 0x00FE79 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TP2->Trailer_Tag_Or_Push_Channel_Tire_Pressure_Target>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TP2->Trailer_Tag_Or_Push_Channel_Tire_Pressure_Target);
    J1939_MESSAGE->data[3] = (uint8_t)(TP2->Drive_Channel_Tire_Pressure_Target>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TP2->Drive_Channel_Tire_Pressure_Target);
    J1939_MESSAGE->data[5] = (uint8_t)(TP2->Steer_Channel_Tire_Pressure_Target>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TP2->Steer_Channel_Tire_Pressure_Target);
}
void TP3 ( J1939_MESSAGE_T *J1939_MESSAGE,getTP3_t *TP3)
{
    J1939_MESSAGE->PGN = 0x00FE7A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TP3->Trailer_Tag_Or_Push_Channel_Tire_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TP3->Trailer_Tag_Or_Push_Channel_Tire_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(TP3->Drive_Channel_Tire_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TP3->Drive_Channel_Tire_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(TP3->Steer_Channel_Tire_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TP3->Steer_Channel_Tire_Pressure);
}
void CT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getCT1_t *CT1)
{
    J1939_MESSAGE->PGN = 0x00FE7B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CT1->Engine_Cylinder_1_Combustion_Time>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CT1->Engine_Cylinder_1_Combustion_Time);
    J1939_MESSAGE->data[3] = (uint8_t)(CT1->Engine_Cylinder_2_Combustion_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CT1->Engine_Cylinder_2_Combustion_Time);
    J1939_MESSAGE->data[5] = (uint8_t)(CT1->Engine_Cylinder_3_Combustion_Time>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(CT1->Engine_Cylinder_3_Combustion_Time);
    J1939_MESSAGE->data[7] = (uint8_t)(CT1->Engine_Cylinder_4_Combustion_Time>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(CT1->Engine_Cylinder_4_Combustion_Time);
}
void CT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getCT2_t *CT2)
{
    J1939_MESSAGE->PGN = 0x00FE7C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CT2->Engine_Cylinder_5_Combustion_Time>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CT2->Engine_Cylinder_5_Combustion_Time);
    J1939_MESSAGE->data[3] = (uint8_t)(CT2->Engine_Cylinder_6_Combustion_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CT2->Engine_Cylinder_6_Combustion_Time);
    J1939_MESSAGE->data[5] = (uint8_t)(CT2->Engine_Cylinder_7_Combustion_Time>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(CT2->Engine_Cylinder_7_Combustion_Time);
    J1939_MESSAGE->data[7] = (uint8_t)(CT2->Engine_Cylinder_8_Combustion_Time>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(CT2->Engine_Cylinder_8_Combustion_Time);
}
void CT3 ( J1939_MESSAGE_T *J1939_MESSAGE,getCT3_t *CT3)
{
    J1939_MESSAGE->PGN = 0x00FE7D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CT3->Engine_Cylinder_9_Combustion_Time>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CT3->Engine_Cylinder_9_Combustion_Time);
    J1939_MESSAGE->data[3] = (uint8_t)(CT3->Engine_Cylinder_10_Combustion_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CT3->Engine_Cylinder_10_Combustion_Time);
    J1939_MESSAGE->data[5] = (uint8_t)(CT3->Engine_Cylinder_11_Combustion_Time>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(CT3->Engine_Cylinder_11_Combustion_Time);
    J1939_MESSAGE->data[7] = (uint8_t)(CT3->Engine_Cylinder_12_Combustion_Time>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(CT3->Engine_Cylinder_12_Combustion_Time);
}
void CT4 ( J1939_MESSAGE_T *J1939_MESSAGE,getCT4_t *CT4)
{
    J1939_MESSAGE->PGN = 0x00FE7E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CT4->Engine_Cylinder_13_Combustion_Time>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CT4->Engine_Cylinder_13_Combustion_Time);
    J1939_MESSAGE->data[3] = (uint8_t)(CT4->Engine_Cylinder_14_Combustion_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CT4->Engine_Cylinder_14_Combustion_Time);
    J1939_MESSAGE->data[5] = (uint8_t)(CT4->Engine_Cylinder_15_Combustion_Time>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(CT4->Engine_Cylinder_15_Combustion_Time);
    J1939_MESSAGE->data[7] = (uint8_t)(CT4->Engine_Cylinder_16_Combustion_Time>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(CT4->Engine_Cylinder_16_Combustion_Time);
}
void CT5 ( J1939_MESSAGE_T *J1939_MESSAGE,getCT5_t *CT5)
{
    J1939_MESSAGE->PGN = 0x00FE7F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CT5->Engine_Cylinder_17_Combustion_Time>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CT5->Engine_Cylinder_17_Combustion_Time);
    J1939_MESSAGE->data[3] = (uint8_t)(CT5->Engine_Cylinder_18_Combustion_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CT5->Engine_Cylinder_18_Combustion_Time);
    J1939_MESSAGE->data[5] = (uint8_t)(CT5->Engine_Cylinder_19_Combustion_Time>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(CT5->Engine_Cylinder_19_Combustion_Time);
    J1939_MESSAGE->data[7] = (uint8_t)(CT5->Engine_Cylinder_20_Combustion_Time>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(CT5->Engine_Cylinder_20_Combustion_Time);
}
void CT6 ( J1939_MESSAGE_T *J1939_MESSAGE,getCT6_t *CT6)
{
    J1939_MESSAGE->PGN = 0x00FE80 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(CT6->Engine_Desired_Combustion_Time>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(CT6->Engine_Desired_Combustion_Time);
    J1939_MESSAGE->data[3] = (uint8_t)(CT6->Engine_Average_Combustion_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CT6->Engine_Average_Combustion_Time);
}
void GFI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getGFI2_t *GFI2)
{
    J1939_MESSAGE->PGN = 0x00FE81 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GFI2->Engine_Fuel_Flow_Rate_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(GFI2->Engine_Fuel_Flow_Rate_1);
    J1939_MESSAGE->data[3] = (uint8_t)(GFI2->Engine_Fuel_Flow_Rate_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GFI2->Engine_Fuel_Flow_Rate_2);
    J1939_MESSAGE->data[5] = GFI2->Engine_Fuel_Valve_1_Position;
    J1939_MESSAGE->data[6] = GFI2->Engine_Fuel_Valve_2_Position;
    J1939_MESSAGE->data[7] = GFI2->Engine_Requested_Fuel_Valve_1_Position;
    J1939_MESSAGE->data[8] = GFI2->Engine_Requested_Fuel_Valve_2_Position;
}
void IT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getIT1_t *IT1)
{
    J1939_MESSAGE->PGN = 0x00FE82 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IT1->Engine_Cylinder_1_Ignition_Timing>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IT1->Engine_Cylinder_1_Ignition_Timing);
    J1939_MESSAGE->data[3] = (uint8_t)(IT1->Engine_Cylinder_2_Ignition_Timing>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IT1->Engine_Cylinder_2_Ignition_Timing);
    J1939_MESSAGE->data[5] = (uint8_t)(IT1->Engine_Cylinder_3_Ignition_Timing>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IT1->Engine_Cylinder_3_Ignition_Timing);
    J1939_MESSAGE->data[7] = (uint8_t)(IT1->Engine_Cylinder_4_Ignition_Timing>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IT1->Engine_Cylinder_4_Ignition_Timing);
}
void IT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getIT2_t *IT2)
{
    J1939_MESSAGE->PGN = 0x00FE83 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IT2->Engine_Cylinder_5_Ignition_Timing>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IT2->Engine_Cylinder_5_Ignition_Timing);
    J1939_MESSAGE->data[3] = (uint8_t)(IT2->Engine_Cylinder_6_Ignition_Timing>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IT2->Engine_Cylinder_6_Ignition_Timing);
    J1939_MESSAGE->data[5] = (uint8_t)(IT2->Engine_Cylinder_7_Ignition_Timing>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IT2->Engine_Cylinder_7_Ignition_Timing);
    J1939_MESSAGE->data[7] = (uint8_t)(IT2->Engine_Cylinder_8_Ignition_Timing>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IT2->Engine_Cylinder_8_Ignition_Timing);
}
void IT3 ( J1939_MESSAGE_T *J1939_MESSAGE,getIT3_t *IT3)
{
    J1939_MESSAGE->PGN = 0x00FE84 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IT3->Engine_Cylinder_9_Ignition_Timing>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IT3->Engine_Cylinder_9_Ignition_Timing);
    J1939_MESSAGE->data[3] = (uint8_t)(IT3->Engine_Cylinder_10_Ignition_Timing>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IT3->Engine_Cylinder_10_Ignition_Timing);
    J1939_MESSAGE->data[5] = (uint8_t)(IT3->Engine_Cylinder_11_Ignition_Timing>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IT3->Engine_Cylinder_11_Ignition_Timing);
    J1939_MESSAGE->data[7] = (uint8_t)(IT3->Engine_Cylinder_12_Ignition_Timing>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IT3->Engine_Cylinder_12_Ignition_Timing);
}
void IT4 ( J1939_MESSAGE_T *J1939_MESSAGE,getIT4_t *IT4)
{
    J1939_MESSAGE->PGN = 0x00FE85 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IT4->Engine_Cylinder_13_Ignition_Timing>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IT4->Engine_Cylinder_13_Ignition_Timing);
    J1939_MESSAGE->data[3] = (uint8_t)(IT4->Engine_Cylinder_14_Ignition_Timing>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IT4->Engine_Cylinder_14_Ignition_Timing);
    J1939_MESSAGE->data[5] = (uint8_t)(IT4->Engine_Cylinder_15_Ignition_Timing>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IT4->Engine_Cylinder_15_Ignition_Timing);
    J1939_MESSAGE->data[7] = (uint8_t)(IT4->Engine_Cylinder_16_Ignition_Timing>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IT4->Engine_Cylinder_16_Ignition_Timing);
}
void IT5 ( J1939_MESSAGE_T *J1939_MESSAGE,getIT5_t *IT5)
{
    J1939_MESSAGE->PGN = 0x00FE86 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IT5->Engine_Cylinder_17_Ignition_Timing>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IT5->Engine_Cylinder_17_Ignition_Timing);
    J1939_MESSAGE->data[3] = (uint8_t)(IT5->Engine_Cylinder_18_Ignition_Timing>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IT5->Engine_Cylinder_18_Ignition_Timing);
    J1939_MESSAGE->data[5] = (uint8_t)(IT5->Engine_Cylinder_19_Ignition_Timing>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IT5->Engine_Cylinder_19_Ignition_Timing);
    J1939_MESSAGE->data[7] = (uint8_t)(IT5->Engine_Cylinder_20_Ignition_Timing>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IT5->Engine_Cylinder_20_Ignition_Timing);
}
void IT6 ( J1939_MESSAGE_T *J1939_MESSAGE,getIT6_t *IT6)
{
    J1939_MESSAGE->PGN = 0x00FE87 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IT6->Engine_Desired_Ignition_Timing_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IT6->Engine_Desired_Ignition_Timing_1);
    J1939_MESSAGE->data[3] = (uint8_t)(IT6->Engine_Desired_Ignition_Timing_2>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IT6->Engine_Desired_Ignition_Timing_2);
    J1939_MESSAGE->data[5] = (uint8_t)(IT6->Engine_Desired_Ignition_Timing_3>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IT6->Engine_Desired_Ignition_Timing_3);
    J1939_MESSAGE->data[7] = (uint8_t)(IT6->Engine_Actual_Ignition_Timing>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IT6->Engine_Actual_Ignition_Timing);
}
void ISO1 ( J1939_MESSAGE_T *J1939_MESSAGE,getISO1_t *ISO1)
{
    J1939_MESSAGE->PGN = 0x00FE88 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ISO1->Engine_Cylinder_1_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[2] = ISO1->Engine_Cylinder_2_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[3] = ISO1->Engine_Cylinder_3_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[4] = ISO1->Engine_Cylinder_4_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[5] = ISO1->Engine_Cylinder_5_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[6] = ISO1->Engine_Cylinder_6_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[7] = ISO1->Engine_Cylinder_7_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[8] = ISO1->Engine_Cylinder_8_Ignition_Transformer_Secondary_Output;
}
void ISO2 ( J1939_MESSAGE_T *J1939_MESSAGE,getISO2_t *ISO2)
{
    J1939_MESSAGE->PGN = 0x00FE89 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ISO2->Engine_Cylinder_9_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[2] = ISO2->Engine_Cylinder_10_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[3] = ISO2->Engine_Cylinder_11_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[4] = ISO2->Engine_Cylinder_12_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[5] = ISO2->Engine_Cylinder_13_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[6] = ISO2->Engine_Cylinder_14_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[7] = ISO2->Engine_Cylinder_15_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[8] = ISO2->Engine_Cylinder_16_Ignition_Transformer_Secondary_Output;
}
void ISO3 ( J1939_MESSAGE_T *J1939_MESSAGE,getISO3_t *ISO3)
{
    J1939_MESSAGE->PGN = 0x00FE8A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ISO3->Engine_Cylinder_17_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[2] = ISO3->Engine_Cylinder_18_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[3] = ISO3->Engine_Cylinder_19_Ignition_Transformer_Secondary_Output;
    J1939_MESSAGE->data[4] = ISO3->Engine_Cylinder_20_Ignition_Transformer_Secondary_Output;
}
void GFP ( J1939_MESSAGE_T *J1939_MESSAGE,getGFP_t *GFP)
{
    J1939_MESSAGE->PGN = 0x00FE8B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GFP->Engine_Fuel_Valve_1_Intake_Absolute_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(GFP->Engine_Fuel_Valve_1_Intake_Absolute_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(GFP->Engine_Fuel_Valve_Differential_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GFP->Engine_Fuel_Valve_Differential_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(GFP->Engine_Air_to_Fuel_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(GFP->Engine_Air_to_Fuel_Differential_Pressure);
    J1939_MESSAGE->data[7] = (uint8_t)(GFP->Engine_Fuel>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(GFP->Engine_Fuel);
}
void AAI ( J1939_MESSAGE_T *J1939_MESSAGE,getAAI_t *AAI)
{
    J1939_MESSAGE->PGN = 0x00FE8C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AAI->Auxiliary_Temperature_1;
    J1939_MESSAGE->data[2] = AAI->Auxiliary_Temperature_2;
    J1939_MESSAGE->data[3] = AAI->Auxiliary_Pressure_1;
    J1939_MESSAGE->data[4] = AAI->Auxiliary_Pressure_2;
    J1939_MESSAGE->data[5] = (uint8_t)(AAI->Auxiliary_Level>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AAI->Auxiliary_Level);
    J1939_MESSAGE->data[7] = AAI->Relative_Humidity;
}
void VEP2 ( J1939_MESSAGE_T *J1939_MESSAGE,getVEP2_t *VEP2)
{
    J1939_MESSAGE->PGN = 0x00FE8D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VEP2->Battery_Potential___Power_Input_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(VEP2->Battery_Potential___Power_Input_2);
    J1939_MESSAGE->data[3] = (uint8_t)(VEP2->ECU_Power_Output_Supply_Voltage_1>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VEP2->ECU_Power_Output_Supply_Voltage_1);
    J1939_MESSAGE->data[5] = (uint8_t)(VEP2->ECU_Power_Output_Supply_Voltage_2>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(VEP2->ECU_Power_Output_Supply_Voltage_2);
    J1939_MESSAGE->data[7] = (uint8_t)(VEP2->ECU_Power_Output_Supply_Voltage_3>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VEP2->ECU_Power_Output_Supply_Voltage_3);
}
/*
void S2 ( J1939_MESSAGE_T *J1939_MESSAGE,getS2_t *S2)
{
    J1939_MESSAGE->PGN = 0x00FE8E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = S2->Service_Component_Identification;
    J1939_MESSAGE->data[2] = (uint8_t)(S2->Time_Since_Last_Service>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(S2->Time_Since_Last_Service);
}
*/
void SP2 ( J1939_MESSAGE_T *J1939_MESSAGE,getSP2_t *SP2)
{
    J1939_MESSAGE->PGN = 0x00FE8F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(SP2->Engine_External_Shutdown_Air_Supply_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(SP2->Engine_External_Shutdown_Air_Supply_Pressure);
}
/*
void ETH ( J1939_MESSAGE_T *J1939_MESSAGE,getETH_t *ETH)
{
    J1939_MESSAGE->PGN = 0x00FE90 ;
    J1939_MESSAGE->data[01] = ETH->Number_of_Engine_Torque_History_Records;
    J1939_MESSAGE->data[0] = (uint8_t)(ETH->Engine_Power>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ETH->Engine_Power);
    J1939_MESSAGE->data[0] = (uint8_t)(ETH->Engine_Peak_Torque_1>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ETH->Engine_Peak_Torque_1);
    J1939_MESSAGE->data[0] = (uint8_t)(ETH->Engine_Peak_Torque_2>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(ETH->Engine_Peak_Torque_2);
    J1939_MESSAGE->data[08] = ETH->Calibration_Record_Start_Month;
    J1939_MESSAGE->data[09] = ETH->Calibration_Record_Start_Day;
    J1939_MESSAGE->data[10] = ETH->Calibration_Record_Start_Year;
    J1939_MESSAGE->data[1] = (uint8_t)(ETH->Calibration_Record_Duration_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Calibration_Record_Duration_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Calibration_Record_Duration_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ETH->Calibration_Record_Duration_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(ETH->Transmission_Gear_Ratio_1>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Transmission_Gear_Ratio_1);
    J1939_MESSAGE->data[1] = (uint8_t)(ETH->Engine_Torque_Limit_1_Transmission>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Engine_Torque_Limit_1_Transmission);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Transmission_Gear_Ratio_2>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Transmission_Gear_Ratio_2);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Engine_Torque_Limit_2_Transmission>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Engine_Torque_Limit_2_Transmission);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Transmission_Gear_Ratio_3>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Transmission_Gear_Ratio_3);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Engine_Torque_Limit_3_Transmission>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Engine_Torque_Limit_3_Transmission);
    J1939_MESSAGE->data[2] = (uint8_t)(ETH->Engine_Torque_Limit_4_Transmission>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Engine_Torque_Limit_4_Transmission);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Engine_Torque_Limit_5_Switch>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ETH->Engine_Torque_Limit_5_Switch);
    J1939_MESSAGE->data[3] = (uint8_t)(ETH->Engine_Torque_Limit_6_Axle_Input>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ETH->Engine_Torque_Limit_6_Axle_Input);
}
*/
void FL ( J1939_MESSAGE_T *J1939_MESSAGE,getFL_t *FL)
{
    J1939_MESSAGE->PGN = 0x00FE91 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(FL->bt1.Engine_Fuel_Leakage_1)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(FL->bt1.Engine_Fuel_Leakage_2)<<3;
}
void EI ( J1939_MESSAGE_T *J1939_MESSAGE,getEI_t *EI)
{
    J1939_MESSAGE->PGN = 0x00FE92 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EI->Engine_Pre_filter_Oil_Pressure;
    J1939_MESSAGE->data[2] = (uint8_t)(EI->Engine_Exhaust_Gas_Pressure_1>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(EI->Engine_Exhaust_Gas_Pressure_1);
    J1939_MESSAGE->data[4] = EI->Engine_Fuel_Rack_Position;
    J1939_MESSAGE->data[5] = (uint8_t)(EI->Engine_Gas_Mass_Flow_Rate_1>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EI->Engine_Gas_Mass_Flow_Rate_1);
    J1939_MESSAGE->data[7] = (uint8_t)(EI->Instantaneous_Estimated_Brake_Power>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EI->Instantaneous_Estimated_Brake_Power);
}
void EES ( J1939_MESSAGE_T *J1939_MESSAGE,getEES_t *EES)
{
    J1939_MESSAGE->PGN = 0x00FE93 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EES->Electrical_Load>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EES->Electrical_Load);
    J1939_MESSAGE->data[3] |= (uint8_t)(EES->bt3.Safety_Wire_Status)<<1;
}
void EAC ( J1939_MESSAGE_T *J1939_MESSAGE,getEAC_t *EAC)
{
    J1939_MESSAGE->PGN = 0x00FE94 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EAC->Engine_Auxiliary_Coolant_Pressure;
    J1939_MESSAGE->data[2] = EAC->Engine_Auxiliary_Coolant_Temperature;
    J1939_MESSAGE->data[3] = EAC->Sea_Water_Pump_Outlet_Pressure;
    J1939_MESSAGE->data[4] = EAC->Engine_Extended_Range_Coolant_Pressure;
}
void RBI ( J1939_MESSAGE_T *J1939_MESSAGE,getRBI_t *RBI)
{
    J1939_MESSAGE->PGN = 0x00FE95 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(RBI->Engine_Operation_Time_Since_Rebuild>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(RBI->Engine_Operation_Time_Since_Rebuild>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(RBI->Engine_Operation_Time_Since_Rebuild>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(RBI->Engine_Operation_Time_Since_Rebuild);
}
void TCW ( J1939_MESSAGE_T *J1939_MESSAGE,getTCW_t *TCW)
{
    J1939_MESSAGE->PGN = 0x00FE96 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TCW->Engine_Turbocharger_Wastegate_Actuator_1_Position;
    J1939_MESSAGE->data[2] = TCW->Engine_Turbocharger_Wastegate_Actuator_2_Position;
    J1939_MESSAGE->data[3] = TCW->Engine_Turbocharger_Wastegate_Actuator_3_Position;
    J1939_MESSAGE->data[4] = TCW->Engine_Turbocharger_Wastegate_Actuator_4_Position;
    J1939_MESSAGE->data[5] = TCW->Engine_Turbocharger_Wastegate_Actuator_Control_Air_Pressure;
    J1939_MESSAGE->data[6] = TCW->Engine_Desired_Turbocharger_Wastegate_Actuator_1_Position;
    J1939_MESSAGE->data[7] |= (uint8_t)(TCW->bt7.Engine_Turbocharger_Wastegate_Actuator_1_Preliminary_FMI)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(TCW->bt7.Engine_Turbocharger_Wastegate_Actuator_1_Temperature_Status)<<6;
    J1939_MESSAGE->data[8] = TCW->Engine_Desired_Turbocharger_Wastegate_Actuator_2_Position;
}
void TCI5 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI5_t *TCI5)
{
    J1939_MESSAGE->PGN = 0x00FE97 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TCI5->Engine_Turbocharger_1_Turbine_Outlet_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TCI5->Engine_Turbocharger_1_Turbine_Outlet_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(TCI5->Engine_Turbocharger_2_Turbine_Outlet_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TCI5->Engine_Turbocharger_2_Turbine_Outlet_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(TCI5->Engine_Turbocharger_3_Turbine_Outlet_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TCI5->Engine_Turbocharger_3_Turbine_Outlet_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(TCI5->Engine_Turbocharger_4_Turbine_Outlet_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TCI5->Engine_Turbocharger_4_Turbine_Outlet_Temperature);
}
void TCI4 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI4_t *TCI4)
{
    J1939_MESSAGE->PGN = 0x00FE98 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TCI4->Engine_Turbocharger_1_Turbine_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TCI4->Engine_Turbocharger_1_Turbine_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(TCI4->Engine_Turbocharger_2_Turbine_Intake_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TCI4->Engine_Turbocharger_2_Turbine_Intake_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(TCI4->Engine_Turbocharger_3_Turbine_Intake_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TCI4->Engine_Turbocharger_3_Turbine_Intake_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(TCI4->Engine_Turbocharger_4_Turbine_Intake_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TCI4->Engine_Turbocharger_4_Turbine_Intake_Temperature);
}
void TCI3 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI3_t *TCI3)
{
    J1939_MESSAGE->PGN = 0x00FE99 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TCI3->Engine_Turbocharger_1_Compressor_Intake_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TCI3->Engine_Turbocharger_1_Compressor_Intake_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(TCI3->Engine_Turbocharger_2_Compressor_Intake_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TCI3->Engine_Turbocharger_2_Compressor_Intake_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(TCI3->Engine_Turbocharger_3_Compressor_Intake_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TCI3->Engine_Turbocharger_3_Compressor_Intake_Pressure);
    J1939_MESSAGE->data[7] = (uint8_t)(TCI3->Engine_Turbocharger_4_Compressor_Intake_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TCI3->Engine_Turbocharger_4_Compressor_Intake_Pressure);
}
void TCI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI2_t *TCI2)
{
    J1939_MESSAGE->PGN = 0x00FE9A ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TCI2->Engine_Turbocharger_1_Compressor_Intake_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TCI2->Engine_Turbocharger_1_Compressor_Intake_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(TCI2->Engine_Turbocharger_2_Compressor_Intake_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TCI2->Engine_Turbocharger_2_Compressor_Intake_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(TCI2->Engine_Turbocharger_3_Compressor_Intake_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TCI2->Engine_Turbocharger_3_Compressor_Intake_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(TCI2->Engine_Turbocharger_4_Compressor_Intake_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TCI2->Engine_Turbocharger_4_Compressor_Intake_Temperature);
}
void TCI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTCI1_t *TCI1)
{
    J1939_MESSAGE->PGN = 0x00FE9B ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TCI1->Engine_Turbocharger_Lube_Oil_Pressure_2;
    J1939_MESSAGE->data[2] = (uint8_t)(TCI1->Engine_Turbocharger_2_Speed>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TCI1->Engine_Turbocharger_2_Speed);
    J1939_MESSAGE->data[4] = (uint8_t)(TCI1->Engine_Turbocharger_3_Speed>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(TCI1->Engine_Turbocharger_3_Speed);
    J1939_MESSAGE->data[6] = (uint8_t)(TCI1->Engine_Turbocharger_4_Speed>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(TCI1->Engine_Turbocharger_4_Speed);
}
void MBT3 ( J1939_MESSAGE_T *J1939_MESSAGE,getMBT3_t *MBT3)
{
    J1939_MESSAGE->PGN = 0x00FE9C ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(MBT3->Engine_Main_Bearing_9_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(MBT3->Engine_Main_Bearing_9_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(MBT3->Engine_Main_Bearing_10_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(MBT3->Engine_Main_Bearing_10_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(MBT3->Engine_Main_Bearing_11_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(MBT3->Engine_Main_Bearing_11_Temperature);
}
void MBT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getMBT2_t *MBT2)
{
    J1939_MESSAGE->PGN = 0x00FE9D ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(MBT2->Engine_Main_Bearing_5_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(MBT2->Engine_Main_Bearing_5_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(MBT2->Engine_Main_Bearing_6_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(MBT2->Engine_Main_Bearing_6_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(MBT2->Engine_Main_Bearing_7_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(MBT2->Engine_Main_Bearing_7_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(MBT2->Engine_Main_Bearing_8_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(MBT2->Engine_Main_Bearing_8_Temperature);
}
void MBT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getMBT1_t *MBT1)
{
    J1939_MESSAGE->PGN = 0x00FE9E ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(MBT1->Engine_Main_Bearing_1_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(MBT1->Engine_Main_Bearing_1_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(MBT1->Engine_Main_Bearing_2_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(MBT1->Engine_Main_Bearing_2_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(MBT1->Engine_Main_Bearing_3_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(MBT1->Engine_Main_Bearing_3_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(MBT1->Engine_Main_Bearing_4_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(MBT1->Engine_Main_Bearing_4_Temperature);
}
void EPT5 ( J1939_MESSAGE_T *J1939_MESSAGE,getEPT5_t *EPT5)
{
    J1939_MESSAGE->PGN = 0x00FE9F ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_17_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_17_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_18_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_18_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_19_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_19_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_20_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EPT5->Engine_Exhaust_Gas_Port_20_Temperature);
}
void EPT4 ( J1939_MESSAGE_T *J1939_MESSAGE,getEPT4_t *EPT4)
{
    J1939_MESSAGE->PGN = 0x00FEA0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_13_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_13_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_14_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_14_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_15_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_15_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_16_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EPT4->Engine_Exhaust_Gas_Port_16_Temperature);
}
void EPT3 ( J1939_MESSAGE_T *J1939_MESSAGE,getEPT3_t *EPT3)
{
    J1939_MESSAGE->PGN = 0x00FEA1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_9_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_9_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_10_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_10_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_11_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_11_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_12_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EPT3->Engine_Exhaust_Gas_Port_12_Temperature);
}
void EPT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEPT2_t *EPT2)
{
    J1939_MESSAGE->PGN = 0x00FEA2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_5_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_5_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_6_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_6_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_7_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_7_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_8_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EPT2->Engine_Exhaust_Gas_Port_8_Temperature);
}
void EPT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEPT1_t *EPT1)
{
    J1939_MESSAGE->PGN = 0x00FEA3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_1_Temperature>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_1_Temperature);
    J1939_MESSAGE->data[3] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_2_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_2_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_3_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_3_Temperature);
    J1939_MESSAGE->data[7] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_4_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EPT1->Engine_Exhaust_Gas_Port_4_Temperature);
}
void ET2 ( J1939_MESSAGE_T *J1939_MESSAGE,getET2_t *ET2)
{
    J1939_MESSAGE->PGN = 0x00FEA4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(ET2->Engine_Oil_Temperature_2>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(ET2->Engine_Oil_Temperature_2);
    J1939_MESSAGE->data[3] = (uint8_t)(ET2->Engine_ECU_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ET2->Engine_ECU_Temperature);
    J1939_MESSAGE->data[5] = (uint8_t)(ET2->Engine_Exhaust_Gas_Recirculation_1_Differential_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ET2->Engine_Exhaust_Gas_Recirculation_1_Differential_Pressure);
    J1939_MESSAGE->data[7] = (uint8_t)(ET2->Engine_Exhaust_Gas_Recirculation_1_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(ET2->Engine_Exhaust_Gas_Recirculation_1_Temperature);
}
void IMT2 ( J1939_MESSAGE_T *J1939_MESSAGE,getIMT2_t *IMT2)
{
    J1939_MESSAGE->PGN = 0x00FEA5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = IMT2->Engine_Intake_Manifold_2_Temperature;
    J1939_MESSAGE->data[2] = IMT2->Engine_Intake_Manifold_3_Temperature;
    J1939_MESSAGE->data[3] = IMT2->Engine_Intake_Manifold_4_Temperature;
    J1939_MESSAGE->data[4] = IMT2->Engine_Intake_Manifold_5_Temperature;
    J1939_MESSAGE->data[5] = IMT2->Engine_Intake_Manifold_6_Temperature;
}
void IMT1 ( J1939_MESSAGE_T *J1939_MESSAGE,getIMT1_t *IMT1)
{
    J1939_MESSAGE->PGN = 0x00FEA6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(IMT1->Engine_Turbocharger_1_Boost_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(IMT1->Engine_Turbocharger_1_Boost_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(IMT1->Engine_Turbocharger_2_Boost_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IMT1->Engine_Turbocharger_2_Boost_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(IMT1->Engine_Turbocharger_3_Boost_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(IMT1->Engine_Turbocharger_3_Boost_Pressure);
    J1939_MESSAGE->data[7] = (uint8_t)(IMT1->Engine_Turbocharger_4_Boost_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IMT1->Engine_Turbocharger_4_Boost_Pressure);
}
void AT ( J1939_MESSAGE_T *J1939_MESSAGE,getAT_t *AT)
{
    J1939_MESSAGE->PGN = 0x00FEA7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AT->Engine_Alternator_Bearing_1_Temperature;
    J1939_MESSAGE->data[2] = AT->Engine_Alternator_Bearing_2_Temperature;
    J1939_MESSAGE->data[3] = AT->Engine_Alternator_Winding_1_Temperature;
    J1939_MESSAGE->data[4] = AT->Engine_Alternator_Winding_2_Temperature;
    J1939_MESSAGE->data[5] = AT->Engine_Alternator_Winding_3_Temperature;
}
void ACTL ( J1939_MESSAGE_T *J1939_MESSAGE,getACTL_t *ACTL)
{
    J1939_MESSAGE->PGN = 0x00FEA8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ACTL->Articulation_Angle;
}
void EO1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEO1_t *EO1)
{
    J1939_MESSAGE->PGN = 0x00FEA9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EO1->Engine_Desired_Rated_Exhaust_Oxygen>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EO1->Engine_Desired_Rated_Exhaust_Oxygen);
    J1939_MESSAGE->data[3] = (uint8_t)(EO1->Engine_Desired_Exhaust_Oxygen>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EO1->Engine_Desired_Exhaust_Oxygen);
    J1939_MESSAGE->data[5] = (uint8_t)(EO1->Engine_Actual_Exhaust_Oxygen>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EO1->Engine_Actual_Exhaust_Oxygen);
    J1939_MESSAGE->data[7] = EO1->Engine_Exhaust_Gas_Oxygen_Sensor_Fueling_Correction;
    J1939_MESSAGE->data[8] |= (uint8_t)(EO1->bt8.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation)<<7;
}
void AF2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAF2_t *AF2)
{
    J1939_MESSAGE->PGN = 0x00FEAA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AF2->Engine_Gaseous_Fuel_Correction_Factor;
    J1939_MESSAGE->data[2] = (uint8_t)(AF2->Engine_Desired_Absolute_Intake_Manifold_Pressure__Turbo_Boost_Limit_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AF2->Engine_Desired_Absolute_Intake_Manifold_Pressure__Turbo_Boost_Limit_);
    J1939_MESSAGE->data[4] = AF2->Engine_Turbocharger_Wastegate_Valve_Position;
    J1939_MESSAGE->data[5] = AF2->Engine_Gas_Mass_Flow_Sensor_Fueling_Correction;
}
void ETC6 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC6_t *ETC6)
{
    J1939_MESSAGE->PGN = 0x00FEAB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ETC6->Recommended_Gear;
    J1939_MESSAGE->data[2] = ETC6->Highest_Possible_Gear;
    J1939_MESSAGE->data[3] = ETC6->Lowest_Possible_Gear;
    J1939_MESSAGE->data[4] = ETC6->Clutch_Life_Remaining;
}
void EBC4 ( J1939_MESSAGE_T *J1939_MESSAGE,getEBC4_t *EBC4)
{
    J1939_MESSAGE->PGN = 0x00FEAC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EBC4->Brake_Lining_Remaining_Front_Axle_Left_Wheel;
    J1939_MESSAGE->data[2] = EBC4->Brake_Lining_Remaining_Front_Axle_Right_Wheel;
    J1939_MESSAGE->data[3] = EBC4->Brake_Lining_Remaining_Rear_Axle_1_Left_Wheel;
    J1939_MESSAGE->data[4] = EBC4->Brake_Lining_Remaining_Rear_Axle_1_Right_Wheel;
    J1939_MESSAGE->data[5] = EBC4->Brake_Lining_Remaining_Rear_Axle_2_Left_Wheel;
    J1939_MESSAGE->data[6] = EBC4->Brake_Lining_Remaining_Rear_Axle_2_Right_Wheel;
    J1939_MESSAGE->data[7] = EBC4->Brake_Lining_Remaining_Rear_Axle_3_Left_Wheel;
    J1939_MESSAGE->data[8] = EBC4->Brake_Lining_Remaining_Rear_Axle_3_Right_Wheel;
}
void EBC3 ( J1939_MESSAGE_T *J1939_MESSAGE,getEBC3_t *EBC3)
{
    J1939_MESSAGE->PGN = 0x00FEAD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EBC3->Brake_Application_Pressure_High_Range_Front_Axle_Left_Wheel;
    J1939_MESSAGE->data[2] = EBC3->Brake_Application_Pressure_High_Range_Front_Axle_Right_Wheel;
    J1939_MESSAGE->data[3] = EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_1_Left_Wheel;
    J1939_MESSAGE->data[4] = EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_1_Right_Wheel;
    J1939_MESSAGE->data[5] = EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_2_Left_Wheel;
    J1939_MESSAGE->data[6] = EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_2_Right_Wheel;
    J1939_MESSAGE->data[7] = EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_3_Left_Wheel;
    J1939_MESSAGE->data[8] = EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_3_Right_Wheel;
}
void AIR1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAIR1_t *AIR1)
{
    J1939_MESSAGE->PGN = 0x00FEAE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AIR1->Pneumatic_Supply_Pressure;
    J1939_MESSAGE->data[2] = AIR1->Parking_and_or_Trailer_Air_Pressure;
    J1939_MESSAGE->data[3] = AIR1->Service_Brake_Circuit_1_Air_Pressure;
    J1939_MESSAGE->data[4] = AIR1->Service_Brake_Circuit_2_Air_Pressure;
    J1939_MESSAGE->data[5] = AIR1->Auxiliary_Equipment_Supply_Pressure;
    J1939_MESSAGE->data[6] = AIR1->Air_Suspension_Supply_Pressure;
    J1939_MESSAGE->data[7] |= (uint8_t)(AIR1->bt7.Air_Compressor_Status)<<1;
}
void GFC ( J1939_MESSAGE_T *J1939_MESSAGE,getGFC_t *GFC)
{
    J1939_MESSAGE->PGN = 0x00FEAF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GFC->Trip_Fuel__Gaseous_>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(GFC->Trip_Fuel__Gaseous_>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(GFC->Trip_Fuel__Gaseous_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GFC->Trip_Fuel__Gaseous_);
    J1939_MESSAGE->data[5] = (uint8_t)(GFC->Total_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(GFC->Total_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(GFC->Total_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(GFC->Total_Fuel_Used__Gaseous_);
}
void TTI2 ( J1939_MESSAGE_T *J1939_MESSAGE,getTTI2_t *TTI2)
{
    J1939_MESSAGE->PGN = 0x00FEB0 ;
    J1939_MESSAGE->byte_count = 20;
    J1939_MESSAGE->data[0] = (uint8_t)(TTI2->Trip_Cruise_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI2->Trip_Cruise_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI2->Trip_Cruise_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI2->Trip_Cruise_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(TTI2->Trip_PTO_Governor_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI2->Trip_PTO_Governor_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI2->Trip_PTO_Governor_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI2->Trip_PTO_Governor_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(TTI2->Trip_Engine_Running_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI2->Trip_Engine_Running_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI2->Trip_Engine_Running_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI2->Trip_Engine_Running_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI2->Trip_Idle_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI2->Trip_Idle_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI2->Trip_Idle_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TTI2->Trip_Idle_Time);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI2->Trip_Air_Compressor_On_Time>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI2->Trip_Air_Compressor_On_Time>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI2->Trip_Air_Compressor_On_Time>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TTI2->Trip_Air_Compressor_On_Time);
}
void EH ( J1939_MESSAGE_T *J1939_MESSAGE,getEH_t *EH)
{
    J1939_MESSAGE->PGN = 0x00FEB1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EH->Total_ECU_Distance>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(EH->Total_ECU_Distance>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(EH->Total_ECU_Distance>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EH->Total_ECU_Distance);
    J1939_MESSAGE->data[5] = (uint8_t)(EH->Total_ECU_Run_Time>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(EH->Total_ECU_Run_Time>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(EH->Total_ECU_Run_Time>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EH->Total_ECU_Run_Time);
}
void GFI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getGFI1_t *GFI1)
{
    J1939_MESSAGE->PGN = 0x00FEB2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(GFI1->Total_Engine_PTO_Governor_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(GFI1->Total_Engine_PTO_Governor_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(GFI1->Total_Engine_PTO_Governor_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GFI1->Total_Engine_PTO_Governor_Fuel_Used__Gaseous_);
    J1939_MESSAGE->data[5] = (uint8_t)(GFI1->Trip_Average_Fuel_Rate__Gaseous_>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(GFI1->Trip_Average_Fuel_Rate__Gaseous_);
    J1939_MESSAGE->data[7] = (uint8_t)(GFI1->Engine_Fuel_Specific_Gravity>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(GFI1->Engine_Fuel_Specific_Gravity);
}
void LFI ( J1939_MESSAGE_T *J1939_MESSAGE,getLFI_t *LFI)
{
    J1939_MESSAGE->PGN = 0x00FEB3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LFI->Total_Engine_PTO_Governor_Fuel_Used>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(LFI->Total_Engine_PTO_Governor_Fuel_Used>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(LFI->Total_Engine_PTO_Governor_Fuel_Used>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LFI->Total_Engine_PTO_Governor_Fuel_Used);
    J1939_MESSAGE->data[5] = (uint8_t)(LFI->Trip_Average_Fuel_Rate>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(LFI->Trip_Average_Fuel_Rate);
    J1939_MESSAGE->data[7] = (uint8_t)(LFI->Flexible_Fuel_Percentage>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(LFI->Flexible_Fuel_Percentage);
}
void TTI1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTTI1_t *TTI1)
{
    J1939_MESSAGE->PGN = 0x00FEB4 ;
    J1939_MESSAGE->byte_count = 16;
    J1939_MESSAGE->data[0] = (uint8_t)(TTI1->Trip_Time_in_VSL>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI1->Trip_Time_in_VSL>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI1->Trip_Time_in_VSL>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI1->Trip_Time_in_VSL);
    J1939_MESSAGE->data[0] = (uint8_t)(TTI1->Trip_Time_in_Top_Gear>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI1->Trip_Time_in_Top_Gear>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI1->Trip_Time_in_Top_Gear>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI1->Trip_Time_in_Top_Gear);
    J1939_MESSAGE->data[0] = (uint8_t)(TTI1->Trip_Time_in_Gear_Down>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI1->Trip_Time_in_Gear_Down>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI1->Trip_Time_in_Gear_Down>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI1->Trip_Time_in_Gear_Down);
    J1939_MESSAGE->data[1] = (uint8_t)(TTI1->Trip_Time_in_Derate_by_Engine>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(TTI1->Trip_Time_in_Derate_by_Engine>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(TTI1->Trip_Time_in_Derate_by_Engine>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TTI1->Trip_Time_in_Derate_by_Engine);
}
void TSI ( J1939_MESSAGE_T *J1939_MESSAGE,getTSI_t *TSI)
{
    J1939_MESSAGE->PGN = 0x00FEB5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TSI->Trip_Number_of_Hot_Shutdowns>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TSI->Trip_Number_of_Hot_Shutdowns);
    J1939_MESSAGE->data[3] = (uint8_t)(TSI->Trip_Number_of_Idle_Shutdowns>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TSI->Trip_Number_of_Idle_Shutdowns);
    J1939_MESSAGE->data[5] = (uint8_t)(TSI->Trip_Number_of_Idle_Shutdown_Overrides>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TSI->Trip_Number_of_Idle_Shutdown_Overrides);
    J1939_MESSAGE->data[7] = (uint8_t)(TSI->Trip_Sudden_Decelerations>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TSI->Trip_Sudden_Decelerations);
}
void TVI ( J1939_MESSAGE_T *J1939_MESSAGE,getTVI_t *TVI)
{
    J1939_MESSAGE->PGN = 0x00FEB6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(TVI->Trip_Maximum_Vehicle_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(TVI->Trip_Maximum_Vehicle_Speed);
    J1939_MESSAGE->data[3] = (uint8_t)(TVI->Trip_Cruise_Distance>>24);
    J1939_MESSAGE->data[4] = (uint8_t)(TVI->Trip_Cruise_Distance>>16);
    J1939_MESSAGE->data[5] = (uint8_t)(TVI->Trip_Cruise_Distance>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TVI->Trip_Cruise_Distance);
}
void LF ( J1939_MESSAGE_T *J1939_MESSAGE,getLF_t *LF)
{
    J1939_MESSAGE->PGN = 0x00FEB7 ;
    J1939_MESSAGE->byte_count = 10;
    J1939_MESSAGE->data[1] = (uint8_t)(LF->Trip_Maximum_Engine_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LF->Trip_Maximum_Engine_Speed);
    J1939_MESSAGE->data[3] = (uint8_t)(LF->Trip_Average_Engine_Speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LF->Trip_Average_Engine_Speed);
    J1939_MESSAGE->data[5] = LF->Trip_Drive_Average_Load_Factor;
    J1939_MESSAGE->data[6] = LF->Total_Drive_Average_Load_Factor;
    J1939_MESSAGE->data[7] = (uint8_t)(LF->Total_Engine_Cruise_Time>>24);
    J1939_MESSAGE->data[8] = (uint8_t)(LF->Total_Engine_Cruise_Time>>16);
    J1939_MESSAGE->data[9] = (uint8_t)(LF->Total_Engine_Cruise_Time>>8);
    J1939_MESSAGE->data[10] = (uint8_t)(LF->Total_Engine_Cruise_Time);
}
void GTFI ( J1939_MESSAGE_T *J1939_MESSAGE,getGTFI_t *GTFI)
{
    J1939_MESSAGE->PGN = 0x00FEB8 ;
    J1939_MESSAGE->byte_count = 22;
    J1939_MESSAGE->data[0] = (uint8_t)(GTFI->Trip_Drive_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(GTFI->Trip_Drive_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(GTFI->Trip_Drive_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(GTFI->Trip_Drive_Fuel_Used__Gaseous_);
    J1939_MESSAGE->data[0] = (uint8_t)(GTFI->Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(GTFI->Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(GTFI->Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(GTFI->Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_);
    J1939_MESSAGE->data[0] = (uint8_t)(GTFI->Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(GTFI->Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(GTFI->Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(GTFI->Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_);
    J1939_MESSAGE->data[1] = (uint8_t)(GTFI->Trip_Vehicle_Idle_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(GTFI->Trip_Vehicle_Idle_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(GTFI->Trip_Vehicle_Idle_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GTFI->Trip_Vehicle_Idle_Fuel_Used__Gaseous_);
    J1939_MESSAGE->data[1] = (uint8_t)(GTFI->Trip_Cruise_Fuel_Used__Gaseous_>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(GTFI->Trip_Cruise_Fuel_Used__Gaseous_>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(GTFI->Trip_Cruise_Fuel_Used__Gaseous_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(GTFI->Trip_Cruise_Fuel_Used__Gaseous_);
    J1939_MESSAGE->data[2] = (uint8_t)(GTFI->Trip_Drive_Fuel_Economy__Gaseous_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(GTFI->Trip_Drive_Fuel_Economy__Gaseous_);
}
void LTFI ( J1939_MESSAGE_T *J1939_MESSAGE,getLTFI_t *LTFI)
{
    J1939_MESSAGE->PGN = 0x00FEB9 ;
    J1939_MESSAGE->byte_count = 22;
    J1939_MESSAGE->data[0] = (uint8_t)(LTFI->Trip_Drive_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(LTFI->Trip_Drive_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(LTFI->Trip_Drive_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(LTFI->Trip_Drive_Fuel_Used);
    J1939_MESSAGE->data[0] = (uint8_t)(LTFI->Trip_PTO_Governor_Moving_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(LTFI->Trip_PTO_Governor_Moving_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(LTFI->Trip_PTO_Governor_Moving_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(LTFI->Trip_PTO_Governor_Moving_Fuel_Used);
    J1939_MESSAGE->data[0] = (uint8_t)(LTFI->Trip_PTO_Governor_Non_moving_Fuel_Used>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(LTFI->Trip_PTO_Governor_Non_moving_Fuel_Used>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(LTFI->Trip_PTO_Governor_Non_moving_Fuel_Used>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(LTFI->Trip_PTO_Governor_Non_moving_Fuel_Used);
    J1939_MESSAGE->data[1] = (uint8_t)(LTFI->Trip_Vehicle_Idle_Fuel_Used>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(LTFI->Trip_Vehicle_Idle_Fuel_Used>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(LTFI->Trip_Vehicle_Idle_Fuel_Used>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LTFI->Trip_Vehicle_Idle_Fuel_Used);
    J1939_MESSAGE->data[1] = (uint8_t)(LTFI->Trip_Cruise_Fuel_Used>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(LTFI->Trip_Cruise_Fuel_Used>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(LTFI->Trip_Cruise_Fuel_Used>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LTFI->Trip_Cruise_Fuel_Used);
    J1939_MESSAGE->data[2] = (uint8_t)(LTFI->Trip_Drive_Fuel_Economy>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(LTFI->Trip_Drive_Fuel_Economy);
}
void TDI ( J1939_MESSAGE_T *J1939_MESSAGE,getTDI_t *TDI)
{
    J1939_MESSAGE->PGN = 0x00FEBA ;
    J1939_MESSAGE->byte_count = 12;
    J1939_MESSAGE->data[1] = (uint8_t)(TDI->Trip_Distance_on_VSL>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(TDI->Trip_Distance_on_VSL>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(TDI->Trip_Distance_on_VSL>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TDI->Trip_Distance_on_VSL);
    J1939_MESSAGE->data[5] = (uint8_t)(TDI->Trip_Gear_Down_Distance>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(TDI->Trip_Gear_Down_Distance>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(TDI->Trip_Gear_Down_Distance>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(TDI->Trip_Gear_Down_Distance);
    J1939_MESSAGE->data[9] = (uint8_t)(TDI->Trip_Distance_in_Top_Gear>>24);
    J1939_MESSAGE->data[10] = (uint8_t)(TDI->Trip_Distance_in_Top_Gear>>16);
    J1939_MESSAGE->data[11] = (uint8_t)(TDI->Trip_Distance_in_Top_Gear>>8);
    J1939_MESSAGE->data[12] = (uint8_t)(TDI->Trip_Distance_in_Top_Gear);
}
void TFI ( J1939_MESSAGE_T *J1939_MESSAGE,getTFI_t *TFI)
{
    J1939_MESSAGE->PGN = 0x00FEBB ;
    J1939_MESSAGE->byte_count = 16;
    J1939_MESSAGE->data[0] = (uint8_t)(TFI->Trip_Fan_On_Time>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TFI->Trip_Fan_On_Time>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TFI->Trip_Fan_On_Time>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TFI->Trip_Fan_On_Time);
    J1939_MESSAGE->data[0] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_Engine_System>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_Engine_System>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_Engine_System>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_Engine_System);
    J1939_MESSAGE->data[0] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_a_Manual_Switch>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_a_Manual_Switch>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_a_Manual_Switch>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_a_Manual_Switch);
    J1939_MESSAGE->data[1] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_A_C_System>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_A_C_System>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_A_C_System>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TFI->Trip_Fan_On_Time_Due_to_the_A_C_System);
}
void CBI ( J1939_MESSAGE_T *J1939_MESSAGE,getCBI_t *CBI)
{
    J1939_MESSAGE->PGN = 0x00FEBC ;
    J1939_MESSAGE->byte_count = 16;
    J1939_MESSAGE->data[0] = (uint8_t)(CBI->Total_Compression_Brake_Distance>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(CBI->Total_Compression_Brake_Distance>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(CBI->Total_Compression_Brake_Distance>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(CBI->Total_Compression_Brake_Distance);
    J1939_MESSAGE->data[0] = (uint8_t)(CBI->Trip_Compression_Brake_Distance>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(CBI->Trip_Compression_Brake_Distance>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(CBI->Trip_Compression_Brake_Distance>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(CBI->Trip_Compression_Brake_Distance);
    J1939_MESSAGE->data[0] = (uint8_t)(CBI->Trip_Service_Brake_Distance>>24);
    J1939_MESSAGE->data[1] = (uint8_t)(CBI->Trip_Service_Brake_Distance>>16);
    J1939_MESSAGE->data[2] = (uint8_t)(CBI->Trip_Service_Brake_Distance>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(CBI->Trip_Service_Brake_Distance);
    J1939_MESSAGE->data[1] = (uint8_t)(CBI->Trip_Service_Brake_Applications>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(CBI->Trip_Service_Brake_Applications>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(CBI->Trip_Service_Brake_Applications>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(CBI->Trip_Service_Brake_Applications);
}
void FD1 ( J1939_MESSAGE_T *J1939_MESSAGE,getFD1_t *FD1)
{
    J1939_MESSAGE->PGN = 0x00FEBD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = FD1->Estimated_Percent_Fan_Speed;
    J1939_MESSAGE->data[2] |= (uint8_t)(FD1->bt2.Fan_Drive_State)<<1;
    J1939_MESSAGE->data[3] = (uint8_t)(FD1->Fan_Speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(FD1->Fan_Speed);
    J1939_MESSAGE->data[5] = (uint8_t)(FD1->Hydraulic_Fan_Motor_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(FD1->Hydraulic_Fan_Motor_Pressure);
    J1939_MESSAGE->data[7] = FD1->Fan_Drive_Bypass_Command_Status;
}
void EEC4 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC4_t *EEC4)
{
    J1939_MESSAGE->PGN = 0x00FEBE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EEC4->Engine_Rated_Power>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EEC4->Engine_Rated_Power);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC4->Engine_Rated_Speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EEC4->Engine_Rated_Speed);
    J1939_MESSAGE->data[5] |= (uint8_t)(EEC4->bt5.Engine_Rotation_Direction)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(EEC4->bt5.Engine_Intake_Manifold_Pressure_Control_Mode)<<3;
    J1939_MESSAGE->data[6] = EEC4->Crank_Attempt_Count_on_Present_Start_Attempt;
}
void EBC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEBC2_t *EBC2)
{
    J1939_MESSAGE->PGN = 0x00FEBF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EBC2->Front_Axle_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EBC2->Front_Axle_Speed);
    J1939_MESSAGE->data[3] = EBC2->Relative_Speed__Front_Axle_Left_Wheel;
    J1939_MESSAGE->data[4] = EBC2->Relative_Speed__Front_Axle_Right_Wheel;
    J1939_MESSAGE->data[5] = EBC2->Relative_Speed__Rear_Axle_1_Left_Wheel;
    J1939_MESSAGE->data[6] = EBC2->Relative_Speed__Rear_Axle_1_Right_Wheel;
    J1939_MESSAGE->data[7] = EBC2->Relative_Speed__Rear_Axle_2_Left_Wheel;
    J1939_MESSAGE->data[8] = EBC2->Relative_Speed__Rear_Axle_2_Right_Wheel;
}
/*
void SERV ( J1939_MESSAGE_T *J1939_MESSAGE,getSERV_t *SERV)
{
    J1939_MESSAGE->PGN = 0x00FEC0 ;
    J1939_MESSAGE->data[1] = SERV->Service_Component_Identification;
    J1939_MESSAGE->data[2] = (uint8_t)(SERV->Service_Distance>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(SERV->Service_Distance);
    J1939_MESSAGE->data[4] = SERV->Service_Component_Identification;
    J1939_MESSAGE->data[5] = SERV->Service_Delay_Calendar_Time_Based;
    J1939_MESSAGE->data[6] = SERV->Service_Component_Identification;
    J1939_MESSAGE->data[7] = (uint8_t)(SERV->Service_Delay_Operational_Time_Based>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(SERV->Service_Delay_Operational_Time_Based);
}
*/
void VDHR ( J1939_MESSAGE_T *J1939_MESSAGE,getVDHR_t *VDHR)
{
    J1939_MESSAGE->PGN = 0x00FEC1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VDHR->High_Resolution_Total_Vehicle_Distance>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(VDHR->High_Resolution_Total_Vehicle_Distance>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(VDHR->High_Resolution_Total_Vehicle_Distance>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VDHR->High_Resolution_Total_Vehicle_Distance);
    J1939_MESSAGE->data[5] = (uint8_t)(VDHR->High_Resolution_Trip_Distance>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(VDHR->High_Resolution_Trip_Distance>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(VDHR->High_Resolution_Trip_Distance>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VDHR->High_Resolution_Trip_Distance);
}
void ERC2 ( J1939_MESSAGE_T *J1939_MESSAGE,getERC2_t *ERC2)
{
    J1939_MESSAGE->PGN = 0x00FEC2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ERC2->bt1.Transmission_Output_Retarder)<<1;
}
void ETC5 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC5_t *ETC5)
{
    J1939_MESSAGE->PGN = 0x00FEC3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC5->bt1.Transmission_High_Range_Sense_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(ETC5->bt1.Transmission_Low_Range_Sense_Switch)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC5->bt2.Transmission_Reverse_Direction_Switch)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC5->bt2.Transmission_Neutral_Switch)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(ETC5->bt2.Transmission_Forward_Direction_Switch)<<5;
}
void ETC4 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC4_t *ETC4)
{
    J1939_MESSAGE->PGN = 0x00FEC5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ETC4->Transmission_Synchronizer_Clutch_Value;
    J1939_MESSAGE->data[2] = ETC4->Transmission_Synchronizer_Brake_Value;
}
void ETC3 ( J1939_MESSAGE_T *J1939_MESSAGE,getETC3_t *ETC3)
{
    J1939_MESSAGE->PGN = 0x00FEC7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ETC3->Transmission_Shift_Finger_Gear_Position;
    J1939_MESSAGE->data[2] = ETC3->Transmission_Shift_Finger_Rail_Position;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC3->bt3.Transmission_Shift_Finger_Neutral_Indicator)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC3->bt3.Transmission_Shift_Finger_Engagement_Indicator)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(ETC3->bt3.Transmission_Shift_Finger_Center_Rail_Indicator)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(ETC3->bt4.Transmission_Shift_Finger_Rail_Actuator_1)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(ETC3->bt4.Transmission_Shift_Finger_Gear_Actuator_1)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(ETC3->bt4.Transmission_Shift_Finger_Rail_Actuator_2)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(ETC3->bt4.Transmission_Shift_Finger_Gear_Actuator_2)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC3->bt5.Transmission_Range_High_Actuator)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC3->bt5.Transmission_Range_Low_Actuator)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC3->bt5.Transmission_Splitter_Direct_Actuator)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(ETC3->bt5.Transmission_Splitter_Indirect_Actuator)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(ETC3->bt6.Transmission_Clutch_Actuator)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(ETC3->bt6.Transmission_Lockup_Clutch_Actuator)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(ETC3->bt6.Transmission_Defuel_Actuator)<<5;
    J1939_MESSAGE->data[6] |= (uint8_t)(ETC3->bt6.Transmission_Inertia_Brake_Actuator)<<7;
}
void AS ( J1939_MESSAGE_T *J1939_MESSAGE,getAS_t *AS)
{
    J1939_MESSAGE->PGN = 0x00FED5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(AS->Alternator_Speed>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(AS->Alternator_Speed);
    J1939_MESSAGE->data[3] |= (uint8_t)(AS->bt3.Alternator_1_Status)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AS->bt3.Alternator_2_Status)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(AS->bt3.Alternator_3_Status)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(AS->bt3.Alternator_4_Status)<<7;
}
void AUXIO1 ( J1939_MESSAGE_T *J1939_MESSAGE,getAUXIO1_t *AUXIO1)
{
    J1939_MESSAGE->PGN = 0x00FED9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO1->bt1.Auxiliary_I_O_04)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO1->bt1.Auxiliary_I_O_03)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO1->bt1.Auxiliary_I_O_02)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(AUXIO1->bt1.Auxiliary_I_O_01)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO1->bt2.Auxiliary_I_O_08)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO1->bt2.Auxiliary_I_O_07)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO1->bt2.Auxiliary_I_O_06)<<5;
    J1939_MESSAGE->data[2] |= (uint8_t)(AUXIO1->bt2.Auxiliary_I_O_05)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO1->bt3.Auxiliary_I_O_12)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO1->bt3.Auxiliary_I_O_11)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO1->bt3.Auxiliary_I_O_10)<<5;
    J1939_MESSAGE->data[3] |= (uint8_t)(AUXIO1->bt3.Auxiliary_I_O_09)<<7;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO1->bt4.Auxiliary_I_O_16)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO1->bt4.Auxiliary_I_O_15)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO1->bt4.Auxiliary_I_O_14)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(AUXIO1->bt4.Auxiliary_I_O_13)<<7;
    J1939_MESSAGE->data[5] = (uint8_t)(AUXIO1->Auxiliary_I_O_Channel_1>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(AUXIO1->Auxiliary_I_O_Channel_1);
    J1939_MESSAGE->data[7] = (uint8_t)(AUXIO1->Auxiliary_I_O_Channel_2>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AUXIO1->Auxiliary_I_O_Channel_2);
}
void SOFT ( J1939_MESSAGE_T *J1939_MESSAGE,getSOFT_t *SOFT)
{
    J1939_MESSAGE->PGN = 0x00FEDA ;
    J1939_MESSAGE->data[1] = SOFT->Number_of_Software_Identification_Fields;
}
void EFL_P2 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P2_t *EFL_P2)
{
    J1939_MESSAGE->PGN = 0x00FEDB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(EFL_P2->Engine_Injection_Control_Pressure>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EFL_P2->Engine_Injection_Control_Pressure);
    J1939_MESSAGE->data[3] = (uint8_t)(EFL_P2->Engine_Injector_Metering_Rail_1_Pressure>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EFL_P2->Engine_Injector_Metering_Rail_1_Pressure);
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P2->Engine_Injector_Timing_Rail_1_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P2->Engine_Injector_Timing_Rail_1_Pressure);
    J1939_MESSAGE->data[7] = (uint8_t)(EFL_P2->Engine_Injector_Metering_Rail_2_Pressure>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(EFL_P2->Engine_Injector_Metering_Rail_2_Pressure);
}
void IO ( J1939_MESSAGE_T *J1939_MESSAGE,getIO_t *IO)
{
    J1939_MESSAGE->PGN = 0x00FEDC ;
    J1939_MESSAGE->data[1] = (uint8_t)(IO->Engine_Total_Idle_Fuel_Used>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(IO->Engine_Total_Idle_Fuel_Used>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(IO->Engine_Total_Idle_Fuel_Used>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(IO->Engine_Total_Idle_Fuel_Used);
    J1939_MESSAGE->data[5] = (uint8_t)(IO->Engine_Total_Idle_Hours>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(IO->Engine_Total_Idle_Hours>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(IO->Engine_Total_Idle_Hours>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(IO->Engine_Total_Idle_Hours);
}
void TC ( J1939_MESSAGE_T *J1939_MESSAGE,getTC_t *TC)
{
    J1939_MESSAGE->PGN = 0x00FEDD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TC->Engine_Turbocharger_Lube_Oil_Pressure_1;
    J1939_MESSAGE->data[2] = (uint8_t)(TC->Engine_Turbocharger_1_Speed>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(TC->Engine_Turbocharger_1_Speed);
    J1939_MESSAGE->data[4] |= (uint8_t)(TC->bt4.Engine_Turbocharger_Oil_Level_Switch)<<7;
}
void AIR2 ( J1939_MESSAGE_T *J1939_MESSAGE,getAIR2_t *AIR2)
{
    J1939_MESSAGE->PGN = 0x00FEDE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AIR2->Engine_Air_Start_Pressure;
}
void EEC3 ( J1939_MESSAGE_T *J1939_MESSAGE,getEEC3_t *EEC3)
{
    J1939_MESSAGE->PGN = 0x00FEDF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EEC3->Nominal_Friction___Percent_Torque;
    J1939_MESSAGE->data[2] = (uint8_t)(EEC3->Engine_s_Desired_Operating_Speed>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(EEC3->Engine_s_Desired_Operating_Speed);
    J1939_MESSAGE->data[4] = EEC3->Engine_s_Desired_Operating_Speed_Asymmetry_Adjustment;
    J1939_MESSAGE->data[5] = EEC3->Estimated_Engine_Parasitic_Losses___Percent_Torque;
    J1939_MESSAGE->data[6] = (uint8_t)(EEC3->Aftertreatment_1_Exhaust_Gas_Mass_Flow>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(EEC3->Aftertreatment_1_Exhaust_Gas_Mass_Flow);
    J1939_MESSAGE->data[8] |= (uint8_t)(EEC3->bt8.Aftertreatment_1_Intake_Dew_Point)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(EEC3->bt8.Aftertreatment_1_Exhaust_Dew_Point)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(EEC3->bt8.Aftertreatment_2_Intake_Dew_Point)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(EEC3->bt8.Aftertreatment_2_Exhaust_Dew_Point)<<7;
}
void VD ( J1939_MESSAGE_T *J1939_MESSAGE,getVD_t *VD)
{
    J1939_MESSAGE->PGN = 0x00FEE0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VD->Trip_Distance>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(VD->Trip_Distance>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(VD->Trip_Distance>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VD->Trip_Distance);
    J1939_MESSAGE->data[5] = (uint8_t)(VD->Total_Vehicle_Distance>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(VD->Total_Vehicle_Distance>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(VD->Total_Vehicle_Distance>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VD->Total_Vehicle_Distance);
}

void TCFG ( J1939_MESSAGE_T *J1939_MESSAGE,getTCFG_t *TCFG)
{
    J1939_MESSAGE->PGN = 0x00FEE2 ;
    J1939_MESSAGE->data[1] = TCFG->Number_of_Reverse_Gear_Ratios;
    J1939_MESSAGE->data[2] = TCFG->Number_of_Forward_Gear_Ratios;
    J1939_MESSAGE->data[3] = (uint8_t)(TCFG->Transmission_Gear_Ratio>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TCFG->Transmission_Gear_Ratio);
}
/*
void EC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEC1_t *EC1)
{
    J1939_MESSAGE->PGN = 0x00FEE3 ;
    J1939_MESSAGE->byte_count = 39;
    J1939_MESSAGE->data[0] = (uint8_t)(EC1->Engine_Speed_At_Idle_Point_1__Engine_Configuration_>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Speed_At_Idle_Point_1__Engine_Configuration_);
    J1939_MESSAGE->data[03] = EC1->Engine_Percent_Torque_At_Idle_Point_1__Engine_Configuration_;
    J1939_MESSAGE->data[0] = (uint8_t)(EC1->Engine_Speed_At_Point_2__Engine_Configuration_>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Speed_At_Point_2__Engine_Configuration_);
    J1939_MESSAGE->data[06] = EC1->Engine_Percent_Torque_At_Point_2__Engine_Configuration_;
    J1939_MESSAGE->data[0] = (uint8_t)(EC1->Engine_Speed_At_Point_3__Engine_Configuration_>>8);
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Speed_At_Point_3__Engine_Configuration_);
    J1939_MESSAGE->data[09] = EC1->Engine_Percent_Torque_At_Point_3__Engine_Configuration_;
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Speed_At_Point_4__Engine_Configuration_>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Speed_At_Point_4__Engine_Configuration_);
    J1939_MESSAGE->data[12] = EC1->Engine_Percent_Torque_At_Point_4__Engine_Configuration_;
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Speed_At_Point_5__Engine_Configuration_>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Speed_At_Point_5__Engine_Configuration_);
    J1939_MESSAGE->data[15] = EC1->Engine_Percent_Torque_At_Point_5__Engine_Configuration_;
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Speed_At_High_Idle_Point_6__Engine_Configuration_>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Speed_At_High_Idle_Point_6__Engine_Configuration_);
    J1939_MESSAGE->data[1] = (uint8_t)(EC1->Engine_Gain__Kp__Of_The_Endspeed_Governor__Engine_Configuration_>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Gain__Kp__Of_The_Endspeed_Governor__Engine_Configuration_);
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Reference_Torque__Engine_Configuration_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(EC1->Engine_Reference_Torque__Engine_Configuration_);
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Maximum_Momentary_Override_Speed_Point_7__Engine_Configuration_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(EC1->Engine_Maximum_Momentary_Override_Speed_Point_7__Engine_Configuration_);
    J1939_MESSAGE->data[24] = EC1->Engine_Maximum_Momentary_Override_Time_Limit__Engine_Configuration_;
    J1939_MESSAGE->data[25] = EC1->Engine_Requested_Speed_Control_Range_Lower_Limit__Engine_Configuration_;
    J1939_MESSAGE->data[26] = EC1->Engine_Requested_Speed_Control_Range_Upper_Limit__Engine_Configuration_;
    J1939_MESSAGE->data[27] = EC1->Engine_Requested_Torque_Control_Range_Lower_Limit__Engine_Configuration_;
    J1939_MESSAGE->data[28] = EC1->Engine_Requested_Torque_Control_Range_Upper_Limit__Engine_Configuration_;
    J1939_MESSAGE->data[2] = (uint8_t)(EC1->Engine_Extended_Range_Requested_Speed_Control_Range_Upper_Limit__Engine_configuration_>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(EC1->Engine_Extended_Range_Requested_Speed_Control_Range_Upper_Limit__Engine_configuration_);
    J1939_MESSAGE->data[3] = (uint8_t)(EC1->Engine_Moment_of_Inertia>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EC1->Engine_Moment_of_Inertia);
    J1939_MESSAGE->data[3] = (uint8_t)(EC1->Engine_Default_Torque_Limit>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(EC1->Engine_Default_Torque_Limit);
}
*/
void SHUTDN ( J1939_MESSAGE_T *J1939_MESSAGE,getSHUTDN_t *SHUTDN)
{
    J1939_MESSAGE->PGN = 0x00FEE4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(SHUTDN->bt1.Engine_Idle_Shutdown_has_Shutdown_Engine)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(SHUTDN->bt1.Engine_Idle_Shutdown_Driver_Alert_Mode)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(SHUTDN->bt1.Engine_Idle_Shutdown_Timer_Override)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(SHUTDN->bt1.Engine_Idle_Shutdown_Timer_State)<<7;
    J1939_MESSAGE->data[2] |= (uint8_t)(SHUTDN->bt2.Engine_Idle_Shutdown_Timer_Function)<<7;
    J1939_MESSAGE->data[3] |= (uint8_t)(SHUTDN->bt3.A_C_High_Pressure_Fan_Switch)<<1;
    J1939_MESSAGE->data[3] |= (uint8_t)(SHUTDN->bt3.Refrigerant_Low_Pressure_Switch)<<3;
    J1939_MESSAGE->data[3] |= (uint8_t)(SHUTDN->bt3.Refrigerant_High_Pressure_Switch)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(SHUTDN->bt4.Engine_Wait_to_Start_Lamp)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(SHUTDN->bt5.Engine_Protection_System_has_Shutdown_Engine)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(SHUTDN->bt5.Engine_Protection_System_Approaching_Shutdown)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(SHUTDN->bt5.Engine_Protection_System_Timer_Override)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(SHUTDN->bt5.Engine_Protection_System_Timer_State)<<7;
    J1939_MESSAGE->data[6] |= (uint8_t)(SHUTDN->bt6.Engine_Protection_System_Configuration)<<7;
    J1939_MESSAGE->data[7] |= (uint8_t)(SHUTDN->bt7.Engine_Alarm_Acknowledge)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(SHUTDN->bt7.Engine_Alarm_Output_Command_Status)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(SHUTDN->bt7.Engine_Air_Shutoff_Command_Status)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(SHUTDN->bt7.Engine_Overspeed_Test)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(SHUTDN->bt8.Engine_Air_Shutoff_Status)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(SHUTDN->bt8.PTO_Shutdown_has_Shutdown_Engine)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(SHUTDN->bt8.Coolant_Level_Engine_Protection_Shutdown_Status)<<5;
}
void HOURS ( J1939_MESSAGE_T *J1939_MESSAGE,getHOURS_t *HOURS)
{
    J1939_MESSAGE->PGN = 0x00FEE5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(HOURS->Engine_Total_Hours_of_Operation>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(HOURS->Engine_Total_Hours_of_Operation>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(HOURS->Engine_Total_Hours_of_Operation>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(HOURS->Engine_Total_Hours_of_Operation);
    J1939_MESSAGE->data[5] = (uint8_t)(HOURS->Engine_Total_Revolutions>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(HOURS->Engine_Total_Revolutions>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(HOURS->Engine_Total_Revolutions>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(HOURS->Engine_Total_Revolutions);
}
void TD ( J1939_MESSAGE_T *J1939_MESSAGE,getTD_t *TD)
{
    J1939_MESSAGE->PGN = 0x00FEE6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TD->Seconds;
    J1939_MESSAGE->data[2] = TD->Minutes;
    J1939_MESSAGE->data[3] = TD->Hours;
    J1939_MESSAGE->data[4] = TD->Month;
    J1939_MESSAGE->data[5] = TD->Day;
    J1939_MESSAGE->data[6] = TD->Year;
    J1939_MESSAGE->data[7] = TD->Local_minute_offset;
    J1939_MESSAGE->data[8] = TD->Local_hour_offset;
}
void VH ( J1939_MESSAGE_T *J1939_MESSAGE,getVH_t *VH)
{
    J1939_MESSAGE->PGN = 0x00FEE7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VH->Total_Vehicle_Hours>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(VH->Total_Vehicle_Hours>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(VH->Total_Vehicle_Hours>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VH->Total_Vehicle_Hours);
    J1939_MESSAGE->data[5] = (uint8_t)(VH->Total_Power_Takeoff_Hours>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(VH->Total_Power_Takeoff_Hours>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(VH->Total_Power_Takeoff_Hours>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VH->Total_Power_Takeoff_Hours);
}
void VDS ( J1939_MESSAGE_T *J1939_MESSAGE,getVDS_t *VDS)
{
    J1939_MESSAGE->PGN = 0x00FEE8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VDS->Compass_Bearing>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(VDS->Compass_Bearing);
    J1939_MESSAGE->data[3] = (uint8_t)(VDS->Navigation_Based_Vehicle_Speed>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VDS->Navigation_Based_Vehicle_Speed);
    J1939_MESSAGE->data[5] = (uint8_t)(VDS->Pitch>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(VDS->Pitch);
    J1939_MESSAGE->data[7] = (uint8_t)(VDS->Altitude>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VDS->Altitude);
}
void LFC ( J1939_MESSAGE_T *J1939_MESSAGE,getLFC_t *LFC)
{
    J1939_MESSAGE->PGN = 0x00FEE9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LFC->Engine_Trip_Fuel>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(LFC->Engine_Trip_Fuel>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(LFC->Engine_Trip_Fuel>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LFC->Engine_Trip_Fuel);
    J1939_MESSAGE->data[5] = (uint8_t)(LFC->Engine_Total_Fuel_Used>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(LFC->Engine_Total_Fuel_Used>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(LFC->Engine_Total_Fuel_Used>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(LFC->Engine_Total_Fuel_Used);
}
void VW ( J1939_MESSAGE_T *J1939_MESSAGE,getVW_t *VW)
{
    J1939_MESSAGE->PGN = 0x00FEEA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(VW->bt1.Axle_Location)<<1;
    J1939_MESSAGE->data[2] = (uint8_t)(VW->Axle_Weight>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(VW->Axle_Weight);
    J1939_MESSAGE->data[4] = (uint8_t)(VW->Trailer_Weight>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(VW->Trailer_Weight);
    J1939_MESSAGE->data[6] = (uint8_t)(VW->Cargo_Weight>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(VW->Cargo_Weight);
}
void CCSS ( J1939_MESSAGE_T *J1939_MESSAGE,getCCSS_t *CCSS)
{
    J1939_MESSAGE->PGN = 0x00FEED ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = CCSS->Maximum_Vehicle_Speed_Limit;
    J1939_MESSAGE->data[2] = CCSS->Cruise_Control_High_Set_Limit_Speed;
    J1939_MESSAGE->data[3] = CCSS->Cruise_Control_Low_Set_Limit_Speed;
}
void ET1 ( J1939_MESSAGE_T *J1939_MESSAGE,getET1_t *ET1)
{
    J1939_MESSAGE->PGN = 0x00FEEE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = ET1->Engine_Coolant_Temperature;
    J1939_MESSAGE->data[2] = ET1->Engine_Fuel_Temperature_1;
    J1939_MESSAGE->data[3] = (uint8_t)(ET1->Engine_Oil_Temperature_1>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(ET1->Engine_Oil_Temperature_1);
    J1939_MESSAGE->data[5] = (uint8_t)(ET1->Engine_Turbocharger_Oil_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(ET1->Engine_Turbocharger_Oil_Temperature);
    J1939_MESSAGE->data[7] = ET1->Engine_Intercooler_Temperature;
    J1939_MESSAGE->data[8] = ET1->Engine_Intercooler_Thermostat_Opening;
}
void EFL_P1 ( J1939_MESSAGE_T *J1939_MESSAGE,getEFL_P1_t *EFL_P1)
{
    J1939_MESSAGE->PGN = 0x00FEEF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = EFL_P1->Engine_Fuel_Delivery_Pressure;
    J1939_MESSAGE->data[2] = EFL_P1->Engine_Extended_Crankcase_Blow_by_Pressure;
    J1939_MESSAGE->data[3] = EFL_P1->Engine_Oil_Level;
    J1939_MESSAGE->data[4] = EFL_P1->Engine_Oil_Pressure;
    J1939_MESSAGE->data[5] = (uint8_t)(EFL_P1->Engine_Crankcase_Pressure>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(EFL_P1->Engine_Crankcase_Pressure);
    J1939_MESSAGE->data[7] = EFL_P1->Engine_Coolant_Pressure;
    J1939_MESSAGE->data[8] = EFL_P1->Engine_Coolant_Level;
}
void PTO ( J1939_MESSAGE_T *J1939_MESSAGE,getPTO_t *PTO)
{
    J1939_MESSAGE->PGN = 0x00FEF0 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = PTO->Power_Takeoff_Oil_Temperature;
    J1939_MESSAGE->data[2] = (uint8_t)(PTO->Power_Takeoff_Speed>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(PTO->Power_Takeoff_Speed);
    J1939_MESSAGE->data[4] = (uint8_t)(PTO->Power_Takeoff_Set_Speed>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(PTO->Power_Takeoff_Set_Speed);
    J1939_MESSAGE->data[6] |= (uint8_t)(PTO->bt6.Engine_PTO_Governor_Enable_Switch)<<1;
    J1939_MESSAGE->data[6] |= (uint8_t)(PTO->bt6.Engine_Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch)<<3;
    J1939_MESSAGE->data[6] |= (uint8_t)(PTO->bt6.Engine_Remote_PTO_Governor_Variable_Speed_Control_Switch)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(PTO->bt7.Engine_PTO_Governor_Set_Switch)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(PTO->bt7.Engine_PTO_Governor_Coast_Decelerate_Switch)<<3;
    J1939_MESSAGE->data[7] |= (uint8_t)(PTO->bt7.Engine_PTO_Governor_Resume_Switch)<<5;
    J1939_MESSAGE->data[7] |= (uint8_t)(PTO->bt7.Engine_PTO_Governor_Accelerate_Switch)<<7;
    J1939_MESSAGE->data[8] |= (uint8_t)(PTO->bt8.Operator_Engine_PTO_Governor_Memory_Select_Switch)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(PTO->bt8.Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch_2)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(PTO->bt8.Auxiliary_Input_Ignore_Switch)<<5;
}
void CCVS1 ( J1939_MESSAGE_T *J1939_MESSAGE,getCCVS1_t *CCVS1)
{
    J1939_MESSAGE->PGN = 0x00FEF1 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS1->bt1.Two_Speed_Axle_Switch)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS1->bt1.Parking_Brake_Switch)<<3;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS1->bt1.Cruise_Control_Pause_Switch)<<5;
    J1939_MESSAGE->data[1] |= (uint8_t)(CCVS1->bt1.Park_Brake_Release_Inhibit_Request)<<7;
    J1939_MESSAGE->data[2] = (uint8_t)(CCVS1->Wheel_Based_Vehicle_Speed>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(CCVS1->Wheel_Based_Vehicle_Speed);
    J1939_MESSAGE->data[4] |= (uint8_t)(CCVS1->bt4.Cruise_Control_Active)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCVS1->bt4.Cruise_Control_Enable_Switch)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCVS1->bt4.Brake_Switch)<<5;
    J1939_MESSAGE->data[4] |= (uint8_t)(CCVS1->bt4.Clutch_Switch)<<7;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCVS1->bt5.Cruise_Control_Set_Switch)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCVS1->bt5.Cruise_Control_Coast__Decelerate__Switch)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCVS1->bt5.Cruise_Control_Resume_Switch)<<5;
    J1939_MESSAGE->data[5] |= (uint8_t)(CCVS1->bt5.Cruise_Control_Accelerate_Switch)<<7;
    J1939_MESSAGE->data[6] = CCVS1->Cruise_Control_Set_Speed;
    J1939_MESSAGE->data[7] |= (uint8_t)(CCVS1->bt7.PTO_Governor_State)<<1;
    J1939_MESSAGE->data[7] |= (uint8_t)(CCVS1->bt7.Cruise_Control_States)<<6;
    J1939_MESSAGE->data[8] |= (uint8_t)(CCVS1->bt8.Engine_Idle_Increment_Switch)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(CCVS1->bt8.Engine_Idle_Decrement_Switch)<<3;
    J1939_MESSAGE->data[8] |= (uint8_t)(CCVS1->bt8.Engine_Test_Mode_Switch)<<5;
    J1939_MESSAGE->data[8] |= (uint8_t)(CCVS1->bt8.Engine_Shutdown_Override_Switch)<<7;
}
void LFE1 ( J1939_MESSAGE_T *J1939_MESSAGE,getLFE1_t *LFE1)
{
    J1939_MESSAGE->PGN = 0x00FEF2 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(LFE1->Engine_Fuel_Rate>>8);
    J1939_MESSAGE->data[2] = (uint8_t)(LFE1->Engine_Fuel_Rate);
    J1939_MESSAGE->data[3] = (uint8_t)(LFE1->Engine_Instantaneous_Fuel_Economy>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(LFE1->Engine_Instantaneous_Fuel_Economy);
    J1939_MESSAGE->data[5] = (uint8_t)(LFE1->Engine_Average_Fuel_Economy>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(LFE1->Engine_Average_Fuel_Economy);
    J1939_MESSAGE->data[7] = LFE1->Engine_Throttle_Valve_1_Position;
    J1939_MESSAGE->data[8] = LFE1->Engine_Throttle_Valve_2_Position;
}
void VP ( J1939_MESSAGE_T *J1939_MESSAGE,getVP_t *VP)
{
    J1939_MESSAGE->PGN = 0x00FEF3 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = (uint8_t)(VP->Latitude>>24);
    J1939_MESSAGE->data[2] = (uint8_t)(VP->Latitude>>16);
    J1939_MESSAGE->data[3] = (uint8_t)(VP->Latitude>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VP->Latitude);
    J1939_MESSAGE->data[5] = (uint8_t)(VP->Longitude>>24);
    J1939_MESSAGE->data[6] = (uint8_t)(VP->Longitude>>16);
    J1939_MESSAGE->data[7] = (uint8_t)(VP->Longitude>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VP->Longitude);
}
void TIRE ( J1939_MESSAGE_T *J1939_MESSAGE,getTIRE_t *TIRE)
{
    J1939_MESSAGE->PGN = 0x00FEF4 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(TIRE->bt1.Tire_Location)<<1;
    J1939_MESSAGE->data[2] = TIRE->Tire_Pressure;
    J1939_MESSAGE->data[3] = (uint8_t)(TIRE->Tire_Temperature>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(TIRE->Tire_Temperature);
    J1939_MESSAGE->data[5] |= (uint8_t)(TIRE->bt5.CTI_Wheel_Sensor_Status)<<1;
    J1939_MESSAGE->data[5] |= (uint8_t)(TIRE->bt5.CTI_Tire_Status)<<3;
    J1939_MESSAGE->data[5] |= (uint8_t)(TIRE->bt5.CTI_Wheel_End_Electrical_Fault)<<5;
    J1939_MESSAGE->data[6] = (uint8_t)(TIRE->Tire_Air_Leakage_Rate>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(TIRE->Tire_Air_Leakage_Rate);
    J1939_MESSAGE->data[8] |= (uint8_t)(TIRE->bt8.Tire_Pressure_Threshold_Detection)<<6;
}
void AMB ( J1939_MESSAGE_T *J1939_MESSAGE,getAMB_t *AMB)
{
    J1939_MESSAGE->PGN = 0x00FEF5 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AMB->Barometric_Pressure;
    J1939_MESSAGE->data[2] = (uint8_t)(AMB->Cab_Interior_Temperature>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(AMB->Cab_Interior_Temperature);
    J1939_MESSAGE->data[4] = (uint8_t)(AMB->Ambient_Air_Temperature>>8);
    J1939_MESSAGE->data[5] = (uint8_t)(AMB->Ambient_Air_Temperature);
    J1939_MESSAGE->data[6] = AMB->Engine_Air_Intake_Temperature;
    J1939_MESSAGE->data[7] = (uint8_t)(AMB->Road_Surface_Temperature>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(AMB->Road_Surface_Temperature);
}
void IC1 ( J1939_MESSAGE_T *J1939_MESSAGE,getIC1_t *IC1)
{
    J1939_MESSAGE->PGN = 0x00FEF6 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = IC1->Engine_Diesel_Particulate_Filter_Intake_Pressure;
    J1939_MESSAGE->data[2] = IC1->Engine_Intake_Manifold_1_Pressure;
    J1939_MESSAGE->data[3] = IC1->Engine_Intake_Manifold_1_Temperature;
    J1939_MESSAGE->data[4] = IC1->Engine_Air_Intake_Pressure;
    J1939_MESSAGE->data[5] = IC1->Engine_Air_Filter_1_Differential_Pressure;
    J1939_MESSAGE->data[6] = (uint8_t)(IC1->Engine_Exhaust_Gas_Temperature>>8);
    J1939_MESSAGE->data[7] = (uint8_t)(IC1->Engine_Exhaust_Gas_Temperature);
    J1939_MESSAGE->data[8] = IC1->Engine_Coolant_Filter_Differential_Pressure;
}
void VEP1 ( J1939_MESSAGE_T *J1939_MESSAGE,getVEP1_t *VEP1)
{
    J1939_MESSAGE->PGN = 0x00FEF7 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = VEP1->Net_Battery_Current;
    J1939_MESSAGE->data[2] = VEP1->Alternator_Current;
    J1939_MESSAGE->data[3] = (uint8_t)(VEP1->Charging_System_Potential__Voltage_>>8);
    J1939_MESSAGE->data[4] = (uint8_t)(VEP1->Charging_System_Potential__Voltage_);
    J1939_MESSAGE->data[5] = (uint8_t)(VEP1->Battery_Potential___Power_Input_1>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(VEP1->Battery_Potential___Power_Input_1);
    J1939_MESSAGE->data[7] = (uint8_t)(VEP1->Keyswitch_Battery_Potential>>8);
    J1939_MESSAGE->data[8] = (uint8_t)(VEP1->Keyswitch_Battery_Potential);
}
void TRF1 ( J1939_MESSAGE_T *J1939_MESSAGE,getTRF1_t *TRF1)
{
    J1939_MESSAGE->PGN = 0x00FEF8 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = TRF1->Clutch_Pressure;
    J1939_MESSAGE->data[2] = TRF1->Transmission_Oil_Level_1;
    J1939_MESSAGE->data[3] = TRF1->Transmission_Filter_Differential_Pressure;
    J1939_MESSAGE->data[4] = TRF1->Transmission_Oil_Pressure;
    J1939_MESSAGE->data[5] = (uint8_t)(TRF1->Transmission_Oil_Temperature_1>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(TRF1->Transmission_Oil_Temperature_1);
    J1939_MESSAGE->data[7] = TRF1->Transmission_Oil_Level_1_High___Low;
    J1939_MESSAGE->data[8] |= (uint8_t)(TRF1->bt8.Transmission_Oil_Level_1_Countdown_Timer)<<1;
    J1939_MESSAGE->data[8] |= (uint8_t)(TRF1->bt8.Transmission_Oil_Level_1_Measurement_Status)<<5;
}
void AI ( J1939_MESSAGE_T *J1939_MESSAGE,getAI_t *AI)
{
    J1939_MESSAGE->PGN = 0x00FEF9 ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AI->Steering_Axle_Temperature;
    J1939_MESSAGE->data[2] |= (uint8_t)(AI->bt2.Drive_Axle_Location)<<1;
    J1939_MESSAGE->data[3] = AI->Drive_Axle_Lift_Air_Pressure;
    J1939_MESSAGE->data[4] = AI->Drive_Axle_Temperature;
    J1939_MESSAGE->data[5] = AI->Drive_Axle_Lube_Pressure;
    J1939_MESSAGE->data[8] = AI->Steering_Axle_Lube_Pressure;
}
void B ( J1939_MESSAGE_T *J1939_MESSAGE,getB_t *B)
{
    J1939_MESSAGE->PGN = 0x00FEFA ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = B->Brake_Application_Pressure;
    J1939_MESSAGE->data[2] = B->Brake_Primary_Pressure;
    J1939_MESSAGE->data[3] = B->Brake_Secondary_Pressure;
    J1939_MESSAGE->data[4] |= (uint8_t)(B->bt4.Parking_Brake_Actuator)<<1;
    J1939_MESSAGE->data[4] |= (uint8_t)(B->bt4.Parking_Brake_Red_Warning_Signal)<<3;
    J1939_MESSAGE->data[4] |= (uint8_t)(B->bt4.Park_Brake_Release_Inhibit_Status)<<5;
}
void RF ( J1939_MESSAGE_T *J1939_MESSAGE,getRF_t *RF)
{
    J1939_MESSAGE->PGN = 0x00FEFB ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = RF->Hydraulic_Retarder_Pressure;
    J1939_MESSAGE->data[2] = RF->Hydraulic_Retarder_Oil_Temperature;
    J1939_MESSAGE->data[3] |= (uint8_t)(RF->bt3.Driveline_Retarder_Overheat_Indicator)<<1;
}
void DD ( J1939_MESSAGE_T *J1939_MESSAGE,getDD_t *DD)
{
    J1939_MESSAGE->PGN = 0x00FEFC ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = DD->Washer_Fluid_Level;
    J1939_MESSAGE->data[2] = DD->Fuel_Level_1;
    J1939_MESSAGE->data[3] = DD->Engine_Fuel_Filter_Differential_Pressure;
    J1939_MESSAGE->data[4] = DD->Engine_Oil_Filter_Differential_Pressure;
    J1939_MESSAGE->data[5] = (uint8_t)(DD->Cargo_Ambient_Temperature>>8);
    J1939_MESSAGE->data[6] = (uint8_t)(DD->Cargo_Ambient_Temperature);
    J1939_MESSAGE->data[7] = DD->Fuel_Level_2;
}
void A1 ( J1939_MESSAGE_T *J1939_MESSAGE,getA1_t *A1)
{
    J1939_MESSAGE->PGN = 0x00FEFD ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = A1->Engine_Blower_Bypass_Valve_Position;
    J1939_MESSAGE->data[2] = (uint8_t)(A1->Engine_Gas_Supply_Pressure>>8);
    J1939_MESSAGE->data[3] = (uint8_t)(A1->Engine_Gas_Supply_Pressure);
}
void AWPP ( J1939_MESSAGE_T *J1939_MESSAGE,getAWPP_t *AWPP)
{
    J1939_MESSAGE->PGN = 0x00FEFE ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] = AWPP->Auxiliary_Pump_Pressure;
}
/*
void OI ( J1939_MESSAGE_T *J1939_MESSAGE,getOI_t *OI)
{
    J1939_MESSAGE->PGN = 0x00FEFF ;
    J1939_MESSAGE->byte_count = 8;
    J1939_MESSAGE->data[1] |= (uint8_t)(OI->bt1.Water_In_Fuel_Indicator)<<1;
    J1939_MESSAGE->data[1] |= (uint8_t)(OI->bt1.Operator_Shift_Prompt)<<3;
    J1939_MESSAGE->data[2] |= (uint8_t)(OI->bt2.Driver_Warning_System_Indicator_Status)<<1;
    J1939_MESSAGE->data[2] |= (uint8_t)(OI->bt2.Emission_Control_System_Operator_Inducement_Severity)<<4;
}*/

void config_TSC1 (getTSC1_t *TSC1)
{
    TSC1 -> bt1.Engine_Override_Control_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    TSC1 -> bt1.Engine_Requested_Speed_Control_Conditions= Parameter_Translate(2 , 4.0 , 2.0);
    TSC1 -> bt1.Override_Control_Mode_Priority= Parameter_Translate(2 , 4.0 , 2.0);
    TSC1 -> Engine_Requested_Speed_Speed_Limit= Parameter_Translate(6425 , 0.125 , 0.0);
    TSC1 -> Engine_Requested_Torque_Torque_Limit= Parameter_Translate(100 , 1.0 , -125.0);
    TSC1 -> bt5.TSC1_Transmission_Rate= Parameter_Translate(5 , 8.0 , 3.0);
    TSC1 -> bt5.TSC1_Control_Purpose= Parameter_Translate(24 , 32.0 , 5.0);
    TSC1 -> bt6.Engine_Requested_Torque__High_Resolution= Parameter_Translate(0 , 0.125 , 0.0);
    TSC1 -> bt8.Message_Counter= Parameter_Translate(12 , 1.0 , 0.0);
    TSC1 -> bt8.Message_Checksum= Parameter_Translate(12 , 1.0 , 0.0);
}
void config_TC1 (getTC1_t *TC1)
{
    TC1 -> bt1.Transmission_Gear_Shift_Inhibit_Request= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt1.Transmission_Torque_Converter_Lockup_Disable_Request= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt1.Disengage_Driveline_Request= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> Requested_Percent_Clutch_Slip= Parameter_Translate(80 , 0.4 , 0.0);
    TC1 -> Transmission_Requested_Gear= Parameter_Translate(100 , 1.0 , -125.0);
    TC1 -> bt4.Disengage_Differential_Lock_Request___Front_Axle_1= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt4.Disengage_Differential_Lock_Request___Front_Axle_2= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt4.Disengage_Differential_Lock_Request___Rear_Axle_1= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt4.Disengage_Differential_Lock_Request___Rear_Axle_2= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt5.Disengage_Differential_Lock_Request___Central= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt5.Disengage_Differential_Lock_Request___Central_Front= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt5.Disengage_Differential_Lock_Request___Central_Rear= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt5.Transmission_Load_Reduction_Inhibit_Request= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt6.Transmission_Mode_1= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt6.Transmission_Mode_2= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt6.Transmission_Mode_3= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt6.Transmission_Mode_4= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt7.Transmission_Requested_Launch_Gear= Parameter_Translate(12 , 16.0 , 4.0);
    TC1 -> bt7.Transmission_Shift_Selector_Display_Mode_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt8.Transmission_Mode_5= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt8.Transmission_Mode_6= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt8.Transmission_Mode_7= Parameter_Translate(2 , 4.0 , 2.0);
    TC1 -> bt8.Transmission_Mode_8= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_XBR (getXBR_t *XBR)
{
    XBR -> External_Acceleration_Demand= Parameter_Translate(12 , 1.0 , 2048.0);
    XBR -> bt3.XBR_EBI_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    XBR -> bt3.XBR_Priority= Parameter_Translate(2 , 4.0 , 2.0);
    XBR -> bt3.XBR_Control_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    XBR -> XBR_urgency= Parameter_Translate(80 , 0.4 , 0.0);
    XBR -> bt8.XBR_Message_Counter= Parameter_Translate(12 , 1.0 , 0.0);
    XBR -> bt8.XBR_Message_Checksum= Parameter_Translate(12 , 1.0 , 0.0);
}
void config_GPV4 (getGPV4_t *GPV4)
{
    GPV4 -> Valve_Load_Sense_Pressure= Parameter_Translate(257020 , 5.0 , 0.0);
    GPV4 -> Valve_Pilot_Pressure= Parameter_Translate(3200 , 16.0 , 0.0);
    GPV4 -> Valve_Assembly_Load_sense_Pressure= Parameter_Translate(257020 , 5.0 , 0.0);
    GPV4 -> Valve_Assembly_Supply_Pressure= Parameter_Translate(257020 , 5.0 , 0.0);
}
void config_AUXIO5 (getAUXIO5_t *AUXIO5)
{
    AUXIO5 -> Auxiliary_I_O_Channel_6= Parameter_Translate(51404 , 1.0 , 0.0);
    AUXIO5 -> Auxiliary_I_O_Channel_5= Parameter_Translate(51404 , 1.0 , 0.0);
    AUXIO5 -> Auxiliary_I_O_Channel_4= Parameter_Translate(51404 , 1.0 , 0.0);
    AUXIO5 -> Auxiliary_I_O_Channel_3= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_SRASI (getSRASI_t *SRASI)
{
    SRASI -> Static_Roll_Angle= Parameter_Translate(100 , 1.0 , -125.0);
    SRASI -> bt2.Static_Roll_Angle_Status= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_CCVS2 (getCCVS2_t *CCVS2)
{
    CCVS2 -> bt1.Cruise_Control_Disable_Command= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS2 -> bt1.Cruise_Control_Resume_Command= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS2 -> bt1.Cruise_Control_Pause_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AEBS2 (getAEBS2_t *AEBS2)
{
    AEBS2 -> bt1.Driver_activation_demand_for_Advanced_Emergency_Braking_System= Parameter_Translate(2 , 4.0 , 2.0);
    AEBS2 -> bt8.AEBS2_message_Counter= Parameter_Translate(12 , 1.0 , 0.0);
    AEBS2 -> bt8.AEBS2_message_checksum= Parameter_Translate(12 , 1.0 , 0.0);
}
void config_ESR (getESR_t *ESR)
{
    ESR -> bt1.Desired_Engine_Fueling_State= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_RBR (getRBR_t *RBR)
{
    RBR -> Unique_Beacon_Message_Identifier_Number= Parameter_Translate(51404 , 1.0 , 0.0);
    RBR -> bt3.Radio_Beacon_Direction= Parameter_Translate(2 , 4.0 , 2.0);
    RBR -> Transmitter_ID_2= Parameter_Translate(13159708 , 1.0 , 0.0);
    RBR -> Wireless_Signal_Strength_2= Parameter_Translate(0 , 0.5 , 0.0);
}
void config_ECC (getECC_t *ECC)
{
    ECC -> bt1.Coolant_Level_Engine_Protection_Shutdown_Override_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_SFC (getSFC_t *SFC)
{
    SFC -> bt1.Supplemental_Fan_Enable_Command= Parameter_Translate(2 , 4.0 , 2.0);
    SFC -> bt1.Supplemental_Fan_Direction_Command= Parameter_Translate(2 , 4.0 , 2.0);
    SFC -> Supplemental_Fan_Speed_Command= Parameter_Translate(25702 , 0.5 , 0.0);
    SFC -> bt4.Supplemental_Fan_Power_Hold= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_VLS1 (getVLS1_t *VLS1)
{
    VLS1 -> bt1.Lubrication_Cycle_Mode_Lock_Command= Parameter_Translate(2 , 4.0 , 2.0);
    VLS1 -> bt1.Lubrication_Cycle_Set_Command= Parameter_Translate(5 , 8.0 , 3.0);
    VLS1 -> bt1.Lubrication_Operation_Mode_Set_Command= Parameter_Translate(5 , 8.0 , 3.0);
    VLS1 -> bt2.Lubrication_Pump_Enable_Command= Parameter_Translate(2 , 4.0 , 2.0);
    VLS1 -> bt2.Lubrication_Timing_Cycle_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_HCDI1 (getHCDI1_t *HCDI1)
{
    HCDI1 -> Requested_Fuel_Mass_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    HCDI1 -> bt3.HC_Doser_Status= Parameter_Translate(5 , 8.0 , 3.0);
    HCDI1 -> bt3.HC_Doser_Injecting_Status= Parameter_Translate(2 , 4.0 , 2.0);
    HCDI1 -> bt3.Diagnostic_Status_of_HC_Doser= Parameter_Translate(5 , 8.0 , 3.0);
    HCDI1 -> bt4.Hydrocarbon_Doser_Purging_Required= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT1DPFSSC (getAT1DPFSSC_t *AT1DPFSSC)
{
    AT1DPFSSC -> Aftertreatment_1_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1DPFSSC -> Aftertreatment_1_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT2DPFSSC (getAT2DPFSSC_t *AT2DPFSSC)
{
    AT2DPFSSC -> Aftertreatment_2_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset= Parameter_Translate(128 , 0.0025 , 0.0);
    AT2DPFSSC -> Aftertreatment_2_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_LVDSOM (getLVDSOM_t *LVDSOM)
{
    LVDSOM -> bt1.Low_Voltage_Disconnect_Desired_Operating_Mode= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_NCS (getNCS_t *NCS)
{
    NCS -> bt1.Cab_Noise_Control_Status= Parameter_Translate(2 , 4.0 , 2.0);
    NCS -> bt1.Cab_Noise_Control_Tuning_Status= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_NC1 (getNC1_t *NC1)
{
    NC1 -> bt1.Cab_Noise_Control_Command= Parameter_Translate(2 , 4.0 , 2.0);
    NC1 -> bt1.Cab_Noise_Control_Tuning_Command= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_JLCM (getJLCM_t *JLCM)
{
    JLCM -> bt1.Joystick_1_Lamp_1_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt1.Joystick_1_Lamp_2_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt1.Joystick_1_Lamp_3_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt1.Joystick_1_Lamp_4_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt2.Joystick_1_Lamp_5_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt2.Joystick_1_Lamp_6_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt2.Joystick_1_Lamp_7_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt2.Joystick_1_Lamp_8_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt3.Joystick_1_Lamp_9_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt3.Joystick_1_Lamp_10_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt3.Joystick_2_Lamp_1_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt3.Joystick_2_Lamp_2_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt4.Joystick_2_Lamp_3_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt4.Joystick_2_Lamp_4_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt4.Joystick_2_Lamp_5_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt4.Joystick_2_Lamp_6_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt5.Joystick_2_Lamp_7_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt5.Joystick_2_Lamp_8_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt5.Joystick_2_Lamp_9_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt5.Joystick_2_Lamp_10_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt6.Joystick_3_Lamp_1_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt6.Joystick_3_Lamp_2_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt6.Joystick_3_Lamp_3_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt6.Joystick_3_Lamp_4_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt7.Joystick_3_Lamp_5_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt7.Joystick_3_Lamp_6_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt7.Joystick_3_Lamp_7_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt7.Joystick_3_Lamp_8_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt8.Joystick_3_Lamp_9_Command= Parameter_Translate(2 , 4.0 , 2.0);
    JLCM -> bt8.Joystick_3_Lamp_10_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AUXIO7 (getAUXIO7_t *AUXIO7)
{
    AUXIO7 -> Auxiliary_I_O_Channel_18= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_17= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_16= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_15= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_22= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_21= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_20= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_19= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_AUXIO6 (getAUXIO6_t *AUXIO6)
{
    AUXIO6 -> Auxiliary_I_O_Channel_10= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_9= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_8= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_7= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_14= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_13= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_12= Parameter_Translate(200 , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_11= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_AUXIO4 (getAUXIO4_t *AUXIO4)
{
    AUXIO4 -> bt1.Auxiliary_I_O_84= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt1.Auxiliary_I_O_83= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt1.Auxiliary_I_O_82= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt1.Auxiliary_I_O_81= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt2.Auxiliary_I_O_88= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt2.Auxiliary_I_O_87= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt2.Auxiliary_I_O_86= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt2.Auxiliary_I_O_85= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt3.Auxiliary_I_O_92= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt3.Auxiliary_I_O_91= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt3.Auxiliary_I_O_90= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt3.Auxiliary_I_O_89= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt4.Auxiliary_I_O_96= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt4.Auxiliary_I_O_95= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt4.Auxiliary_I_O_94= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt4.Auxiliary_I_O_93= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt5.Auxiliary_I_O_100= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt5.Auxiliary_I_O_99= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt5.Auxiliary_I_O_98= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt5.Auxiliary_I_O_97= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt6.Auxiliary_I_O_104= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt6.Auxiliary_I_O_103= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt6.Auxiliary_I_O_102= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt6.Auxiliary_I_O_101= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt7.Auxiliary_I_O_108= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt7.Auxiliary_I_O_107= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt7.Auxiliary_I_O_106= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt7.Auxiliary_I_O_105= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt8.Auxiliary_I_O_112= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt8.Auxiliary_I_O_111= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt8.Auxiliary_I_O_110= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO4 -> bt8.Auxiliary_I_O_109= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AUXIO3 (getAUXIO3_t *AUXIO3)
{
    AUXIO3 -> bt1.Auxiliary_I_O_52= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt1.Auxiliary_I_O_51= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt1.Auxiliary_I_O_50= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt1.Auxiliary_I_O_49= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt2.Auxiliary_I_O_56= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt2.Auxiliary_I_O_55= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt2.Auxiliary_I_O_54= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt2.Auxiliary_I_O_53= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt3.Auxiliary_I_O_60= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt3.Auxiliary_I_O_59= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt3.Auxiliary_I_O_58= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt3.Auxiliary_I_O_57= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt4.Auxiliary_I_O_64= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt4.Auxiliary_I_O_63= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt4.Auxiliary_I_O_62= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt4.Auxiliary_I_O_61= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt5.Auxiliary_I_O_68= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt5.Auxiliary_I_O_67= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt5.Auxiliary_I_O_66= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt5.Auxiliary_I_O_65= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt6.Auxiliary_I_O_72= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt6.Auxiliary_I_O_71= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt6.Auxiliary_I_O_70= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt6.Auxiliary_I_O_69= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt7.Auxiliary_I_O_76= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt7.Auxiliary_I_O_75= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt7.Auxiliary_I_O_74= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt7.Auxiliary_I_O_73= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt8.Auxiliary_I_O_80= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt8.Auxiliary_I_O_79= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt8.Auxiliary_I_O_78= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO3 -> bt8.Auxiliary_I_O_77= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AUXIO2 (getAUXIO2_t *AUXIO2)
{
    AUXIO2 -> bt1.Auxiliary_I_O_20= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt1.Auxiliary_I_O_19= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt1.Auxiliary_I_O_18= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt1.Auxiliary_I_O_17= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt2.Auxiliary_I_O_24= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt2.Auxiliary_I_O_23= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt2.Auxiliary_I_O_22= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt2.Auxiliary_I_O_21= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt3.Auxiliary_I_O_28= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt3.Auxiliary_I_O_27= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt3.Auxiliary_I_O_26= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt3.Auxiliary_I_O_25= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt4.Auxiliary_I_O_32= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt4.Auxiliary_I_O_31= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt4.Auxiliary_I_O_30= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt4.Auxiliary_I_O_29= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt5.Auxiliary_I_O_36= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt5.Auxiliary_I_O_35= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt5.Auxiliary_I_O_34= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt5.Auxiliary_I_O_33= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt6.Auxiliary_I_O_40= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt6.Auxiliary_I_O_39= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt6.Auxiliary_I_O_38= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt6.Auxiliary_I_O_37= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt7.Auxiliary_I_O_44= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt7.Auxiliary_I_O_43= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt7.Auxiliary_I_O_42= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt7.Auxiliary_I_O_41= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt8.Auxiliary_I_O_48= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt8.Auxiliary_I_O_47= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt8.Auxiliary_I_O_46= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO2 -> bt8.Auxiliary_I_O_45= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_DISP1 (getDISP1_t *DISP1)
{
    DISP1 -> bt1.Text_Display_Instructions= Parameter_Translate(12 , 16.0 , 4.0);
    DISP1 -> Text_Display_Index= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_FLIC (getFLIC_t *FLIC)
{
    FLIC -> bt1.Lane_Departure_Warning_Enable_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_TPRS (getTPRS_t *TPRS)
{
    TPRS -> bt1.Tire_Location= Parameter_Translate(204 , 256.0 , 8.0);
    TPRS -> Reference_Tire_Pressure_Setting= Parameter_Translate(1600 , 8.0 , 0.0);
}
void config_CTL (getCTL_t *CTL)
{
    CTL -> Engine_Speed_Limit_Request___Minimum_Continuous= Parameter_Translate(6400 , 32.0 , 0.0);
    CTL -> Engine_Speed_Limit_Request___Maximum_Continuous= Parameter_Translate(6400 , 32.0 , 0.0);
    CTL -> Engine_Torque_Limit_Request___Minimum_Continuous= Parameter_Translate(100 , 1.0 , -125.0);
    CTL -> Engine_Torque_Limit_Request___Maximum_Continuous= Parameter_Translate(100 , 1.0 , -125.0);
    CTL -> Minimum_Continuous_Retarder_Speed_Limit_Request= Parameter_Translate(6400 , 32.0 , 0.0);
    CTL -> Maximum_Continuous_Retarder_Speed_Limit_Request= Parameter_Translate(6400 , 32.0 , 0.0);
    CTL -> Minimum_Continuous_Retarder_Torque_Limit_Request= Parameter_Translate(100 , 1.0 , -125.0);
    CTL -> Maximum_Continuous_Retarder_Torque_Limit_Request= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_CL (getCL_t *CL)
{
    CL -> Illumination_Brightness_Percent= Parameter_Translate(80 , 0.4 , 0.0);
    CL -> Switch_Backlight_Illumination_Brightness_Percent= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_ASC6 (getASC6_t *ASC6)
{
    ASC6 -> Level_Preset_Front_Axle_Left= Parameter_Translate(2580 , 0.1 , -3.0);
    ASC6 -> Level_Preset_Front_Axle_Right= Parameter_Translate(2580 , 0.1 , -3.0);
    ASC6 -> Level_Preset_Rear_Axle_Left= Parameter_Translate(2580 , 0.1 , -3.0);
    ASC6 -> Level_Preset_Rear_Axle_Right= Parameter_Translate(2580 , 0.1 , -3.0);
}
void config_ASC2 (getASC2_t *ASC2)
{
    ASC2 -> bt1.Automatic_traction_help__load_transfer_= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt1.Kneeling_Request_Left_Side= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt1.Kneeling_Request_Right_Side= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt1.Kneeling_Control_Mode_Request= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt2.Nominal_Level_Request_Front_Axle= Parameter_Translate(12 , 16.0 , 4.0);
    ASC2 -> bt2.Nominal_Level_Request_Rear_Axle= Parameter_Translate(12 , 16.0 , 4.0);
    ASC2 -> bt3.Level_Control_Mode_Request= Parameter_Translate(12 , 16.0 , 4.0);
    ASC2 -> bt3.Lift_Axle_1_Position_Command= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt3.Lift_Axle_2_Position_Command= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> Damper_Stiffness_Request_Front_Axle= Parameter_Translate(80 , 0.4 , 0.0);
    ASC2 -> Damper_Stiffness_Request_Rear_Axle= Parameter_Translate(80 , 0.4 , 0.0);
    ASC2 -> Damper_Stiffness_Request_Lift___Tag_Axle= Parameter_Translate(80 , 0.4 , 0.0);
    ASC2 -> bt7.Kneeling_Command___Front_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt7.Kneeling_Command___Rear_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt7.Prohibit_air_suspension_control= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt7.Allow_Level_Control_During_Braking_Command= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt8.Speed_Dependent_Level_Control_Request= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt8.Prohibit_Automatic_Air_Suspension_Control= Parameter_Translate(2 , 4.0 , 2.0);
    ASC2 -> bt8.Memory_level_request= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_TDA (getTDA_t *TDA)
{
    TDA -> Adjust_seconds= Parameter_Translate(50 , 0.25 , 0.0);
    TDA -> Adjust_minutes= Parameter_Translate(200 , 1.0 , 0.0);
    TDA -> Adjust_hours= Parameter_Translate(200 , 1.0 , 0.0);
    TDA -> Adjust_month= Parameter_Translate(200 , 1.0 , 0.0);
    TDA -> Adjust_day= Parameter_Translate(50 , 0.25 , 0.0);
    TDA -> Adjust_year= Parameter_Translate(1788 , 1.0 , 1985.0);
    TDA -> Adjust_local_minute_offset= Parameter_Translate(100 , 1.0 , -125.0);
    TDA -> Adjust_local_hour_offset= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_ATS (getATS_t *ATS)
{
    ATS -> bt1.Anti_theft_Encryption_Seed_Present_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ATS -> bt1.Anti_theft_Password_Valid_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ATS -> bt1.Anti_theft_Component_Status_States= Parameter_Translate(2 , 4.0 , 2.0);
    ATS -> bt1.Anti_theft_Modify_Password_States= Parameter_Translate(2 , 4.0 , 2.0);
    ATS -> Anti_theft_Random_Number= Parameter_Translate(204 , 4.0 , 2.0);
}
void config_ATR (getATR_t *ATR)
{
    ATR -> bt1.Anti_theft_Encryption_Indicator_States= Parameter_Translate(2 , 4.0 , 2.0);
    ATR -> bt1.Anti_theft_Desired_Exit_Mode_States= Parameter_Translate(2 , 4.0 , 2.0);
    ATR -> bt1.Anti_theft_Command_States= Parameter_Translate(5 , 8.0 , 3.0);
    ATR -> Anti_theft_Password_Representation= Parameter_Translate(204 , 8.0 , 3.0);
}
/*
void config_RESET (getRESET_t *RESET)
{
    RESET -> bt1.Trip_Group_1= Parameter_Translate(2 , 4.0 , 2.0);
    RESET -> bt1.Trip_Group_2___Proprietary= Parameter_Translate(2 , 4.0 , 2.0);
    RESET -> Service_Component_Identification= Parameter_Translate(200 , 1.0 , 0.0);
    RESET -> bt3.Engine_Build_Hours_Reset= Parameter_Translate(2 , 4.0 , 2.0);
    RESET -> bt3.Steering_Straight_Ahead_Position_Reset= Parameter_Translate(2 , 4.0 , 2.0);
}
*/
void config_CM1 (getCM1_t *CM1)
{
    CM1 -> Requested_Percent_Fan_Speed= Parameter_Translate(80 , 0.4 , 0.0);
    CM1 -> Cab_Interior_Temperature_Command= Parameter_Translate(1387 , 0.03125 , -273.0);
    CM1 -> bt4.Auxiliary_Heater_Coolant_Pump_Request= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt4.Battery_Main_Switch_Hold_Request= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt4.Operator_Seat_Direction_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt4.Seat_Belt_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt5.Park_Brake_Command= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt5.Vehicle_Limiting_Speed_Governor_Decrement_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt5.Vehicle_Limiting_Speed_Governor_Increment_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt5.Vehicle_Limiting_Speed_Governor_Enable_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt6.Diesel_Particulate_Filter_Regeneration_Force_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt6.Automatic_Gear_Shifting_Enable_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt6.Engine_Automatic_Start_Enable_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt7.Auxiliary_Heater_Mode_Request= Parameter_Translate(12 , 16.0 , 4.0);
    CM1 -> bt7.Request_Engine_Zone_Heating= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> bt7.Request_Cab_Zone_Heating= Parameter_Translate(2 , 4.0 , 2.0);
    CM1 -> Selected_Maximum_Vehicle_Speed_Limit= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_ERC1 (getERC1_t *ERC1)
{
    ERC1 -> bt1.Retarder_Torque_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    ERC1 -> bt1.Retarder_Enable___Brake_Assist_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ERC1 -> bt1.Retarder_Enable___Shift_Assist_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ERC1 -> Actual_Retarder___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    ERC1 -> Intended_Retarder_Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    ERC1 -> bt4.Engine_Coolant_Load_Increase= Parameter_Translate(2 , 4.0 , 2.0);
    ERC1 -> bt4.Retarder_Requesting_Brake_Light= Parameter_Translate(2 , 4.0 , 2.0);
    ERC1 -> bt4.Retarder_Road_Speed_Limit_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ERC1 -> bt4.Retarder_Road_Speed_Exceeded_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ERC1 -> Source_Address_of_Controlling_Device_for_Retarder_Control= Parameter_Translate(204 , 1.0 , 0.0);
    ERC1 -> Drivers_Demand_Retarder__= Parameter_Translate(100 , 1.0 , -125.0);
    ERC1 -> Retarder_Selection_non_engine= Parameter_Translate(80 , 0.4 , 0.0);
    ERC1 -> Actual_Maximum_Available_Retarder___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_EBC1 (getEBC1_t *EBC1)
{
    EBC1 -> bt1.ASR_Engine_Control_Active= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt1.ASR_Brake_Control_Active= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt1.Anti_Lock_Braking__ABS__Active= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt1.EBS_Brake_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> Brake_Pedal_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EBC1 -> bt3.ABS_Off_road_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt3.ASR_Off_road_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt3.ASR__Hill_Holder__Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt3.Traction_Control_Override_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt4.Accelerator_Interlock_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt4.Engine_Derate_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt4.Engine_Auxiliary_Shutdown_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt4.Remote_Accelerator_Enable_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> Engine_Retarder_Selection= Parameter_Translate(80 , 0.4 , 0.0);
    EBC1 -> bt6.ABS_Fully_Operational= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt6.EBS_Red_Warning_Signal= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt6.ABS_EBS_Amber_Warning_Signal__Powered_Vehicle_= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt6.ATC_ASR_Information_Signal= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> Source_Address_of_Controlling_Device_for_Brake_Control= Parameter_Translate(204 , 1.0 , 0.0);
    EBC1 -> bt8.Halt_brake_switch= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt8.Trailer_ABS_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EBC1 -> bt8.Tractor_Mounted_Trailer_ABS_Warning_Signal= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ETC1 (getETC1_t *ETC1)
{
    ETC1 -> bt1.Transmission_Driveline_Engaged= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> bt1.Transmission_Torque_Converter_Lockup_Engaged= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> bt1.Transmission_Shift_In_Process= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> bt1.Transmission_Torque_Converter_Lockup_Transition_in_Process= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> Transmission_Output_Shaft_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    ETC1 -> Percent_Clutch_Slip= Parameter_Translate(80 , 0.4 , 0.0);
    ETC1 -> bt5.Engine_Momentary_Overspeed_Enable= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> bt5.Progressive_Shift_Disable= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> bt5.Momentary_Engine_Maximum_Power_Enable= Parameter_Translate(2 , 4.0 , 2.0);
    ETC1 -> Transmission_Input_Shaft_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    ETC1 -> Source_Address_of_Controlling_Device_for_Transmission_Control= Parameter_Translate(204 , 1.0 , 0.0);
}
void config_EEC2 (getEEC2_t *EEC2)
{
    EEC2 -> bt1.Accelerator_Pedal_1_Low_Idle_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> bt1.Accelerator_Pedal_Kickdown_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> bt1.Road_Speed_Limit_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> bt1.Accelerator_Pedal_2_Low_Idle_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> Accelerator_Pedal_Position_1= Parameter_Translate(80 , 0.4 , 0.0);
    EEC2 -> Engine_Percent_Load_At_Current_Speed= Parameter_Translate(200 , 1.0 , 0.0);
    EEC2 -> Remote_Accelerator_Pedal_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EEC2 -> Accelerator_Pedal_Position_2= Parameter_Translate(80 , 0.4 , 0.0);
    EEC2 -> bt6.Vehicle_Acceleration_Rate_Limit_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> bt6.Momentary_Engine_Maximum_Power_Enable_Feedback= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> bt6.DPF_Thermal_Management_Active= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> bt6.SCR_Thermal_Management_Active= Parameter_Translate(2 , 4.0 , 2.0);
    EEC2 -> Actual_Maximum_Available_Engine___Percent_Torque= Parameter_Translate(80 , 0.4 , 0.0);
    EEC2 -> Estimated_Pumping___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_EEC1 (getEEC1_t *EEC1)
{
    EEC1 -> bt1.Engine_Torque_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    EEC1 -> bt1.Actual_Engine___Percent_Torque_High_Resolution= Parameter_Translate(0 , 0.125 , 0.0);
    EEC1 -> Driver_s_Demand_Engine___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    EEC1 -> Actual_Engine___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    EEC1 -> Engine_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    EEC1 -> Source_Address_of_Controlling_Device_for_Engine_Control= Parameter_Translate(204 , 1.0 , 0.0);
    EEC1 -> bt7.Engine_Starter_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    EEC1 -> Engine_Demand_–_Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_ETC2 (getETC2_t *ETC2)
{
    ETC2 -> Transmission_Selected_Gear= Parameter_Translate(100 , 1.0 , -125.0);
    ETC2 -> Transmission_Actual_Gear_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    ETC2 -> Transmission_Current_Gear= Parameter_Translate(2 , 4.0 , 2.0);
    ETC2 -> Transmission_Requested_Range= Parameter_Translate(204 , 4.0 , 2.0);
    ETC2 -> Transmission_Current_Range= Parameter_Translate(204 , 4.0 , 2.0);
}
void config_EAC1 (getEAC1_t *EAC1)
{
    EAC1 -> bt1.Location= Parameter_Translate(204 , 256.0 , 8.0);
    EAC1 -> bt2.Differential_Lock_State___Front_Axle_1= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt2.Differential_Lock_State___Front_Axle_2= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt2.Differential_Lock_State___Rear_Axle_1= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt2.Differential_Lock_State___Rear_Axle_2= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt3.Differential_Lock_State___Central= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt3.Differential_Lock_State___Central_Front= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt3.Differential_Lock_State___Central_Rear= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt4.Front_axle_group_engagement_status= Parameter_Translate(2 , 4.0 , 2.0);
    EAC1 -> bt4.Rear_axle_group_engagement_status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_FLI1 (getFLI1_t *FLI1)
{
    FLI1 -> bt1.Lane_Departure_Left= Parameter_Translate(2 , 4.0 , 2.0);
    FLI1 -> bt1.Lane_Departure_Right= Parameter_Translate(2 , 4.0 , 2.0);
    FLI1 -> bt1.Lane_Departure_Imminent_Right_Side= Parameter_Translate(2 , 4.0 , 2.0);
    FLI1 -> bt1.Lane_Departure_Imminent_Left_Side= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_HPG (getHPG_t *HPG)
{
    HPG -> Hydraulic_Pressure= Parameter_Translate(102808 , 2.0 , 0.0);
    HPG -> bt3.Engine_Hydraulic_Pressure_Governor_Mode_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    HPG -> bt3.Engine_Hydraulic_Pressure_Governor_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    HPG -> bt3.Fire_Apparatus_Pump_Engagement= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_VDC2 (getVDC2_t *VDC2)
{
    VDC2 -> Steering_Wheel_Angle= Parameter_Translate(25 , 1.0 , 1024.0);
    VDC2 -> bt3.Steering_Wheel_Turn_Counter= Parameter_Translate(23 , 1.0 , -32.0);
    VDC2 -> bt3.Steering_Wheel_Angle_Sensor_Type= Parameter_Translate(2 , 4.0 , 2.0);
    VDC2 -> Yaw_Rate= Parameter_Translate(3 , 1.0 , 8192.0);
    VDC2 -> Lateral_Acceleration= Parameter_Translate(258 , 0.01 , -320.0);
    VDC2 -> Longitudinal_Acceleration= Parameter_Translate(10 , 0.1 , -12.5);
}
void config_EGF1 (getEGF1_t *EGF1)
{
    EGF1 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Mass_Flow_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    EGF1 -> Engine_Intake_Air_Mass_Flow_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    EGF1 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Mass_Flow_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
}
void config_ESC1 (getESC1_t *ESC1)
{
    ESC1 -> Actual_Inner_wheel_steering_angle= Parameter_Translate(100 , 1.0 , 256.0);
    ESC1 -> bt3.Axle_Location= Parameter_Translate(204 , 256.0 , 8.0);
    ESC1 -> bt4.Status_of_Steering_Axle= Parameter_Translate(12 , 16.0 , 4.0);
    ESC1 -> bt4.Steerable_Lift_Axle_Lowering_Inhibit= Parameter_Translate(2 , 4.0 , 2.0);
    ESC1 -> bt5.Steering_Type= Parameter_Translate(12 , 16.0 , 4.0);
    ESC1 -> bt5.Type_of_Steering_Forces= Parameter_Translate(12 , 16.0 , 4.0);
    ESC1 -> bt6.Type_of_Steering_Transmission= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_ETC8 (getETC8_t *ETC8)
{
    ETC8 -> Transmission_Torque_Converter_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    ETC8 -> Transmission_Clutch_Converter_Input_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
}
void config_LOI (getLOI_t *LOI)
{
    LOI -> bt1.Blade_Control_Mode_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt1.Desired_Grade_Offset_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt2.Blade_Auto_Mode_Command= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt2.Left_Blade_Control_Mode_Operator_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt3.Right_Blade_Control_Mode_Operator_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt3.Left_Desired_Blade_Offset_Operator_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt4.Right_Desired_Blade_Offset_Operator_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt4.Side_shift_Blade_Control_Mode_Operator_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt5.Side_shift_Desired_Blade_Offset_Operator_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LOI -> bt5.Set_Elevation_Sensor_1_Reference_Elevation= Parameter_Translate(2 , 4.0 , 2.0);
    LOI -> bt5.Set_Elevation_Sensor_2_Reference_Elevation= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT1IG1 (getAT1IG1_t *AT1IG1)
{
    AT1IG1 -> Aftertreatment_1_Intake_NOx= Parameter_Translate(2410 , 0.05 , -200.0);
    AT1IG1 -> Aftertreatment_1_Intake_O2= Parameter_Translate(16 , 0.000514 , -12.0);
    AT1IG1 -> bt5.Aftertreatment_1_Intake_Gas_Sensor_Power_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AT1IG1 -> bt5.Aftertreatment_1_Intake_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    AT1IG1 -> bt5.Aftertreatment_1_Intake_NOx_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT1IG1 -> bt5.Aftertreatment_1_Intake_Wide_Range___O2_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT1IG1 -> bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT1IG1 -> bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT1IG1 -> bt7.Aftertreatment_1_Intake_NOx_Sensor_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT1IG1 -> bt7.NOx_Sensor_ATI1_Self_diagnosis_Status= Parameter_Translate(5 , 8.0 , 3.0);
    AT1IG1 -> bt8.Aftertreatment_1_Intake_Oxygen_Sensor_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
}
void config_AT1OG1 (getAT1OG1_t *AT1OG1)
{
    AT1OG1 -> Aftertreatment_1_Outlet_NOx= Parameter_Translate(2410 , 0.05 , -200.0);
    AT1OG1 -> Aftertreatment_1_Outlet_O2= Parameter_Translate(16 , 0.000514 , -12.0);
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_Gas_Sensor_Power_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_NOx_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_Wide_Range__O2_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT1OG1 -> bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT1OG1 -> bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT1OG1 -> bt7.Aftertreatment_1_Outlet_NOx_Sensor_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT1OG1 -> bt7.NOx_Sensor_ATO1_Self_diagnosis_Status= Parameter_Translate(5 , 8.0 , 3.0);
    AT1OG1 -> bt8.Aftertreatment_1_Outlet_Oxygen_Sensor_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
}
void config_AT2IG1 (getAT2IG1_t *AT2IG1)
{
    AT2IG1 -> Aftertreatment_2_Intake_NOx= Parameter_Translate(2410 , 0.05 , -200.0);
    AT2IG1 -> Aftertreatment_2_Intake_O2= Parameter_Translate(16 , 0.000514 , -12.0);
    AT2IG1 -> bt5.Aftertreatment_2_Intake_Gas_Sensor_Power_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AT2IG1 -> bt5.Aftertreatment_2_Intake_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    AT2IG1 -> bt5.Aftertreatment_2_Intake_NOx_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT2IG1 -> bt5.Aftertreatment_2_Intake_Wide_Range___O2_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT2IG1 -> bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT2IG1 -> bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT2IG1 -> bt7.Aftertreatment_2_Intake_NOx_Sensor_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT2IG1 -> bt7.NOx_Sensor_ATI2_Self_diagnosis_Status= Parameter_Translate(5 , 8.0 , 3.0);
    AT2IG1 -> bt8.Aftertreatment_2_Intake_Oxygen_Sensor_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
}
void config_AT2OG1 (getAT2OG1_t *AT2OG1)
{
    AT2OG1 -> Aftertreatment_2_Outlet_NOx= Parameter_Translate(2410 , 0.05 , -200.0);
    AT2OG1 -> Aftertreatment_2_Outlet_O2= Parameter_Translate(16 , 0.000514 , -12.0);
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_Gas_Sensor_Power_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_NOx_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_Wide_Range___O2_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    AT2OG1 -> bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT2OG1 -> bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT2OG1 -> bt7.Aftertreatment_2_Outlet_NOx_Sensor_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    AT2OG1 -> bt7.NOx_Sensor_ATO2_Self_diagnosis_Status= Parameter_Translate(5 , 8.0 , 3.0);
    AT2OG1 -> bt8.Aftertreatment_2_Outlet_Oxygen_Sensor_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
}
void config_FWSS1 (getFWSS1_t *FWSS1)
{
    FWSS1 -> Fifth_Wheel_Vertical_Force= Parameter_Translate(257020 , 5.0 , 0.0);
    FWSS1 -> Fifth_Wheel_Drawbar_Force= Parameter_Translate(258040 , 10.0 , -320.0);
    FWSS1 -> Fifth_Wheel_Roll_Moment= Parameter_Translate(258040 , 10.0 , -320.0);
    FWSS1 -> bt7.Fifth_Wheel_Roll_Warning_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_SSI (getSSI_t *SSI)
{
    SSI -> Pitch_Angle= Parameter_Translate(51 , 0.002 , -64.0);
    SSI -> Roll_Angle= Parameter_Translate(51 , 0.002 , -64.0);
    SSI -> Pitch_Rate= Parameter_Translate(51 , 0.002 , -64.0);
    SSI -> bt7.Pitch_Angle_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    SSI -> bt7.Roll_Angle_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    SSI -> bt7.Pitch_Rate_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    SSI -> bt7.Pitch_and_Roll_Compensated= Parameter_Translate(2 , 4.0 , 2.0);
    SSI -> Roll_and_Pitch_Measurement_Latency= Parameter_Translate(100 , 0.5 , 0.0);
}
void config_BI (getBI_t *BI)
{
    BI -> Relative_Blade_Height= Parameter_Translate(2580 , 0.1 , -3.0);
    BI -> Blade_Rotation_Angle= Parameter_Translate(241 , 1.0 , 128.0);
    BI -> Relative_Blade_Height_and_Blade_Rotation_Angle_Measurement_Latency= Parameter_Translate(100 , 0.5 , 0.0);
    BI -> bt6.Relative_Blade_Height_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    BI -> bt6.Blade_Rotation_Angle_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_CCS (getCCS_t *CCS)
{
    CCS -> bt1.Engine_Cylinder_1_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt1.Engine_Cylinder_2_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt1.Engine_Cylinder_3_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt1.Engine_Cylinder_4_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt2.Engine_Cylinder_5_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt2.Engine_Cylinder_6_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt2.Engine_Cylinder_7_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt2.Engine_Cylinder_8_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt3.Engine_Cylinder_9_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt3.Engine_Cylinder_10_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt3.Engine_Cylinder_11_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt3.Engine_Cylinder_12_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt4.Engine_Cylinder_13_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt4.Engine_Cylinder_14_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt4.Engine_Cylinder_15_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt4.Engine_Cylinder_16_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt5.Engine_Cylinder_17_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt5.Engine_Cylinder_18_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt5.Engine_Cylinder_19_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt5.Engine_Cylinder_20_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt6.Engine_Cylinder_21_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt6.Engine_Cylinder_22_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt6.Engine_Cylinder_23_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCS -> bt6.Engine_Cylinder_24_Combustion_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_KL1 (getKL1_t *KL1)
{
    KL1 -> Engine_Cylinder_1_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_2_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_3_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_4_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_5_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_6_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_7_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_8_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_KL2 (getKL2_t *KL2)
{
    KL2 -> Engine_Cylinder_9_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_10_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_11_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_12_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_13_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_14_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_15_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_16_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_KL3 (getKL3_t *KL3)
{
    KL3 -> Engine_Cylinder_17_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_18_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_19_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_20_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_21_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_22_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_23_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_24_Knock_Level= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_TFAC (getTFAC_t *TFAC)
{
    TFAC -> Engine_Throttle_Actuator_1_Control_Command= Parameter_Translate(128 , 0.0025 , 0.0);
    TFAC -> Engine_Throttle_Actuator_2_Control_Command= Parameter_Translate(128 , 0.0025 , 0.0);
    TFAC -> Engine_Fuel_Actuator_1_Control_Command= Parameter_Translate(128 , 0.0025 , 0.0);
    TFAC -> Engine_Fuel_Actuator_2_Control_Command= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_SAS (getSAS_t *SAS)
{
    SAS -> Steering_Wheel_Angle= Parameter_Translate(25 , 1.0 , 1024.0);
    SAS -> bt3.Steering_Wheel_Angle_Range_Counter= Parameter_Translate(23 , 1.0 , -32.0);
    SAS -> bt3.Steering_Wheel_Angle_Range_Counter_Type= Parameter_Translate(2 , 4.0 , 2.0);
    SAS -> Steering_Wheel_Angle_Range= Parameter_Translate(25 , 1.0 , 1024.0);
    SAS -> bt7.Steering_Angle_Sensor_Active_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    SAS -> bt7.Steering_Angle_Sensor_Calibrated= Parameter_Translate(2 , 4.0 , 2.0);
    SAS -> bt8.Message_Counter= Parameter_Translate(12 , 1.0 , 0.0);
    SAS -> bt8.Message_Checksum= Parameter_Translate(12 , 1.0 , 0.0);
}
void config_ESSI (getESSI_t *ESSI)
{
    ESSI -> Engine_Speed_1= Parameter_Translate(25702 , 0.5 , 0.0);
    ESSI -> Engine_Speed_2= Parameter_Translate(25702 , 0.5 , 0.0);
    ESSI -> Engine_Speed_3= Parameter_Translate(25702 , 0.5 , 0.0);
    ESSI -> bt7.Engine_Speed_Sensor_3_Timing_Pattern_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ESSI -> bt7.Engine_Speed_Sensor_2_Timing_Pattern_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ESSI -> bt7.Engine_Speed_Sensor_1_Timing_Pattern_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_A1SCRDSI1 (getA1SCRDSI1_t *A1SCRDSI1)
{
    A1SCRDSI1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity= Parameter_Translate(15421 , 0.3 , 0.0);
    A1SCRDSI1 -> bt3.Aftertreatment_1_SCR_System_State= Parameter_Translate(12 , 16.0 , 4.0);
    A1SCRDSI1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator= Parameter_Translate(5140 , 0.1 , 0.0);
    A1SCRDSI1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Absolute_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
}
void config_A1SCRDSR1 (getA1SCRDSR1_t *A1SCRDSR1)
{
    A1SCRDSR1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity= Parameter_Translate(15421 , 0.3 , 0.0);
    A1SCRDSR1 -> bt3.Aftertreatment_1_SCR_System_Requested_State= Parameter_Translate(12 , 16.0 , 4.0);
    A1SCRDSR1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_A1SCRAI (getA1SCRAI_t *A1SCRAI)
{
    A1SCRAI -> Aftertreatment_1_Outlet_NH3= Parameter_Translate(2410 , 0.05 , -200.0);
    A1SCRAI -> bt3.Aftertreatment_1_Outlet_NH3_Sensor_Preliminary_FMI= Parameter_Translate(24 , 0.05 , -200.0);
    A1SCRAI -> bt4.Aftertreatment_1_Outlet_NH3_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRAI -> bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Power_In_Range= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRAI -> bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRAI -> bt5.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A1SCRAI -> bt6.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_A2SCRDSI1 (getA2SCRDSI1_t *A2SCRDSI1)
{
    A2SCRDSI1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity= Parameter_Translate(15421 , 0.3 , 0.0);
    A2SCRDSI1 -> bt3.Aftertreatment_2_SCR_System_State= Parameter_Translate(12 , 16.0 , 4.0);
    A2SCRDSI1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator= Parameter_Translate(5140 , 0.1 , 0.0);
    A2SCRDSI1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Absolute_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
}
void config_A2SCRDSR1 (getA2SCRDSR1_t *A2SCRDSR1)
{
    A2SCRDSR1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity= Parameter_Translate(15421 , 0.3 , 0.0);
    A2SCRDSR1 -> bt3.Aftertreatment_2_SCR_System_Requested_State= Parameter_Translate(12 , 16.0 , 4.0);
    A2SCRDSR1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_A2SCRAI (getA2SCRAI_t *A2SCRAI)
{
    A2SCRAI -> Aftertreatment_2_Outlet_NH3= Parameter_Translate(2410 , 0.05 , -200.0);
    A2SCRAI -> bt3.Aftertreatment_2_Outlet_NH3_Sensor_Preliminary_FMI= Parameter_Translate(24 , 0.05 , -200.0);
    A2SCRAI -> bt4.Aftertreatment_2_Outlet_NH3_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRAI -> bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Power_In_Range= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRAI -> bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRAI -> bt5.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A2SCRAI -> bt6.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_SSI2 (getSSI2_t *SSI2)
{
    SSI2 -> Pitch_Angle_Extended_Range= Parameter_Translate(200 , 1.0 , 32768.0);
    SSI2 -> Roll_Angle_Extended_Range= Parameter_Translate(200 , 1.0 , 32768.0);
    SSI2 -> bt7.Pitch_Angle_Extended_Range_Compensation= Parameter_Translate(2 , 4.0 , 2.0);
    SSI2 -> bt7.Pitch_Angle_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    SSI2 -> bt7.Roll_Angle_Extended_Range_Compensation= Parameter_Translate(2 , 4.0 , 2.0);
    SSI2 -> bt7.Roll_Angle_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    SSI2 -> Roll_and_Pitch_Extended_Range_Measurement_Latency= Parameter_Translate(100 , 0.5 , 0.0);
}
void config_ARI (getARI_t *ARI)
{
    ARI -> Pitch_Rate_Extended_Range= Parameter_Translate(200 , 1.0 , 128.0);
    ARI -> Roll_Rate_Extended_Range= Parameter_Translate(200 , 1.0 , 128.0);
    ARI -> Yaw_Rate_Extended_Range= Parameter_Translate(200 , 1.0 , 128.0);
    ARI -> bt7.Pitch_Rate_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    ARI -> bt7.Roll_Rate_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    ARI -> bt7.Yaw_Rate_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    ARI -> Angular_Rate_Measurement_Latency= Parameter_Translate(100 , 0.5 , 0.0);
}
void config_CN (getCN_t *CN)
{
    CN -> bt8.Crash_Counter= Parameter_Translate(12 , 1.0 , 0.0);
    CN -> bt8.Crash_Checksum= Parameter_Translate(12 , 1.0 , 0.0);
}
void config_MSI2 (getMSI2_t *MSI2)
{
    MSI2 -> Magnet_Forward_Current= Parameter_Translate(51404 , 1.0 , 0.0);
    MSI2 -> Magnet_Reverse_Current= Parameter_Translate(200 , 1.0 , 0.0);
    MSI2 -> bt4.Material_Lift_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt4.Material_Drop_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt4.Generator_Current_Boost_Active_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt4.Material_Lift_Active_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt5.Material_Drop_Active_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt5.Lift_Relay_Control= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt5.Drop_Relay_Control= Parameter_Translate(2 , 4.0 , 2.0);
    MSI2 -> bt5.Magnet_Generator_Control= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ACCS (getACCS_t *ACCS)
{
    ACCS -> Lateral_Acceleration_Extended_Range= Parameter_Translate(12 , 1.0 , 2048.0);
    ACCS -> Longitudinal_Acceleration_Extended_Range= Parameter_Translate(258 , 0.01 , -320.0);
    ACCS -> Vertical_Acceleration_Extended_Range= Parameter_Translate(258 , 0.01 , -320.0);
    ACCS -> bt7.Lateral_Acceleration_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    ACCS -> bt7.Longitudinal_Acceleration_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    ACCS -> bt7.Vertical_Acceleration_Extended_Range_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
    ACCS -> bt7.Support_Variable_Transmission_Repetition_Rate_for_Acceleration_Sensor= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_Command (getCommand_t *Command)
{
    Command -> Engine_Turbocharger_Wastegate_Actuator_1_Command= Parameter_Translate(128 , 0.0025 , 0.0);
    Command -> Engine_Turbocharger_Wastegate_Actuator_2_Command= Parameter_Translate(128 , 0.0025 , 0.0);
    Command -> Engine_Exhaust_Back_Pressure_Regulator_Control_Command= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AEBS1 (getAEBS1_t *AEBS1)
{
    AEBS1 -> bt1.Advanced_emergency_braking_system_state= Parameter_Translate(12 , 16.0 , 4.0);
    AEBS1 -> bt1.Collision_warning_level= Parameter_Translate(12 , 16.0 , 4.0);
    AEBS1 -> bt2.Relevant_object_detected_for_advanced_emergency_braking_system= Parameter_Translate(5 , 8.0 , 3.0);
    AEBS1 -> bt2.Bend_off_probability_of_relevant_object= Parameter_Translate(5 , 8.0 , 3.0);
    AEBS1 -> Time_to_collision_with_relevant_object= Parameter_Translate(10 , 0.05 , 0.0);
}
void config_WS (getWS_t *WS)
{
    WS -> Wireless_Rolling_Message_Counter= Parameter_Translate(51404 , 1.0 , 0.0);
    WS -> bt3.Transmitter_Command_State= Parameter_Translate(12 , 16.0 , 4.0);
    WS -> Transmitter_ID_1= Parameter_Translate(13159708 , 1.0 , 0.0);
    WS -> Wireless_Signal_Strength_1= Parameter_Translate(0 , 0.5 , 0.0);
}
void config_WAND (getWAND_t *WAND)
{
    WAND -> Wand_Angle= Parameter_Translate(51 , 0.002 , -64.0);
    WAND -> bt3.Wand_Sensor_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_LDISP (getLDISP_t *LDISP)
{
    LDISP -> Measured_Linear_Displacement= Parameter_Translate(5140 , 0.1 , 0.0);
    LDISP -> bt3.Linear_Displacement_Sensor_Sensor_Figure_of_Merit= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_A1SCRAI2 (getA1SCRAI2_t *A1SCRAI2)
{
    A1SCRAI2 -> Aftertreatment_1_SCR_Intermediate_NH3= Parameter_Translate(4980 , 0.1 , -200.0);
    A1SCRAI2 -> bt3.Aftertreatment_1_SCR_Intermediate_NH3_Sensor_Preliminary_FMI= Parameter_Translate(24 , 1.0 , 0.0);
    A1SCRAI2 -> bt4.Aftertreatment_1_SCR_Intermediate_NH3_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRAI2 -> bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRAI2 -> bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRAI2 -> bt5.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 1.0 , 0.0);
    A1SCRAI2 -> bt6.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_A2SCRAI2 (getA2SCRAI2_t *A2SCRAI2)
{
    A2SCRAI2 -> Aftertreatment_2_SCR_Intermediate_NH3= Parameter_Translate(4980 , 0.1 , -200.0);
    A2SCRAI2 -> bt3.Aftertreatment_2_SCR_Intermediate_NH3_Sensor_Preliminary_FMI= Parameter_Translate(24 , 1.0 , 0.0);
    A2SCRAI2 -> bt4.Aftertreatment_2_SCR_Intermediate_NH3_Reading_Stable= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRAI2 -> bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRAI2 -> bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature= Parameter_Translate(0 , 2.0 , 1.0);
    A2SCRAI2 -> bt5.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI= Parameter_Translate(24 , 1.0 , 0.0);
    A2SCRAI2 -> bt6.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_HSS (getHSS_t *HSS)
{
    HSS -> bt1.Hybrid_System_Warning_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    HSS -> bt1.Hybrid_System_Overheat_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    HSS -> bt1.Hybrid_System_Stop_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_GFI4 (getGFI4_t *GFI4)
{
    GFI4 -> Supply_Gas_Methane_Percentage= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_A2SCREGT2 (getA2SCREGT2_t *A2SCREGT2)
{
    A2SCREGT2 -> Aftertreatment_2_SCR_Intermediate_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2SCREGT2 -> bt3.Aftertreatment_2_SCR_Intermediate_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 1.0 , 0.0);
}
void config_A1SCREGT2 (getA1SCREGT2_t *A1SCREGT2)
{
    A1SCREGT2 -> Aftertreatment_1_SCR_Intermediate_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1SCREGT2 -> bt3.Aftertreatment_1_SCR_Intermediate_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 1.0 , 0.0);
}
void config_EEC13 (getEEC13_t *EEC13)
{
    EEC13 -> bt1.Feedback_Engine_Fueling_State= Parameter_Translate(2 , 4.0 , 2.0);
    EEC13 -> bt1.Engine_Fueling_Inhibit_Allowed= Parameter_Translate(2 , 4.0 , 2.0);
    EEC13 -> bt1.Engine_Fueling_Inhibit_Prevented_Reason= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_EF_TVI2 (getEF_TVI2_t *EF_TVI2)
{
    EF_TVI2 -> Engine_Throttle_Valve_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EF_TVI2 -> Engine_Throttle_Valve_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EF_TVI2 -> Engine_Fuel_Valve_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EF_TVI2 -> Engine_Fuel_Valve_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EF_TVI2 -> Engine_Turbocharger_Wastegate_Actuator_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_EEGR1A (getEEGR1A_t *EEGR1A)
{
    EEGR1A -> bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Preliminary_FMI= Parameter_Translate(24 , 1.0 , -40.0);
    EEGR1A -> bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Desired_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EEGR1A -> bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    EEGR1A -> bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Desired_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EEGR1A -> bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    EEGR1A -> bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_EEGR1B (getEEGR1B_t *EEGR1B)
{
    EEGR1B -> bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Preliminary_FMI= Parameter_Translate(24 , 16.0 , 4.0);
    EEGR1B -> bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Desired_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EEGR1B -> bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    EEGR1B -> bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Desired_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EEGR1B -> bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    EEGR1B -> bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_EEC12 (getEEC12_t *EEC12)
{
    EEC12 -> bt1.Aftertreatment_1_Intake_Gas_Sensor_Power_Supply= Parameter_Translate(2 , 4.0 , 2.0);
    EEC12 -> bt1.Aftertreatment_1_Outlet_Gas_Sensor_Power_Supply= Parameter_Translate(2 , 4.0 , 2.0);
    EEC12 -> bt1.Aftertreatment_2_Intake_Gas_Sensor_Power_Supply= Parameter_Translate(2 , 4.0 , 2.0);
    EEC12 -> bt1.Aftertreatment_2_Outlet_Gas_Sensor_Power_Supply= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_NSSR (getNSSR_t *NSSR)
{
    NSSR -> bt1.NOx_Sensor_ATO1_Self_diagnosis_Trigger= Parameter_Translate(12 , 16.0 , 4.0);
    NSSR -> bt1.NOx_Sensor_ATI1_Self_diagnosis_Trigger= Parameter_Translate(12 , 16.0 , 4.0);
    NSSR -> bt2.NOx_Sensor_ATO2_Self_diagnosis_Trigger= Parameter_Translate(12 , 16.0 , 4.0);
    NSSR -> bt2.NOx_Sensor_ATI2_Self_diagnosis_Trigger= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_EPSI (getEPSI_t *EPSI)
{
    EPSI -> Aftertreatment_1_Particulate_Sensor= Parameter_Translate(642 , 0.0125 , 3.0);
    EPSI -> Aftertreatment_2_Particulate_Sensor= Parameter_Translate(642 , 0.0125 , 3.0);
}
void config_AT1P1I (getAT1P1I_t *AT1P1I)
{
    AT1P1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_AT1DPF2S5 (getAT1DPF2S5_t *AT1DPF2S5)
{
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_3= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_3_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_4= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_4_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT1DPF2S4 (getAT1DPF2S4_t *AT1DPF2S4)
{
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_1_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_2_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT1DPF2S3 (getAT1DPF2S3_t *AT1DPF2S3)
{
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_3= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_4= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AT1DPF1S5 (getAT1DPF1S5_t *AT1DPF1S5)
{
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_3= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_3_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_4= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_4_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT1DPF1S4 (getAT1DPF1S4_t *AT1DPF1S4)
{
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_1_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_2_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT1DPF1S3 (getAT1DPF1S3_t *AT1DPF1S3)
{
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_3= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_4= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_CCVS3 (getCCVS3_t *CCVS3)
{
    CCVS3 -> bt1.Adaptive_Cruise_Control_Readiness_Status= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS3 -> bt1.Cruise_Control_System_Command_State= Parameter_Translate(5 , 8.0 , 3.0);
    CCVS3 -> Source_Address_of_Controlling_Device_for_Disabling_Cruise_Control= Parameter_Translate(204 , 1.0 , 0.0);
    CCVS3 -> Source_Address_of_Controlling_Device_for_Pausing_Cruise_Control= Parameter_Translate(204 , 1.0 , 0.0);
}
void config_AT2AC3 (getAT2AC3_t *AT2AC3)
{
    AT2AC3 -> Aftertreatment_2_Secondary_Air_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AT1AC3 (getAT1AC3_t *AT1AC3)
{
    AT1AC3 -> Aftertreatment_1_Secondary_Air_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EFL_P12 (getEFL_P12_t *EFL_P12)
{
    EFL_P12 -> Engine_Fuel_Delivery_Absolute_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EFL_P12 -> Engine_Filtered_Fuel_Delivery_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EFL_P12 -> Engine_Filtered_Fuel_Delivery_Absolute_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EFL_P12 -> Engine_Fuel_Filter_Degradation= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_DPFC2 (getDPFC2_t *DPFC2)
{
    DPFC2 -> Aftertreatment_1_Diesel_Particulate_Filter_Intake_Temperature_Set_Point= Parameter_Translate(1387 , 0.03125 , -273.0);
    DPFC2 -> Relative_Unburned_Fuel_Mass_from_Engine= Parameter_Translate(128 , 0.0025 , 0.0);
    DPFC2 -> Aftertreatment_1_Fuel_Mass_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    DPFC2 -> Aftertreatment_2_Fuel_Mass_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
}
void config_LFE2 (getLFE2_t *LFE2)
{
    LFE2 -> High_Resolution_Engine_Fuel_Rate= Parameter_Translate(3368864 , 0.001 , 0.0);
}
void config_SFS (getSFS_t *SFS)
{
    SFS -> bt1.Supplemental_Fan_Enable_Status= Parameter_Translate(2 , 4.0 , 2.0);
    SFS -> bt1.Supplemental_Fan_Direction_Status= Parameter_Translate(2 , 4.0 , 2.0);
    SFS -> bt1.Supplemental_Fan_Velocity_Status= Parameter_Translate(12 , 16.0 , 4.0);
    SFS -> bt2.Supplemental_Fan_Controller_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    SFS -> bt2.Supplemental_Fan_Drive_Status= Parameter_Translate(12 , 16.0 , 4.0);
    SFS -> Supplemental_Fan_Controller_ECU_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    SFS -> Supplemental_Fan_Speed= Parameter_Translate(25702 , 0.5 , 0.0);
    SFS -> Supplemental_Fan_Current= Parameter_Translate(100 , 1.0 , -125.0);
    SFS -> Supplemental_Fan_Power= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_EBCC (getEBCC_t *EBCC)
{
    EBCC -> Engine_Turbocharger_1_Turbine_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EBCC -> Desired_Engine_Turbocharger_1_Turbine_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EBCC -> Engine_Exhaust_Brake_Actuator_Command= Parameter_Translate(80 , 0.4 , 0.0);
    EBCC -> Engine_Turbocharger_2_Turbine_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EBCC -> Desired_Engine_Turbocharger_2_Turbine_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
}
void config_EFP (getEFP_t *EFP)
{
    EFP -> Engine_Fuel_Dynamic_Viscosity= Parameter_Translate(803 , 0.015625 , 0.0);
    EFP -> Engine_Fuel_Density= Parameter_Translate(1 , 3.052e-05 , 0.0);
    EFP -> Engine_Fuel_Dielectricity__high_resolution_= Parameter_Translate(6 , 1.0 , 8192.0);
    EFP -> Engine_Fuel_Temperature__High_Resolution_= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_HOP (getHOP_t *HOP)
{
    HOP -> Hydraulic_Oil_Dynamic_Viscosity= Parameter_Translate(803 , 0.015625 , 0.0);
    HOP -> Hydraulic_Oil_Density= Parameter_Translate(1 , 3.052e-05 , 0.0);
    HOP -> Hydraulic_Oil_Relative_Dielectricity__high_resolution_= Parameter_Translate(6 , 1.0 , 8192.0);
    HOP -> Hydraulic_Oil_Temperature__High_Resolution_= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_VLS2 (getVLS2_t *VLS2)
{
    VLS2 -> bt1.Lubrication_Cycle_Mode_Lock_Status= Parameter_Translate(2 , 4.0 , 2.0);
    VLS2 -> bt1.Lubrication_Cycle_Mode_Status= Parameter_Translate(5 , 8.0 , 3.0);
    VLS2 -> bt1.Lubrication_Operation_Mode_Status= Parameter_Translate(5 , 8.0 , 3.0);
    VLS2 -> bt2.Lubrication_Pump_Enable_Status= Parameter_Translate(2 , 4.0 , 2.0);
    VLS2 -> bt2.Lubrication_Reservoir_Level= Parameter_Translate(2 , 4.0 , 2.0);
    VLS2 -> bt2.Lubrication_Timing_Cycle_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EC3 (getEC3_t *EC3)
{
    EC3 -> Engine_Friction_Percent_Torque_At_Idle_Point_1= Parameter_Translate(100 , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_2= Parameter_Translate(100 , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_3= Parameter_Translate(100 , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_4= Parameter_Translate(100 , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_5= Parameter_Translate(100 , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_6= Parameter_Translate(100 , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_7= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_IVAC (getIVAC_t *IVAC)
{
    IVAC -> bt1.Intake_Valve_Actuation_System_Oil_Pressure_1_Solenoid_Control= Parameter_Translate(2 , 4.0 , 2.0);
    IVAC -> bt1.Intake_Valve_Actuation_System_Oil_Pressure_2_Solenoid_Control= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ARMSWIMC (getARMSWIMC_t *ARMSWIMC)
{
    ARMSWIMC -> bt1.Armrest_1_Switch_1= Parameter_Translate(2 , 4.0 , 2.0);
    ARMSWIMC -> bt1.Armrest_1_Switch_2= Parameter_Translate(2 , 4.0 , 2.0);
    ARMSWIMC -> bt1.Armrest_2_Switch_1= Parameter_Translate(2 , 4.0 , 2.0);
    ARMSWIMC -> bt1.Armrest_2_Switch_2= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_VEP4 (getVEP4_t *VEP4)
{
    VEP4 -> Hybrid_Battery_Pack_Remaining_Charge= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AFT2NAI (getAFT2NAI_t *AFT2NAI)
{
    AFT2NAI -> bt1.Aftertreatment_2_NOx_Adsorber_deNOx_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AFT2NAI -> bt1.Aftertreatment_2_NOx_Adsorber_deSOx_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AFT1NAI (getAFT1NAI_t *AFT1NAI)
{
    AFT1NAI -> bt1.Aftertreatment_1_NOx_Adsorber_deNOx_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AFT1NAI -> bt1.Aftertreatment_1_NOx_Adsorber_deSOx_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT2WUDOC (getAT2WUDOC_t *AT2WUDOC)
{
    AT2WUDOC -> Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2WUDOC -> Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_LLRE (getLLRE_t *LLRE)
{
    LLRE -> Blade_Elevation_Deviation___Left= Parameter_Translate(25804 , 1.0 , -32000.0);
    LLRE -> Blade_Elevation_Deviation___Right= Parameter_Translate(25804 , 1.0 , -32000.0);
    LLRE -> Blade_Reference_Elevation_Offset___Left= Parameter_Translate(25804 , 1.0 , -32000.0);
    LLRE -> Blade_Reference_Elevation_Offset___Right= Parameter_Translate(25804 , 1.0 , -32000.0);
}
void config_EFL_P11 (getEFL_P11_t *EFL_P11)
{
    EFL_P11 -> Engine_Exhaust_Gas_Recirculation_1_Intake_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P11 -> Engine_Exhaust_Gas_Recirculation_1_Outlet_Absolute_Pressure__High_Resolution_= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EFS2 (getEFS2_t *EFS2)
{
    EFS2 -> Engine_Fuel_Filter__Suction_Side__Intake_Absolute_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
}
void config_Information (getInformation_t *Information)
{
    Information -> bt1.Engine_Turbocharger_Wastegate_Actuator_2_Preliminary_FMI= Parameter_Translate(24 , 2.0 , 0.0);
    Information -> bt1.Engine_Turbocharger_Wastegate_Actuator_2_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    Information -> bt2.Engine_Turbocharger_Wastegate_Actuator_1_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    Information -> bt2.Engine_Turbocharger_Wastegate_Actuator_2_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    Information -> Engine_Exhaust_Back_Pressure_Regulator_Position= Parameter_Translate(80 , 0.4 , 0.0);
    Information -> bt4.Engine_Exhaust_Back_Pressure_Regulator_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    Information -> bt4.Engine_Exhaust_Back_Pressure_Regulator_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    Information -> bt5.Engine_Exhaust_Back_Pressure_Regulator_Control_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    Information -> Engine_Turbocharger_Wastegate_Actuator_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    Information -> Engine_Exhaust_Back_Pressure_Actuator_1_Desired_Position= Parameter_Translate(80 , 0.4 , 0.0);
    Information -> Engine_Exhaust_Back_Pressure_Actuator_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_EFTVI1 (getEFTVI1_t *EFTVI1)
{
    EFTVI1 -> Engine_Desired_Throttle_Valve_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EFTVI1 -> bt2.Engine_Throttle_Valve_1_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    EFTVI1 -> bt2.Engine_Throttle_Valve_1_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EFTVI1 -> Engine_Desired_Throttle_Valve_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EFTVI1 -> bt4.Engine_Throttle_Valve_2_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    EFTVI1 -> bt4.Engine_Throttle_Valve_2_Temperature_status= Parameter_Translate(5 , 8.0 , 3.0);
    EFTVI1 -> bt5.Engine_Fuel_Valve_1_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
    EFTVI1 -> bt5.Engine_Fuel_Valve_1_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EFTVI1 -> bt6.Engine_Fuel_Valve_2_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
    EFTVI1 -> bt6.Engine_Fuel_Valve_2_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EFTVI1 -> bt7.Engine_Throttle_Valve_1_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    EFTVI1 -> bt7.Engine_Throttle_Valve_2_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    EFTVI1 -> bt8.Engine_Fuel_Valve_1_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    EFTVI1 -> bt8.Engine_Fuel_Valve_2_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_ETCBI (getETCBI_t *ETCBI)
{
    ETCBI -> Engine_Turbocharger_Compressor_Bypass_Actuator_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
    ETCBI -> Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
    ETCBI -> bt3.Engine_Turbocharger_compressor_Bypass_Actuator_2_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    ETCBI -> bt3.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    ETCBI -> bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    ETCBI -> bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Operation_Status= Parameter_Translate(12 , 16.0 , 4.0);
    ETCBI -> Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    ETCBI -> Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_CAC2 (getCAC2_t *CAC2)
{
    CAC2 -> Engine_Charge_Air_Cooler_2_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC2 -> Engine_Charge_Air_Cooler_2_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC2 -> Engine_Charge_Air_Cooler_2_Ambient_Air_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC2 -> Engine_Charge_Air_Cooler_2_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_CAC2P (getCAC2P_t *CAC2P)
{
    CAC2P -> Engine_Charge_Air_Cooler_2_Precooler_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC2P -> Engine_Charge_Air_Cooler_2_Precooler_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC2P -> Engine_Charge_Air_Cooler_2_Precooler_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_CAC1 (getCAC1_t *CAC1)
{
    CAC1 -> Engine_Charge_Air_Cooler_1_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC1 -> Engine_Charge_Air_Cooler_1_Ambient_Air_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC1 -> Engine_Charge_Air_Cooler_1_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_CAC1P (getCAC1P_t *CAC1P)
{
    CAC1P -> Engine_Charge_Air_Cooler_1_Precooler_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC1P -> Engine_Charge_Air_Cooler_1_Precooler_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    CAC1P -> Engine_Charge_Air_Cooler_1_Precooler_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_DPF2S2 (getDPF2S2_t *DPF2S2)
{
    DPF2S2 -> Diesel_Particulate_Filter_2_Soot_Signal_Standard_Deviation= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF2S2 -> Diesel_Particulate_Filter_2_Soot_Signal_Maximum= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF2S2 -> Diesel_Particulate_Filter_2_Soot_Signal_Minimum= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_DPF1S2 (getDPF1S2_t *DPF1S2)
{
    DPF1S2 -> Diesel_Particulate_Filter_1_Soot_Signal_Standard_Deviation= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF1S2 -> Diesel_Particulate_Filter_1_Soot_Signal_Maximum= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF1S2 -> Diesel_Particulate_Filter_1_Soot_Signal_Minimum= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_EEC11 (getEEC11_t *EEC11)
{
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_2_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2_Valve_1_Position_Error= Parameter_Translate(105 , 0.004 , -125.0);
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position_Error= Parameter_Translate(105 , 0.004 , -125.0);
}
void config_EMAP (getEMAP_t *EMAP)
{
    EMAP -> Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Position= Parameter_Translate(128 , 0.0025 , 0.0);
    EMAP -> Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Position= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_EMAC (getEMAC_t *EMAC)
{
    EMAC -> Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    EMAC -> Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Control= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_EEC9 (getEEC9_t *EEC9)
{
    EEC9 -> Engine_Exhaust_Gas_Recirculation_2_Valve_Position= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC9 -> Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC9 -> Commanded_Engine_Fuel_Rail_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
    EEC9 -> Commanded_Engine_Fuel_Injection_Control_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
}
void config_EEC10 (getEEC10_t *EEC10)
{
    EEC10 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EEC10 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Gas_Absolute_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    EEC10 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler= Parameter_Translate(80 , 0.4 , 0.0);
    EEC10 -> EGR_2_Cooler_Bypass_Actuator_Position= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_ET5 (getET5_t *ET5)
{
    ET5 -> Engine_Exhaust_Gas_Recirculation_2_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET5 -> Engine_Exhaust_Gas_Recirculation_2_Mixer_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EFL_P10 (getEFL_P10_t *EFL_P10)
{
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Differential_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Intake_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Outlet_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Intake_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P10 -> Engine_Coolant_Pressure_2= Parameter_Translate(400 , 2.0 , 0.0);
}
void config_LVDS (getLVDS_t *LVDS)
{
    LVDS -> bt1.Low_Voltage_Disconnect_Manual_Disconnect_State= Parameter_Translate(2 , 4.0 , 2.0);
    LVDS -> bt1.Low_Voltage_Disconnect_Manual_Connect_State= Parameter_Translate(2 , 4.0 , 2.0);
    LVDS -> bt1.Low_Voltage_Disconnect_Current_Operating_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    LVDS -> bt2.Low_Voltage_Disconnect_Output_3_State= Parameter_Translate(12 , 16.0 , 4.0);
    LVDS -> bt2.Low_Voltage_Disconnect_Output_2_State= Parameter_Translate(12 , 16.0 , 4.0);
    LVDS -> bt3.Low_Voltage_Disconnect_Output_1_State= Parameter_Translate(12 , 16.0 , 4.0);
    LVDS -> bt3.Low_Voltage_Disconnect_Vout_Output_State= Parameter_Translate(12 , 16.0 , 4.0);
    LVDS -> Low_Voltage_Disconnect_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_DLCD2 (getDLCD2_t *DLCD2)
{
    DLCD2 -> bt1.Vehicle_Battery_Voltage_Low_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD2 -> bt1.Vehicle_Fuel_Level_Low_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD2 -> bt1.Vehicle_Air_Pressure_Low_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD2 -> bt1.Vehicle_HVAC_Recirculation_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD2 -> bt2.Vehicle_Battery_Charging_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_DLCD1 (getDLCD1_t *DLCD1)
{
    DLCD1 -> bt1.Engine_Protect_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt1.Engine_Amber_Warning_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt1.Engine_Red_Stop_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt1.OBD_Malfunction_Indicator_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt2.Engine_Brake_Active_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt2.Engine_Oil_Pressure_Low_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt2.Engine_Coolant_Temperature_High_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt3.Engine_Coolant_Level_Low_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt3.Engine_Idle_Management_Active_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt3.Engine_Air_Filter_Restriction_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt3.Engine_Fuel_Filter_Restricted_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
    DLCD1 -> bt8.Engine_Wait_To_Start_Lamp_Data= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_DLCC2 (getDLCC2_t *DLCC2)
{
    DLCC2 -> bt1.Vehicle_Battery_Voltage_Low_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC2 -> bt1.Vehicle_Fuel_Level_Low_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC2 -> bt1.Vehicle_Air_Pressure_Low_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC2 -> bt1.Vehicle_HVAC_Recirculation_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC2 -> bt2.Vehicle_Battery_Charging_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_DLCC1 (getDLCC1_t *DLCC1)
{
    DLCC1 -> bt1.Engine_Protect_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt1.Engine_Amber_Warning_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt1.Engine_Red_Stop_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt1.OBD_Malfunction_Indicator_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt2.Engine_Brake_Active_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt2.Engine_Oil_Pressure_Low_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt2.Engine_Coolant_Temperature_High_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt3.Engine_Coolant_Level_Low_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt3.Engine_Idle_Management_Active_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt3.Engine_Air_Filter_Restriction_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
    DLCC1 -> bt3.Engine_Fuel_Filter_Restricted_Lamp_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EOM (getEOM_t *EOM)
{
    EOM -> Engine_Oil_Viscosity= Parameter_Translate(803 , 0.015625 , 0.0);
    EOM -> Engine_Oil_Density= Parameter_Translate(1 , 3.052e-05 , 0.0);
    EOM -> Engine_Oil_Relative_Dielectricity__high_resolution_= Parameter_Translate(6 , 1.0 , 8192.0);
    EOM -> High_Resolution_Engine_Total_Fuel_Used= Parameter_Translate(3368864 , 0.001 , 0.0);
}
void config_AT2OGC2 (getAT2OGC2_t *AT2OGC2)
{
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Lambda= Parameter_Translate(100 , 0.5 , 0.0);
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Nox= Parameter_Translate(100 , 0.5 , 0.0);
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT2OGC2 -> NOx_Sensor_ATO2_Self_diagnosis_Final_Result= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_AT2OGC1 (getAT2OGC1_t *AT2OGC1)
{
    AT2OGC1 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    AT2OGC1 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Gain= Parameter_Translate(80 , 0.1 , -100.0);
    AT2OGC1 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Offset= Parameter_Translate(100 , 1.0 , -125.0);
    AT2OGC1 -> NOx_Sensor_ATO2_Operation_Hours_Counter= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_AT2IGC2 (getAT2IGC2_t *AT2IGC2)
{
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Lambda= Parameter_Translate(100 , 0.5 , 0.0);
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Nox= Parameter_Translate(100 , 0.5 , 0.0);
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT2IGC2 -> NOx_Sensor_ATI2_Self_diagnosis_Final_Result= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_AT2IGC1 (getAT2IGC1_t *AT2IGC1)
{
    AT2IGC1 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    AT2IGC1 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain= Parameter_Translate(80 , 0.1 , -100.0);
    AT2IGC1 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset= Parameter_Translate(100 , 1.0 , -125.0);
    AT2IGC1 -> NOx_Sensor_ATI2_Operation_Hours_Counter= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_AT1OGC2 (getAT1OGC2_t *AT1OGC2)
{
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_Lambda= Parameter_Translate(100 , 0.5 , 0.0);
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_NOx= Parameter_Translate(100 , 0.5 , 0.0);
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT1OGC2 -> NOx_Sensor_ATO1_Self_diagnosis_Final_Result= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_AT1OGC1 (getAT1OGC1_t *AT1OGC1)
{
    AT1OGC1 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    AT1OGC1 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Gain= Parameter_Translate(80 , 0.1 , -100.0);
    AT1OGC1 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Offset= Parameter_Translate(100 , 1.0 , -125.0);
    AT1OGC1 -> NOx_Sensor_ATO1_Operation_Hours_Counter= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_AT1IGC2 (getAT1IGC2_t *AT1IGC2)
{
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_Lambda= Parameter_Translate(100 , 0.5 , 0.0);
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_NOx= Parameter_Translate(100 , 0.5 , 0.0);
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(100 , 0.5 , 0.0);
    AT1IGC2 -> NOx_Sensor_ATI1_Self_diagnosis_Final_Result= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_AT1IGC1 (getAT1IGC1_t *AT1IGC1)
{
    AT1IGC1 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    AT1IGC1 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain= Parameter_Translate(80 , 0.1 , -100.0);
    AT1IGC1 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset= Parameter_Translate(100 , 1.0 , -125.0);
    AT1IGC1 -> NOx_Sensor_ATI1_Operation_Hours_Counter= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_MSI1 (getMSI1_t *MSI1)
{
    MSI1 -> bt1.Generator_Overheat_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI1 -> bt1.Genset_System_Output_Voltage_Range_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI1 -> bt1.Grapple_Magnet_Selection_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    MSI1 -> bt1.Genset_Softstart_Active_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI1 -> bt2.Reverse_Current_Range_Setting= Parameter_Translate(24 , 32.0 , 5.0);
    MSI1 -> bt3.Genset_Enable_Active_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI1 -> bt3.Voltage_Monitor_Active_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MSI1 -> bt3.Generator_Duty_Cycle_Exceeded_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_MSCI (getMSCI_t *MSCI)
{
    MSCI -> Magnet_Boost_Time= Parameter_Translate(50 , 0.25 , 0.0);
    MSCI -> Magnet_Rated_Power= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_BCH2 (getBCH2_t *BCH2)
{
    BCH2 -> bt1.Battery_Charger_2_State= Parameter_Translate(12 , 16.0 , 4.0);
    BCH2 -> bt1.Battery_Charger_2_Power_Line_State= Parameter_Translate(2 , 4.0 , 2.0);
    BCH2 -> Battery_Charger_2_Output_Voltage= Parameter_Translate(2570 , 0.05 , 0.0);
    BCH2 -> Battery_Charger_2_Output_Current= Parameter_Translate(1290 , 0.05 , -1600.0);
}
void config_BCH1 (getBCH1_t *BCH1)
{
    BCH1 -> bt1.Battery_Charger_1_State= Parameter_Translate(12 , 16.0 , 4.0);
    BCH1 -> bt1.Battery_Charger_1_Power_Line_State= Parameter_Translate(2 , 4.0 , 2.0);
    BCH1 -> Battery_Charger_1_Output_Voltage= Parameter_Translate(2570 , 0.05 , 0.0);
    BCH1 -> Battery_Charger_1_Output_Current= Parameter_Translate(1290 , 0.05 , -1600.0);
}
void config_OCSI (getOCSI_t *OCSI)
{
    OCSI -> bt1.Driver_Occupant_Classification_System_Status= Parameter_Translate(5 , 8.0 , 3.0);
    OCSI -> bt1.Passenger_Occupant_Classification_System_Status= Parameter_Translate(5 , 8.0 , 3.0);
    OCSI -> bt2.Occupant_Classification_System_3_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt2.Occupant_Classification_System_4_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt2.Occupant_Classification_System_5_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt2.Occupant_Classification_System_6_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt3.Occupant_Classification_System_7_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt3.Occupant_Classification_System_8_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt3.Occupant_Classification_System_9_Status= Parameter_Translate(2 , 4.0 , 2.0);
    OCSI -> bt3.Occupant_Classification_System_10_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BDS (getBDS_t *BDS)
{
    BDS -> bt1.Driver_Beltlock_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt1.Passenger_Beltlock_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt1.Beltlock_3_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt1.Beltlock_4_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt2.Beltlock_5_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt2.Beltlock_6_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt2.Beltlock_7_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt2.Beltlock_8_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt3.Beltlock_9_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt3.Beltlock_10_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BDS -> bt3.Passenger_Airbag_Deactivation_Switch_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_CSI (getCSI_t *CSI)
{
    CSI -> bt1.Frontal_Collision_Sensor_1___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt1.Frontal_Collision_Sensor_2___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt2.Frontal_Collision_Sensor_3___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt2.Frontal_Collision_Sensor_4___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt3.Side_Collision_Sensor_Front_Left___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt3.Side_Collision_Sensor_Mid_Front_Left___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt4.Side_Collision_Sensor_Mid_Rear_Left___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt4.Side_Collision_Sensor_Rear_Left___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt5.Side_Collision_Sensor_Front_Right___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt5.Side_Collision_Sensor_Mid_Front_Right___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt6.Side_Collision_Sensor_Mid_Rear_Right___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt6.Side_Collision_Sensor_Rear_Right___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt7.Rear_Collision_Sensor_1___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt7.Rear_Collision_Sensor_2___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt8.Rear_Collision_Sensor_3___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt8.Rear_Collision_Sensor_4___Type= Parameter_Translate(12 , 16.0 , 4.0);
    CSI -> bt9.Rollover_Sensor___Type= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_ILI (getILI_t *ILI)
{
    ILI -> Driver_Airbag_Ignitor_Loop_1st_Stage___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Passenger_Airbag_Ignitor_Loop_1st_Stage___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Driver_Airbag_Ignitor_Loop_2nd_Stage___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Passenger_Airbag_Ignitor_Loop_2nd_Stage___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Driver_Belt_Tensioner_Ignitior_Loop___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Passenger_Belt_Tensioner_Ignitor_Loop___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_1___Left___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_2___Left___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_1___Right___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_2___Right___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_1___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_2___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_3___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_4___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_5___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_6___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_7___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_8___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_9___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_10___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_11___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_12___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_13___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_14___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_15___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_16___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_17___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_18___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_19___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_20___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_21___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_22___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_23___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_24___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_25___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_26___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_27___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_28___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_29___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_30___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_31___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_32___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_33___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_34___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_35___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_36___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_37___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_38___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_39___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_40___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_41___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_42___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_43___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_44___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_45___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_46___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_47___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_48___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_49___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_50___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_51___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_52___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_53___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_54___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_55___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_56___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_57___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_58___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_59___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_60___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_61___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_62___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_63___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_64___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_65___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_66___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_67___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_68___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_69___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_70___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_71___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_72___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_73___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_74___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_75___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_76___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_77___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_78___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_79___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_80___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_81___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_82___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_83___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_84___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_85___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_86___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_87___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_88___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_89___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_90___Resistance= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AT1WUDOC (getAT1WUDOC_t *AT1WUDOC)
{
    AT1WUDOC -> Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1WUDOC -> Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_DPF2S (getDPF2S_t *DPF2S)
{
    DPF2S -> Diesel_Particulate_Filter_2_Soot_Mass= Parameter_Translate(800 , 4.0 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Soot_Density= Parameter_Translate(16 , 0.08 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Mean_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Median_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF2S -> bt7.Diesel_Particulate_Filter_2_Soot_Sensor_Preliminary_FMI= Parameter_Translate(24 , 0.0025 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Soot_Sensor_ECU_Internal_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_DPF1S (getDPF1S_t *DPF1S)
{
    DPF1S -> Diesel_Particulate_Filter_1_Soot_Mass= Parameter_Translate(800 , 4.0 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Soot_Density= Parameter_Translate(16 , 0.08 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Mean_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Median_Soot_Signal= Parameter_Translate(128 , 0.0025 , 0.0);
    DPF1S -> bt7.Diesel_Particulate_Filter_1_Soot_Sensor_Preliminary_FMI= Parameter_Translate(24 , 0.0025 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Soot_Sensor_ECU_Internal_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_ATDT2 (getATDT2_t *ATDT2)
{
    ATDT2 -> Aftertreatment_1_Three_Way_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ATDT2 -> Aftertreatment_2_Three_Way_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_ATDT1 (getATDT1_t *ATDT1)
{
    ATDT1 -> Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ATDT1 -> Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_A2DOC (getA2DOC_t *A2DOC)
{
    A2DOC -> Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2DOC -> Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2DOC -> Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    A2DOC -> bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.5 , 0.0);
    A2DOC -> bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.5 , 0.0);
    A2DOC -> bt8.Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.5 , 0.0);
}
void config_A1DOC (getA1DOC_t *A1DOC)
{
    A1DOC -> Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1DOC -> Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1DOC -> Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    A1DOC -> bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A1DOC -> bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A1DOC -> bt8.Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_A2GOC (getA2GOC_t *A2GOC)
{
    A2GOC -> Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2GOC -> Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2GOC -> Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    A2GOC -> bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A2GOC -> bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A2GOC -> bt8.Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_A1GOC (getA1GOC_t *A1GOC)
{
    A1GOC -> Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1GOC -> Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1GOC -> Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    A1GOC -> bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A1GOC -> bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A1GOC -> bt8.Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_EJM10 (getEJM10_t *EJM10)
{
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM10 -> bt5.Joystick_10_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt5.Joystick_10_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt5.Joystick_10_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt5.Joystick_10_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM10 -> bt7.Joystick_10_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt7.Joystick_10_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM10 -> bt7.Joystick_10_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM10 (getBJM10_t *BJM10)
{
    BJM10 -> bt1.Joystick_10_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt1.Joystick_10_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt1.Joystick_10_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt1.Joystick_10_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM10 -> bt3.Joystick_10_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt3.Joystick_10_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt3.Joystick_10_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt3.Joystick_10_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM10 -> bt5.Joystick_10_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt5.Joystick_10_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt6.Joystick_10_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt6.Joystick_10_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt6.Joystick_10_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt6.Joystick_10_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt7.Joystick_10_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt7.Joystick_10_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt7.Joystick_10_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt7.Joystick_10_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt8.Joystick_10_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt8.Joystick_10_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt8.Joystick_10_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM10 -> bt8.Joystick_10_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM9 (getEJM9_t *EJM9)
{
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM9 -> bt5.Joystick_9_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt5.Joystick_9_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt5.Joystick_9_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt5.Joystick_9_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM9 -> bt7.Joystick_9_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt7.Joystick_9_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM9 -> bt7.Joystick_9_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM9 (getBJM9_t *BJM9)
{
    BJM9 -> bt1.Joystick_9_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt1.Joystick_9_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt1.Joystick_9_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt1.Joystick_9_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM9 -> bt3.Joystick_9_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt3.Joystick_9_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt3.Joystick_9_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt3.Joystick_9_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM9 -> bt5.Joystick_9_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt5.Joystick_9_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt6.Joystick_9_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt6.Joystick_9_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt6.Joystick_9_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt6.Joystick_9_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt7.Joystick_9_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt7.Joystick_9_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt7.Joystick_9_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt7.Joystick_9_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt8.Joystick_9_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt8.Joystick_9_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt8.Joystick_9_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM9 -> bt8.Joystick_9_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM8 (getEJM8_t *EJM8)
{
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM8 -> bt5.Joystick_8_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt5.Joystick_8_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt5.Joystick_8_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt5.Joystick_8_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM8 -> bt7.Joystick_8_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt7.Joystick_8_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM8 -> bt7.Joystick_8_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM8 (getBJM8_t *BJM8)
{
    BJM8 -> bt1.Joystick_8_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt1.Joystick_8_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt1.Joystick_8_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt1.Joystick_8_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM8 -> bt3.Joystick_8_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt3.Joystick_8_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt3.Joystick_8_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt3.Joystick_8_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM8 -> bt5.Joystick_8_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt5.Joystick_8_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt6.Joystick_8_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt6.Joystick_8_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt6.Joystick_8_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt6.Joystick_8_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt7.Joystick_8_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt7.Joystick_8_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt7.Joystick_8_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt7.Joystick_8_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt8.Joystick_8_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt8.Joystick_8_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt8.Joystick_8_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM8 -> bt8.Joystick_8_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM7 (getEJM7_t *EJM7)
{
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM7 -> bt5.Joystick_7_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt5.Joystick_7_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt5.Joystick_7_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt5.Joystick_7_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM7 -> bt7.Joystick_7_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt7.Joystick_7_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM7 -> bt7.Joystick_7_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM7 (getBJM7_t *BJM7)
{
    BJM7 -> bt1.Joystick_7_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt1.Joystick_7_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt1.Joystick_7_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt1.Joystick_7_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM7 -> bt3.Joystick_7_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt3.Joystick_7_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt3.Joystick_7_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt3.Joystick_7_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM7 -> bt5.Joystick_7_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt5.Joystick_7_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt6.Joystick_7_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt6.Joystick_7_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt6.Joystick_7_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt6.Joystick_7_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt7.Joystick_7_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt7.Joystick_7_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt7.Joystick_7_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt7.Joystick_7_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt8.Joystick_7_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt8.Joystick_7_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt8.Joystick_7_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM7 -> bt8.Joystick_7_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM6 (getEJM6_t *EJM6)
{
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM6 -> bt5.Joystick_6_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt5.Joystick_6_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt5.Joystick_6_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt5.Joystick_6_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM6 -> bt7.Joystick_6_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt7.Joystick_6_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM6 -> bt7.Joystick_6_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM6 (getBJM6_t *BJM6)
{
    BJM6 -> bt1.Joystick_6_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt1.Joystick_6_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt1.Joystick_6_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt1.Joystick_6_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM6 -> bt3.Joystick_6_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt3.Joystick_6_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt3.Joystick_6_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt3.Joystick_6_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM6 -> bt5.Joystick_6_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt5.Joystick_6_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt6.Joystick_6_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt6.Joystick_6_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt6.Joystick_6_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt6.Joystick_6_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt7.Joystick_6_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt7.Joystick_6_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt7.Joystick_6_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt7.Joystick_6_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt8.Joystick_6_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt8.Joystick_6_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt8.Joystick_6_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM6 -> bt8.Joystick_6_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM5 (getEJM5_t *EJM5)
{
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM5 -> bt5.Joystick_5_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt5.Joystick_5_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt5.Joystick_5_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt5.Joystick_5_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM5 -> bt7.Joystick_5_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt7.Joystick_5_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM5 -> bt7.Joystick_5_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM5 (getBJM5_t *BJM5)
{
    BJM5 -> bt1.Joystick_5_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt1.Joystick_5_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt1.Joystick_5_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt1.Joystick_5_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM5 -> bt3.Joystick_5_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt3.Joystick_5_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt3.Joystick_5_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt3.Joystick_5_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM5 -> bt5.Joystick_5_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt5.Joystick_5_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt6.Joystick_5_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt6.Joystick_5_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt6.Joystick_5_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt6.Joystick_5_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt7.Joystick_5_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt7.Joystick_5_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt7.Joystick_5_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt7.Joystick_5_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt8.Joystick_5_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt8.Joystick_5_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt8.Joystick_5_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM5 -> bt8.Joystick_5_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM4 (getEJM4_t *EJM4)
{
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM4 -> bt5.Joystick_4_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt5.Joystick_4_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt5.Joystick_4_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt5.Joystick_4_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM4 -> bt7.Joystick_4_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt7.Joystick_4_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM4 -> bt7.Joystick_4_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM4 (getBJM4_t *BJM4)
{
    BJM4 -> bt1.Joystick_4_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt1.Joystick_4_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt1.Joystick_4_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt1.Joystick_4_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM4 -> bt3.Joystick_4_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt3.Joystick_4_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt3.Joystick_4_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt3.Joystick_4_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM4 -> bt5.Joystick_4_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt5.Joystick_4_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt6.Joystick_4_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt6.Joystick_4_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt6.Joystick_4_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt6.Joystick_4_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt7.Joystick_4_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt7.Joystick_4_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt7.Joystick_4_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt7.Joystick_4_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt8.Joystick_4_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt8.Joystick_4_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt8.Joystick_4_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM4 -> bt8.Joystick_4_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_FD2 (getFD2_t *FD2)
{
    FD2 -> Estimated_Percent_Fan_2_Speed= Parameter_Translate(80 , 0.4 , 0.0);
    FD2 -> bt2.Fan_2_Drive_State= Parameter_Translate(12 , 16.0 , 4.0);
    FD2 -> Fan_2_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    FD2 -> Hydraulic_Fan_2_Motor_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    FD2 -> Fan_2_Drive_Bypass_Command_Status= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A2DEFSI (getA2DEFSI_t *A2DEFSI)
{
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Motor_Speed= Parameter_Translate(25702 , 0.5 , 0.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Drive_Percentage= Parameter_Translate(80 , 0.4 , 0.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Return_Valve= Parameter_Translate(80 , 0.4 , 0.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command= Parameter_Translate(80 , 0.4 , 0.0);
    A2DEFSI -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_State= Parameter_Translate(2 , 4.0 , 2.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A2SCRRT2I (getA2SCRRT2I_t *A2SCRRT2I)
{
    A2SCRRT2I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level= Parameter_Translate(80 , 0.4 , 0.0);
    A2SCRRT2I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    A2SCRRT2I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_2= Parameter_Translate(5140 , 0.1 , 0.0);
    A2SCRRT2I -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A2SCRRT2I -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A2SCRRT2I -> bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater= Parameter_Translate(12 , 16.0 , 4.0);
    A2SCRRT2I -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI= Parameter_Translate(24 , 16.0 , 4.0);
}
void config_A2SCRRT1I (getA2SCRRT1I_t *A2SCRRT1I)
{
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level= Parameter_Translate(80 , 0.4 , 0.0);
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_2= Parameter_Translate(5140 , 0.1 , 0.0);
    A2SCRRT1I -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A2SCRRT1I -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater= Parameter_Translate(80 , 0.4 , 0.0);
    A2SCRRT1I -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
}
void config_A2DEFI (getA2DEFI_t *A2DEFI)
{
    A2DEFI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2= Parameter_Translate(168 , 1.0 , -40.0);
    A2DEFI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Concentration= Parameter_Translate(50 , 0.25 , 0.0);
    A2DEFI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Conductivity= Parameter_Translate(1000 , 5.0 , 0.0);
    A2DEFI -> bt4.Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI= Parameter_Translate(24 , 5.0 , 0.0);
    A2DEFI -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI= Parameter_Translate(24 , 5.0 , 0.0);
    A2DEFI -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Type= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_A2SCRSI (getA2SCRSI_t *A2SCRSI)
{
    A2SCRSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Average_Consumption= Parameter_Translate(2570 , 0.05 , 0.0);
    A2SCRSI -> Aftertreatment_2_SCR_Commanded_Catalyst_Diesel_Exhaust_Fluid_Consumption= Parameter_Translate(2570 , 0.05 , 0.0);
    A2SCRSI -> Aftertreatment_2_SCR_Conversion_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A2SCREGT1 (getA2SCREGT1_t *A2SCREGT1)
{
    A2SCREGT1 -> Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2SCREGT1 -> bt3.Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 32.0 , 5.0);
    A2SCREGT1 -> Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A2SCREGT1 -> bt6.Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 32.0 , 5.0);
}
void config_A2SCREGP (getA2SCREGP_t *A2SCREGP)
{
    A2SCREGP -> Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    A2SCREGP -> bt3.Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 32.0 , 5.0);
}
void config_A2SCRDSR2 (getA2SCRDSR2_t *A2SCRDSR2)
{
    A2SCRDSR2 -> bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Request= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSR2 -> bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request= Parameter_Translate(5 , 8.0 , 3.0);
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSR2 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater_Command= Parameter_Translate(80 , 0.4 , 0.0);
    A2SCRDSR2 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Command= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A2SCRDSI2 (getA2SCRDSI2_t *A2SCRDSI2)
{
    A2SCRDSI2 -> Aftertreatment_2_SCR_Dosing_Air_Assist_Absolute_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    A2SCRDSI2 -> Aftertreatment_2_SCR_Dosing_Air_Assist_Valve= Parameter_Translate(80 , 0.4 , 0.0);
    A2SCRDSI2 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    A2SCRDSI2 -> bt4.Aftertreatment_2_SCR_Dosing_Valve_Exhaust_Temp__Reduction_Request= Parameter_Translate(5 , 8.0 , 3.0);
    A2SCRDSI2 -> bt4.Aftertreatment_2_SCR_Feedback_Control_Status= Parameter_Translate(5 , 8.0 , 3.0);
    A2SCRDSI2 -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_State= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSI2 -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A2SCRDSI2 -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_State= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSI2 -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A2SCRDSI2 -> bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_State= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSI2 -> bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A2SCRDSI2 -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_State= Parameter_Translate(2 , 4.0 , 2.0);
    A2SCRDSI2 -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
}
void config_A1DEFSI (getA1DEFSI_t *A1DEFSI)
{
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Motor_Speed= Parameter_Translate(25702 , 0.5 , 0.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Drive_Percentage= Parameter_Translate(80 , 0.4 , 0.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Return_Valve= Parameter_Translate(80 , 0.4 , 0.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command= Parameter_Translate(80 , 0.4 , 0.0);
    A1DEFSI -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_State= Parameter_Translate(2 , 4.0 , 2.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A1SCRRT2I (getA1SCRRT2I_t *A1SCRRT2I)
{
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level= Parameter_Translate(80 , 0.4 , 0.0);
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_2= Parameter_Translate(5140 , 0.1 , 0.0);
    A1SCRRT2I -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A1SCRRT2I -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater= Parameter_Translate(80 , 0.4 , 0.0);
    A1SCRRT2I -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
}
void config_A1SCREGT1 (getA1SCREGT1_t *A1SCREGT1)
{
    A1SCREGT1 -> Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1SCREGT1 -> bt3.Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 32.0 , 5.0);
    A1SCREGT1 -> Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    A1SCREGT1 -> bt6.Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 32.0 , 5.0);
}
void config_A1SCREGP (getA1SCREGP_t *A1SCREGP)
{
    A1SCREGP -> Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    A1SCREGP -> bt3.Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 32.0 , 5.0);
}
void config_A1SCRDSR2 (getA1SCRDSR2_t *A1SCRDSR2)
{
    A1SCRDSR2 -> bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Fault_Suppression_Request= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSR2 -> bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request= Parameter_Translate(5 , 8.0 , 3.0);
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSR2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater_Command= Parameter_Translate(80 , 0.4 , 0.0);
    A1SCRDSR2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Command= Parameter_Translate(80 , 0.4 , 0.0);
    A1SCRDSR2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater_Command= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A1SCRDSI2 (getA1SCRDSI2_t *A1SCRDSI2)
{
    A1SCRDSI2 -> Aftertreatment_1_SCR_Dosing_Air_Assist_Absolute_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    A1SCRDSI2 -> Aftertreatment_1_SCR_Dosing_Air_Assist_Valve= Parameter_Translate(80 , 0.4 , 0.0);
    A1SCRDSI2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    A1SCRDSI2 -> bt4.Aftertreatment_1_SCR_Dosing_Valve_Exhaust_Temperature_Reduction_Request= Parameter_Translate(5 , 8.0 , 3.0);
    A1SCRDSI2 -> bt4.Aftertreatment_1_SCR_Feedback_Control_Status= Parameter_Translate(5 , 8.0 , 3.0);
    A1SCRDSI2 -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_State= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSI2 -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A1SCRDSI2 -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_State= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSI2 -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A1SCRDSI2 -> bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_State= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSI2 -> bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
    A1SCRDSI2 -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_State= Parameter_Translate(2 , 4.0 , 2.0);
    A1SCRDSI2 -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI= Parameter_Translate(24 , 4.0 , 2.0);
}
void config_AT2FC2 (getAT2FC2_t *AT2FC2)
{
    AT2FC2 -> Aftertreatment_2_Fuel_Pressure_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2FC2 -> bt3.Aftertreatment_2_Fuel_Pump_Relay_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT2FC2 -> bt3.Aftertreatment_2_Fuel_Flow_Diverter_Valve_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT2FC2 -> Aftertreatment_2_Fuel_Pressure_2_Control= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT2TWCC (getAT2TWCC_t *AT2TWCC)
{
    AT2TWCC -> Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2TWCC -> Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2TWCC -> Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2TWCC -> bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT2TWCC -> bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT2TWCC -> bt8.Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_AT1TWCC (getAT1TWCC_t *AT1TWCC)
{
    AT1TWCC -> Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1TWCC -> Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1TWCC -> Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1TWCC -> bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT1TWCC -> bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT1TWCC -> bt8.Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_O2FT2 (getO2FT2_t *O2FT2)
{
    O2FT2 -> Long_term_Fuel_Trim___Bank_2= Parameter_Translate(80 , 0.1 , -100.0);
    O2FT2 -> Short_term_Fuel_Trim___Bank_2= Parameter_Translate(80 , 0.1 , -100.0);
    O2FT2 -> bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_2= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_O2FT1 (getO2FT1_t *O2FT1)
{
    O2FT1 -> Long_term_Fuel_Trim___Bank_1= Parameter_Translate(80 , 0.1 , -100.0);
    O2FT1 -> Short_term_Fuel_Trim___Bank_1= Parameter_Translate(80 , 0.1 , -100.0);
    O2FT1 -> bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_1= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_ACCVC (getACCVC_t *ACCVC)
{
    ACCVC -> bt1.Aftercooler_Coolant_Thermostat_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    ACCVC -> Desired_Aftercooler_Coolant_Intake_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    ACCVC -> Desired_Aftercooler_Coolant_Thermostat_Opening= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_ECCVC (getECCVC_t *ECCVC)
{
    ECCVC -> bt1.Engine_Coolant_Thermostat_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    ECCVC -> Desired_Engine_Coolant_Pump_Outlet_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    ECCVC -> Desired_Engine_Coolant_Thermostat_Opening= Parameter_Translate(80 , 0.4 , 0.0);
    ECCVC -> Engine_Auxiliary_Cooler_Supply_Valve_1_Actuator_Command= Parameter_Translate(80 , 0.4 , 0.0);
    ECCVC -> Engine_Auxiliary_Cooler_Supply_Valve_2_Actuator_Command= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EAI (getEAI_t *EAI)
{
    EAI -> Engine_Exhaust_Gas_Temperature_Average= Parameter_Translate(1387 , 0.03125 , -273.0);
    EAI -> Engine_Exhaust_Gas_Temperature_Average___Bank_1= Parameter_Translate(1387 , 0.03125 , -273.0);
    EAI -> Engine_Exhaust_Gas_Temperature_Average___Bank_2= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_AT1FC2 (getAT1FC2_t *AT1FC2)
{
    AT1FC2 -> Aftertreatment_1_Fuel_Pressure_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1FC2 -> bt3.Aftertreatment_1_Fuel_Pump_Relay_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT1FC2 -> bt3.Aftertreatment_1_Fuel_Flow_Diverter_Valve_Control= Parameter_Translate(2 , 4.0 , 2.0);
    AT1FC2 -> Aftertreatment_1_Fuel_Pressure_2_Actuator_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1FC2 -> Aftertreatment_1_Hydrocarbon_Doser_Intake_Fuel_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_ET4 (getET4_t *ET4)
{
    ET4 -> Engine_Coolant_Temperature_2= Parameter_Translate(168 , 1.0 , -40.0);
    ET4 -> Engine_Coolant_Pump_Outlet_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    ET4 -> Engine_Coolant_Thermostat_Opening= Parameter_Translate(80 , 0.4 , 0.0);
    ET4 -> Engine_Exhaust_Valve_Actuation_System_Oil_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET4 -> Engine_Exhaust_Gas_Recirculation_1_Mixer_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_ZNVW (getZNVW_t *ZNVW)
{
    ZNVW -> bt1.Zero_Net_Vehicle_Weight_Change= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_GCVW (getGCVW_t *GCVW)
{
    GCVW -> Gross_Combination_Weight= Parameter_Translate(26319256 , 2.0 , 0.0);
    GCVW -> Net_Vehicle_Weight_Change= Parameter_Translate(13159628 , 2.0 , -16.0);
}
void config_AGCW (getAGCW_t *AGCW)
{
    AGCW -> bt1.Axle_Group_Location= Parameter_Translate(12 , 16.0 , 4.0);
    AGCW -> Axle_Group_Empty_Weight_Calibration= Parameter_Translate(102808 , 2.0 , 0.0);
    AGCW -> Axle_Group_Full_Weight_Calibration= Parameter_Translate(102808 , 2.0 , 0.0);
}
void config_AGW (getAGW_t *AGW)
{
    AGW -> bt1.Axle_Group_Location= Parameter_Translate(12 , 16.0 , 4.0);
    AGW -> Axle_Group_Weight= Parameter_Translate(102808 , 2.0 , 0.0);
}
void config_AAGW (getAAGW_t *AAGW)
{
    AAGW -> bt1.Steer_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt1.Lift_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt1.Drive_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt1.Tag_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt2.Additional_Tractor_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt2.Trailer_A_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt2.Trailer_B_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt2.Trailer_C_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt3.Trailer_D_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt3.Trailer_E_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt3.Trailer_F_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt3.Trailer_G_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt4.Trailer_H_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
    AAGW -> bt4.Additional_Trailer_Axle_Group_Weight_Available= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT2AC2 (getAT2AC2_t *AT2AC2)
{
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Differential_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Mass_Flow= Parameter_Translate(10280 , 0.2 , 0.0);
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AT1AC2 (getAT1AC2_t *AT1AC2)
{
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Differential_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Mass_Flow= Parameter_Translate(10280 , 0.2 , 0.0);
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_SCR1 (getSCR1_t *SCR1)
{
    SCR1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Average_Consumption= Parameter_Translate(2570 , 0.05 , 0.0);
    SCR1 -> Aftertreatment_1_Commanded_Diesel_Exhaust_Fluid_Consumption= Parameter_Translate(2570 , 0.05 , 0.0);
    SCR1 -> Aftertreatment_1_SCR_Conversion_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
    SCR1 -> Aftertreatment_1_SCR_Operator_Inducement_Active_Traveled_Distance= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_EEC8 (getEEC8_t *EEC8)
{
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_2_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Gas_Absolute_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Efficiency= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_DRC (getDRC_t *DRC)
{
    DRC -> bt1.Retract_Status_of_ramp_1= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt1.Enable_status_of_ramp_1= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt1.Movement_status_of_ramp_1= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt2.Retract_Status_of_ramp_2= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt2.Enable_status_of_ramp_2= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt2.Movement_status_of_ramp_2= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt3.Retract_Status_of_ramp_3= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt3.Enable_status_of_ramp_3= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt3.Movement_status_of_ramp_3= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt4.Retract_Status_of_ramp_4= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt4.Enable_status_of_ramp_4= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt4.Movement_status_of_ramp_4= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt5.Retract_Status_of_ramp_5= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt5.Enable_status_of_ramp_5= Parameter_Translate(2 , 4.0 , 2.0);
    DRC -> bt5.Movement_status_of_ramp_5= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BSA (getBSA_t *BSA)
{
    BSA -> bt1.Tractor_Brake_Stroke_Axle_1_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt1.Tractor_Brake_Stroke_Axle_1_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt1.Tractor_Brake_Stroke_Axle_2_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt2.Tractor_Brake_Stroke_Axle_2_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt2.Tractor_Brake_Stroke_Axle_3_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt2.Tractor_Brake_Stroke_Axle_3_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt3.Tractor_Brake_Stroke_Axle_4_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt3.Tractor_Brake_Stroke_Axle_4_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt4.Tractor_Brake_Stroke_Axle_5_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt4.Tractor_Brake_Stroke_Axle_5_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt4.Trailer_Brake_Stroke_Axle_1_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt5.Trailer_Brake_Stroke_Axle_1_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt5.Trailer_Brake_Stroke_Axle_2_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt5.Trailer_Brake_Stroke_Axle_2_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt6.Trailer_Brake_Stroke_Axle_3_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt6.Trailer_Brake_Stroke_Axle_3_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt7.Trailer_Brake_Stroke_Axle_4_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt7.Trailer_Brake_Stroke_Axle_4_Right= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt7.Trailer_Brake_Stroke_Axle_5_Left= Parameter_Translate(5 , 8.0 , 3.0);
    BSA -> bt8.Trailer_Brake_Stroke_Axle_5_Right= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_ESV6 (getESV6_t *ESV6)
{
    ESV6 -> Engine_Spark_Plug_21= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV6 -> Engine_Spark_Plug_22= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV6 -> Engine_Spark_Plug_23= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV6 -> Engine_Spark_Plug_24= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ESV5 (getESV5_t *ESV5)
{
    ESV5 -> Engine_Spark_Plug_17= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV5 -> Engine_Spark_Plug_18= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV5 -> Engine_Spark_Plug_19= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV5 -> Engine_Spark_Plug_20= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ESV4 (getESV4_t *ESV4)
{
    ESV4 -> Engine_Spark_Plug_13= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV4 -> Engine_Spark_Plug_14= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV4 -> Engine_Spark_Plug_15= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV4 -> Engine_Spark_Plug_16= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ESV3 (getESV3_t *ESV3)
{
    ESV3 -> Engine_Spark_Plug_9= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV3 -> Engine_Spark_Plug_10= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV3 -> Engine_Spark_Plug_11= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV3 -> Engine_Spark_Plug_12= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ESV2 (getESV2_t *ESV2)
{
    ESV2 -> Engine_Spark_Plug_5= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV2 -> Engine_Spark_Plug_6= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV2 -> Engine_Spark_Plug_7= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV2 -> Engine_Spark_Plug_8= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ESV1 (getESV1_t *ESV1)
{
    ESV1 -> Engine_Spark_Plug_1= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV1 -> Engine_Spark_Plug_2= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV1 -> Engine_Spark_Plug_3= Parameter_Translate(51404 , 1.0 , 0.0);
    ESV1 -> Engine_Spark_Plug_4= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_AT2TI (getAT2TI_t *AT2TI)
{
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
}
void config_AT1TI (getAT1TI_t *AT1TI)
{
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
}
void config_AT2S (getAT2S_t *AT2S)
{
    AT2S -> Diesel_Particulate_Filter_2_Soot_Load_Percent= Parameter_Translate(200 , 1.0 , 0.0);
    AT2S -> Diesel_Particulate_Filter_2_Ash_Load_Percent= Parameter_Translate(200 , 1.0 , 0.0);
    AT2S -> Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2S -> Aftertreatment_2_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_AT1S (getAT1S_t *AT1S)
{
    AT1S -> Diesel_Particulate_Filter_1_Soot_Load_Percent= Parameter_Translate(200 , 1.0 , 0.0);
    AT1S -> Diesel_Particulate_Filter_1_Ash_Load_Percent= Parameter_Translate(200 , 1.0 , 0.0);
    AT1S -> Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1S -> Aftertreatment_1_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_DPFC1 (getDPFC1_t *DPFC1)
{
    DPFC1 -> bt1.Diesel_Particulate_Filter_Lamp_Command= Parameter_Translate(5 , 8.0 , 3.0);
    DPFC1 -> bt2.Diesel_Particulate_Filter_Passive_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt2.Diesel_Particulate_Filter_Active_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt2.Diesel_Particulate_Filter_Status= Parameter_Translate(5 , 8.0 , 3.0);
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Status= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Inhibit_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Clutch_Disengaged= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Service_Brake_Active= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_PTO_Active= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Accelerator_Pedal_Off_Idle= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Out_of_Neutral= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Above_Allowed_Speed= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Parking_Brake_Not_Set= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Temperature= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Fault_Active= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Timeout= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Temporary_System_Lockout= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Permanent_System_Lockout= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Engine_Not_Warmed_Up= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Below_Allowed_Speed= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt7.Diesel_Particulate_Filter_Automatic_Active_Regeneration_Initiation_Configuration= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt7.Exhaust_System_High_Temperature_Lamp_Command= Parameter_Translate(5 , 8.0 , 3.0);
    DPFC1 -> bt7.Diesel_Particulate_Filter_Active_Regeneration_Forced_Status= Parameter_Translate(5 , 8.0 , 3.0);
    DPFC1 -> bt8.Hydrocarbon_Doser_Purging_Enable= Parameter_Translate(2 , 4.0 , 2.0);
    DPFC1 -> bt8.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Pressure= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AFSS (getAFSS_t *AFSS)
{
    AFSS -> bt1.Left_Headlamp_Dynamic_Bending_Light= Parameter_Translate(5 , 8.0 , 3.0);
    AFSS -> bt1.Right_Headlamp_Dynamic_Bending_Light= Parameter_Translate(5 , 8.0 , 3.0);
    AFSS -> bt2.Left_Headlamp_Light_Distribution= Parameter_Translate(12 , 16.0 , 4.0);
    AFSS -> bt2.Right_Headlamp_Light_Distribution= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_EC2 (getEC2_t *EC2)
{
    EC2 -> Maximum_Crank_Attempts_per_Start_Attempt= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_EGRBV (getEGRBV_t *EGRBV)
{
    EGRBV -> EGR1_Cooler_Bypass_Actuator_Postion= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_TCI (getTCI_t *TCI)
{
    TCI -> bt1.Transfer_case_status= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_EFL_P9 (getEFL_P9_t *EFL_P9)
{
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_17= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_18= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_19= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_20= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EFL_P8 (getEFL_P8_t *EFL_P8)
{
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_13= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_14= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_15= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_16= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EFL_P7 (getEFL_P7_t *EFL_P7)
{
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_9= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_10= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_11= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_12= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EFL_P6 (getEFL_P6_t *EFL_P6)
{
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_5= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_6= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_7= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_8= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EFL_P5 (getEFL_P5_t *EFL_P5)
{
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_1= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_2= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_3= Parameter_Translate(5140 , 0.1 , 0.0);
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_4= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_VDS2 (getVDS2_t *VDS2)
{
    VDS2 -> Vehicle_Roll= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_J2012 (getJ2012_t *J2012)
{
    J2012 -> Number_of_J2012_DTCs= Parameter_Translate(200 , 1.0 , 0.0);
    J2012 -> J2012_DTC= Parameter_Translate(204 , 1.0 , 0.0);
    J2012 -> bt7.J2012_DTC_Status= Parameter_Translate(0 , 2.0 , 1.0);
    J2012 -> bt7.J2012_DTC_Occurrence_Count= Parameter_Translate(101 , 1.0 , 0.0);
}
void config_AT2GP (getAT2GP_t *AT2GP)
{
    AT2GP -> Diesel_Particulate_Filter_Intake_Pressure_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2GP -> Diesel_Particulate_Filter_Outlet_Pressure_2= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AT1GP (getAT1GP_t *AT1GP)
{
    AT1GP -> Diesel_Particulate_Filter_Intake_Pressure_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1GP -> Diesel_Particulate_Filter_Outlet_Pressure_1= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AETC (getAETC_t *AETC)
{
    AETC -> bt1.AETC_Data_Collection_Standard= Parameter_Translate(12 , 16.0 , 4.0);
    AETC -> bt1.Number_of_AETC_data_points= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_EOI (getEOI_t *EOI)
{
    EOI -> bt1.Engine_Operating_State= Parameter_Translate(12 , 16.0 , 4.0);
    EOI -> bt1.Fuel_Pump_Primer_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> Time_Remaining_in_Engine_Operating_State= Parameter_Translate(51404 , 1.0 , 0.0);
    EOI -> bt4.Engine_Fuel_Shutoff_Vent_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt4.Engine_Fuel_Shutoff_1_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt4.Engine_Fuel_Shutoff_2_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt4.Engine_Fuel_Shutoff_Valve_Leak_Test_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt5.Engine_Oil_Priming_Pump_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt5.Engine_Oil_Pre_heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt5.Engine_Electrical_System_Power_Conservation_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt5.Engine_Block___Coolant_Pre_heater_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt6.Engine_Coolant_Circulating_Pump_Control= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt6.Engine_Controlled_Shutdown_Request= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> bt6.Engine_Emergency__Immediate__Shutdown_Indication= Parameter_Translate(2 , 4.0 , 2.0);
    EOI -> Engine_Derate_Request= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EEC7 (getEEC7_t *EEC7)
{
    EEC7 -> Engine_Exhaust_Gas_Recirculation_1_Valve_Position= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC7 -> Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC7 -> Engine_Crankcase_Breather_Oil_Separator_Speed= Parameter_Translate(51404 , 1.0 , 0.0);
    EEC7 -> Commanded_Engine_Intake_Manifold_Pressure= Parameter_Translate(6425 , 0.125 , 0.0);
}
void config_TRF2 (getTRF2_t *TRF2)
{
    TRF2 -> bt1.Transmission_Oil_Filter_Restriction_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    TRF2 -> bt1.Transmission_Oil_Level_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    TRF2 -> bt1.Transmission_Overheat_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    TRF2 -> Transmission_Torque_Converter_Oil_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TRF2 -> Transmission_Oil_Life_Remaining= Parameter_Translate(80 , 0.4 , 0.0);
    TRF2 -> Transmission_Oil_Temperature_2= Parameter_Translate(1387 , 0.03125 , -273.0);
    TRF2 -> Transmission_Oil_Level_2_High___Low= Parameter_Translate(50 , 0.5 , -62.5);
    TRF2 -> bt8.Transmission_Oil_Level_2_Countdown_Timer= Parameter_Translate(12 , 16.0 , 4.0);
    TRF2 -> bt8.Transmission_Oil_Level_2_Measurement_Status= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_AT1HI (getAT1HI_t *AT1HI)
{
    AT1HI -> Aftertreatment_1_Total_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    AT1HI -> Aftertreatment_1_Total_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Total_Disabled_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Total_Number_of_Active_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Average_Time_Between_Active_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations= Parameter_Translate(421108121 , 0.125 , 0.0);
}
void config_AT2HI (getAT2HI_t *AT2HI)
{
    AT2HI -> Aftertreatment_2_Total_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    AT2HI -> Aftertreatment_2_Total_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Total_Disabled_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Total_Number_of_Active_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Average_Time_Between_Active_Regenerations= Parameter_Translate(3368864972 , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations= Parameter_Translate(421108121 , 0.125 , 0.0);
}
void config_A1DEFI (getA1DEFI_t *A1DEFI)
{
    A1DEFI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2= Parameter_Translate(168 , 1.0 , -40.0);
    A1DEFI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Concentration= Parameter_Translate(50 , 0.25 , 0.0);
    A1DEFI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Conductivity= Parameter_Translate(1000 , 5.0 , 0.0);
    A1DEFI -> bt4.Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI= Parameter_Translate(24 , 5.0 , 0.0);
    A1DEFI -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI= Parameter_Translate(24 , 5.0 , 0.0);
    A1DEFI -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Property= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_SEP2 (getSEP2_t *SEP2)
{
    SEP2 -> Sensor_supply_voltage_5= Parameter_Translate(2570 , 0.05 , 0.0);
    SEP2 -> Sensor_supply_voltage_6= Parameter_Translate(2570 , 0.05 , 0.0);
    SEP2 -> Sensor_supply_voltage_7= Parameter_Translate(2570 , 0.05 , 0.0);
    SEP2 -> Sensor_supply_voltage_8= Parameter_Translate(2570 , 0.05 , 0.0);
}
void config_SEP1 (getSEP1_t *SEP1)
{
    SEP1 -> Sensor_supply_voltage_1= Parameter_Translate(2570 , 0.05 , 0.0);
    SEP1 -> Sensor_supply_voltage_2= Parameter_Translate(2570 , 0.05 , 0.0);
    SEP1 -> Sensor_supply_voltage_3= Parameter_Translate(2570 , 0.05 , 0.0);
    SEP1 -> Sensor_supply_voltage_4= Parameter_Translate(2570 , 0.05 , 0.0);
}
void config_AT2AC1 (getAT2AC1_t *AT2AC1)
{
    AT2AC1 -> Aftertreatment_2_Supply_Air_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2AC1 -> Aftertreatment_2_Purge_Air_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2AC1 -> Aftertreatment_2_Air_Pressure_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    AT2AC1 -> Aftertreatment_2_Air_Pressure_Actuator_Position= Parameter_Translate(80 , 0.4 , 0.0);
    AT2AC1 -> bt8.Aftertreatment_2_Air_System_Relay= Parameter_Translate(2 , 4.0 , 2.0);
    AT2AC1 -> bt8.Aftertreatment_2_Atomization_Air_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT2AC1 -> bt8.Aftertreatment_2_Purge_Air_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT2AC1 -> bt8.Aftertreatment_2_Air_Enable_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT1AC1 (getAT1AC1_t *AT1AC1)
{
    AT1AC1 -> Aftertreatment_1_Supply_Air_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1AC1 -> Aftertreatment_1_Purge_Air_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1AC1 -> Aftertreatment_1_Air_Pressure_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1AC1 -> Aftertreatment_1_Air_Pressure_Actuator_Position= Parameter_Translate(80 , 0.4 , 0.0);
    AT1AC1 -> bt8.Aftertreatment_1_Air_System_Relay= Parameter_Translate(2 , 4.0 , 2.0);
    AT1AC1 -> bt8.Aftertreatment_1_Atomization_Air_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT1AC1 -> bt8.Aftertreatment_1_Purge_Air_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT1AC1 -> bt8.Aftertreatment_1_Air_Enable_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT2FC1 (getAT2FC1_t *AT2FC1)
{
    AT2FC1 -> Aftertreatment_2_Fuel_Pressure_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2FC1 -> Aftertreatment_2_Fuel_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    AT2FC1 -> Aftertreatment_2_Fuel_Pressure_1_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    AT2FC1 -> bt7.Aftertreatment_2_Fuel_Drain_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT2FC1 -> bt7.Aftertreatment_2_Ignition= Parameter_Translate(2 , 4.0 , 2.0);
    AT2FC1 -> bt7.Aftertreatment_2_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AT2FC1 -> bt7.Aftertreatment_2_Fuel_Enable_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT2FC1 -> Aftertreatment_2_Fuel_Injector_1_Heater_Control= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_AT1FC1 (getAT1FC1_t *AT1FC1)
{
    AT1FC1 -> Aftertreatment_1_Fuel_Pressure_1= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1FC1 -> Aftertreatment_1_Fuel_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    AT1FC1 -> Aftertreatment_1_Fuel_Pressure_1_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    AT1FC1 -> bt7.Aftertreatment_1_Fuel_Drain_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT1FC1 -> bt7.Aftertreatment_1_Ignition= Parameter_Translate(2 , 4.0 , 2.0);
    AT1FC1 -> bt7.Aftertreatment_1_Regeneration_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AT1FC1 -> bt7.Aftertreatment_1_Fuel_Enable_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    AT1FC1 -> Aftertreatment_1_Fuel_Injector_1_Heater_Control= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_GFI (getGFI_t *GFI)
{
    GFI -> Engine_Fuel_Valve_2_Intake_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    GFI -> Engine_Gas_2_Mass_Flow_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    GFI -> Engine_Fuel_Temperature_2= Parameter_Translate(168 , 1.0 , -40.0);
    GFI -> Engine_Fuel= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EEC6 (getEEC6_t *EEC6)
{
    EEC6 -> Engine_Turbocharger_Compressor_Bypass_Actuator_1_Command= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC6 -> Engine_Variable_Geometry_Turbocharger_Actuator_1= Parameter_Translate(80 , 0.4 , 0.0);
    EEC6 -> Engine_Turbocharger_Compressor_Bypass_Actuator_1= Parameter_Translate(80 , 0.4 , 0.0);
    EEC6 -> Engine_Turbocharger_Compressor_Bypass_Actuator_2_command= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC6 -> Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EEC6 -> bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    EEC6 -> bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_PTODE (getPTODE_t *PTODE)
{
    PTODE -> bt1.Enable_Switch_–_Transfer_case_output_shaft_PTO= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt1.Enable_Switch_–_Transmission_output_shaft_PTO= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt1.Enable_Switch_–_Transmission_input_shaft_PTO_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt1.Enable_Switch_–_Transmission_input_shaft_PTO_1= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt2.Enable_Switch___PTO_Engine_Flywheel= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt2.Enable_Switch___PTO_Engine_Accessory_Drive_1= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt2.Enable_Switch___PTO_Engine_Accessory_Drive_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt3.Engagement_Consent_–_Transfer_case_output_shaft_PTO= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt3.Engagement_Consent_–_Transmission_output_shaft_PTO= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt3.Engagement_Consent_–_Transmission_input_shaft_PTO_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt3.Engagement_Consent_–_Transmission_input_shaft_PTO_1= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt4.Engagement_Consent___PTO_Engine_Flywheel= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_1= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt5.Engagement_Status_–_Transfer_case_output_shaft_PTO= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt5.Engagement_Status_–_Transmission_output_shaft_PTO= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt5.Engagement_Status_–_Transmission_input_shaft_PTO_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt5.Engagement_Status_–_Transmission_input_shaft_PTO_1= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt6.Engagement_Status___PTO_Engine_Flywheel= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt6.Engagement_Status___PTO_Engine_Accessory_Drive_1= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt6.Engagement_Status___PTO_Engine_Accessory_Drive_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTODE -> bt7.At_least_one_PTO_engaged= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_DC2 (getDC2_t *DC2)
{
    DC2 -> bt1.Lock_Status_of_Door_1= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt1.Open_Status_of_Door_1= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt1.Enable_Status_of_Door_1= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt1.Lock_Status_of_Door_2= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt2.Open_Status_of_Door_2= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt2.Enable_Status_of_Door_2= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt2.Lock_Status_of_Door_3= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt2.Open_Status_of_Door_3= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt3.Enable_Status_of_Door_3= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt3.Lock_Status_of_Door_4= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt3.Open_Status_of_Door_4= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt3.Enable_Status_of_Door_4= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt4.Lock_Status_of_Door_5= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt4.Open_Status_of_Door_5= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt4.Enable_Status_of_Door_5= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt4.Lock_Status_of_Door_6= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt5.Open_Status_of_Door_6= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt5.Enable_Status_of_Door_6= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt5.Lock_Status_of_Door_7= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt5.Open_Status_of_Door_7= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt6.Enable_Status_of_Door_7= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt6.Lock_Status_of_Door_8= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt6.Open_Status_of_Door_8= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt6.Enable_Status_of_Door_8= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt7.Lock_Status_of_Door_9= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt7.Open_Status_of_Door_9= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt7.Enable_Status_of_Door_9= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt7.Lock_Status_of_Door_10= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt8.Open_Status_of_Door_10= Parameter_Translate(2 , 4.0 , 2.0);
    DC2 -> bt8.Enable_Status_of_Door_10= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_WCM2 (getWCM2_t *WCM2)
{
    WCM2 -> bt1.Network_Transceiver_Status_2= Parameter_Translate(204 , 256.0 , 8.0);
    WCM2 -> bt2.Network_Service_Status_2= Parameter_Translate(204 , 256.0 , 8.0);
    WCM2 -> bt3.Network_Antenna_Status_2= Parameter_Translate(204 , 256.0 , 8.0);
    WCM2 -> Network_Signal_Strength_2= Parameter_Translate(80 , 0.4 , 0.0);
    WCM2 -> bt5.Wireless_Communication_Network_Type_2= Parameter_Translate(204 , 256.0 , 8.0);
}
void config_WCM1 (getWCM1_t *WCM1)
{
    WCM1 -> bt1.Network_Transceiver_Status_1= Parameter_Translate(204 , 256.0 , 8.0);
    WCM1 -> bt2.Network_Service_Status_1= Parameter_Translate(204 , 256.0 , 8.0);
    WCM1 -> bt3.Network_Antenna_Status_1= Parameter_Translate(204 , 256.0 , 8.0);
    WCM1 -> Network_Signal_Strength_1= Parameter_Translate(80 , 0.4 , 0.0);
    WCM1 -> bt5.Wireless_Communication_Network_Type_1= Parameter_Translate(204 , 256.0 , 8.0);
}
void config_EFL_P4 (getEFL_P4_t *EFL_P4)
{
    EFL_P4 -> Engine_Charge_Air_Cooler_1_Intake_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFL_P4 -> Engine_Charge_Air_Cooler_2_Intake_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFL_P4 -> Engine_Coolant_Pump_Differential_Pressure= Parameter_Translate(322 , 1.64 , -7.0);
    EFL_P4 -> Engine_Centrifugal_Oil_Filter_speed= Parameter_Translate(205616 , 4.0 , 0.0);
    EFL_P4 -> Engine_Intercooler_Coolant_Level= Parameter_Translate(80 , 0.4 , 0.0);
    EFL_P4 -> Engine_Charge_Air_Cooler_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
}
void config_FWSS2 (getFWSS2_t *FWSS2)
{
    FWSS2 -> bt1.Fifth_Wheel_Error_Status= Parameter_Translate(12 , 16.0 , 4.0);
    FWSS2 -> bt1.Fifth_Wheel_Lock_Ready_to_Couple_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    FWSS2 -> bt1.Fifth_Wheel_Lock_Couple_Status_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    FWSS2 -> Fifth_Wheel_Slider_Position= Parameter_Translate(2000 , 10.0 , 0.0);
    FWSS2 -> bt3.Fifth_Wheel_Slider_Lock_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AT2IMG (getAT2IMG_t *AT2IMG)
{
    AT2IMG -> Aftertreatment_2_Exhaust_Gas_Temperature_2= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2IMG -> Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2IMG -> Aftertreatment_2_Diesel_Particulate_Filter_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT2IMG -> bt7.Aftertreatment_2_Exhaust_Gas_Temperature_2_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT2IMG -> bt7.Aftertreatment_2_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT2IMG -> bt8.Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_AT2OG2 (getAT2OG2_t *AT2OG2)
{
    AT2OG2 -> Aftertreatment_2_Exhaust_Gas_Temperature_3= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2OG2 -> Aftertreatment_2_Diesel_Particulate_Filter_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2OG2 -> bt5.Aftertreatment_2_Exhaust_Gas_Temperature_3_Preliminary_FMI= Parameter_Translate(24 , 0.03125 , -273.0);
    AT2OG2 -> bt6.Aftertreatment_2_Diesel_Particulate_Filter_Exhaust_Gas= Parameter_Translate(24 , 0.03125 , -273.0);
}
void config_AT2IG2 (getAT2IG2_t *AT2IG2)
{
    AT2IG2 -> Aftertreatment_2_Exhaust_Gas_Temperature_1= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2IG2 -> Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT2IG2 -> bt5.Aftertreatment_2_Exhaust_Gas_Temperature_1_Preliminary_FMI= Parameter_Translate(24 , 0.03125 , -273.0);
    AT2IG2 -> bt6.Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.03125 , -273.0);
}
void config_AT1IMG (getAT1IMG_t *AT1IMG)
{
    AT1IMG -> Aftertreatment_1_Exhaust_Gas_Temperature_2= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1IMG -> Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1IMG -> Aftertreatment_1_Diesel_Particulate_Filter_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1IMG -> bt7.Aftertreatment_1_Exhaust_Gas_Temperature_2_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT1IMG -> bt7.Aftertreatment_1_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT1IMG -> bt8.Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
}
void config_AT1OG2 (getAT1OG2_t *AT1OG2)
{
    AT1OG2 -> Aftertreatment_1_Exhaust_Gas_Temperature_3= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1OG2 -> Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1OG2 -> bt5.Aftertreatment_1_Exhaust_Gas_Temperature_3_Preliminary_FMI= Parameter_Translate(24 , 0.03125 , -273.0);
    AT1OG2 -> bt6.Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Exhaust_Gas= Parameter_Translate(24 , 0.03125 , -273.0);
}
void config_AT1IG2 (getAT1IG2_t *AT1IG2)
{
    AT1IG2 -> Aftertreatment_1_Exhaust_Gas_Temperature_1= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1IG2 -> Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AT1IG2 -> bt5.Aftertreatment_1_Exhaust_Gas_Temperature_1_Preliminary_FMI= Parameter_Translate(24 , 0.03125 , -273.0);
    AT1IG2 -> bt6.Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI= Parameter_Translate(24 , 0.03125 , -273.0);
}
void config_TPRI (getTPRI_t *TPRI)
{
    TPRI -> bt1.Tire_Location= Parameter_Translate(204 , 256.0 , 8.0);
    TPRI -> Reference_Tire_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
}
void config_TR6 (getTR6_t *TR6)
{
    TR6 -> bt1.Farebox_Emergency_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TR6 -> bt2.Farebox_Alarm_Identifier= Parameter_Translate(101 , 128.0 , 7.0);
}
void config_TR5 (getTR5_t *TR5)
{
    TR5 -> bt1.Transaction_Type= Parameter_Translate(12 , 16.0 , 4.0);
    TR5 -> bt1.Passenger_Type= Parameter_Translate(12 , 16.0 , 4.0);
    TR5 -> bt2.Type_of_Fare= Parameter_Translate(12 , 16.0 , 4.0);
    TR5 -> bt2.Payment_Details= Parameter_Translate(12 , 16.0 , 4.0);
    TR5 -> bt3.Fare_Validity= Parameter_Translate(12 , 1.0 , 0.0);
    TR5 -> bt3.Pass_Category= Parameter_Translate(12 , 1.0 , 0.0);
    TR5 -> bt4.Initial_Fare_Agency= Parameter_Translate(24 , 1.0 , 0.0);
    TR5 -> bt5.Type_of_Service= Parameter_Translate(5 , 8.0 , 3.0);
    TR5 -> bt5.Transfer_Type= Parameter_Translate(24 , 32.0 , 5.0);
    TR5 -> bt6.Route_Number= Parameter_Translate(3276 , 1.0 , 0.0);
    TR5 -> Transfer_Sold= Parameter_Translate(204 , 1.0 , 0.0);
}
/*
void config_TR4 (getTR4_t *TR4)
{
    TR4 -> bt0.Farebox_Service_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TR4 -> bt0.Trip_Status= Parameter_Translate(5 , 8.0 , 3.0);
    TR4 -> bt0.Trip_Direction= Parameter_Translate(12 , 16.0 , 4.0);
    TR4 -> bt0.Fare_Presets= Parameter_Translate(204 , 256.0 , 8.0);
    TR4 -> Trip_Number= Parameter_Translate(52428 , 1.0 , 0.0);
    TR4 -> Pattern_Number= Parameter_Translate(52428 , 1.0 , 0.0);
    TR4 -> Assigned_Route= Parameter_Translate(52428 , 1.0 , 0.0);
    TR4 -> Assigned_Run= Parameter_Translate(52428 , 1.0 , 0.0);
    TR4 -> Assigned_Block= Parameter_Translate(52428 , 1.0 , 0.0);
    TR4 -> Driver_s_farebox_security_code= Parameter_Translate(52428 , 1.0 , 0.0);
}
*/
void config_TR3 (getTR3_t *TR3)
{
    TR3 -> bt1.Range_Code_Enable= Parameter_Translate(2 , 4.0 , 2.0);
    TR3 -> bt1.Transit_Route_ID_Usage= Parameter_Translate(2 , 4.0 , 2.0);
    TR3 -> bt1.Intersection_Preemption_Request_Response= Parameter_Translate(2 , 4.0 , 2.0);
    TR3 -> bt2.Priority_of_Response_Sent_by_Emitter= Parameter_Translate(12 , 16.0 , 4.0);
    TR3 -> bt2.Transit_Door_Enable= Parameter_Translate(2 , 4.0 , 2.0);
    TR3 -> bt2.Strobe_Activation_Control_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TR3 -> Vehicle_ID= Parameter_Translate(52428 , 1.0 , 0.0);
}
void config_TR1 (getTR1_t *TR1)
{
    TR1 -> Agency= Parameter_Translate(204 , 1.0 , 0.0);
    TR1 -> Number_of_bytes_in_the_Transit_Assigned_Route_Identity= Parameter_Translate(200 , 1.0 , 0.0);
    TR1 -> Number_of_bytes_in_the_Transit_Assigned_Run_Identity= Parameter_Translate(200 , 1.0 , 0.0);
    TR1 -> Number_of_bytes_in_the_Transit_Assigned_Block_Identity= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_TR2 (getTR2_t *TR2)
{
    TR2 -> Number_of_bytes_in_the_Milepost_Identification= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_TR7 (getTR7_t *TR7)
{
    TR7 -> bt1.Type_of_Passenger_Count= Parameter_Translate(204 , 256.0 , 8.0);
    TR7 -> Patron_Count= Parameter_Translate(200 , 1.0 , 0.0);
    TR7 -> bt3.Silent_Alarm_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TR7 -> bt3.Vehicle_Use_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TR7 -> bt3.Transit_Run_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EFL_P3 (getEFL_P3_t *EFL_P3)
{
    EFL_P3 -> Engine_Intake_Valve_Actuation_System_Oil_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
    EFL_P3 -> Engine_Exhaust_Gas_Recirculation_1_Intake_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFL_P3 -> Engine_Exhaust_Valve_Actuation_System_Oil_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
    EFL_P3 -> Engine_Exhaust_Gas_Recirculation_1_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFL_P3 -> Engine_Throttle_Valve_1_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_EEC14 (getEEC14_t *EEC14)
{
    EEC14 -> Engine_Exhaust_Gas_Recirculation_1_Valve_1_Position_Error= Parameter_Translate(105 , 0.004 , -125.0);
    EEC14 -> Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position_Error= Parameter_Translate(105 , 0.004 , -125.0);
    EEC14 -> Engine_Fuel_Mass_Flow_Rate= Parameter_Translate(257 , 0.005 , 0.0);
    EEC14 -> bt7.Fuel_Type= Parameter_Translate(204 , 256.0 , 8.0);
}
void config_EEC15 (getEEC15_t *EEC15)
{
    EEC15 -> Accelerator_Pedal_1_Channel_2= Parameter_Translate(80 , 0.4 , 0.0);
    EEC15 -> Accelerator_Pedal_1_Channel_3= Parameter_Translate(80 , 0.4 , 0.0);
    EEC15 -> Accelerator_Pedal_2_Channel_2= Parameter_Translate(80 , 0.4 , 0.0);
    EEC15 -> Accelerator_Pedal_2_Channel_3= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EBC5 (getEBC5_t *EBC5)
{
    EBC5 -> bt1.Brake_Temperature_Warning= Parameter_Translate(2 , 4.0 , 2.0);
    EBC5 -> bt1.Halt_brake_mode= Parameter_Translate(5 , 8.0 , 3.0);
    EBC5 -> bt1.Hill_holder_mode= Parameter_Translate(5 , 8.0 , 3.0);
    EBC5 -> bt2.Foundation_Brake_Use= Parameter_Translate(2 , 4.0 , 2.0);
    EBC5 -> bt2.XBR_System_State= Parameter_Translate(2 , 4.0 , 2.0);
    EBC5 -> bt2.XBR_Active_Control_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    EBC5 -> XBR_Acceleration_Limit= Parameter_Translate(10 , 0.1 , -12.5);
    EBC5 -> bt4.Parking_Brake_Actuator_Fully_Activated= Parameter_Translate(2 , 4.0 , 2.0);
    EBC5 -> bt4.Emergency_Braking_Active= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_CSA (getCSA_t *CSA)
{
    CSA -> bt1.Engine_Start_Enable_Device_1= Parameter_Translate(2 , 4.0 , 2.0);
    CSA -> bt1.Engine_Start_Enable_Device_2= Parameter_Translate(2 , 4.0 , 2.0);
    CSA -> bt2.Engine_Start_Enable_Device_1_Configuration= Parameter_Translate(12 , 16.0 , 4.0);
    CSA -> bt2.Engine_Start_Enable_Device_2_Configuration= Parameter_Translate(12 , 16.0 , 4.0);
    CSA -> Engine_Cold_Start_Fuel_Igniter_Command= Parameter_Translate(80 , 0.4 , 0.0);
    CSA -> bt4.Engine_Cold_Start_Fuel_Igniter_Relay= Parameter_Translate(2 , 4.0 , 2.0);
    CSA -> bt4.Engine_Cold_Start_Fuel_Igniter_Relay_Feedback= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_OHCSS (getOHCSS_t *OHCSS)
{
    OHCSS -> bt1.Engine_Auxiliary_Governor_State= Parameter_Translate(2 , 4.0 , 2.0);
    OHCSS -> bt1.Engine_Multi_Unit_Sync_State= Parameter_Translate(2 , 4.0 , 2.0);
    OHCSS -> bt1.Engine_Alternate_Low_Idle_Select_State= Parameter_Translate(2 , 4.0 , 2.0);
    OHCSS -> bt2.Engine_Alternate_Rating_Select_State= Parameter_Translate(204 , 256.0 , 8.0);
    OHCSS -> bt3.Engine_Alternate_Droop_Accelerator_1_Select_State= Parameter_Translate(12 , 16.0 , 4.0);
    OHCSS -> bt3.Engine_Alternate_Droop_Accelerator_2_Select_State= Parameter_Translate(12 , 16.0 , 4.0);
    OHCSS -> bt4.Engine_Alternate_Droop_Remote_Accelerator_Select_State= Parameter_Translate(12 , 16.0 , 4.0);
    OHCSS -> bt4.Engine_Alternate_Droop_Auxiliary_Input_Select_State= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_ISCS (getISCS_t *ISCS)
{
    ISCS -> bt1.Engine_Operator_Primary_Intermediate_Speed_Select_State= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_CMI (getCMI_t *CMI)
{
    CMI -> Total_Count_of_Configuration_Changes_Made= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ISC (getISC_t *ISC)
{
    ISC -> bt1.Engine_Operator_Primary_Intermediate_Speed_Select= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_OHECS (getOHECS_t *OHECS)
{
    OHECS -> bt1.Engine_Auxiliary_Governor_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    OHECS -> bt1.Engine_Synchronization_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    OHECS -> bt1.Engine_Alternate_Low_Idle_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    OHECS -> Engine_Alternate_Rating_Select= Parameter_Translate(204 , 1.0 , 0.0);
    OHECS -> bt3.Engine_Alternate_Droop_Accelerator_1_Select= Parameter_Translate(12 , 16.0 , 4.0);
    OHECS -> bt3.Engine_Alternate_Droop_Accelerator_2_Select= Parameter_Translate(12 , 16.0 , 4.0);
    OHECS -> bt4.Engine_Alternate_Droop_Remote_Accelerator_Select= Parameter_Translate(12 , 16.0 , 4.0);
    OHECS -> bt4.Engine_Alternate_Droop_Auxiliary_Input_Select= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_OEL (getOEL_t *OEL)
{
    OEL -> bt1.Work_Light_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    OEL -> bt1.Main_Light_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    OEL -> bt2.Turn_Signal_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    OEL -> bt2.Hazard_Light_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    OEL -> bt2.High_Low_Beam_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    OEL -> Operators_Desired_Back_light= Parameter_Translate(80 , 0.4 , 0.0);
    OEL -> Operators_Desired___Delayed_Lamp_Off_Time= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_OWW (getOWW_t *OWW)
{
    OWW -> bt1.Front_Non_operator_Wiper_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    OWW -> bt1.Front_Operator_Wiper_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    OWW -> bt2.Rear_Wiper_Switch= Parameter_Translate(12 , 16.0 , 4.0);
    OWW -> Front_Operator_Wiper_Delay_Control= Parameter_Translate(80 , 0.4 , 0.0);
    OWW -> Front_Non_operator_Wiper_Delay_Control= Parameter_Translate(80 , 0.4 , 0.0);
    OWW -> Rear_Wiper_Delay_Control= Parameter_Translate(80 , 0.4 , 0.0);
    OWW -> bt6.Front_Non_operator_Washer_Switch= Parameter_Translate(5 , 8.0 , 3.0);
    OWW -> bt6.Front_Operator_Washer_Switch= Parameter_Translate(5 , 8.0 , 3.0);
    OWW -> bt7.Rear_Washer_Function= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_IC2 (getIC2_t *IC2)
{
    IC2 -> Engine_Air_Filter_2_Differential_Pressure= Parameter_Translate(10 , 0.05 , 0.0);
    IC2 -> Engine_Air_Filter_3_Differential_Pressure= Parameter_Translate(10 , 0.05 , 0.0);
    IC2 -> Engine_Air_Filter_4_Differential_Pressure= Parameter_Translate(10 , 0.05 , 0.0);
    IC2 -> Engine_Intake_Manifold_2_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    IC2 -> Engine_Intake_Manifold_1_Absolute_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    IC2 -> Engine_Intake_Manifold_1_Absolute_Pressure__High_Resolution_= Parameter_Translate(5140 , 0.1 , 0.0);
    IC2 -> Engine_Intake_Manifold_2_Absolute_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
}
void config_FMS (getFMS_t *FMS)
{
    FMS -> bt1.FMS_standard_Diagnostics_Supported= Parameter_Translate(2 , 4.0 , 2.0);
    FMS -> bt1.FMS_standard_Requests_Supported= Parameter_Translate(2 , 4.0 , 2.0);
    FMS -> FMS_standard_SW_version_supported_= Parameter_Translate(204 , 4.0 , 2.0);
}
void config_EP (getEP_t *EP)
{
    EP -> Keep_Alive_Battery_Consumption= Parameter_Translate(51404 , 1.0 , 0.0);
    EP -> Data_Memory_Usage= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_TCI6 (getTCI6_t *TCI6)
{
    TCI6 -> Engine_Turbocharger_1_Compressor_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI6 -> Engine_Turbocharger_2_Compressor_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI6 -> Engine_Turbocharger_3_Compressor_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI6 -> Engine_Turbocharger_4_Compressor_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_CM3 (getCM3_t *CM3)
{
    CM3 -> bt1.Transfer_Case_Selector_Switch= Parameter_Translate(5 , 8.0 , 3.0);
    CM3 -> bt2.Fifth_Wheel_Release_Control= Parameter_Translate(2 , 4.0 , 2.0);
    CM3 -> bt2.Fifth_Wheel_Release_Control_Security_Lockout= Parameter_Translate(2 , 4.0 , 2.0);
    CM3 -> bt3.Transmission_Oil_Level_Request= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EEC5 (getEEC5_t *EEC5)
{
    EEC5 -> Engine_Turbocharger_1_Calculated_Turbine_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EEC5 -> Engine_Turbocharger_1_Calculated_Turbine_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EEC5 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_Control= Parameter_Translate(128 , 0.0025 , 0.0);
    EEC5 -> bt7.Engine_Variable_Geometry_Turbocharger__VGT__Air_Control_Shutoff_Valve= Parameter_Translate(2 , 4.0 , 2.0);
    EEC5 -> bt7.Engine_Fuel_Control_Control_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    EEC5 -> bt7.Engine_Variable_Geometry_Turbocharger_1_Control_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    EEC5 -> Engine_Variable_Geometry_Turbocharger__VGT__1_Actuator_Position= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_BJM1 (getBJM1_t *BJM1)
{
    BJM1 -> bt1.Joystick_1_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt1.Joystick_1_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt1.Joystick_1_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt1.Joystick_1_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM1 -> bt3.Joystick_1_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt3.Joystick_1_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt3.Joystick_1_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt3.Joystick_1_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM1 -> bt5.Joystick_1_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt5.Joystick_1_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt6.Joystick_1_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt6.Joystick_1_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt6.Joystick_1_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt6.Joystick_1_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt7.Joystick_1_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt7.Joystick_1_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt7.Joystick_1_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt7.Joystick_1_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt8.Joystick_1_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt8.Joystick_1_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt8.Joystick_1_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM1 -> bt8.Joystick_1_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM1 (getEJM1_t *EJM1)
{
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM1 -> bt5.Joystick_1_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt5.Joystick_1_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt5.Joystick_1_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt5.Joystick_1_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM1 -> bt7.Joystick_1_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt7.Joystick_1_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM1 -> bt7.Joystick_1_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM2 (getBJM2_t *BJM2)
{
    BJM2 -> bt1.Joystick_2_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt1.Joystick_2_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt1.Joystick_2_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt1.Joystick_2_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM2 -> bt3.Joystick_2_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt3.Joystick_2_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt3.Joystick_2_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt3.Joystick_2_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM2 -> bt5.Joystick_2_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt5.Joystick_2_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt6.Joystick_2_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt6.Joystick_2_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt6.Joystick_2_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt6.Joystick_2_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt7.Joystick_2_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt7.Joystick_2_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt7.Joystick_2_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt7.Joystick_2_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt8.Joystick_2_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt8.Joystick_2_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt8.Joystick_2_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM2 -> bt8.Joystick_2_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM2 (getEJM2_t *EJM2)
{
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM2 -> bt5.Joystick_2_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt5.Joystick_2_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt5.Joystick_2_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt5.Joystick_2_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM2 -> bt7.Joystick_2_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt7.Joystick_2_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM2 -> bt7.Joystick_2_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BJM3 (getBJM3_t *BJM3)
{
    BJM3 -> bt1.Joystick_3_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt1.Joystick_3_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt1.Joystick_3_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt1.Joystick_3_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM3 -> bt3.Joystick_3_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt3.Joystick_3_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt3.Joystick_3_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt3.Joystick_3_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    BJM3 -> bt5.Joystick_3_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt5.Joystick_3_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt6.Joystick_3_Button_4_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt6.Joystick_3_Button_3_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt6.Joystick_3_Button_2_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt6.Joystick_3_Button_1_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt7.Joystick_3_Button_8_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt7.Joystick_3_Button_7_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt7.Joystick_3_Button_6_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt7.Joystick_3_Button_5_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt8.Joystick_3_Button_12_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt8.Joystick_3_Button_11_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt8.Joystick_3_Button_10_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
    BJM3 -> bt8.Joystick_3_Button_9_Pressed_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EJM3 (getEJM3_t *EJM3)
{
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Lever_Left_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Lever_Right_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Lever_Back_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM3 -> bt5.Joystick_3_Theta_Axis_Neutral_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt5.Joystick_3_Theta_Axis_Counter_Clockwise_Negative_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt5.Joystick_3_Theta_Axis_Clockwise_Positive_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt5.Joystick_3_Theta_Axis_Position= Parameter_Translate(81 , 0.1 , 0.0);
    EJM3 -> bt7.Joystick_3_Theta_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt7.Joystick_3_Grip_Y_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
    EJM3 -> bt7.Joystick_3_Grip_X_Axis_Detent_Position_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_MCI (getMCI_t *MCI)
{
    MCI -> bt1.Engine_Throttle_Synchronization_Mode_Status= Parameter_Translate(12 , 16.0 , 4.0);
    MCI -> bt1.Trolling_Mode_Status= Parameter_Translate(2 , 4.0 , 2.0);
    MCI -> bt1.Slow_Vessel_Mode_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_FWD (getFWD_t *FWD)
{
    FWD -> bt1.Front_Wheel_Drive_Actuator_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AMB2 (getAMB2_t *AMB2)
{
    AMB2 -> Solar_Intensity_Percent= Parameter_Translate(80 , 0.4 , 0.0);
    AMB2 -> Solar_Sensor_Maximum= Parameter_Translate(80 , 0.4 , 2.0);
    AMB2 -> Specific_Humidity= Parameter_Translate(514 , 0.01 , 0.0);
    AMB2 -> Calculated_Ambient_Air_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AMB2 -> Barometric_Absolute_Pressure__High_Resolution_= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_CACI (getCACI_t *CACI)
{
    CACI -> Cab_A_C_Refrigerant_Compressor_Outlet_Pressure= Parameter_Translate(3200 , 16.0 , 0.0);
}
void config_SPR (getSPR_t *SPR)
{
    SPR -> Pneumatic_Supply_Pressure_Request= Parameter_Translate(1600 , 8.0 , 0.0);
    SPR -> Parking_and_or_Trailer_Air_Pressure_Request= Parameter_Translate(1600 , 8.0 , 0.0);
    SPR -> Service_Brake_Air_Pressure_Request_Circuit_1= Parameter_Translate(1600 , 8.0 , 0.0);
    SPR -> Service_Brake_Air_Pressure_Request_Circuit_2= Parameter_Translate(1600 , 8.0 , 0.0);
    SPR -> Auxiliary_Equipment_Supply_Pressure_Request= Parameter_Translate(1600 , 8.0 , 0.0);
    SPR -> Air_Suspension_Supply_Pressure_Request= Parameter_Translate(1600 , 8.0 , 0.0);
}
void config_EOAC (getEOAC_t *EOAC)
{
    EOAC -> Travel_Velocity_Control_Position= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_EPD (getEPD_t *EPD)
{
    EPD -> Payload_Percentage= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_MVS (getMVS_t *MVS)
{
    MVS -> Maximum_Vehicle_Speed_Limit_1= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_2= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_3= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_4= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_5= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_6= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_7= Parameter_Translate(200 , 1.0 , 0.0);
    MVS -> Applied_Vehicle_Speed_Limit= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_HBS (getHBS_t *HBS)
{
    HBS -> Hydraulic_Brake_Pressure_Circuit_1= Parameter_Translate(20 , 100.0 , 0.0);
    HBS -> Hydraulic_Brake_Pressure_Circuit_2= Parameter_Translate(20 , 100.0 , 0.0);
    HBS -> bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_1= Parameter_Translate(2 , 4.0 , 2.0);
    HBS -> bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_2= Parameter_Translate(2 , 4.0 , 2.0);
    HBS -> bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_1= Parameter_Translate(2 , 4.0 , 2.0);
    HBS -> bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_2= Parameter_Translate(2 , 4.0 , 2.0);
    HBS -> bt4.Hydraulic_Brake_System_Audible_Warning_Command= Parameter_Translate(2 , 4.0 , 2.0);
    HBS -> bt4.Hydraulic_Brake_Fluid_Level_Switch= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ET (getET_t *ET)
{
    ET -> Engine_Exhaust_Gas_Temperature___Right_Manifold= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET -> Engine_Exhaust_Gas_Temperature___Left_Manifold= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_LD (getLD_t *LD)
{
    LD -> bt1.Running_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt1.Alternate_Beam_Head_Light_Data= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt1.Low_Beam_Head_Light_Data= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt1.High_Beam_Head_Light_Data= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt2.Tractor_Front_Fog_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt2.Rotating_Beacon_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt2.Right_Turn_Signal_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt2.Left_Turn_Signal_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt3.Back_Up_Light_and_Alarm_Horn= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt3.Center_Stop_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt3.Right_Stop_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt3.Left_Stop_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt4.Implement_Clearance_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt4.Tractor_Clearance_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt4.Implement_Marker_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt4.Tractor_Marker_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt5.Rear_Fog_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt5.Tractor_Underside_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt5.Tractor_Rear_Low_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt5.Tractor_Rear_High_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt6.Tractor_Side_Low_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt6.Tractor_Side_High_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt6.Tractor_Front_Low_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt6.Tractor_Front_High_Mounted_Work_Lights= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt7.Implement_OEM_Option_2_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt7.Implement_OEM_Option_1_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt7.Implement_Right_Facing_Work_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt7.Implement_Left_Forward_Work_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt8.Implement_Right_Forward_Work_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt8.Implement_Left_Facing_Work_Light= Parameter_Translate(2 , 4.0 , 2.0);
    LD -> bt8.Implement_Rear_Work_Light= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_LCMD (getLCMD_t *LCMD)
{
    LCMD -> bt1.Running_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt1.Alternate_Beam_Head_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt1.Low_Beam_Head_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt1.High_Beam_Head_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt2.Tractor_Front_Fog_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt2.Rotating_Beacon_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt2.Right_Turn_Signal_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt2.Left_Turn_Signal_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt3.Back_Up_Light_and_Alarm_Horn_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt3.Center_Stop_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt3.Right_Stop_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt3.Left_Stop_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt4.Implement_Clearance_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt4.Tractor_Clearance_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt4.Implement_Marker_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt4.Tractor_Marker_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt5.Rear_Fog_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt5.Tractor_Underside_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt5.Tractor_Rear_Low_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt5.Tractor_Rear_High_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt6.Tractor_Side_Low_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt6.Tractor_Side_High_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt6.Tractor_Front_Low_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt6.Tractor_Front_High_Mounted_Work_Lights_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt7.Implement_OEM_Option_2_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt7.Implement_OEM_Option_1_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt7.Implement_Right_Facing_Work_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt7.Implement_Left_Forward_Work_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt8.Lighting_Data_Request_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt8.Implement_Right_Forward_Work_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt8.Implement_Left_Facing_Work_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
    LCMD -> bt8.Implement_Rear_Work_Light_Command= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ETC7 (getETC7_t *ETC7)
{
    ETC7 -> bt1.Transmission_Current_Range_Display_Blank_State= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt1.Transmission_Service_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt1.Transmission_Requested_Range_Display_Blank_State= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt1.Transmission_Requested_Range_Display_Flash_State= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt2.Transmission_Ready_for_Brake_Release= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt2.Active_Shift_Console_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt2.Transmission_Engine_Crank_Enable= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt2.Transmission_Shift_Inhibit_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt3.Transmission_Mode_4_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt3.Transmission_Mode_3_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt3.Transmission_Mode_2_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt3.Transmission_Mode_1_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> Transmission_Requested_Gear_Feedback= Parameter_Translate(100 , 1.0 , -125.0);
    ETC7 -> bt5.Transmission_Mode_5_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt5.Transmission_Mode_6_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt5.Transmission_Mode_7_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt5.Transmission_Mode_8_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt6.Transmission_Reverse_Gear_Shift_Inhibit_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ETC7 -> bt6.Transmission_Warning_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_TCFG2 (getTCFG2_t *TCFG2)
{
    TCFG2 -> Transmission_Torque_Limit= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_ML (getML_t *ML)
{
    ML -> bt1.Rear_Black_Out_Marker_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> bt1.Front_Black_Out_Marker_Lamp_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> bt1.Convoy_Lamp_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> bt1.Convoy_Driving_Lamp_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> bt3.Black_Out_Brake_Stop_Lamp_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> bt4.Night_Vision_Illuminator_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> bt4.Black_Out_Work_Lamp_Select= Parameter_Translate(2 , 4.0 , 2.0);
    ML -> Operators_Black_Out_Intensity_Selection= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_TAVG (getTAVG_t *TAVG)
{
    TAVG -> Engine_Total_Average_Fuel_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    TAVG -> Engine_Total_Average_Fuel_Economy= Parameter_Translate(100 , 1.0 , 512.0);
}
void config_DC1 (getDC1_t *DC1)
{
    DC1 -> bt1.Position_of_doors= Parameter_Translate(12 , 16.0 , 4.0);
    DC1 -> bt1.Ramp___Wheel_Chair_Lift_Position= Parameter_Translate(2 , 4.0 , 2.0);
    DC1 -> bt1.Status_2_of_doors= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_VDC1 (getVDC1_t *VDC1)
{
    VDC1 -> bt1.VDC_Information_Signal= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt1.VDC_Fully_Operational= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt1.VDC_brake_light_request= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt2.ROP_Engine_Control_active= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt2.ROP_Brake_Control_active= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt2.YC_Engine_Control_active= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt2.YC_Brake_Control_active= Parameter_Translate(2 , 4.0 , 2.0);
    VDC1 -> bt3.Trailer_VDC_Active= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BT1 (getBT1_t *BT1)
{
    BT1 -> Battery_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    BT1 -> Battery_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_ACC2 (getACC2_t *ACC2)
{
    ACC2 -> bt1.ACC_usage_demand= Parameter_Translate(2 , 4.0 , 2.0);
    ACC2 -> bt1.Requested_ACC_Distance_Mode= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_VEP3 (getVEP3_t *VEP3)
{
    VEP3 -> Alternator_Current__High_Range_Resolution_= Parameter_Translate(1290 , 0.05 , -1600.0);
    VEP3 -> Net_Battery_Current__High_Range_Resolution_= Parameter_Translate(1290 , 0.05 , -1600.0);
}
void config_RTC1 (getRTC1_t *RTC1)
{
    RTC1 -> Low_Limit_Threshold_for_Maximum_RPM_from_Retarder= Parameter_Translate(6400 , 32.0 , 0.0);
    RTC1 -> High_Limit_Threshold_for_Minimum_Continuous_RPM_from_Retarder= Parameter_Translate(6400 , 32.0 , 0.0);
    RTC1 -> Low_Limit_Threshold_for_Maximum_Torque_from_Retarder= Parameter_Translate(100 , 1.0 , -125.0);
    RTC1 -> High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Retarder= Parameter_Translate(100 , 1.0 , -125.0);
    RTC1 -> Maximum_Continuous_Retarder_Speed= Parameter_Translate(6400 , 32.0 , 0.0);
    RTC1 -> Minimum_Continuous_Retarder_Speed= Parameter_Translate(6400 , 32.0 , 0.0);
    RTC1 -> Maximum_Continuous_Retarder_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    RTC1 -> Minimum_Continuous_Retarder_Torque= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_ECT1 (getECT1_t *ECT1)
{
    ECT1 -> Engine_Low_Limit_Threshold_for_Maximum_RPM_from_Engine= Parameter_Translate(6400 , 32.0 , 0.0);
    ECT1 -> Engine_High_Limit_Threshold_for_Minimum_Continuous_Engine_RPM= Parameter_Translate(6400 , 32.0 , 0.0);
    ECT1 -> Engine_Low_Limit_Threshold_for_Maximum_Torque_from_Engine= Parameter_Translate(100 , 1.0 , -125.0);
    ECT1 -> Engine_High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Engine= Parameter_Translate(100 , 1.0 , -125.0);
    ECT1 -> Engine_Maximum_Continuous_RPM= Parameter_Translate(6400 , 32.0 , 0.0);
    ECT1 -> Engine_Minimum_Continuous_RPM= Parameter_Translate(6400 , 32.0 , 0.0);
    ECT1 -> Engine_Maximum_Continuous_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    ECT1 -> Engine_Minimum_Continuous_Torque= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_GFD (getGFD_t *GFD)
{
    GFD -> Specific_Heat_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
    GFD -> Reference_Engine_Gas_Mass_Flow_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    GFD -> Fuel_energy_content= Parameter_Translate(200 , 1.0 , 256.0);
}
void config_AT1T1I (getAT1T1I_t *AT1T1I)
{
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level= Parameter_Translate(80 , 0.4 , 0.0);
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_2= Parameter_Translate(5140 , 0.1 , 0.0);
    AT1T1I -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI= Parameter_Translate(24 , 0.1 , 0.0);
    AT1T1I -> bt5.Aftertreatment_Selective_Catalytic_Reduction_Operator_Inducement_Active= Parameter_Translate(5 , 8.0 , 3.0);
    AT1T1I -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI= Parameter_Translate(24 , 8.0 , 3.0);
    AT1T1I -> bt6.Aftertreatment_SCR_Operator_Inducement_Severity= Parameter_Translate(5 , 8.0 , 3.0);
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater= Parameter_Translate(80 , 0.4 , 0.0);
    AT1T1I -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
}
void config_ASC5 (getASC5_t *ASC5)
{
    ASC5 -> Damper_Stiffness_Front_Axle= Parameter_Translate(80 , 0.4 , 0.0);
    ASC5 -> Damper_Stiffness_Rear_Axle= Parameter_Translate(80 , 0.4 , 0.0);
    ASC5 -> Damper_Stiffness_Lift___Tag_Axle= Parameter_Translate(80 , 0.4 , 0.0);
    ASC5 -> bt4.Electronic_Shock_Absorber_Control_Mode__= Parameter_Translate(2 , 4.0 , 2.0);
    ASC5 -> bt4.Electronic_Shock_Absorber_Control_Mode___Rear_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC5 -> bt4.Electronic_Shock_Absorber_Control_Mode___Lift_Tag_Axle= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ASC4 (getASC4_t *ASC4)
{
    ASC4 -> Bellow_Pressure_Front_Axle_Left= Parameter_Translate(5140 , 0.1 , 0.0);
    ASC4 -> Bellow_Pressure_Front_Axle_Right= Parameter_Translate(5140 , 0.1 , 0.0);
    ASC4 -> Bellow_Pressure_Rear_Axle_Left= Parameter_Translate(5140 , 0.1 , 0.0);
    ASC4 -> Bellow_Pressure_Rear_Axle_Right= Parameter_Translate(5140 , 0.1 , 0.0);
    ASC4 -> Relative_Level_Front_Axle_Right= Parameter_Translate(2580 , 0.1 , -3.0);
    ASC4 -> Relative_Level_Rear_Axle_Left= Parameter_Translate(2580 , 0.1 , -3.0);
    ASC4 -> Relative_Level_Rear_Axle_Right= Parameter_Translate(2580 , 0.1 , -3.0);
}
void config_ASC1 (getASC1_t *ASC1)
{
    ASC1 -> bt1.Nominal_Level_Front_Axle= Parameter_Translate(12 , 16.0 , 4.0);
    ASC1 -> bt1.Nominal_Level_Rear_Axle= Parameter_Translate(12 , 16.0 , 4.0);
    ASC1 -> bt2.Below_Nominal_Level_Front_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt2.Below_Nominal_Level_Rear_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt2.Above_Nominal_Level_Front_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt2.Above_Nominal_Level_Rear_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt3.Lowering_Control_Mode_Front_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt3.Lowering_Control_Mode_Rear_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt3.Lifting_Control_Mode_Front_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt3.Lifting_Control_Mode_Rear_Axle= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt4.Kneeling_Information= Parameter_Translate(12 , 16.0 , 4.0);
    ASC1 -> bt4.Level_Control_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    ASC1 -> bt5.Security_Device= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt5.Vehicle_Motion_Inhibit= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt5.Door_Release= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt5.Lift_Axle_1_Position= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt6.Front_Axle_in_Bumper_Range= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt6.Rear_Axle_in_Bumper_Range= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt6.Lift_Axle_2_Position= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt7.Suspension_Remote_Control_1= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt7.Suspension_Remote_control_2= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt7.Allow_Level_Control_During_Braking_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt7.Speed_Dependant_Level_Control_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ASC1 -> bt8.Suspension_Control_Refusal_Information= Parameter_Translate(12 , 16.0 , 4.0);
    ASC1 -> bt8.Memory_level= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_FLI2 (getFLI2_t *FLI2)
{
    FLI2 -> bt1.Lane_Tracking_Status_Right_Side= Parameter_Translate(2 , 4.0 , 2.0);
    FLI2 -> bt1.Lane_Tracking_Status_Left_Side= Parameter_Translate(2 , 4.0 , 2.0);
    FLI2 -> bt1.Lane_Departure_Indication_Enable_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_BM (getBM_t *BM)
{
    BM -> bt1.Battery_Main_Switch_Hold_State= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_CCC (getCCC_t *CCC)
{
    CCC -> Auxiliary_Heater_Maximum_Output_Power= Parameter_Translate(102808 , 2.0 , 0.0);
}
void config_VF (getVF_t *VF)
{
    VF -> Hydraulic_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    VF -> bt2.Hydraulic_Oil_Filter_Restriction_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    VF -> bt2.Winch_Oil_Pressure_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    VF -> Hydraulic_Oil_Level= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_ET3 (getET3_t *ET3)
{
    ET3 -> Engine_Intake_Manifold_1_Air_Temperature__High_Resolution_= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET3 -> Engine_Coolant_Temperature__High_Resolution_= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET3 -> Engine_Intake_Valve_Actuation_System_Oil_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET3 -> Engine_Charge_Air_Cooler_1_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EFS (getEFS_t *EFS)
{
    EFS -> Engine_Oil_Level_Remote_Reservoir= Parameter_Translate(80 , 0.4 , 0.0);
    EFS -> Engine_Fuel_Supply_Pump_Intake_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFS -> Engine_Fuel_Filter__suction_side__Differential_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFS -> Engine_Waste_Oil_Reservoir_Level= Parameter_Translate(80 , 0.4 , 0.0);
    EFS -> Engine_Oil_Filter_Outlet_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EFS -> bt6.Engine_Oil_Priming_Pump_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    EFS -> bt6.Engine_Oil_Priming_State= Parameter_Translate(2 , 4.0 , 2.0);
    EFS -> bt6.Engine_Oil_Pre_Heated_State= Parameter_Translate(2 , 4.0 , 2.0);
    EFS -> bt6.Engine_Coolant_Pre_heated_State= Parameter_Translate(2 , 4.0 , 2.0);
    EFS -> bt7.Engine_Ventilation_Status= Parameter_Translate(5 , 8.0 , 3.0);
    EFS -> bt7.Fuel_Pump_Primer_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_TCO1 (getTCO1_t *TCO1)
{
    TCO1 -> bt1.Driver_1_working_state= Parameter_Translate(5 , 8.0 , 3.0);
    TCO1 -> bt1.Driver_2_working_state= Parameter_Translate(5 , 8.0 , 3.0);
    TCO1 -> bt1.Vehicle_motion= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt2.Driver_1_Time_Related_States= Parameter_Translate(12 , 16.0 , 4.0);
    TCO1 -> bt2.Driver_card_driver_1= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt2.Vehicle_Overspeed= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt3.Driver_2_Time_Related_States= Parameter_Translate(12 , 16.0 , 4.0);
    TCO1 -> bt3.Driver_card_driver_2= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt4.System_event= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt4.Handling_information= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt4.Tachograph_performance= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> bt4.Direction_indicator= Parameter_Translate(2 , 4.0 , 2.0);
    TCO1 -> Tachograph_output_shaft_speed= Parameter_Translate(6425 , 0.125 , 0.0);
    TCO1 -> Tachograph_vehicle_speed= Parameter_Translate(200 , 1.0 , 256.0);
}
void config_HTR (getHTR_t *HTR)
{
    HTR -> Auxiliary_Heater_Output_Coolant_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    HTR -> Auxiliary_Heater_Input_Air_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    HTR -> Auxiliary_Heater_Output_Power_Percent= Parameter_Translate(80 , 0.4 , 0.0);
    HTR -> bt4.Auxiliary_Heater_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    HTR -> bt5.Auxiliary_Heater_Water_Pump_Status= Parameter_Translate(2 , 4.0 , 2.0);
    HTR -> bt5.Cab_Ventilation= Parameter_Translate(2 , 4.0 , 2.0);
    HTR -> bt5.Engine_Heating_Zone= Parameter_Translate(2 , 4.0 , 2.0);
    HTR -> bt5.Cab_Heating_Zone= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_HRW (getHRW_t *HRW)
{
    HRW -> Front_Axle_Left_Wheel_Speed= Parameter_Translate(200 , 1.0 , 256.0);
    HRW -> Front_axle_right_wheel_speed= Parameter_Translate(200 , 1.0 , 256.0);
    HRW -> Rear_axle_left_wheel_speed= Parameter_Translate(200 , 1.0 , 256.0);
    HRW -> Rear_axle_right_wheel_speed= Parameter_Translate(200 , 1.0 , 256.0);
}
void config_ACC1 (getACC1_t *ACC1)
{
    ACC1 -> Speed_of_forward_vehicle= Parameter_Translate(200 , 1.0 , 0.0);
    ACC1 -> Distance_to_forward_vehicle= Parameter_Translate(200 , 1.0 , 0.0);
    ACC1 -> Adaptive_Cruise_Control_Set_Speed= Parameter_Translate(200 , 1.0 , 0.0);
    ACC1 -> bt4.Adaptive_Cruise_Control_Mode= Parameter_Translate(5 , 8.0 , 3.0);
    ACC1 -> bt4.Adaptive_cruise_control_set_distance_mode= Parameter_Translate(5 , 8.0 , 3.0);
    ACC1 -> Road_curvature= Parameter_Translate(201 , 1.0 , 128.0);
    ACC1 -> bt7.ACC_Target_Detected= Parameter_Translate(2 , 4.0 , 2.0);
    ACC1 -> bt7.ACC_System_Shutoff_Warning= Parameter_Translate(2 , 4.0 , 2.0);
    ACC1 -> bt7.ACC_Distance_Alert_Signal= Parameter_Translate(2 , 4.0 , 2.0);
    ACC1 -> bt7.Forward_Collision_Warning= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_CVW (getCVW_t *CVW)
{
    CVW -> Powered_Vehicle_Weight= Parameter_Translate(514040 , 10.0 , 0.0);
    CVW -> Gross_Combination_Vehicle_Weight= Parameter_Translate(514040 , 10.0 , 0.0);
}
void config_LTP (getLTP_t *LTP)
{
    LTP -> Laser_Tracer_Target_Deviation= Parameter_Translate(2580 , 0.1 , -3.0);
    LTP -> Laser_Tracer_Vertical_Distance= Parameter_Translate(5140 , 0.1 , 0.0);
    LTP -> Laser_Tracer_Horizontal_Deviation= Parameter_Translate(200 , 1.0 , 0.0);
    LTP -> bt6.LED_Display_Data_2= Parameter_Translate(204 , 256.0 , 8.0);
    LTP -> bt7.Laser_Tracer_Information= Parameter_Translate(204 , 256.0 , 8.0);
}
void config_LBC (getLBC_t *LBC)
{
    LBC -> Blade_Duration_and_Direction= Parameter_Translate(2518 , 0.1 , -3.0);
    LBC -> bt3.Blade_Control_Mode= Parameter_Translate(204 , 256.0 , 8.0);
    LBC -> bt4.Blade_Control_Mode___Left= Parameter_Translate(12 , 16.0 , 4.0);
    LBC -> bt4.Blade_Control_Mode___Right= Parameter_Translate(12 , 16.0 , 4.0);
    LBC -> bt5.Land_Leveling_System_Enable_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_LMP (getLMP_t *LMP)
{
    LMP -> Mast_Position= Parameter_Translate(2580 , 0.1 , -3.0);
}
void config_LSP (getLSP_t *LSP)
{
    LSP -> Modify_Leveling_System_Set_Point= Parameter_Translate(2580 , 0.1 , -3.0);
    LSP -> Blade_Height_Set_Point___High_Resolution= Parameter_Translate(169 , 100.0 , -209.7152);
}
void config_LVD (getLVD_t *LVD)
{
    LVD -> Laser_Strike_Vertical_Deviation= Parameter_Translate(2580 , 0.1 , -3.0);
    LVD -> Laser_Receiver_Type= Parameter_Translate(200 , 1.0 , 0.0);
    LVD -> Laser_Strike_Data_Latency= Parameter_Translate(2 , 51.2 , 0.0);
    LVD -> Absolute_Laser_Strike_Position= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_LVDD (getLVDD_t *LVDD)
{
    LVDD -> bt1.LED_Display_Data_1= Parameter_Translate(204 , 256.0 , 8.0);
    LVDD -> bt2.LED_Display_Mode_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LVDD -> bt2.LED_Display_Deadband_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LVDD -> bt3.LED_Pattern_Control= Parameter_Translate(12 , 16.0 , 4.0);
    LVDD -> bt3.Display_Deadbands= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_AP (getAP_t *AP)
{
    AP -> Auxiliary_Vacuum_Pressure_Reading= Parameter_Translate(25702 , 0.5 , 0.0);
    AP -> Auxiliary_Gage_Pressure_Reading_1= Parameter_Translate(25702 , 0.5 , 0.0);
    AP -> Auxiliary_Absolute_Pressure_Reading= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_TP1 (getTP1_t *TP1)
{
    TP1 -> Tire_Pressure_Check_Interval= Parameter_Translate(200 , 1.0 , 0.0);
    TP1 -> bt2.Steer_Channel_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    TP1 -> bt3.Trailer_tag_Channel_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    TP1 -> bt3.Drive_Channel_Mode= Parameter_Translate(12 , 16.0 , 4.0);
    TP1 -> bt4.PCU_Drive_Solenoid_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TP1 -> bt4.PCU_Steer_Solenoid_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TP1 -> bt4.Tire_Pressure_Supply_Switch_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TP1 -> bt5.PCU_Deflate_Solenoid_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TP1 -> bt5.PCU_Control_Solenoid_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TP1 -> bt5.PCU_Supply_Solenoid_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TP1 -> bt5.PCU_Trailer_Tag_or_Push_Solenoid_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_TP2 (getTP2_t *TP2)
{
    TP2 -> Trailer_Tag_Or_Push_Channel_Tire_Pressure_Target= Parameter_Translate(25702 , 0.5 , 0.0);
    TP2 -> Drive_Channel_Tire_Pressure_Target= Parameter_Translate(25702 , 0.5 , 0.0);
    TP2 -> Steer_Channel_Tire_Pressure_Target= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_TP3 (getTP3_t *TP3)
{
    TP3 -> Trailer_Tag_Or_Push_Channel_Tire_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    TP3 -> Drive_Channel_Tire_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    TP3 -> Steer_Channel_Tire_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_CT1 (getCT1_t *CT1)
{
    CT1 -> Engine_Cylinder_1_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT1 -> Engine_Cylinder_2_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT1 -> Engine_Cylinder_3_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT1 -> Engine_Cylinder_4_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
}
void config_CT2 (getCT2_t *CT2)
{
    CT2 -> Engine_Cylinder_5_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT2 -> Engine_Cylinder_6_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT2 -> Engine_Cylinder_7_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT2 -> Engine_Cylinder_8_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
}
void config_CT3 (getCT3_t *CT3)
{
    CT3 -> Engine_Cylinder_9_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT3 -> Engine_Cylinder_10_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT3 -> Engine_Cylinder_11_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT3 -> Engine_Cylinder_12_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
}
void config_CT4 (getCT4_t *CT4)
{
    CT4 -> Engine_Cylinder_13_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT4 -> Engine_Cylinder_14_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT4 -> Engine_Cylinder_15_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT4 -> Engine_Cylinder_16_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
}
void config_CT5 (getCT5_t *CT5)
{
    CT5 -> Engine_Cylinder_17_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT5 -> Engine_Cylinder_18_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT5 -> Engine_Cylinder_19_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT5 -> Engine_Cylinder_20_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
}
void config_CT6 (getCT6_t *CT6)
{
    CT6 -> Engine_Desired_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
    CT6 -> Engine_Average_Combustion_Time= Parameter_Translate(514 , 0.01 , 0.0);
}
void config_GFI2 (getGFI2_t *GFI2)
{
    GFI2 -> Engine_Fuel_Flow_Rate_1= Parameter_Translate(5140 , 0.1 , 3.0);
    GFI2 -> Engine_Fuel_Flow_Rate_2= Parameter_Translate(5140 , 0.1 , 3.0);
    GFI2 -> Engine_Fuel_Valve_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    GFI2 -> Engine_Fuel_Valve_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
    GFI2 -> Engine_Requested_Fuel_Valve_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    GFI2 -> Engine_Requested_Fuel_Valve_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_IT1 (getIT1_t *IT1)
{
    IT1 -> Engine_Cylinder_1_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT1 -> Engine_Cylinder_2_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT1 -> Engine_Cylinder_3_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT1 -> Engine_Cylinder_4_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_IT2 (getIT2_t *IT2)
{
    IT2 -> Engine_Cylinder_5_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT2 -> Engine_Cylinder_6_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT2 -> Engine_Cylinder_7_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT2 -> Engine_Cylinder_8_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_IT3 (getIT3_t *IT3)
{
    IT3 -> Engine_Cylinder_9_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT3 -> Engine_Cylinder_10_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT3 -> Engine_Cylinder_11_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT3 -> Engine_Cylinder_12_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_IT4 (getIT4_t *IT4)
{
    IT4 -> Engine_Cylinder_13_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT4 -> Engine_Cylinder_14_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT4 -> Engine_Cylinder_15_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT4 -> Engine_Cylinder_16_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_IT5 (getIT5_t *IT5)
{
    IT5 -> Engine_Cylinder_17_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT5 -> Engine_Cylinder_18_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT5 -> Engine_Cylinder_19_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
    IT5 -> Engine_Cylinder_20_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_IT6 (getIT6_t *IT6)
{
    IT6 -> Engine_Desired_Ignition_Timing_1= Parameter_Translate(241 , 1.0 , 128.0);
    IT6 -> Engine_Desired_Ignition_Timing_2= Parameter_Translate(241 , 1.0 , 128.0);
    IT6 -> Engine_Desired_Ignition_Timing_3= Parameter_Translate(241 , 1.0 , 128.0);
    IT6 -> Engine_Actual_Ignition_Timing= Parameter_Translate(241 , 1.0 , 128.0);
}
void config_ISO1 (getISO1_t *ISO1)
{
    ISO1 -> Engine_Cylinder_1_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_2_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_3_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_4_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_5_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_6_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_7_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_8_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_ISO2 (getISO2_t *ISO2)
{
    ISO2 -> Engine_Cylinder_9_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_10_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_11_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_12_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_13_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_14_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_15_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_16_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_ISO3 (getISO3_t *ISO3)
{
    ISO3 -> Engine_Cylinder_17_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO3 -> Engine_Cylinder_18_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO3 -> Engine_Cylinder_19_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
    ISO3 -> Engine_Cylinder_20_Ignition_Transformer_Secondary_Output= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_GFP (getGFP_t *GFP)
{
    GFP -> Engine_Fuel_Valve_1_Intake_Absolute_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    GFP -> Engine_Fuel_Valve_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    GFP -> Engine_Air_to_Fuel_Differential_Pressure= Parameter_Translate(5140 , 0.1 , 0.0);
    GFP -> Engine_Fuel= Parameter_Translate(5140 , 0.1 , 0.0);
}
void config_AAI (getAAI_t *AAI)
{
    AAI -> Auxiliary_Temperature_1= Parameter_Translate(168 , 1.0 , -40.0);
    AAI -> Auxiliary_Temperature_2= Parameter_Translate(168 , 1.0 , -40.0);
    AAI -> Auxiliary_Pressure_1= Parameter_Translate(3200 , 16.0 , 0.0);
    AAI -> Auxiliary_Pressure_2= Parameter_Translate(3200 , 16.0 , 0.0);
    AAI -> Auxiliary_Level= Parameter_Translate(5140 , 0.1 , 0.0);
    AAI -> Relative_Humidity= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_VEP2 (getVEP2_t *VEP2)
{
    VEP2 -> Battery_Potential___Power_Input_2= Parameter_Translate(2570 , 0.05 , 0.0);
    VEP2 -> ECU_Power_Output_Supply_Voltage_1= Parameter_Translate(2570 , 0.05 , 0.0);
    VEP2 -> ECU_Power_Output_Supply_Voltage_2= Parameter_Translate(2570 , 0.05 , 0.0);
    VEP2 -> ECU_Power_Output_Supply_Voltage_3= Parameter_Translate(2570 , 0.05 , 0.0);
}
/*
void config_S2 (getS2_t *S2)
{
    S2 -> Service_Component_Identification= Parameter_Translate(200 , 1.0 , 0.0);
    S2 -> Time_Since_Last_Service= Parameter_Translate(25702 , 1.0 , -32.0);
}
*/
void config_SP2 (getSP2_t *SP2)
{
    SP2 -> Engine_External_Shutdown_Air_Supply_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_ETH (getETH_t *ETH)
{
    ETH -> Number_of_Engine_Torque_History_Records= Parameter_Translate(200 , 1.0 , 0.0);
    ETH -> Engine_Power= Parameter_Translate(25702 , 0.5 , 0.0);
    ETH -> Engine_Peak_Torque_1= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Engine_Peak_Torque_2= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Calibration_Record_Start_Month= Parameter_Translate(200 , 1.0 , 0.0);
    ETH -> Calibration_Record_Start_Day= Parameter_Translate(50 , 0.25 , 0.0);
    ETH -> Calibration_Record_Start_Year= Parameter_Translate(1788 , 1.0 , 1985.0);
    ETH -> Calibration_Record_Duration_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
    ETH -> bt1.Torque_Limiting_Feature_Status= Parameter_Translate(2 , 4.0 , 2.0);
    ETH -> bt1.Engine_Torque_Limit_Feature= Parameter_Translate(5 , 8.0 , 3.0);
    ETH -> Transmission_Gear_Ratio_1= Parameter_Translate(514 , 0.01 , 0.0);
    ETH -> Engine_Torque_Limit_1_Transmission= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Transmission_Gear_Ratio_2= Parameter_Translate(514 , 0.01 , 0.0);
    ETH -> Engine_Torque_Limit_2_Transmission= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Transmission_Gear_Ratio_3= Parameter_Translate(514 , 0.01 , 0.0);
    ETH -> Engine_Torque_Limit_3_Transmission= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Engine_Torque_Limit_4_Transmission= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Engine_Torque_Limit_5_Switch= Parameter_Translate(51404 , 1.0 , 0.0);
    ETH -> Engine_Torque_Limit_6_Axle_Input= Parameter_Translate(102808 , 2.0 , 0.0);
}
void config_FL (getFL_t *FL)
{
    FL -> bt1.Engine_Fuel_Leakage_1= Parameter_Translate(2 , 4.0 , 2.0);
    FL -> bt1.Engine_Fuel_Leakage_2= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EI (getEI_t *EI)
{
    EI -> Engine_Pre_filter_Oil_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EI -> Engine_Exhaust_Gas_Pressure_1= Parameter_Translate(201 , 1.0 , 128.0);
    EI -> Engine_Fuel_Rack_Position= Parameter_Translate(80 , 0.4 , 0.0);
    EI -> Engine_Gas_Mass_Flow_Rate_1= Parameter_Translate(2570 , 0.05 , 0.0);
    EI -> Instantaneous_Estimated_Brake_Power= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_EES (getEES_t *EES)
{
    EES -> Electrical_Load= Parameter_Translate(25702 , 0.5 , 0.0);
    EES -> bt3.Safety_Wire_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_EAC (getEAC_t *EAC)
{
    EAC -> Engine_Auxiliary_Coolant_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EAC -> Engine_Auxiliary_Coolant_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    EAC -> Sea_Water_Pump_Outlet_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EAC -> Engine_Extended_Range_Coolant_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
}
void config_RBI (getRBI_t *RBI)
{
    RBI -> Engine_Operation_Time_Since_Rebuild= Parameter_Translate(3368864972 , 1.0 , 0.0);
}
void config_TCW (getTCW_t *TCW)
{
    TCW -> Engine_Turbocharger_Wastegate_Actuator_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_3_Position= Parameter_Translate(80 , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_4_Position= Parameter_Translate(80 , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_Control_Air_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    TCW -> Engine_Desired_Turbocharger_Wastegate_Actuator_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    TCW -> bt7.Engine_Turbocharger_Wastegate_Actuator_1_Preliminary_FMI= Parameter_Translate(24 , 0.4 , 0.0);
    TCW -> bt7.Engine_Turbocharger_Wastegate_Actuator_1_Temperature_Status= Parameter_Translate(5 , 8.0 , 3.0);
    TCW -> Engine_Desired_Turbocharger_Wastegate_Actuator_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_TCI5 (getTCI5_t *TCI5)
{
    TCI5 -> Engine_Turbocharger_1_Turbine_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI5 -> Engine_Turbocharger_2_Turbine_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI5 -> Engine_Turbocharger_3_Turbine_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI5 -> Engine_Turbocharger_4_Turbine_Outlet_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_TCI4 (getTCI4_t *TCI4)
{
    TCI4 -> Engine_Turbocharger_1_Turbine_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI4 -> Engine_Turbocharger_2_Turbine_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI4 -> Engine_Turbocharger_3_Turbine_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI4 -> Engine_Turbocharger_4_Turbine_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_TCI3 (getTCI3_t *TCI3)
{
    TCI3 -> Engine_Turbocharger_1_Compressor_Intake_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    TCI3 -> Engine_Turbocharger_2_Compressor_Intake_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    TCI3 -> Engine_Turbocharger_3_Compressor_Intake_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    TCI3 -> Engine_Turbocharger_4_Compressor_Intake_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
}
void config_TCI2 (getTCI2_t *TCI2)
{
    TCI2 -> Engine_Turbocharger_1_Compressor_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI2 -> Engine_Turbocharger_2_Compressor_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI2 -> Engine_Turbocharger_3_Compressor_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TCI2 -> Engine_Turbocharger_4_Compressor_Intake_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_TCI1 (getTCI1_t *TCI1)
{
    TCI1 -> Engine_Turbocharger_Lube_Oil_Pressure_2= Parameter_Translate(800 , 4.0 , 0.0);
    TCI1 -> Engine_Turbocharger_2_Speed= Parameter_Translate(205616 , 4.0 , 0.0);
    TCI1 -> Engine_Turbocharger_3_Speed= Parameter_Translate(205616 , 4.0 , 0.0);
    TCI1 -> Engine_Turbocharger_4_Speed= Parameter_Translate(205616 , 4.0 , 0.0);
}
void config_MBT3 (getMBT3_t *MBT3)
{
    MBT3 -> Engine_Main_Bearing_9_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT3 -> Engine_Main_Bearing_10_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT3 -> Engine_Main_Bearing_11_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_MBT2 (getMBT2_t *MBT2)
{
    MBT2 -> Engine_Main_Bearing_5_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT2 -> Engine_Main_Bearing_6_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT2 -> Engine_Main_Bearing_7_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT2 -> Engine_Main_Bearing_8_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_MBT1 (getMBT1_t *MBT1)
{
    MBT1 -> Engine_Main_Bearing_1_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT1 -> Engine_Main_Bearing_2_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT1 -> Engine_Main_Bearing_3_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    MBT1 -> Engine_Main_Bearing_4_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EPT5 (getEPT5_t *EPT5)
{
    EPT5 -> Engine_Exhaust_Gas_Port_17_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT5 -> Engine_Exhaust_Gas_Port_18_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT5 -> Engine_Exhaust_Gas_Port_19_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT5 -> Engine_Exhaust_Gas_Port_20_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EPT4 (getEPT4_t *EPT4)
{
    EPT4 -> Engine_Exhaust_Gas_Port_13_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT4 -> Engine_Exhaust_Gas_Port_14_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT4 -> Engine_Exhaust_Gas_Port_15_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT4 -> Engine_Exhaust_Gas_Port_16_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EPT3 (getEPT3_t *EPT3)
{
    EPT3 -> Engine_Exhaust_Gas_Port_9_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT3 -> Engine_Exhaust_Gas_Port_10_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT3 -> Engine_Exhaust_Gas_Port_11_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT3 -> Engine_Exhaust_Gas_Port_12_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EPT2 (getEPT2_t *EPT2)
{
    EPT2 -> Engine_Exhaust_Gas_Port_5_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT2 -> Engine_Exhaust_Gas_Port_6_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT2 -> Engine_Exhaust_Gas_Port_7_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT2 -> Engine_Exhaust_Gas_Port_8_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_EPT1 (getEPT1_t *EPT1)
{
    EPT1 -> Engine_Exhaust_Gas_Port_1_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT1 -> Engine_Exhaust_Gas_Port_2_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT1 -> Engine_Exhaust_Gas_Port_3_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    EPT1 -> Engine_Exhaust_Gas_Port_4_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_ET2 (getET2_t *ET2)
{
    ET2 -> Engine_Oil_Temperature_2= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET2 -> Engine_ECU_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET2 -> Engine_Exhaust_Gas_Recirculation_1_Differential_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    ET2 -> Engine_Exhaust_Gas_Recirculation_1_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_IMT2 (getIMT2_t *IMT2)
{
    IMT2 -> Engine_Intake_Manifold_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_3_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_4_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_5_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_6_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_IMT1 (getIMT1_t *IMT1)
{
    IMT1 -> Engine_Turbocharger_1_Boost_Pressure= Parameter_Translate(6425 , 0.125 , 0.0);
    IMT1 -> Engine_Turbocharger_2_Boost_Pressure= Parameter_Translate(6425 , 0.125 , 0.0);
    IMT1 -> Engine_Turbocharger_3_Boost_Pressure= Parameter_Translate(6425 , 0.125 , 0.0);
    IMT1 -> Engine_Turbocharger_4_Boost_Pressure= Parameter_Translate(6425 , 0.125 , 0.0);
}
void config_AT (getAT_t *AT)
{
    AT -> Engine_Alternator_Bearing_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AT -> Engine_Alternator_Bearing_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AT -> Engine_Alternator_Winding_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AT -> Engine_Alternator_Winding_2_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AT -> Engine_Alternator_Winding_3_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
}
void config_ACTL (getACTL_t *ACTL)
{
    ACTL -> Articulation_Angle= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_EO1 (getEO1_t *EO1)
{
    EO1 -> Engine_Desired_Rated_Exhaust_Oxygen= Parameter_Translate(128 , 0.0025 , 0.0);
    EO1 -> Engine_Desired_Exhaust_Oxygen= Parameter_Translate(128 , 0.0025 , 0.0);
    EO1 -> Engine_Actual_Exhaust_Oxygen= Parameter_Translate(128 , 0.0025 , 0.0);
    EO1 -> Engine_Exhaust_Gas_Oxygen_Sensor_Fueling_Correction= Parameter_Translate(100 , 1.0 , -125.0);
    EO1 -> bt8.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AF2 (getAF2_t *AF2)
{
    AF2 -> Engine_Gaseous_Fuel_Correction_Factor= Parameter_Translate(200 , 1.0 , 0.0);
    AF2 -> Engine_Desired_Absolute_Intake_Manifold_Pressure__Turbo_Boost_Limit_= Parameter_Translate(5140 , 0.1 , 0.0);
    AF2 -> Engine_Turbocharger_Wastegate_Valve_Position= Parameter_Translate(80 , 0.4 , 0.0);
    AF2 -> Engine_Gas_Mass_Flow_Sensor_Fueling_Correction= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_ETC6 (getETC6_t *ETC6)
{
    ETC6 -> Recommended_Gear= Parameter_Translate(100 , 1.0 , -125.0);
    ETC6 -> Highest_Possible_Gear= Parameter_Translate(100 , 1.0 , -125.0);
    ETC6 -> Lowest_Possible_Gear= Parameter_Translate(100 , 1.0 , -125.0);
    ETC6 -> Clutch_Life_Remaining= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EBC4 (getEBC4_t *EBC4)
{
    EBC4 -> Brake_Lining_Remaining_Front_Axle_Left_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Front_Axle_Right_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_1_Left_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_1_Right_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_2_Left_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_2_Right_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_3_Left_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_3_Right_Wheel= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EBC3 (getEBC3_t *EBC3)
{
    EBC3 -> Brake_Application_Pressure_High_Range_Front_Axle_Left_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Front_Axle_Right_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_1_Left_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_1_Right_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_2_Left_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_2_Right_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_3_Left_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_3_Right_Wheel= Parameter_Translate(1000 , 5.0 , 0.0);
}
void config_AIR1 (getAIR1_t *AIR1)
{
    AIR1 -> Pneumatic_Supply_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    AIR1 -> Parking_and_or_Trailer_Air_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    AIR1 -> Service_Brake_Circuit_1_Air_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    AIR1 -> Service_Brake_Circuit_2_Air_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    AIR1 -> Auxiliary_Equipment_Supply_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    AIR1 -> Air_Suspension_Supply_Pressure= Parameter_Translate(1600 , 8.0 , 0.0);
    AIR1 -> bt7.Air_Compressor_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_GFC (getGFC_t *GFC)
{
    GFC -> Trip_Fuel__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GFC -> Total_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
}
void config_TTI2 (getTTI2_t *TTI2)
{
    TTI2 -> Trip_Cruise_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI2 -> Trip_PTO_Governor_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI2 -> Trip_Engine_Running_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI2 -> Trip_Idle_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI2 -> Trip_Air_Compressor_On_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_EH (getEH_t *EH)
{
    EH -> Total_ECU_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
    EH -> Total_ECU_Run_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_GFI1 (getGFI1_t *GFI1)
{
    GFI1 -> Total_Engine_PTO_Governor_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GFI1 -> Trip_Average_Fuel_Rate__Gaseous_= Parameter_Translate(2570 , 0.05 , 0.0);
    GFI1 -> Engine_Fuel_Specific_Gravity= Parameter_Translate(5 , 0.0001 , 0.0);
}
void config_LFI (getLFI_t *LFI)
{
    LFI -> Total_Engine_PTO_Governor_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    LFI -> Trip_Average_Fuel_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    LFI -> Flexible_Fuel_Percentage= Parameter_Translate(128 , 0.0025 , 0.0);
}
void config_TTI1 (getTTI1_t *TTI1)
{
    TTI1 -> Trip_Time_in_VSL= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI1 -> Trip_Time_in_Top_Gear= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI1 -> Trip_Time_in_Gear_Down= Parameter_Translate(168443248 , 0.05 , 0.0);
    TTI1 -> Trip_Time_in_Derate_by_Engine= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_TSI (getTSI_t *TSI)
{
    TSI -> Trip_Number_of_Hot_Shutdowns= Parameter_Translate(51404 , 1.0 , 0.0);
    TSI -> Trip_Number_of_Idle_Shutdowns= Parameter_Translate(51404 , 1.0 , 0.0);
    TSI -> Trip_Number_of_Idle_Shutdown_Overrides= Parameter_Translate(51404 , 1.0 , 0.0);
    TSI -> Trip_Sudden_Decelerations= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_TVI (getTVI_t *TVI)
{
    TVI -> Trip_Maximum_Vehicle_Speed= Parameter_Translate(200 , 1.0 , 256.0);
    TVI -> Trip_Cruise_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
}
void config_LF (getLF_t *LF)
{
    LF -> Trip_Maximum_Engine_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    LF -> Trip_Average_Engine_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    LF -> Trip_Drive_Average_Load_Factor= Parameter_Translate(80 , 0.4 , 0.0);
    LF -> Total_Drive_Average_Load_Factor= Parameter_Translate(80 , 0.4 , 0.0);
    LF -> Total_Engine_Cruise_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_GTFI (getGTFI_t *GTFI)
{
    GTFI -> Trip_Drive_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GTFI -> Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GTFI -> Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GTFI -> Trip_Vehicle_Idle_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GTFI -> Trip_Cruise_Fuel_Used__Gaseous_= Parameter_Translate(1684432486 , 0.5 , 0.0);
    GTFI -> Trip_Drive_Fuel_Economy__Gaseous_= Parameter_Translate(100 , 1.0 , 512.0);
}
void config_LTFI (getLTFI_t *LTFI)
{
    LTFI -> Trip_Drive_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    LTFI -> Trip_PTO_Governor_Moving_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    LTFI -> Trip_PTO_Governor_Non_moving_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    LTFI -> Trip_Vehicle_Idle_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    LTFI -> Trip_Cruise_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    LTFI -> Trip_Drive_Fuel_Economy= Parameter_Translate(100 , 1.0 , 512.0);
}
void config_TDI (getTDI_t *TDI)
{
    TDI -> Trip_Distance_on_VSL= Parameter_Translate(421108121 , 0.125 , 0.0);
    TDI -> Trip_Gear_Down_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
    TDI -> Trip_Distance_in_Top_Gear= Parameter_Translate(421108121 , 0.125 , 0.0);
}
void config_TFI (getTFI_t *TFI)
{
    TFI -> Trip_Fan_On_Time= Parameter_Translate(168443248 , 0.05 , 0.0);
    TFI -> Trip_Fan_On_Time_Due_to_the_Engine_System= Parameter_Translate(168443248 , 0.05 , 0.0);
    TFI -> Trip_Fan_On_Time_Due_to_a_Manual_Switch= Parameter_Translate(168443248 , 0.05 , 0.0);
    TFI -> Trip_Fan_On_Time_Due_to_the_A_C_System= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_CBI (getCBI_t *CBI)
{
    CBI -> Total_Compression_Brake_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
    CBI -> Trip_Compression_Brake_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
    CBI -> Trip_Service_Brake_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
    CBI -> Trip_Service_Brake_Applications= Parameter_Translate(3382286744 , 1.0 , 0.0);
}
void config_FD1 (getFD1_t *FD1)
{
    FD1 -> Estimated_Percent_Fan_Speed= Parameter_Translate(80 , 0.4 , 0.0);
    FD1 -> bt2.Fan_Drive_State= Parameter_Translate(12 , 16.0 , 4.0);
    FD1 -> Fan_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    FD1 -> Hydraulic_Fan_Motor_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
    FD1 -> Fan_Drive_Bypass_Command_Status= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EEC4 (getEEC4_t *EEC4)
{
    EEC4 -> Engine_Rated_Power= Parameter_Translate(25702 , 0.5 , 0.0);
    EEC4 -> Engine_Rated_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    EEC4 -> bt5.Engine_Rotation_Direction= Parameter_Translate(2 , 4.0 , 2.0);
    EEC4 -> bt5.Engine_Intake_Manifold_Pressure_Control_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    EEC4 -> Crank_Attempt_Count_on_Present_Start_Attempt= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_EBC2 (getEBC2_t *EBC2)
{
    EBC2 -> Front_Axle_Speed= Parameter_Translate(200 , 1.0 , 256.0);
    EBC2 -> Relative_Speed__Front_Axle_Left_Wheel= Parameter_Translate(6 , 1.0 , 16.0);
    EBC2 -> Relative_Speed__Front_Axle_Right_Wheel= Parameter_Translate(6 , 1.0 , 16.0);
    EBC2 -> Relative_Speed__Rear_Axle_1_Left_Wheel= Parameter_Translate(6 , 1.0 , 16.0);
    EBC2 -> Relative_Speed__Rear_Axle_1_Right_Wheel= Parameter_Translate(6 , 1.0 , 16.0);
    EBC2 -> Relative_Speed__Rear_Axle_2_Left_Wheel= Parameter_Translate(6 , 1.0 , 16.0);
    EBC2 -> Relative_Speed__Rear_Axle_2_Right_Wheel= Parameter_Translate(6 , 1.0 , 16.0);
}
/*
void config_SERV (getSERV_t *SERV)
{
    SERV -> Service_Component_Identification= Parameter_Translate(200 , 1.0 , 0.0);
    SERV -> Service_Distance= Parameter_Translate(128512 , 5.0 , -160.0);
    SERV -> Service_Component_Identification= Parameter_Translate(200 , 1.0 , 0.0);
    SERV -> Service_Delay_Calendar_Time_Based= Parameter_Translate(100 , 1.0 , -125.0);
    SERV -> Service_Component_Identification= Parameter_Translate(200 , 1.0 , 0.0);
    SERV -> Service_Delay_Operational_Time_Based= Parameter_Translate(25702 , 1.0 , -32.0);
}
*/
void config_VDHR (getVDHR_t *VDHR)
{
    VDHR -> High_Resolution_Total_Vehicle_Distance= Parameter_Translate(16844324 , 5.0 , 0.0);
    VDHR -> High_Resolution_Trip_Distance= Parameter_Translate(16844324 , 5.0 , 0.0);
}
void config_ERC2 (getERC2_t *ERC2)
{
    ERC2 -> bt1.Transmission_Output_Retarder= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ETC5 (getETC5_t *ETC5)
{
    ETC5 -> bt1.Transmission_High_Range_Sense_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ETC5 -> bt1.Transmission_Low_Range_Sense_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ETC5 -> bt2.Transmission_Reverse_Direction_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ETC5 -> bt2.Transmission_Neutral_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    ETC5 -> bt2.Transmission_Forward_Direction_Switch= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_ETC4 (getETC4_t *ETC4)
{
    ETC4 -> Transmission_Synchronizer_Clutch_Value= Parameter_Translate(80 , 0.4 , 0.0);
    ETC4 -> Transmission_Synchronizer_Brake_Value= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_ETC3 (getETC3_t *ETC3)
{
    ETC3 -> Transmission_Shift_Finger_Gear_Position= Parameter_Translate(80 , 0.4 , 0.0);
    ETC3 -> Transmission_Shift_Finger_Rail_Position= Parameter_Translate(80 , 0.4 , 0.0);
    ETC3 -> bt3.Transmission_Shift_Finger_Neutral_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt3.Transmission_Shift_Finger_Engagement_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt3.Transmission_Shift_Finger_Center_Rail_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt4.Transmission_Shift_Finger_Rail_Actuator_1= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt4.Transmission_Shift_Finger_Gear_Actuator_1= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt4.Transmission_Shift_Finger_Rail_Actuator_2= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt4.Transmission_Shift_Finger_Gear_Actuator_2= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt5.Transmission_Range_High_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt5.Transmission_Range_Low_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt5.Transmission_Splitter_Direct_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt5.Transmission_Splitter_Indirect_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt6.Transmission_Clutch_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt6.Transmission_Lockup_Clutch_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt6.Transmission_Defuel_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    ETC3 -> bt6.Transmission_Inertia_Brake_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AS (getAS_t *AS)
{
    AS -> Alternator_Speed= Parameter_Translate(25702 , 0.5 , 0.0);
    AS -> bt3.Alternator_1_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AS -> bt3.Alternator_2_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AS -> bt3.Alternator_3_Status= Parameter_Translate(2 , 4.0 , 2.0);
    AS -> bt3.Alternator_4_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AUXIO1 (getAUXIO1_t *AUXIO1)
{
    AUXIO1 -> bt1.Auxiliary_I_O_04= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt1.Auxiliary_I_O_03= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt1.Auxiliary_I_O_02= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt1.Auxiliary_I_O_01= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt2.Auxiliary_I_O_08= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt2.Auxiliary_I_O_07= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt2.Auxiliary_I_O_06= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt2.Auxiliary_I_O_05= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt3.Auxiliary_I_O_12= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt3.Auxiliary_I_O_11= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt3.Auxiliary_I_O_10= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt3.Auxiliary_I_O_09= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt4.Auxiliary_I_O_16= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt4.Auxiliary_I_O_15= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt4.Auxiliary_I_O_14= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> bt4.Auxiliary_I_O_13= Parameter_Translate(2 , 4.0 , 2.0);
    AUXIO1 -> Auxiliary_I_O_Channel_1= Parameter_Translate(51404 , 1.0 , 0.0);
    AUXIO1 -> Auxiliary_I_O_Channel_2= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_SOFT (getSOFT_t *SOFT)
{
    SOFT -> Number_of_Software_Identification_Fields= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_EFL_P2 (getEFL_P2_t *EFL_P2)
{
    EFL_P2 -> Engine_Injection_Control_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
    EFL_P2 -> Engine_Injector_Metering_Rail_1_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
    EFL_P2 -> Engine_Injector_Timing_Rail_1_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
    EFL_P2 -> Engine_Injector_Metering_Rail_2_Pressure= Parameter_Translate(200 , 1.0 , 256.0);
}
void config_IO (getIO_t *IO)
{
    IO -> Engine_Total_Idle_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
    IO -> Engine_Total_Idle_Hours= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_TC (getTC_t *TC)
{
    TC -> Engine_Turbocharger_Lube_Oil_Pressure_1= Parameter_Translate(800 , 4.0 , 0.0);
    TC -> Engine_Turbocharger_1_Speed= Parameter_Translate(205616 , 4.0 , 0.0);
    TC -> bt4.Engine_Turbocharger_Oil_Level_Switch= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_AIR2 (getAIR2_t *AIR2)
{
    AIR2 -> Engine_Air_Start_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
}
void config_EEC3 (getEEC3_t *EEC3)
{
    EEC3 -> Nominal_Friction___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    EEC3 -> Engine_s_Desired_Operating_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    EEC3 -> Engine_s_Desired_Operating_Speed_Asymmetry_Adjustment= Parameter_Translate(200 , 1.0 , 0.0);
    EEC3 -> Estimated_Engine_Parasitic_Losses___Percent_Torque= Parameter_Translate(100 , 1.0 , -125.0);
    EEC3 -> Aftertreatment_1_Exhaust_Gas_Mass_Flow= Parameter_Translate(10280 , 0.2 , 0.0);
    EEC3 -> bt8.Aftertreatment_1_Intake_Dew_Point= Parameter_Translate(2 , 4.0 , 2.0);
    EEC3 -> bt8.Aftertreatment_1_Exhaust_Dew_Point= Parameter_Translate(2 , 4.0 , 2.0);
    EEC3 -> bt8.Aftertreatment_2_Intake_Dew_Point= Parameter_Translate(2 , 4.0 , 2.0);
    EEC3 -> bt8.Aftertreatment_2_Exhaust_Dew_Point= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_VD (getVD_t *VD)
{
    VD -> Trip_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
    VD -> Total_Vehicle_Distance= Parameter_Translate(421108121 , 0.125 , 0.0);
}
void config_RC (getRC_t *RC)
{
    RC -> bt1.Retarder_Type= Parameter_Translate(12 , 16.0 , 4.0);
    RC -> bt1.Retarder_Location= Parameter_Translate(12 , 16.0 , 4.0);
    RC -> Retarder_Control_Method__Retarder_Configuration_= Parameter_Translate(200 , 1.0 , 0.0);
    RC -> Retarder_Speed_At_Idle_Point_1__Retarder_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    RC -> Percent_Torque_At_Idle_Point_1__Retarder_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    RC -> Maximum_Retarder_Speed_Point_2__Retarder_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    RC -> Percent_Torque_At_Maximum_Speed_Point_2__Retarder_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    RC -> Retarder_Speed_At_Point_3__Retarder_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    RC -> Percent_Torque_At_Point_3__Retarder_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    RC -> Retarder_Speed_At_Point_4__Retarder_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    RC -> Percent_Torque_At_Point_4__Retarder_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    RC -> Retarder_Speed_At_Peak_Torque_Point_5__Retarder_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    RC -> Reference_Retarder_Torque__Retarder_Configuration_= Parameter_Translate(51404 , 1.0 , 0.0);
    RC -> Percent_Torque_At_Peak_Torque_Point_5__Retarder_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_TCFG (getTCFG_t *TCFG)
{
    TCFG -> Number_of_Reverse_Gear_Ratios= Parameter_Translate(200 , 1.0 , 0.0);
    TCFG -> Number_of_Forward_Gear_Ratios= Parameter_Translate(200 , 1.0 , 0.0);
    TCFG -> Transmission_Gear_Ratio= Parameter_Translate(51 , 0.001 , 0.0);
}
void config_EC1 (getEC1_t *EC1)
{
    EC1 -> Engine_Speed_At_Idle_Point_1__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Percent_Torque_At_Idle_Point_1__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Speed_At_Point_2__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Percent_Torque_At_Point_2__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Speed_At_Point_3__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Percent_Torque_At_Point_3__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Speed_At_Point_4__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Percent_Torque_At_Point_4__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Speed_At_Point_5__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Percent_Torque_At_Point_5__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Speed_At_High_Idle_Point_6__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Gain__Kp__Of_The_Endspeed_Governor__Engine_Configuration_= Parameter_Translate(40 , 1.0 , 1280.0);
    EC1 -> Engine_Reference_Torque__Engine_Configuration_= Parameter_Translate(51404 , 1.0 , 0.0);
    EC1 -> Engine_Maximum_Momentary_Override_Speed_Point_7__Engine_Configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Maximum_Momentary_Override_Time_Limit__Engine_Configuration_= Parameter_Translate(20 , 0.1 , 0.0);
    EC1 -> Engine_Requested_Speed_Control_Range_Lower_Limit__Engine_Configuration_= Parameter_Translate(2000 , 10.0 , 0.0);
    EC1 -> Engine_Requested_Speed_Control_Range_Upper_Limit__Engine_Configuration_= Parameter_Translate(2000 , 10.0 , 0.0);
    EC1 -> Engine_Requested_Torque_Control_Range_Lower_Limit__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Requested_Torque_Control_Range_Upper_Limit__Engine_Configuration_= Parameter_Translate(100 , 1.0 , -125.0);
    EC1 -> Engine_Extended_Range_Requested_Speed_Control_Range_Upper_Limit__Engine_configuration_= Parameter_Translate(6425 , 0.125 , 0.0);
    EC1 -> Engine_Moment_of_Inertia= Parameter_Translate(205 , 0.004 , 2.0);
    EC1 -> Engine_Default_Torque_Limit= Parameter_Translate(51404 , 1.0 , 0.0);
}
void config_SHUTDN (getSHUTDN_t *SHUTDN)
{
    SHUTDN -> bt1.Engine_Idle_Shutdown_has_Shutdown_Engine= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt1.Engine_Idle_Shutdown_Driver_Alert_Mode= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt1.Engine_Idle_Shutdown_Timer_Override= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt1.Engine_Idle_Shutdown_Timer_State= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt2.Engine_Idle_Shutdown_Timer_Function= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt3.A_C_High_Pressure_Fan_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt3.Refrigerant_Low_Pressure_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt3.Refrigerant_High_Pressure_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt4.Engine_Wait_to_Start_Lamp= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt5.Engine_Protection_System_has_Shutdown_Engine= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt5.Engine_Protection_System_Approaching_Shutdown= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt5.Engine_Protection_System_Timer_Override= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt5.Engine_Protection_System_Timer_State= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt6.Engine_Protection_System_Configuration= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt7.Engine_Alarm_Acknowledge= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt7.Engine_Alarm_Output_Command_Status= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt7.Engine_Air_Shutoff_Command_Status= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt7.Engine_Overspeed_Test= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt8.Engine_Air_Shutoff_Status= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt8.PTO_Shutdown_has_Shutdown_Engine= Parameter_Translate(2 , 4.0 , 2.0);
    SHUTDN -> bt8.Coolant_Level_Engine_Protection_Shutdown_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_HOURS (getHOURS_t *HOURS)
{
    HOURS -> Engine_Total_Hours_of_Operation= Parameter_Translate(168443248 , 0.05 , 0.0);
    HOURS -> Engine_Total_Revolutions= Parameter_Translate(3368864972000 , 1000.0 , 0.0);
}
void config_TD (getTD_t *TD)
{
    TD -> Seconds= Parameter_Translate(50 , 0.25 , 0.0);
    TD -> Minutes= Parameter_Translate(200 , 1.0 , 0.0);
    TD -> Hours= Parameter_Translate(200 , 1.0 , 0.0);
    TD -> Month= Parameter_Translate(200 , 1.0 , 0.0);
    TD -> Day= Parameter_Translate(50 , 0.25 , 0.0);
    TD -> Year= Parameter_Translate(1788 , 1.0 , 1985.0);
    TD -> Local_minute_offset= Parameter_Translate(100 , 1.0 , -125.0);
    TD -> Local_hour_offset= Parameter_Translate(100 , 1.0 , -125.0);
}
void config_VH (getVH_t *VH)
{
    VH -> Total_Vehicle_Hours= Parameter_Translate(168443248 , 0.05 , 0.0);
    VH -> Total_Power_Takeoff_Hours= Parameter_Translate(168443248 , 0.05 , 0.0);
}
void config_VDS (getVDS_t *VDS)
{
    VDS -> Compass_Bearing= Parameter_Translate(401 , 1.0 , 128.0);
    VDS -> Navigation_Based_Vehicle_Speed= Parameter_Translate(200 , 1.0 , 256.0);
    VDS -> Pitch= Parameter_Translate(241 , 1.0 , 128.0);
    VDS -> Altitude= Parameter_Translate(4425 , 0.125 , -2500.0);
}
void config_LFC (getLFC_t *LFC)
{
    LFC -> Engine_Trip_Fuel= Parameter_Translate(3368864 , 0.001 , 0.0);
    LFC -> Engine_Total_Fuel_Used= Parameter_Translate(1684432486 , 0.5 , 0.0);
}
void config_VW (getVW_t *VW)
{
    VW -> bt1.Axle_Location= Parameter_Translate(204 , 256.0 , 8.0);
    VW -> Axle_Weight= Parameter_Translate(25702 , 0.5 , 0.0);
    VW -> Trailer_Weight= Parameter_Translate(102808 , 2.0 , 0.0);
    VW -> Cargo_Weight= Parameter_Translate(102808 , 2.0 , 0.0);
}
void config_CCSS (getCCSS_t *CCSS)
{
    CCSS -> Maximum_Vehicle_Speed_Limit= Parameter_Translate(200 , 1.0 , 0.0);
    CCSS -> Cruise_Control_High_Set_Limit_Speed= Parameter_Translate(200 , 1.0 , 0.0);
    CCSS -> Cruise_Control_Low_Set_Limit_Speed= Parameter_Translate(200 , 1.0 , 0.0);
}
void config_ET1 (getET1_t *ET1)
{
    ET1 -> Engine_Coolant_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    ET1 -> Engine_Fuel_Temperature_1= Parameter_Translate(168 , 1.0 , -40.0);
    ET1 -> Engine_Oil_Temperature_1= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET1 -> Engine_Turbocharger_Oil_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    ET1 -> Engine_Intercooler_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    ET1 -> Engine_Intercooler_Thermostat_Opening= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_EFL_P1 (getEFL_P1_t *EFL_P1)
{
    EFL_P1 -> Engine_Fuel_Delivery_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EFL_P1 -> Engine_Extended_Crankcase_Blow_by_Pressure= Parameter_Translate(10 , 0.05 , 0.0);
    EFL_P1 -> Engine_Oil_Level= Parameter_Translate(80 , 0.4 , 0.0);
    EFL_P1 -> Engine_Oil_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    EFL_P1 -> Engine_Crankcase_Pressure= Parameter_Translate(201 , 1.0 , 128.0);
    EFL_P1 -> Engine_Coolant_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    EFL_P1 -> Engine_Coolant_Level= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_PTO (getPTO_t *PTO)
{
    PTO -> Power_Takeoff_Oil_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    PTO -> Power_Takeoff_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    PTO -> Power_Takeoff_Set_Speed= Parameter_Translate(6425 , 0.125 , 0.0);
    PTO -> bt6.Engine_PTO_Governor_Enable_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt6.Engine_Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt6.Engine_Remote_PTO_Governor_Variable_Speed_Control_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt7.Engine_PTO_Governor_Set_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt7.Engine_PTO_Governor_Coast_Decelerate_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt7.Engine_PTO_Governor_Resume_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt7.Engine_PTO_Governor_Accelerate_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt8.Operator_Engine_PTO_Governor_Memory_Select_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt8.Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch_2= Parameter_Translate(2 , 4.0 , 2.0);
    PTO -> bt8.Auxiliary_Input_Ignore_Switch= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_CCVS1 (getCCVS1_t *CCVS1)
{
    CCVS1 -> bt1.Two_Speed_Axle_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt1.Parking_Brake_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt1.Cruise_Control_Pause_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt1.Park_Brake_Release_Inhibit_Request= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> Wheel_Based_Vehicle_Speed= Parameter_Translate(200 , 1.0 , 256.0);
    CCVS1 -> bt4.Cruise_Control_Active= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt4.Cruise_Control_Enable_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt4.Brake_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt4.Clutch_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt5.Cruise_Control_Set_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt5.Cruise_Control_Coast__Decelerate__Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt5.Cruise_Control_Resume_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt5.Cruise_Control_Accelerate_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> Cruise_Control_Set_Speed= Parameter_Translate(200 , 1.0 , 0.0);
    CCVS1 -> bt7.PTO_Governor_State= Parameter_Translate(24 , 32.0 , 5.0);
    CCVS1 -> bt7.Cruise_Control_States= Parameter_Translate(5 , 8.0 , 3.0);
    CCVS1 -> bt8.Engine_Idle_Increment_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt8.Engine_Idle_Decrement_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt8.Engine_Test_Mode_Switch= Parameter_Translate(2 , 4.0 , 2.0);
    CCVS1 -> bt8.Engine_Shutdown_Override_Switch= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_LFE1 (getLFE1_t *LFE1)
{
    LFE1 -> Engine_Fuel_Rate= Parameter_Translate(2570 , 0.05 , 0.0);
    LFE1 -> Engine_Instantaneous_Fuel_Economy= Parameter_Translate(100 , 1.0 , 512.0);
    LFE1 -> Engine_Average_Fuel_Economy= Parameter_Translate(100 , 1.0 , 512.0);
    LFE1 -> Engine_Throttle_Valve_1_Position= Parameter_Translate(80 , 0.4 , 0.0);
    LFE1 -> Engine_Throttle_Valve_2_Position= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_VP (getVP_t *VP)
{
    VP -> Latitude= Parameter_Translate(168 , 10.0 , -7.0);
    VP -> Longitude= Parameter_Translate(168 , 10.0 , -7.0);
}
void config_TIRE (getTIRE_t *TIRE)
{
    TIRE -> bt1.Tire_Location= Parameter_Translate(204 , 256.0 , 8.0);
    TIRE -> Tire_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    TIRE -> Tire_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    TIRE -> bt5.CTI_Wheel_Sensor_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TIRE -> bt5.CTI_Tire_Status= Parameter_Translate(2 , 4.0 , 2.0);
    TIRE -> bt5.CTI_Wheel_End_Electrical_Fault= Parameter_Translate(2 , 4.0 , 2.0);
    TIRE -> Tire_Air_Leakage_Rate= Parameter_Translate(5140 , 0.1 , 0.0);
    TIRE -> bt8.Tire_Pressure_Threshold_Detection= Parameter_Translate(5 , 8.0 , 3.0);
}
void config_AMB (getAMB_t *AMB)
{
    AMB -> Barometric_Pressure= Parameter_Translate(100 , 0.5 , 0.0);
    AMB -> Cab_Interior_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AMB -> Ambient_Air_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    AMB -> Engine_Air_Intake_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AMB -> Road_Surface_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
}
void config_IC1 (getIC1_t *IC1)
{
    IC1 -> Engine_Diesel_Particulate_Filter_Intake_Pressure= Parameter_Translate(100 , 0.5 , 0.0);
    IC1 -> Engine_Intake_Manifold_1_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    IC1 -> Engine_Intake_Manifold_1_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    IC1 -> Engine_Air_Intake_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    IC1 -> Engine_Air_Filter_1_Differential_Pressure= Parameter_Translate(10 , 0.05 , 0.0);
    IC1 -> Engine_Exhaust_Gas_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    IC1 -> Engine_Coolant_Filter_Differential_Pressure= Parameter_Translate(100 , 0.5 , 0.0);
}
void config_VEP1 (getVEP1_t *VEP1)
{
    VEP1 -> Net_Battery_Current= Parameter_Translate(100 , 1.0 , -125.0);
    VEP1 -> Alternator_Current= Parameter_Translate(200 , 1.0 , 0.0);
    VEP1 -> Charging_System_Potential__Voltage_= Parameter_Translate(2570 , 0.05 , 0.0);
    VEP1 -> Battery_Potential___Power_Input_1= Parameter_Translate(2570 , 0.05 , 0.0);
    VEP1 -> Keyswitch_Battery_Potential= Parameter_Translate(2570 , 0.05 , 0.0);
}
void config_TRF1 (getTRF1_t *TRF1)
{
    TRF1 -> Clutch_Pressure= Parameter_Translate(3200 , 16.0 , 0.0);
    TRF1 -> Transmission_Oil_Level_1= Parameter_Translate(80 , 0.4 , 0.0);
    TRF1 -> Transmission_Filter_Differential_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    TRF1 -> Transmission_Oil_Pressure= Parameter_Translate(3200 , 16.0 , 0.0);
    TRF1 -> Transmission_Oil_Temperature_1= Parameter_Translate(1387 , 0.03125 , -273.0);
    TRF1 -> Transmission_Oil_Level_1_High___Low= Parameter_Translate(50 , 0.5 , -62.5);
    TRF1 -> bt8.Transmission_Oil_Level_1_Countdown_Timer= Parameter_Translate(12 , 16.0 , 4.0);
    TRF1 -> bt8.Transmission_Oil_Level_1_Measurement_Status= Parameter_Translate(12 , 16.0 , 4.0);
}
void config_AI (getAI_t *AI)
{
    AI -> Steering_Axle_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AI -> bt2.Drive_Axle_Location= Parameter_Translate(204 , 256.0 , 8.0);
    AI -> Drive_Axle_Lift_Air_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    AI -> Drive_Axle_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    AI -> Drive_Axle_Lube_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    AI -> Steering_Axle_Lube_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
}
void config_B (getB_t *B)
{
    B -> Brake_Application_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    B -> Brake_Primary_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    B -> Brake_Secondary_Pressure= Parameter_Translate(800 , 4.0 , 0.0);
    B -> bt4.Parking_Brake_Actuator= Parameter_Translate(2 , 4.0 , 2.0);
    B -> bt4.Parking_Brake_Red_Warning_Signal= Parameter_Translate(2 , 4.0 , 2.0);
    B -> bt4.Park_Brake_Release_Inhibit_Status= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_RF (getRF_t *RF)
{
    RF -> Hydraulic_Retarder_Pressure= Parameter_Translate(3200 , 16.0 , 0.0);
    RF -> Hydraulic_Retarder_Oil_Temperature= Parameter_Translate(168 , 1.0 , -40.0);
    RF -> bt3.Driveline_Retarder_Overheat_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
}
void config_DD (getDD_t *DD)
{
    DD -> Washer_Fluid_Level= Parameter_Translate(80 , 0.4 , 0.0);
    DD -> Fuel_Level_1= Parameter_Translate(80 , 0.4 , 0.0);
    DD -> Engine_Fuel_Filter_Differential_Pressure= Parameter_Translate(400 , 2.0 , 0.0);
    DD -> Engine_Oil_Filter_Differential_Pressure= Parameter_Translate(100 , 0.5 , 0.0);
    DD -> Cargo_Ambient_Temperature= Parameter_Translate(1387 , 0.03125 , -273.0);
    DD -> Fuel_Level_2= Parameter_Translate(80 , 0.4 , 0.0);
}
void config_A1 (getA1_t *A1)
{
    A1 -> Engine_Blower_Bypass_Valve_Position= Parameter_Translate(80 , 0.4 , 0.0);
    A1 -> Engine_Gas_Supply_Pressure= Parameter_Translate(25702 , 0.5 , 0.0);
}
void config_AWPP (getAWPP_t *AWPP)
{
    AWPP -> Auxiliary_Pump_Pressure= Parameter_Translate(3200 , 16.0 , 0.0);
}
void config_OI (getOI_t *OI)
{
    OI -> bt1.Water_In_Fuel_Indicator= Parameter_Translate(2 , 4.0 , 2.0);
    OI -> bt1.Operator_Shift_Prompt= Parameter_Translate(2 , 4.0 , 2.0);
    OI -> bt2.Driver_Warning_System_Indicator_Status= Parameter_Translate(5 , 8.0 , 3.0);
}
