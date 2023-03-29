}
void CheckTSC1 ( J1939_MESSAGE *J1939_MESSAGE,getTSC1_t *TSC1)
{
       uint64_t buff;
    TSC1->bt1.Engine_Override_Control_Mode = J1939_MESSAGE->Mxe.Data[0]>>0;
    TSC1->bt1.Engine_Requested_Speed_Control_Conditions = J1939_MESSAGE->Mxe.Data[0]>>2;
    TSC1->bt1.Override_Control_Mode_Priority = J1939_MESSAGE->Mxe.Data[0]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    TSC1->Engine_Requested_Speed_Speed_Limit = Parameter_Translate(buff ,0.125,0) ;
    TSC1->Engine_Requested_Torque_Torque_Limit = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    TSC1->bt5.TSC1_Transmission_Rate = J1939_MESSAGE->Mxe.Data[4]>>0;
    TSC1->bt5.TSC1_Control_Purpose = J1939_MESSAGE->Mxe.Data[4]>>3;
    TSC1->bt6.Engine_Requested_Torque__High_Resolution = J1939_MESSAGE->Mxe.Data[5]>>0;
    TSC1->bt8.Message_Counter = J1939_MESSAGE->Mxe.Data[7]>>0;
    TSC1->bt8.Message_Checksum = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckTC1 ( J1939_MESSAGE *J1939_MESSAGE,getTC1_t *TC1)
{
       uint64_t buff;
    TC1->bt1.Transmission_Gear_Shift_Inhibit_Request = J1939_MESSAGE->Mxe.Data[0]>>0;
    TC1->bt1.Transmission_Torque_Converter_Lockup_Disable_Request = J1939_MESSAGE->Mxe.Data[0]>>2;
    TC1->bt1.Disengage_Driveline_Request = J1939_MESSAGE->Mxe.Data[0]>>4;
    TC1->Requested_Percent_Clutch_Slip = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    TC1->Transmission_Requested_Gear = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    TC1->bt4.Disengage_Differential_Lock_Request___Front_Axle_1 = J1939_MESSAGE->Mxe.Data[3]>>0;
    TC1->bt4.Disengage_Differential_Lock_Request___Front_Axle_2 = J1939_MESSAGE->Mxe.Data[3]>>2;
    TC1->bt4.Disengage_Differential_Lock_Request___Rear_Axle_1 = J1939_MESSAGE->Mxe.Data[3]>>4;
    TC1->bt4.Disengage_Differential_Lock_Request___Rear_Axle_2 = J1939_MESSAGE->Mxe.Data[3]>>6;
    TC1->bt5.Disengage_Differential_Lock_Request___Central = J1939_MESSAGE->Mxe.Data[4]>>0;
    TC1->bt5.Disengage_Differential_Lock_Request___Central_Front = J1939_MESSAGE->Mxe.Data[4]>>2;
    TC1->bt5.Disengage_Differential_Lock_Request___Central_Rear = J1939_MESSAGE->Mxe.Data[4]>>4;
    TC1->bt5.Transmission_Load_Reduction_Inhibit_Request = J1939_MESSAGE->Mxe.Data[4]>>6;
    TC1->bt6.Transmission_Mode_1 = J1939_MESSAGE->Mxe.Data[5]>>0;
    TC1->bt6.Transmission_Mode_2 = J1939_MESSAGE->Mxe.Data[5]>>2;
    TC1->bt6.Transmission_Mode_3 = J1939_MESSAGE->Mxe.Data[5]>>4;
    TC1->bt6.Transmission_Mode_4 = J1939_MESSAGE->Mxe.Data[5]>>6;
    TC1->bt7.Transmission_Requested_Launch_Gear = J1939_MESSAGE->Mxe.Data[6]>>2;
    TC1->bt7.Transmission_Shift_Selector_Display_Mode_Switch = J1939_MESSAGE->Mxe.Data[6]>>6;
    TC1->bt8.Transmission_Mode_5 = J1939_MESSAGE->Mxe.Data[7]>>0;
    TC1->bt8.Transmission_Mode_6 = J1939_MESSAGE->Mxe.Data[7]>>2;
    TC1->bt8.Transmission_Mode_7 = J1939_MESSAGE->Mxe.Data[7]>>4;
    TC1->bt8.Transmission_Mode_8 = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckXBR ( J1939_MESSAGE *J1939_MESSAGE,getXBR_t *XBR)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    XBR->External_Acceleration_Demand = Parameter_Translate(buff ,1,-15.687) ;
    XBR->bt3.XBR_EBI_Mode = J1939_MESSAGE->Mxe.Data[2]>>0;
    XBR->bt3.XBR_Priority = J1939_MESSAGE->Mxe.Data[2]>>2;
    XBR->bt3.XBR_Control_Mode = J1939_MESSAGE->Mxe.Data[2]>>4;
    XBR->XBR_urgency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    XBR->bt8.XBR_Message_Counter = J1939_MESSAGE->Mxe.Data[7]>>0;
    XBR->bt8.XBR_Message_Checksum = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckGPV4 ( J1939_MESSAGE *J1939_MESSAGE,getGPV4_t *GPV4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    GPV4->Valve_Load_Sense_Pressure = Parameter_Translate(buff ,5,0) ;
    GPV4->Valve_Pilot_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],16,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    GPV4->Valve_Assembly_Load_sense_Pressure = Parameter_Translate(buff ,5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    GPV4->Valve_Assembly_Supply_Pressure = Parameter_Translate(buff ,5,0) ;
}
void CheckAUXIO5 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO5_t *AUXIO5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AUXIO5->Auxiliary_I_O_Channel_6 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AUXIO5->Auxiliary_I_O_Channel_5 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AUXIO5->Auxiliary_I_O_Channel_4 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AUXIO5->Auxiliary_I_O_Channel_3 = Parameter_Translate(buff ,1,0) ;
}
void CheckSRASI ( J1939_MESSAGE *J1939_MESSAGE,getSRASI_t *SRASI)
{
       uint64_t buff;
    SRASI->Static_Roll_Angle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    SRASI->bt2.Static_Roll_Angle_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
}
void CheckCCVS2 ( J1939_MESSAGE *J1939_MESSAGE,getCCVS2_t *CCVS2)
{
       uint64_t buff;
    CCVS2->bt1.Cruise_Control_Disable_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    CCVS2->bt1.Cruise_Control_Resume_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    CCVS2->bt1.Cruise_Control_Pause_Command = J1939_MESSAGE->Mxe.Data[0]>>4;
}
void CheckAEBS2 ( J1939_MESSAGE *J1939_MESSAGE,getAEBS2_t *AEBS2)
{
       uint64_t buff;
    AEBS2->bt1.Driver_activation_demand_for_Advanced_Emergency_Braking_System = J1939_MESSAGE->Mxe.Data[0]>>0;
    AEBS2->bt8.AEBS2_message_Counter = J1939_MESSAGE->Mxe.Data[7]>>0;
    AEBS2->bt8.AEBS2_message_checksum = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckESR ( J1939_MESSAGE *J1939_MESSAGE,getESR_t *ESR)
{
       uint64_t buff;
    ESR->bt1.Desired_Engine_Fueling_State = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckRBR ( J1939_MESSAGE *J1939_MESSAGE,getRBR_t *RBR)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    RBR->Unique_Beacon_Message_Identifier_Number = Parameter_Translate(buff ,1,0) ;
    RBR->bt3.Radio_Beacon_Direction = J1939_MESSAGE->Mxe.Data[2]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    RBR->Transmitter_ID_2 = Parameter_Translate(buff ,1,0) ;
    RBR->Wireless_Signal_Strength_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.5,0) ;
}
void CheckECC ( J1939_MESSAGE *J1939_MESSAGE,getECC_t *ECC)
{
       uint64_t buff;
    ECC->bt1.Coolant_Level_Engine_Protection_Shutdown_Override_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckSFC ( J1939_MESSAGE *J1939_MESSAGE,getSFC_t *SFC)
{
       uint64_t buff;
    SFC->bt1.Supplemental_Fan_Enable_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    SFC->bt1.Supplemental_Fan_Direction_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    SFC->Supplemental_Fan_Speed_Command = Parameter_Translate(buff ,0.5,0) ;
    SFC->bt4.Supplemental_Fan_Power_Hold = J1939_MESSAGE->Mxe.Data[3]>>0;
}
void CheckVLS1 ( J1939_MESSAGE *J1939_MESSAGE,getVLS1_t *VLS1)
{
       uint64_t buff;
    VLS1->bt1.Lubrication_Cycle_Mode_Lock_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    VLS1->bt1.Lubrication_Cycle_Set_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    VLS1->bt1.Lubrication_Operation_Mode_Set_Command = J1939_MESSAGE->Mxe.Data[0]>>5;
    VLS1->bt2.Lubrication_Pump_Enable_Command = J1939_MESSAGE->Mxe.Data[1]>>0;
    VLS1->bt2.Lubrication_Timing_Cycle_Command = J1939_MESSAGE->Mxe.Data[1]>>2;
}
void CheckHCDI1 ( J1939_MESSAGE *J1939_MESSAGE,getHCDI1_t *HCDI1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    HCDI1->Requested_Fuel_Mass_Rate = Parameter_Translate(buff ,0.05,0) ;
    HCDI1->bt3.HC_Doser_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    HCDI1->bt3.HC_Doser_Injecting_Status = J1939_MESSAGE->Mxe.Data[2]>>3;
    HCDI1->bt3.Diagnostic_Status_of_HC_Doser = J1939_MESSAGE->Mxe.Data[2]>>5;
    HCDI1->bt4.Hydrocarbon_Doser_Purging_Required = J1939_MESSAGE->Mxe.Data[3]>>0;
}
void CheckAT1DPFSSC ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPFSSC_t *AT1DPFSSC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPFSSC->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPFSSC->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT2DPFSSC ( J1939_MESSAGE *J1939_MESSAGE,getAT2DPFSSC_t *AT2DPFSSC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2DPFSSC->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2DPFSSC->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckLVDSOM ( J1939_MESSAGE *J1939_MESSAGE,getLVDSOM_t *LVDSOM)
{
       uint64_t buff;
    LVDSOM->bt1.Low_Voltage_Disconnect_Desired_Operating_Mode = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckNCS ( J1939_MESSAGE *J1939_MESSAGE,getNCS_t *NCS)
{
       uint64_t buff;
    NCS->bt1.Cab_Noise_Control_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    NCS->bt1.Cab_Noise_Control_Tuning_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
}
void CheckNC1 ( J1939_MESSAGE *J1939_MESSAGE,getNC1_t *NC1)
{
       uint64_t buff;
    NC1->bt1.Cab_Noise_Control_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    NC1->bt1.Cab_Noise_Control_Tuning_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
}
void CheckJLCM ( J1939_MESSAGE *J1939_MESSAGE,getJLCM_t *JLCM)
{
       uint64_t buff;
    JLCM->bt1.Joystick_1_Lamp_1_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    JLCM->bt1.Joystick_1_Lamp_2_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    JLCM->bt1.Joystick_1_Lamp_3_Command = J1939_MESSAGE->Mxe.Data[0]>>4;
    JLCM->bt1.Joystick_1_Lamp_4_Command = J1939_MESSAGE->Mxe.Data[0]>>6;
    JLCM->bt2.Joystick_1_Lamp_5_Command = J1939_MESSAGE->Mxe.Data[1]>>0;
    JLCM->bt2.Joystick_1_Lamp_6_Command = J1939_MESSAGE->Mxe.Data[1]>>2;
    JLCM->bt2.Joystick_1_Lamp_7_Command = J1939_MESSAGE->Mxe.Data[1]>>4;
    JLCM->bt2.Joystick_1_Lamp_8_Command = J1939_MESSAGE->Mxe.Data[1]>>6;
    JLCM->bt3.Joystick_1_Lamp_9_Command = J1939_MESSAGE->Mxe.Data[2]>>0;
    JLCM->bt3.Joystick_1_Lamp_10_Command = J1939_MESSAGE->Mxe.Data[2]>>2;
    JLCM->bt3.Joystick_2_Lamp_1_Command = J1939_MESSAGE->Mxe.Data[2]>>4;
    JLCM->bt3.Joystick_2_Lamp_2_Command = J1939_MESSAGE->Mxe.Data[2]>>6;
    JLCM->bt4.Joystick_2_Lamp_3_Command = J1939_MESSAGE->Mxe.Data[3]>>0;
    JLCM->bt4.Joystick_2_Lamp_4_Command = J1939_MESSAGE->Mxe.Data[3]>>2;
    JLCM->bt4.Joystick_2_Lamp_5_Command = J1939_MESSAGE->Mxe.Data[3]>>4;
    JLCM->bt4.Joystick_2_Lamp_6_Command = J1939_MESSAGE->Mxe.Data[3]>>6;
    JLCM->bt5.Joystick_2_Lamp_7_Command = J1939_MESSAGE->Mxe.Data[4]>>0;
    JLCM->bt5.Joystick_2_Lamp_8_Command = J1939_MESSAGE->Mxe.Data[4]>>2;
    JLCM->bt5.Joystick_2_Lamp_9_Command = J1939_MESSAGE->Mxe.Data[4]>>4;
    JLCM->bt5.Joystick_2_Lamp_10_Command = J1939_MESSAGE->Mxe.Data[4]>>6;
    JLCM->bt6.Joystick_3_Lamp_1_Command = J1939_MESSAGE->Mxe.Data[5]>>0;
    JLCM->bt6.Joystick_3_Lamp_2_Command = J1939_MESSAGE->Mxe.Data[5]>>2;
    JLCM->bt6.Joystick_3_Lamp_3_Command = J1939_MESSAGE->Mxe.Data[5]>>4;
    JLCM->bt6.Joystick_3_Lamp_4_Command = J1939_MESSAGE->Mxe.Data[5]>>6;
    JLCM->bt7.Joystick_3_Lamp_5_Command = J1939_MESSAGE->Mxe.Data[6]>>0;
    JLCM->bt7.Joystick_3_Lamp_6_Command = J1939_MESSAGE->Mxe.Data[6]>>2;
    JLCM->bt7.Joystick_3_Lamp_7_Command = J1939_MESSAGE->Mxe.Data[6]>>4;
    JLCM->bt7.Joystick_3_Lamp_8_Command = J1939_MESSAGE->Mxe.Data[6]>>6;
    JLCM->bt8.Joystick_3_Lamp_9_Command = J1939_MESSAGE->Mxe.Data[7]>>0;
    JLCM->bt8.Joystick_3_Lamp_10_Command = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckAUXIO7 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO7_t *AUXIO7)
{
       uint64_t buff;
    AUXIO7->Auxiliary_I_O_Channel_18 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_17 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_16 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_15 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_22 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_21 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_20 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    AUXIO7->Auxiliary_I_O_Channel_19 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckAUXIO6 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO6_t *AUXIO6)
{
       uint64_t buff;
    AUXIO6->Auxiliary_I_O_Channel_10 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_9 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_8 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_7 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_14 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_13 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_12 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    AUXIO6->Auxiliary_I_O_Channel_11 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckAUXIO4 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO4_t *AUXIO4)
{
       uint64_t buff;
    AUXIO4->bt1.Auxiliary_I_O_84 = J1939_MESSAGE->Mxe.Data[0]>>0;
    AUXIO4->bt1.Auxiliary_I_O_83 = J1939_MESSAGE->Mxe.Data[0]>>2;
    AUXIO4->bt1.Auxiliary_I_O_82 = J1939_MESSAGE->Mxe.Data[0]>>4;
    AUXIO4->bt1.Auxiliary_I_O_81 = J1939_MESSAGE->Mxe.Data[0]>>6;
    AUXIO4->bt2.Auxiliary_I_O_88 = J1939_MESSAGE->Mxe.Data[1]>>0;
    AUXIO4->bt2.Auxiliary_I_O_87 = J1939_MESSAGE->Mxe.Data[1]>>2;
    AUXIO4->bt2.Auxiliary_I_O_86 = J1939_MESSAGE->Mxe.Data[1]>>4;
    AUXIO4->bt2.Auxiliary_I_O_85 = J1939_MESSAGE->Mxe.Data[1]>>6;
    AUXIO4->bt3.Auxiliary_I_O_92 = J1939_MESSAGE->Mxe.Data[2]>>0;
    AUXIO4->bt3.Auxiliary_I_O_91 = J1939_MESSAGE->Mxe.Data[2]>>2;
    AUXIO4->bt3.Auxiliary_I_O_90 = J1939_MESSAGE->Mxe.Data[2]>>4;
    AUXIO4->bt3.Auxiliary_I_O_89 = J1939_MESSAGE->Mxe.Data[2]>>6;
    AUXIO4->bt4.Auxiliary_I_O_96 = J1939_MESSAGE->Mxe.Data[3]>>0;
    AUXIO4->bt4.Auxiliary_I_O_95 = J1939_MESSAGE->Mxe.Data[3]>>2;
    AUXIO4->bt4.Auxiliary_I_O_94 = J1939_MESSAGE->Mxe.Data[3]>>4;
    AUXIO4->bt4.Auxiliary_I_O_93 = J1939_MESSAGE->Mxe.Data[3]>>6;
    AUXIO4->bt5.Auxiliary_I_O_100 = J1939_MESSAGE->Mxe.Data[4]>>0;
    AUXIO4->bt5.Auxiliary_I_O_99 = J1939_MESSAGE->Mxe.Data[4]>>2;
    AUXIO4->bt5.Auxiliary_I_O_98 = J1939_MESSAGE->Mxe.Data[4]>>4;
    AUXIO4->bt5.Auxiliary_I_O_97 = J1939_MESSAGE->Mxe.Data[4]>>6;
    AUXIO4->bt6.Auxiliary_I_O_104 = J1939_MESSAGE->Mxe.Data[5]>>0;
    AUXIO4->bt6.Auxiliary_I_O_103 = J1939_MESSAGE->Mxe.Data[5]>>2;
    AUXIO4->bt6.Auxiliary_I_O_102 = J1939_MESSAGE->Mxe.Data[5]>>4;
    AUXIO4->bt6.Auxiliary_I_O_101 = J1939_MESSAGE->Mxe.Data[5]>>6;
    AUXIO4->bt7.Auxiliary_I_O_108 = J1939_MESSAGE->Mxe.Data[6]>>0;
    AUXIO4->bt7.Auxiliary_I_O_107 = J1939_MESSAGE->Mxe.Data[6]>>2;
    AUXIO4->bt7.Auxiliary_I_O_106 = J1939_MESSAGE->Mxe.Data[6]>>4;
    AUXIO4->bt7.Auxiliary_I_O_105 = J1939_MESSAGE->Mxe.Data[6]>>6;
    AUXIO4->bt8.Auxiliary_I_O_112 = J1939_MESSAGE->Mxe.Data[7]>>0;
    AUXIO4->bt8.Auxiliary_I_O_111 = J1939_MESSAGE->Mxe.Data[7]>>2;
    AUXIO4->bt8.Auxiliary_I_O_110 = J1939_MESSAGE->Mxe.Data[7]>>4;
    AUXIO4->bt8.Auxiliary_I_O_109 = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckAUXIO3 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO3_t *AUXIO3)
{
       uint64_t buff;
    AUXIO3->bt1.Auxiliary_I_O_52 = J1939_MESSAGE->Mxe.Data[0]>>0;
    AUXIO3->bt1.Auxiliary_I_O_51 = J1939_MESSAGE->Mxe.Data[0]>>2;
    AUXIO3->bt1.Auxiliary_I_O_50 = J1939_MESSAGE->Mxe.Data[0]>>4;
    AUXIO3->bt1.Auxiliary_I_O_49 = J1939_MESSAGE->Mxe.Data[0]>>6;
    AUXIO3->bt2.Auxiliary_I_O_56 = J1939_MESSAGE->Mxe.Data[1]>>0;
    AUXIO3->bt2.Auxiliary_I_O_55 = J1939_MESSAGE->Mxe.Data[1]>>2;
    AUXIO3->bt2.Auxiliary_I_O_54 = J1939_MESSAGE->Mxe.Data[1]>>4;
    AUXIO3->bt2.Auxiliary_I_O_53 = J1939_MESSAGE->Mxe.Data[1]>>6;
    AUXIO3->bt3.Auxiliary_I_O_60 = J1939_MESSAGE->Mxe.Data[2]>>0;
    AUXIO3->bt3.Auxiliary_I_O_59 = J1939_MESSAGE->Mxe.Data[2]>>2;
    AUXIO3->bt3.Auxiliary_I_O_58 = J1939_MESSAGE->Mxe.Data[2]>>4;
    AUXIO3->bt3.Auxiliary_I_O_57 = J1939_MESSAGE->Mxe.Data[2]>>6;
    AUXIO3->bt4.Auxiliary_I_O_64 = J1939_MESSAGE->Mxe.Data[3]>>0;
    AUXIO3->bt4.Auxiliary_I_O_63 = J1939_MESSAGE->Mxe.Data[3]>>2;
    AUXIO3->bt4.Auxiliary_I_O_62 = J1939_MESSAGE->Mxe.Data[3]>>4;
    AUXIO3->bt4.Auxiliary_I_O_61 = J1939_MESSAGE->Mxe.Data[3]>>6;
    AUXIO3->bt5.Auxiliary_I_O_68 = J1939_MESSAGE->Mxe.Data[4]>>0;
    AUXIO3->bt5.Auxiliary_I_O_67 = J1939_MESSAGE->Mxe.Data[4]>>2;
    AUXIO3->bt5.Auxiliary_I_O_66 = J1939_MESSAGE->Mxe.Data[4]>>4;
    AUXIO3->bt5.Auxiliary_I_O_65 = J1939_MESSAGE->Mxe.Data[4]>>6;
    AUXIO3->bt6.Auxiliary_I_O_72 = J1939_MESSAGE->Mxe.Data[5]>>0;
    AUXIO3->bt6.Auxiliary_I_O_71 = J1939_MESSAGE->Mxe.Data[5]>>2;
    AUXIO3->bt6.Auxiliary_I_O_70 = J1939_MESSAGE->Mxe.Data[5]>>4;
    AUXIO3->bt6.Auxiliary_I_O_69 = J1939_MESSAGE->Mxe.Data[5]>>6;
    AUXIO3->bt7.Auxiliary_I_O_76 = J1939_MESSAGE->Mxe.Data[6]>>0;
    AUXIO3->bt7.Auxiliary_I_O_75 = J1939_MESSAGE->Mxe.Data[6]>>2;
    AUXIO3->bt7.Auxiliary_I_O_74 = J1939_MESSAGE->Mxe.Data[6]>>4;
    AUXIO3->bt7.Auxiliary_I_O_73 = J1939_MESSAGE->Mxe.Data[6]>>6;
    AUXIO3->bt8.Auxiliary_I_O_80 = J1939_MESSAGE->Mxe.Data[7]>>0;
    AUXIO3->bt8.Auxiliary_I_O_79 = J1939_MESSAGE->Mxe.Data[7]>>2;
    AUXIO3->bt8.Auxiliary_I_O_78 = J1939_MESSAGE->Mxe.Data[7]>>4;
    AUXIO3->bt8.Auxiliary_I_O_77 = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckAUXIO2 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO2_t *AUXIO2)
{
       uint64_t buff;
    AUXIO2->bt1.Auxiliary_I_O_20 = J1939_MESSAGE->Mxe.Data[0]>>0;
    AUXIO2->bt1.Auxiliary_I_O_19 = J1939_MESSAGE->Mxe.Data[0]>>2;
    AUXIO2->bt1.Auxiliary_I_O_18 = J1939_MESSAGE->Mxe.Data[0]>>4;
    AUXIO2->bt1.Auxiliary_I_O_17 = J1939_MESSAGE->Mxe.Data[0]>>6;
    AUXIO2->bt2.Auxiliary_I_O_24 = J1939_MESSAGE->Mxe.Data[1]>>0;
    AUXIO2->bt2.Auxiliary_I_O_23 = J1939_MESSAGE->Mxe.Data[1]>>2;
    AUXIO2->bt2.Auxiliary_I_O_22 = J1939_MESSAGE->Mxe.Data[1]>>4;
    AUXIO2->bt2.Auxiliary_I_O_21 = J1939_MESSAGE->Mxe.Data[1]>>6;
    AUXIO2->bt3.Auxiliary_I_O_28 = J1939_MESSAGE->Mxe.Data[2]>>0;
    AUXIO2->bt3.Auxiliary_I_O_27 = J1939_MESSAGE->Mxe.Data[2]>>2;
    AUXIO2->bt3.Auxiliary_I_O_26 = J1939_MESSAGE->Mxe.Data[2]>>4;
    AUXIO2->bt3.Auxiliary_I_O_25 = J1939_MESSAGE->Mxe.Data[2]>>6;
    AUXIO2->bt4.Auxiliary_I_O_32 = J1939_MESSAGE->Mxe.Data[3]>>0;
    AUXIO2->bt4.Auxiliary_I_O_31 = J1939_MESSAGE->Mxe.Data[3]>>2;
    AUXIO2->bt4.Auxiliary_I_O_30 = J1939_MESSAGE->Mxe.Data[3]>>4;
    AUXIO2->bt4.Auxiliary_I_O_29 = J1939_MESSAGE->Mxe.Data[3]>>6;
    AUXIO2->bt5.Auxiliary_I_O_36 = J1939_MESSAGE->Mxe.Data[4]>>0;
    AUXIO2->bt5.Auxiliary_I_O_35 = J1939_MESSAGE->Mxe.Data[4]>>2;
    AUXIO2->bt5.Auxiliary_I_O_34 = J1939_MESSAGE->Mxe.Data[4]>>4;
    AUXIO2->bt5.Auxiliary_I_O_33 = J1939_MESSAGE->Mxe.Data[4]>>6;
    AUXIO2->bt6.Auxiliary_I_O_40 = J1939_MESSAGE->Mxe.Data[5]>>0;
    AUXIO2->bt6.Auxiliary_I_O_39 = J1939_MESSAGE->Mxe.Data[5]>>2;
    AUXIO2->bt6.Auxiliary_I_O_38 = J1939_MESSAGE->Mxe.Data[5]>>4;
    AUXIO2->bt6.Auxiliary_I_O_37 = J1939_MESSAGE->Mxe.Data[5]>>6;
    AUXIO2->bt7.Auxiliary_I_O_44 = J1939_MESSAGE->Mxe.Data[6]>>0;
    AUXIO2->bt7.Auxiliary_I_O_43 = J1939_MESSAGE->Mxe.Data[6]>>2;
    AUXIO2->bt7.Auxiliary_I_O_42 = J1939_MESSAGE->Mxe.Data[6]>>4;
    AUXIO2->bt7.Auxiliary_I_O_41 = J1939_MESSAGE->Mxe.Data[6]>>6;
    AUXIO2->bt8.Auxiliary_I_O_48 = J1939_MESSAGE->Mxe.Data[7]>>0;
    AUXIO2->bt8.Auxiliary_I_O_47 = J1939_MESSAGE->Mxe.Data[7]>>2;
    AUXIO2->bt8.Auxiliary_I_O_46 = J1939_MESSAGE->Mxe.Data[7]>>4;
    AUXIO2->bt8.Auxiliary_I_O_45 = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckDISP1 ( J1939_MESSAGE *J1939_MESSAGE,getDISP1_t *DISP1)
{
       uint64_t buff;
    DISP1->bt1.Text_Display_Instructions = J1939_MESSAGE->Mxe.Data[0]>>0;
    DISP1->Text_Display_Index = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
}
void CheckFLIC ( J1939_MESSAGE *J1939_MESSAGE,getFLIC_t *FLIC)
{
       uint64_t buff;
    FLIC->bt1.Lane_Departure_Warning_Enable_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckTPRS ( J1939_MESSAGE *J1939_MESSAGE,getTPRS_t *TPRS)
{
       uint64_t buff;
    TPRS->bt1.Tire_Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    TPRS->Reference_Tire_Pressure_Setting = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],8,0) ;
}
void CheckCTL ( J1939_MESSAGE *J1939_MESSAGE,getCTL_t *CTL)
{
       uint64_t buff;
    CTL->Engine_Speed_Limit_Request___Minimum_Continuous = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],32,0) ;
    CTL->Engine_Speed_Limit_Request___Maximum_Continuous = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],32,0) ;
    CTL->Engine_Torque_Limit_Request___Minimum_Continuous = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    CTL->Engine_Torque_Limit_Request___Maximum_Continuous = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    CTL->Minimum_Continuous_Retarder_Speed_Limit_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],32,0) ;
    CTL->Maximum_Continuous_Retarder_Speed_Limit_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],32,0) ;
    CTL->Minimum_Continuous_Retarder_Torque_Limit_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    CTL->Maximum_Continuous_Retarder_Torque_Limit_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckCL ( J1939_MESSAGE *J1939_MESSAGE,getCL_t *CL)
{
       uint64_t buff;
    CL->Illumination_Brightness_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    CL->Switch_Backlight_Illumination_Brightness_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
}
void CheckASC6 ( J1939_MESSAGE *J1939_MESSAGE,getASC6_t *ASC6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ASC6->Level_Preset_Front_Axle_Left = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ASC6->Level_Preset_Front_Axle_Right = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ASC6->Level_Preset_Rear_Axle_Left = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ASC6->Level_Preset_Rear_Axle_Right = Parameter_Translate(buff ,0.1,200) ;
}
void CheckASC2 ( J1939_MESSAGE *J1939_MESSAGE,getASC2_t *ASC2)
{
       uint64_t buff;
    ASC2->bt1.Automatic_traction_help__load_transfer_ = J1939_MESSAGE->Mxe.Data[0]>>0;
    ASC2->bt1.Kneeling_Request_Left_Side = J1939_MESSAGE->Mxe.Data[0]>>2;
    ASC2->bt1.Kneeling_Request_Right_Side = J1939_MESSAGE->Mxe.Data[0]>>4;
    ASC2->bt1.Kneeling_Control_Mode_Request = J1939_MESSAGE->Mxe.Data[0]>>6;
    ASC2->bt2.Nominal_Level_Request_Front_Axle = J1939_MESSAGE->Mxe.Data[1]>>0;
    ASC2->bt2.Nominal_Level_Request_Rear_Axle = J1939_MESSAGE->Mxe.Data[1]>>4;
    ASC2->bt3.Level_Control_Mode_Request = J1939_MESSAGE->Mxe.Data[2]>>0;
    ASC2->bt3.Lift_Axle_1_Position_Command = J1939_MESSAGE->Mxe.Data[2]>>4;
    ASC2->bt3.Lift_Axle_2_Position_Command = J1939_MESSAGE->Mxe.Data[2]>>6;
    ASC2->Damper_Stiffness_Request_Front_Axle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    ASC2->Damper_Stiffness_Request_Rear_Axle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    ASC2->Damper_Stiffness_Request_Lift___Tag_Axle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    ASC2->bt7.Kneeling_Command___Front_Axle = J1939_MESSAGE->Mxe.Data[6]>>0;
    ASC2->bt7.Kneeling_Command___Rear_Axle = J1939_MESSAGE->Mxe.Data[6]>>2;
    ASC2->bt7.Prohibit_air_suspension_control = J1939_MESSAGE->Mxe.Data[6]>>4;
    ASC2->bt7.Allow_Level_Control_During_Braking_Command = J1939_MESSAGE->Mxe.Data[6]>>6;
    ASC2->bt8.Speed_Dependent_Level_Control_Request = J1939_MESSAGE->Mxe.Data[7]>>0;
    ASC2->bt8.Prohibit_Automatic_Air_Suspension_Control = J1939_MESSAGE->Mxe.Data[7]>>2;
    ASC2->bt8.Memory_level_request = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckTDA ( J1939_MESSAGE *J1939_MESSAGE,getTDA_t *TDA)
{
       uint64_t buff;
    TDA->Adjust_seconds = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.25,0) ;
    TDA->Adjust_minutes = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    TDA->Adjust_hours = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    TDA->Adjust_month = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    TDA->Adjust_day = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.25,0) ;
    TDA->Adjust_year = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,1985) ;
    TDA->Adjust_local_minute_offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    TDA->Adjust_local_hour_offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckATS ( J1939_MESSAGE *J1939_MESSAGE,getATS_t *ATS)
{
       uint64_t buff;
    ATS->bt1.Anti_theft_Encryption_Seed_Present_Indicator = J1939_MESSAGE->Mxe.Data[0]>>0;
    ATS->bt1.Anti_theft_Password_Valid_Indicator = J1939_MESSAGE->Mxe.Data[0]>>2;
    ATS->bt1.Anti_theft_Component_Status_States = J1939_MESSAGE->Mxe.Data[0]>>4;
    ATS->bt1.Anti_theft_Modify_Password_States = J1939_MESSAGE->Mxe.Data[0]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<48;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<40;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<32;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ATS->Anti_theft_Random_Number = Parameter_Translate(buff,4,0) ;
}
void CheckATR ( J1939_MESSAGE *J1939_MESSAGE,getATR_t *ATR)
{
       uint64_t buff;
    ATR->bt1.Anti_theft_Encryption_Indicator_States = J1939_MESSAGE->Mxe.Data[0]>>1;
    ATR->bt1.Anti_theft_Desired_Exit_Mode_States = J1939_MESSAGE->Mxe.Data[0]>>3;
    ATR->bt1.Anti_theft_Command_States = J1939_MESSAGE->Mxe.Data[0]>>5;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<48;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<40;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<32;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ATR->Anti_theft_Password_Representation = Parameter_Translate(buff,8,0) ;
}
void CheckCM1 ( J1939_MESSAGE *J1939_MESSAGE,getCM1_t *CM1)
{
       uint64_t buff;
    CM1->Requested_Percent_Fan_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    CM1->Cab_Interior_Temperature_Command = Parameter_Translate(buff ,0.03125,-273) ;
    CM1->bt4.Auxiliary_Heater_Coolant_Pump_Request = J1939_MESSAGE->Mxe.Data[3]>>0;
    CM1->bt4.Battery_Main_Switch_Hold_Request = J1939_MESSAGE->Mxe.Data[3]>>2;
    CM1->bt4.Operator_Seat_Direction_Switch = J1939_MESSAGE->Mxe.Data[3]>>4;
    CM1->bt4.Seat_Belt_Switch = J1939_MESSAGE->Mxe.Data[3]>>6;
    CM1->bt5.Park_Brake_Command = J1939_MESSAGE->Mxe.Data[4]>>0;
    CM1->bt5.Vehicle_Limiting_Speed_Governor_Decrement_Switch = J1939_MESSAGE->Mxe.Data[4]>>2;
    CM1->bt5.Vehicle_Limiting_Speed_Governor_Increment_Switch = J1939_MESSAGE->Mxe.Data[4]>>4;
    CM1->bt5.Vehicle_Limiting_Speed_Governor_Enable_Switch = J1939_MESSAGE->Mxe.Data[4]>>6;
    CM1->bt6.Diesel_Particulate_Filter_Regeneration_Force_Switch = J1939_MESSAGE->Mxe.Data[5]>>2;
    CM1->bt6.Automatic_Gear_Shifting_Enable_Switch = J1939_MESSAGE->Mxe.Data[5]>>4;
    CM1->bt6.Engine_Automatic_Start_Enable_Switch = J1939_MESSAGE->Mxe.Data[5]>>6;
    CM1->bt7.Auxiliary_Heater_Mode_Request = J1939_MESSAGE->Mxe.Data[6]>>0;
    CM1->bt7.Request_Engine_Zone_Heating = J1939_MESSAGE->Mxe.Data[6]>>4;
    CM1->bt7.Request_Cab_Zone_Heating = J1939_MESSAGE->Mxe.Data[6]>>6;
    CM1->Selected_Maximum_Vehicle_Speed_Limit = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckERC1 ( J1939_MESSAGE *J1939_MESSAGE,getERC1_t *ERC1)
{
       uint64_t buff;
    ERC1->bt1.Retarder_Torque_Mode = J1939_MESSAGE->Mxe.Data[0]>>0;
    ERC1->bt1.Retarder_Enable___Brake_Assist_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    ERC1->bt1.Retarder_Enable___Shift_Assist_Switch = J1939_MESSAGE->Mxe.Data[0]>>6;
    ERC1->Actual_Retarder___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    ERC1->Intended_Retarder_Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    ERC1->bt4.Engine_Coolant_Load_Increase = J1939_MESSAGE->Mxe.Data[3]>>0;
    ERC1->bt4.Retarder_Requesting_Brake_Light = J1939_MESSAGE->Mxe.Data[3]>>2;
    ERC1->bt4.Retarder_Road_Speed_Limit_Switch = J1939_MESSAGE->Mxe.Data[3]>>4;
    ERC1->bt4.Retarder_Road_Speed_Exceeded_Status = J1939_MESSAGE->Mxe.Data[3]>>6;
    ERC1->Source_Address_of_Controlling_Device_for_Retarder_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    ERC1->Drivers_Demand_Retarder__ = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-125) ;
    ERC1->Retarder_Selection_non_engine = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    ERC1->Actual_Maximum_Available_Retarder___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckEBC1 ( J1939_MESSAGE *J1939_MESSAGE,getEBC1_t *EBC1)
{
       uint64_t buff;
    EBC1->bt1.ASR_Engine_Control_Active = J1939_MESSAGE->Mxe.Data[0]>>0;
    EBC1->bt1.ASR_Brake_Control_Active = J1939_MESSAGE->Mxe.Data[0]>>2;
    EBC1->bt1.Anti_Lock_Braking__ABS__Active = J1939_MESSAGE->Mxe.Data[0]>>4;
    EBC1->bt1.EBS_Brake_Switch = J1939_MESSAGE->Mxe.Data[0]>>6;
    EBC1->Brake_Pedal_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    EBC1->bt3.ABS_Off_road_Switch = J1939_MESSAGE->Mxe.Data[2]>>0;
    EBC1->bt3.ASR_Off_road_Switch = J1939_MESSAGE->Mxe.Data[2]>>2;
    EBC1->bt3.ASR__Hill_Holder__Switch = J1939_MESSAGE->Mxe.Data[2]>>4;
    EBC1->bt3.Traction_Control_Override_Switch = J1939_MESSAGE->Mxe.Data[2]>>6;
    EBC1->bt4.Accelerator_Interlock_Switch = J1939_MESSAGE->Mxe.Data[3]>>0;
    EBC1->bt4.Engine_Derate_Switch = J1939_MESSAGE->Mxe.Data[3]>>2;
    EBC1->bt4.Engine_Auxiliary_Shutdown_Switch = J1939_MESSAGE->Mxe.Data[3]>>4;
    EBC1->bt4.Remote_Accelerator_Enable_Switch = J1939_MESSAGE->Mxe.Data[3]>>6;
    EBC1->Engine_Retarder_Selection = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    EBC1->bt6.ABS_Fully_Operational = J1939_MESSAGE->Mxe.Data[5]>>0;
    EBC1->bt6.EBS_Red_Warning_Signal = J1939_MESSAGE->Mxe.Data[5]>>2;
    EBC1->bt6.ABS_EBS_Amber_Warning_Signal__Powered_Vehicle_ = J1939_MESSAGE->Mxe.Data[5]>>4;
    EBC1->bt6.ATC_ASR_Information_Signal = J1939_MESSAGE->Mxe.Data[5]>>6;
    EBC1->Source_Address_of_Controlling_Device_for_Brake_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    EBC1->bt8.Halt_brake_switch = J1939_MESSAGE->Mxe.Data[7]>>2;
    EBC1->bt8.Trailer_ABS_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    EBC1->bt8.Tractor_Mounted_Trailer_ABS_Warning_Signal = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckETC1 ( J1939_MESSAGE *J1939_MESSAGE,getETC1_t *ETC1)
{
       uint64_t buff;
    ETC1->bt1.Transmission_Driveline_Engaged = J1939_MESSAGE->Mxe.Data[0]>>0;
    ETC1->bt1.Transmission_Torque_Converter_Lockup_Engaged = J1939_MESSAGE->Mxe.Data[0]>>2;
    ETC1->bt1.Transmission_Shift_In_Process = J1939_MESSAGE->Mxe.Data[0]>>4;
    ETC1->bt1.Transmission_Torque_Converter_Lockup_Transition_in_Process = J1939_MESSAGE->Mxe.Data[0]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    ETC1->Transmission_Output_Shaft_Speed = Parameter_Translate(buff ,0.125,0) ;
    ETC1->Percent_Clutch_Slip = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    ETC1->bt5.Engine_Momentary_Overspeed_Enable = J1939_MESSAGE->Mxe.Data[4]>>0;
    ETC1->bt5.Progressive_Shift_Disable = J1939_MESSAGE->Mxe.Data[4]>>2;
    ETC1->bt5.Momentary_Engine_Maximum_Power_Enable = J1939_MESSAGE->Mxe.Data[4]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    ETC1->Transmission_Input_Shaft_Speed = Parameter_Translate(buff ,0.125,0) ;
    ETC1->Source_Address_of_Controlling_Device_for_Transmission_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckEEC2 ( J1939_MESSAGE *J1939_MESSAGE,getEEC2_t *EEC2)
{
       uint64_t buff;
    EEC2->bt1.Accelerator_Pedal_1_Low_Idle_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    EEC2->bt1.Accelerator_Pedal_Kickdown_Switch = J1939_MESSAGE->Mxe.Data[0]>>2;
    EEC2->bt1.Road_Speed_Limit_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EEC2->bt1.Accelerator_Pedal_2_Low_Idle_Switch = J1939_MESSAGE->Mxe.Data[0]>>6;
    EEC2->Accelerator_Pedal_Position_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    EEC2->Engine_Percent_Load_At_Current_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    EEC2->Remote_Accelerator_Pedal_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    EEC2->Accelerator_Pedal_Position_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    EEC2->bt6.Vehicle_Acceleration_Rate_Limit_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    EEC2->bt6.Momentary_Engine_Maximum_Power_Enable_Feedback = J1939_MESSAGE->Mxe.Data[5]>>2;
    EEC2->bt6.DPF_Thermal_Management_Active = J1939_MESSAGE->Mxe.Data[5]>>4;
    EEC2->bt6.SCR_Thermal_Management_Active = J1939_MESSAGE->Mxe.Data[5]>>6;
    EEC2->Actual_Maximum_Available_Engine___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    EEC2->Estimated_Pumping___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckEEC1 ( J1939_MESSAGE *J1939_MESSAGE,getEEC1_t *EEC1)
{
       uint64_t buff;
    EEC1->bt1.Engine_Torque_Mode = J1939_MESSAGE->Mxe.Data[0]>>0;
    EEC1->bt1.Actual_Engine___Percent_Torque_High_Resolution = J1939_MESSAGE->Mxe.Data[0]>>4;
    EEC1->Driver_s_Demand_Engine___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    EEC1->Actual_Engine___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    EEC1->Engine_Speed = Parameter_Translate(buff ,0.125,0) ;
    EEC1->Source_Address_of_Controlling_Device_for_Engine_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    EEC1->bt7.Engine_Starter_Mode = J1939_MESSAGE->Mxe.Data[6]>>0;
    EEC1->Engine_Demand__Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckETC2 ( J1939_MESSAGE *J1939_MESSAGE,getETC2_t *ETC2)
{
       uint64_t buff;
    ETC2->Transmission_Selected_Gear = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    ETC2->Transmission_Actual_Gear_Ratio = Parameter_Translate(buff ,0.001,0) ;
    ETC2->Transmission_Current_Gear = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ETC2->Transmission_Requested_Range = Parameter_Translate(buff ,4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ETC2->Transmission_Current_Range = Parameter_Translate(buff ,4,0) ;
}
void CheckEAC1 ( J1939_MESSAGE *J1939_MESSAGE,getEAC1_t *EAC1)
{
       uint64_t buff;
    EAC1->bt1.Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    EAC1->bt2.Differential_Lock_State___Front_Axle_1 = J1939_MESSAGE->Mxe.Data[1]>>0;
    EAC1->bt2.Differential_Lock_State___Front_Axle_2 = J1939_MESSAGE->Mxe.Data[1]>>2;
    EAC1->bt2.Differential_Lock_State___Rear_Axle_1 = J1939_MESSAGE->Mxe.Data[1]>>4;
    EAC1->bt2.Differential_Lock_State___Rear_Axle_2 = J1939_MESSAGE->Mxe.Data[1]>>6;
    EAC1->bt3.Differential_Lock_State___Central = J1939_MESSAGE->Mxe.Data[2]>>0;
    EAC1->bt3.Differential_Lock_State___Central_Front = J1939_MESSAGE->Mxe.Data[2]>>2;
    EAC1->bt3.Differential_Lock_State___Central_Rear = J1939_MESSAGE->Mxe.Data[2]>>4;
    EAC1->bt4.Front_axle_group_engagement_status = J1939_MESSAGE->Mxe.Data[3]>>0;
    EAC1->bt4.Rear_axle_group_engagement_status = J1939_MESSAGE->Mxe.Data[3]>>2;
}
void CheckFLI1 ( J1939_MESSAGE *J1939_MESSAGE,getFLI1_t *FLI1)
{
       uint64_t buff;
    FLI1->bt1.Lane_Departure_Left = J1939_MESSAGE->Mxe.Data[0]>>0;
    FLI1->bt1.Lane_Departure_Right = J1939_MESSAGE->Mxe.Data[0]>>2;
    FLI1->bt1.Lane_Departure_Imminent_Right_Side = J1939_MESSAGE->Mxe.Data[0]>>4;
    FLI1->bt1.Lane_Departure_Imminent_Left_Side = J1939_MESSAGE->Mxe.Data[0]>>6;
}
void CheckHPG ( J1939_MESSAGE *J1939_MESSAGE,getHPG_t *HPG)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    HPG->Hydraulic_Pressure = Parameter_Translate(buff ,2,0) ;
    HPG->bt3.Engine_Hydraulic_Pressure_Governor_Mode_Indicator = J1939_MESSAGE->Mxe.Data[2]>>0;
    HPG->bt3.Engine_Hydraulic_Pressure_Governor_Switch = J1939_MESSAGE->Mxe.Data[2]>>2;
    HPG->bt3.Fire_Apparatus_Pump_Engagement = J1939_MESSAGE->Mxe.Data[2]>>4;
}
void CheckVDC2 ( J1939_MESSAGE *J1939_MESSAGE,getVDC2_t *VDC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    VDC2->Steering_Wheel_Angle = Parameter_Translate(buff ,1,-31.374) ;
    VDC2->bt3.Steering_Wheel_Turn_Counter = J1939_MESSAGE->Mxe.Data[2]>>0;
    VDC2->bt3.Steering_Wheel_Angle_Sensor_Type = J1939_MESSAGE->Mxe.Data[2]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    VDC2->Yaw_Rate = Parameter_Translate(buff ,1,-3.92) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    VDC2->Lateral_Acceleration = Parameter_Translate(buff ,0.01,-320) ;
    VDC2->Longitudinal_Acceleration = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.1,-12.5) ;
}
void CheckEGF1 ( J1939_MESSAGE *J1939_MESSAGE,getEGF1_t *EGF1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EGF1->Engine_Exhaust_Gas_Recirculation_1__EGR1__Mass_Flow_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EGF1->Engine_Intake_Air_Mass_Flow_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EGF1->Engine_Exhaust_Gas_Recirculation_2__EGR2__Mass_Flow_Rate = Parameter_Translate(buff ,0.05,0) ;
}
void CheckESC1 ( J1939_MESSAGE *J1939_MESSAGE,getESC1_t *ESC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESC1->Actual_Inner_wheel_steering_angle = Parameter_Translate(buff ,1,-125) ;
    ESC1->bt3.Axle_Location = J1939_MESSAGE->Mxe.Data[2]>>-1;
    ESC1->bt4.Status_of_Steering_Axle = J1939_MESSAGE->Mxe.Data[3]>>0;
    ESC1->bt4.Steerable_Lift_Axle_Lowering_Inhibit = J1939_MESSAGE->Mxe.Data[3]>>4;
    ESC1->bt5.Steering_Type = J1939_MESSAGE->Mxe.Data[4]>>0;
    ESC1->bt5.Type_of_Steering_Forces = J1939_MESSAGE->Mxe.Data[4]>>4;
    ESC1->bt6.Type_of_Steering_Transmission = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckETC8 ( J1939_MESSAGE *J1939_MESSAGE,getETC8_t *ETC8)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ETC8->Transmission_Torque_Converter_Ratio = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ETC8->Transmission_Clutch_Converter_Input_Speed = Parameter_Translate(buff ,0.125,0) ;
}
void CheckLOI ( J1939_MESSAGE *J1939_MESSAGE,getLOI_t *LOI)
{
       uint64_t buff;
    LOI->bt1.Blade_Control_Mode_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    LOI->bt1.Desired_Grade_Offset_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    LOI->bt2.Blade_Auto_Mode_Command = J1939_MESSAGE->Mxe.Data[1]>>0;
    LOI->bt2.Left_Blade_Control_Mode_Operator_Control = J1939_MESSAGE->Mxe.Data[1]>>4;
    LOI->bt3.Right_Blade_Control_Mode_Operator_Control = J1939_MESSAGE->Mxe.Data[2]>>0;
    LOI->bt3.Left_Desired_Blade_Offset_Operator_Control = J1939_MESSAGE->Mxe.Data[2]>>4;
    LOI->bt4.Right_Desired_Blade_Offset_Operator_Control = J1939_MESSAGE->Mxe.Data[3]>>0;
    LOI->bt4.Side_shift_Blade_Control_Mode_Operator_Control = J1939_MESSAGE->Mxe.Data[3]>>4;
    LOI->bt5.Side_shift_Desired_Blade_Offset_Operator_Control = J1939_MESSAGE->Mxe.Data[4]>>0;
    LOI->bt5.Set_Elevation_Sensor_1_Reference_Elevation = J1939_MESSAGE->Mxe.Data[4]>>4;
    LOI->bt5.Set_Elevation_Sensor_2_Reference_Elevation = J1939_MESSAGE->Mxe.Data[4]>>6;
}
void CheckAT1IG1 ( J1939_MESSAGE *J1939_MESSAGE,getAT1IG1_t *AT1IG1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1IG1->Aftertreatment_1_Intake_NOx = Parameter_Translate(buff ,0.05,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1IG1->Aftertreatment_1_Intake_O2 = Parameter_Translate(buff ,0.000514,-12) ;
    AT1IG1->bt5.Aftertreatment_1_Intake_Gas_Sensor_Power_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT1IG1->bt5.Aftertreatment_1_Intake_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[4]>>2;
    AT1IG1->bt5.Aftertreatment_1_Intake_NOx_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>4;
    AT1IG1->bt5.Aftertreatment_1_Intake_Wide_Range___O2_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>6;
    AT1IG1->bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    AT1IG1->bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>5;
    AT1IG1->bt7.Aftertreatment_1_Intake_NOx_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT1IG1->bt7.NOx_Sensor_ATI1_Self_diagnosis_Status = J1939_MESSAGE->Mxe.Data[6]>>5;
    AT1IG1->bt8.Aftertreatment_1_Intake_Oxygen_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckAT1OG1 ( J1939_MESSAGE *J1939_MESSAGE,getAT1OG1_t *AT1OG1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1OG1->Aftertreatment_1_Outlet_NOx = Parameter_Translate(buff ,0.05,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1OG1->Aftertreatment_1_Outlet_O2 = Parameter_Translate(buff ,0.000514,-12) ;
    AT1OG1->bt5.Aftertreatment_1_Outlet_Gas_Sensor_Power_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT1OG1->bt5.Aftertreatment_1_Outlet_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[4]>>2;
    AT1OG1->bt5.Aftertreatment_1_Outlet_NOx_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>4;
    AT1OG1->bt5.Aftertreatment_1_Outlet_Wide_Range__O2_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>6;
    AT1OG1->bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    AT1OG1->bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>5;
    AT1OG1->bt7.Aftertreatment_1_Outlet_NOx_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT1OG1->bt7.NOx_Sensor_ATO1_Self_diagnosis_Status = J1939_MESSAGE->Mxe.Data[6]>>5;
    AT1OG1->bt8.Aftertreatment_1_Outlet_Oxygen_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckAT2IG1 ( J1939_MESSAGE *J1939_MESSAGE,getAT2IG1_t *AT2IG1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2IG1->Aftertreatment_2_Intake_NOx = Parameter_Translate(buff ,0.05,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2IG1->Aftertreatment_2_Intake_O2 = Parameter_Translate(buff ,0.000514,-12) ;
    AT2IG1->bt5.Aftertreatment_2_Intake_Gas_Sensor_Power_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT2IG1->bt5.Aftertreatment_2_Intake_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[4]>>2;
    AT2IG1->bt5.Aftertreatment_2_Intake_NOx_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>4;
    AT2IG1->bt5.Aftertreatment_2_Intake_Wide_Range___O2_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>6;
    AT2IG1->bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    AT2IG1->bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>5;
    AT2IG1->bt7.Aftertreatment_2_Intake_NOx_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT2IG1->bt7.NOx_Sensor_ATI2_Self_diagnosis_Status = J1939_MESSAGE->Mxe.Data[6]>>5;
    AT2IG1->bt8.Aftertreatment_2_Intake_Oxygen_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckAT2OG1 ( J1939_MESSAGE *J1939_MESSAGE,getAT2OG1_t *AT2OG1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2OG1->Aftertreatment_2_Outlet_NOx = Parameter_Translate(buff ,0.05,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2OG1->Aftertreatment_2_Outlet_O2 = Parameter_Translate(buff ,0.000514,-12) ;
    AT2OG1->bt5.Aftertreatment_2_Outlet_Gas_Sensor_Power_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT2OG1->bt5.Aftertreatment_2_Outlet_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[4]>>2;
    AT2OG1->bt5.Aftertreatment_2_Outlet_NOx_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>4;
    AT2OG1->bt5.Aftertreatment_2_Outlet_Wide_Range___O2_Reading_Stable = J1939_MESSAGE->Mxe.Data[4]>>6;
    AT2OG1->bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    AT2OG1->bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>5;
    AT2OG1->bt7.Aftertreatment_2_Outlet_NOx_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT2OG1->bt7.NOx_Sensor_ATO2_Self_diagnosis_Status = J1939_MESSAGE->Mxe.Data[6]>>5;
    AT2OG1->bt8.Aftertreatment_2_Outlet_Oxygen_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckFWSS1 ( J1939_MESSAGE *J1939_MESSAGE,getFWSS1_t *FWSS1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    FWSS1->Fifth_Wheel_Vertical_Force = Parameter_Translate(buff ,5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    FWSS1->Fifth_Wheel_Drawbar_Force = Parameter_Translate(buff ,10,000) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    FWSS1->Fifth_Wheel_Roll_Moment = Parameter_Translate(buff ,10,000) ;
    FWSS1->bt7.Fifth_Wheel_Roll_Warning_Indicator = J1939_MESSAGE->Mxe.Data[6]>>0;
}
void CheckSSI ( J1939_MESSAGE *J1939_MESSAGE,getSSI_t *SSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    SSI->Pitch_Angle = Parameter_Translate(buff ,0.002,-64) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    SSI->Roll_Angle = Parameter_Translate(buff ,0.002,-64) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    SSI->Pitch_Rate = Parameter_Translate(buff ,0.002,-64) ;
    SSI->bt7.Pitch_Angle_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>0;
    SSI->bt7.Roll_Angle_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>2;
    SSI->bt7.Pitch_Rate_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>4;
    SSI->bt7.Pitch_and_Roll_Compensated = J1939_MESSAGE->Mxe.Data[6]>>6;
    SSI->Roll_and_Pitch_Measurement_Latency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.5,0) ;
}
void CheckBI ( J1939_MESSAGE *J1939_MESSAGE,getBI_t *BI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    BI->Relative_Blade_Height = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    BI->Blade_Rotation_Angle = Parameter_Translate(buff ,1,-200) ;
    BI->Relative_Blade_Height_and_Blade_Rotation_Angle_Measurement_Latency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.5,0) ;
    BI->bt6.Relative_Blade_Height_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[5]>>0;
    BI->bt6.Blade_Rotation_Angle_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[5]>>2;
}
void CheckCCS ( J1939_MESSAGE *J1939_MESSAGE,getCCS_t *CCS)
{
       uint64_t buff;
    CCS->bt1.Engine_Cylinder_1_Combustion_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    CCS->bt1.Engine_Cylinder_2_Combustion_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    CCS->bt1.Engine_Cylinder_3_Combustion_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    CCS->bt1.Engine_Cylinder_4_Combustion_Status = J1939_MESSAGE->Mxe.Data[0]>>6;
    CCS->bt2.Engine_Cylinder_5_Combustion_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    CCS->bt2.Engine_Cylinder_6_Combustion_Status = J1939_MESSAGE->Mxe.Data[1]>>2;
    CCS->bt2.Engine_Cylinder_7_Combustion_Status = J1939_MESSAGE->Mxe.Data[1]>>4;
    CCS->bt2.Engine_Cylinder_8_Combustion_Status = J1939_MESSAGE->Mxe.Data[1]>>6;
    CCS->bt3.Engine_Cylinder_9_Combustion_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    CCS->bt3.Engine_Cylinder_10_Combustion_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    CCS->bt3.Engine_Cylinder_11_Combustion_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    CCS->bt3.Engine_Cylinder_12_Combustion_Status = J1939_MESSAGE->Mxe.Data[2]>>6;
    CCS->bt4.Engine_Cylinder_13_Combustion_Status = J1939_MESSAGE->Mxe.Data[3]>>0;
    CCS->bt4.Engine_Cylinder_14_Combustion_Status = J1939_MESSAGE->Mxe.Data[3]>>2;
    CCS->bt4.Engine_Cylinder_15_Combustion_Status = J1939_MESSAGE->Mxe.Data[3]>>4;
    CCS->bt4.Engine_Cylinder_16_Combustion_Status = J1939_MESSAGE->Mxe.Data[3]>>6;
    CCS->bt5.Engine_Cylinder_17_Combustion_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    CCS->bt5.Engine_Cylinder_18_Combustion_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    CCS->bt5.Engine_Cylinder_19_Combustion_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    CCS->bt5.Engine_Cylinder_20_Combustion_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    CCS->bt6.Engine_Cylinder_21_Combustion_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    CCS->bt6.Engine_Cylinder_22_Combustion_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    CCS->bt6.Engine_Cylinder_23_Combustion_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    CCS->bt6.Engine_Cylinder_24_Combustion_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
}
void CheckKL1 ( J1939_MESSAGE *J1939_MESSAGE,getKL1_t *KL1)
{
       uint64_t buff;
    KL1->Engine_Cylinder_1_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    KL1->Engine_Cylinder_2_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    KL1->Engine_Cylinder_3_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    KL1->Engine_Cylinder_4_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    KL1->Engine_Cylinder_5_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    KL1->Engine_Cylinder_6_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    KL1->Engine_Cylinder_7_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    KL1->Engine_Cylinder_8_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckKL2 ( J1939_MESSAGE *J1939_MESSAGE,getKL2_t *KL2)
{
       uint64_t buff;
    KL2->Engine_Cylinder_9_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    KL2->Engine_Cylinder_10_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    KL2->Engine_Cylinder_11_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    KL2->Engine_Cylinder_12_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    KL2->Engine_Cylinder_13_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    KL2->Engine_Cylinder_14_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    KL2->Engine_Cylinder_15_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    KL2->Engine_Cylinder_16_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckKL3 ( J1939_MESSAGE *J1939_MESSAGE,getKL3_t *KL3)
{
       uint64_t buff;
    KL3->Engine_Cylinder_17_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    KL3->Engine_Cylinder_18_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    KL3->Engine_Cylinder_19_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    KL3->Engine_Cylinder_20_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    KL3->Engine_Cylinder_21_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    KL3->Engine_Cylinder_22_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    KL3->Engine_Cylinder_23_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    KL3->Engine_Cylinder_24_Knock_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckTFAC ( J1939_MESSAGE *J1939_MESSAGE,getTFAC_t *TFAC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TFAC->Engine_Throttle_Actuator_1_Control_Command = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TFAC->Engine_Throttle_Actuator_2_Control_Command = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TFAC->Engine_Fuel_Actuator_1_Control_Command = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TFAC->Engine_Fuel_Actuator_2_Control_Command = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckSAS ( J1939_MESSAGE *J1939_MESSAGE,getSAS_t *SAS)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    SAS->Steering_Wheel_Angle = Parameter_Translate(buff ,1,-31.374) ;
    SAS->bt3.Steering_Wheel_Angle_Range_Counter = J1939_MESSAGE->Mxe.Data[2]>>0;
    SAS->bt3.Steering_Wheel_Angle_Range_Counter_Type = J1939_MESSAGE->Mxe.Data[2]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    SAS->Steering_Wheel_Angle_Range = Parameter_Translate(buff ,1,-31.374) ;
    SAS->bt7.Steering_Angle_Sensor_Active_Mode = J1939_MESSAGE->Mxe.Data[6]>>0;
    SAS->bt7.Steering_Angle_Sensor_Calibrated = J1939_MESSAGE->Mxe.Data[6]>>2;
    SAS->bt8.Message_Counter = J1939_MESSAGE->Mxe.Data[7]>>0;
    SAS->bt8.Message_Checksum = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckESSI ( J1939_MESSAGE *J1939_MESSAGE,getESSI_t *ESSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESSI->Engine_Speed_1 = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESSI->Engine_Speed_2 = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESSI->Engine_Speed_3 = Parameter_Translate(buff ,0.5,0) ;
    ESSI->bt7.Engine_Speed_Sensor_3_Timing_Pattern_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    ESSI->bt7.Engine_Speed_Sensor_2_Timing_Pattern_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    ESSI->bt7.Engine_Speed_Sensor_1_Timing_Pattern_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckA1SCRDSI1 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRDSI1_t *A1SCRDSI1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity = Parameter_Translate(buff ,0.3,0) ;
    A1SCRDSI1->bt3.Aftertreatment_1_SCR_System_State = J1939_MESSAGE->Mxe.Data[2]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator = Parameter_Translate(buff ,0.10,0) ;
    A1SCRDSI1->Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],8,0) ;
}
void CheckA1SCRDSR1 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRDSR1_t *A1SCRDSR1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCRDSR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity = Parameter_Translate(buff ,0.3,0) ;
    A1SCRDSR1->bt3.Aftertreatment_1_SCR_System_Requested_State = J1939_MESSAGE->Mxe.Data[2]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    A1SCRDSR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator = Parameter_Translate(buff ,0.10,0) ;
}
void CheckA1SCRAI ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRAI_t *A1SCRAI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCRAI->Aftertreatment_1_Outlet_NH3 = Parameter_Translate(buff ,0.05,-200) ;
    A1SCRAI->bt3.Aftertreatment_1_Outlet_NH3_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    A1SCRAI->bt4.Aftertreatment_1_Outlet_NH3_Reading_Stable = J1939_MESSAGE->Mxe.Data[3]>>0;
    A1SCRAI->bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Power_In_Range = J1939_MESSAGE->Mxe.Data[3]>>2;
    A1SCRAI->bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[3]>>4;
    A1SCRAI->bt5.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A1SCRAI->bt6.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckA2SCRDSI1 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRDSI1_t *A2SCRDSI1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity = Parameter_Translate(buff ,0.3,0) ;
    A2SCRDSI1->bt3.Aftertreatment_2_SCR_System_State = J1939_MESSAGE->Mxe.Data[2]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator = Parameter_Translate(buff ,0.10,0) ;
    A2SCRDSI1->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],8,0) ;
}
void CheckA2SCRDSR1 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRDSR1_t *A2SCRDSR1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCRDSR1->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity = Parameter_Translate(buff ,0.3,0) ;
    A2SCRDSR1->bt3.Aftertreatment_2_SCR_System_Requested_State = J1939_MESSAGE->Mxe.Data[2]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    A2SCRDSR1->Aftertreatment_2_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator = Parameter_Translate(buff ,0.10,0) ;
}
void CheckA2SCRAI ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRAI_t *A2SCRAI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCRAI->Aftertreatment_2_Outlet_NH3 = Parameter_Translate(buff ,0.05,-200) ;
    A2SCRAI->bt3.Aftertreatment_2_Outlet_NH3_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    A2SCRAI->bt4.Aftertreatment_2_Outlet_NH3_Reading_Stable = J1939_MESSAGE->Mxe.Data[3]>>0;
    A2SCRAI->bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Power_In_Range = J1939_MESSAGE->Mxe.Data[3]>>2;
    A2SCRAI->bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[3]>>4;
    A2SCRAI->bt5.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A2SCRAI->bt6.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckSSI2 ( J1939_MESSAGE *J1939_MESSAGE,getSSI2_t *SSI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    SSI2->Pitch_Angle_Extended_Range = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    SSI2->Roll_Angle_Extended_Range = Parameter_Translate(buff ,1,-250) ;
    SSI2->bt7.Pitch_Angle_Extended_Range_Compensation = J1939_MESSAGE->Mxe.Data[6]>>0;
    SSI2->bt7.Pitch_Angle_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>2;
    SSI2->bt7.Roll_Angle_Extended_Range_Compensation = J1939_MESSAGE->Mxe.Data[6]>>4;
    SSI2->bt7.Roll_Angle_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>6;
    SSI2->Roll_and_Pitch_Extended_Range_Measurement_Latency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.5,0) ;
}
void CheckARI ( J1939_MESSAGE *J1939_MESSAGE,getARI_t *ARI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ARI->Pitch_Rate_Extended_Range = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ARI->Roll_Rate_Extended_Range = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ARI->Yaw_Rate_Extended_Range = Parameter_Translate(buff ,1,-250) ;
    ARI->bt7.Pitch_Rate_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>0;
    ARI->bt7.Roll_Rate_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>2;
    ARI->bt7.Yaw_Rate_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>4;
    ARI->Angular_Rate_Measurement_Latency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.5,0) ;
}
void CheckCN ( J1939_MESSAGE *J1939_MESSAGE,getCN_t *CN)
{
       uint64_t buff;
    CN->bt1.Crash_Type = J1939_MESSAGE->Mxe.Data[0]>>0;
    CN->bt8.Crash_Counter = J1939_MESSAGE->Mxe.Data[7]>>0;
    CN->bt8.Crash_Checksum = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckMSI2 ( J1939_MESSAGE *J1939_MESSAGE,getMSI2_t *MSI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    MSI2->Magnet_Forward_Current = Parameter_Translate(buff ,1,0) ;
    MSI2->Magnet_Reverse_Current = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    MSI2->bt4.Material_Lift_Switch = J1939_MESSAGE->Mxe.Data[3]>>0;
    MSI2->bt4.Material_Drop_Switch = J1939_MESSAGE->Mxe.Data[3]>>2;
    MSI2->bt4.Generator_Current_Boost_Active_Status = J1939_MESSAGE->Mxe.Data[3]>>4;
    MSI2->bt4.Material_Lift_Active_Status = J1939_MESSAGE->Mxe.Data[3]>>6;
    MSI2->bt5.Material_Drop_Active_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    MSI2->bt5.Lift_Relay_Control = J1939_MESSAGE->Mxe.Data[4]>>2;
    MSI2->bt5.Drop_Relay_Control = J1939_MESSAGE->Mxe.Data[4]>>4;
    MSI2->bt5.Magnet_Generator_Control = J1939_MESSAGE->Mxe.Data[4]>>6;
}
void CheckACCS ( J1939_MESSAGE *J1939_MESSAGE,getACCS_t *ACCS)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ACCS->Lateral_Acceleration_Extended_Range = Parameter_Translate(buff ,1,-15.687) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ACCS->Longitudinal_Acceleration_Extended_Range = Parameter_Translate(buff ,0.01,-320) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ACCS->Vertical_Acceleration_Extended_Range = Parameter_Translate(buff ,0.01,-320) ;
    ACCS->bt7.Lateral_Acceleration_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>0;
    ACCS->bt7.Longitudinal_Acceleration_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>2;
    ACCS->bt7.Vertical_Acceleration_Extended_Range_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[6]>>4;
    ACCS->bt7.Support_Variable_Transmission_Repetition_Rate_for_Acceleration_Sensor = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckCommand ( J1939_MESSAGE *J1939_MESSAGE,getCommand_t *Command)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    Command->Engine_Turbocharger_Wastegate_Actuator_1_Command = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    Command->Engine_Turbocharger_Wastegate_Actuator_2_Command = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    Command->Engine_Exhaust_Back_Pressure_Regulator_Control_Command = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAEBS1 ( J1939_MESSAGE *J1939_MESSAGE,getAEBS1_t *AEBS1)
{
       uint64_t buff;
    AEBS1->bt1.Advanced_emergency_braking_system_state = J1939_MESSAGE->Mxe.Data[0]>>0;
    AEBS1->bt1.Collision_warning_level = J1939_MESSAGE->Mxe.Data[0]>>4;
    AEBS1->bt2.Relevant_object_detected_for_advanced_emergency_braking_system = J1939_MESSAGE->Mxe.Data[1]>>0;
    AEBS1->bt2.Bend_off_probability_of_relevant_object = J1939_MESSAGE->Mxe.Data[1]>>3;
    AEBS1->Time_to_collision_with_relevant_object = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.05,0) ;
}
void CheckWS ( J1939_MESSAGE *J1939_MESSAGE,getWS_t *WS)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    WS->Wireless_Rolling_Message_Counter = Parameter_Translate(buff ,1,0) ;
    WS->bt3.Transmitter_Command_State = J1939_MESSAGE->Mxe.Data[2]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    WS->Transmitter_ID_1 = Parameter_Translate(buff ,1,0) ;
    WS->Wireless_Signal_Strength_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.5,0) ;
}
void CheckWAND ( J1939_MESSAGE *J1939_MESSAGE,getWAND_t *WAND)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    WAND->Wand_Angle = Parameter_Translate(buff ,0.002,-64) ;
    WAND->bt3.Wand_Sensor_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckLDISP ( J1939_MESSAGE *J1939_MESSAGE,getLDISP_t *LDISP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LDISP->Measured_Linear_Displacement = Parameter_Translate(buff ,0.1,0) ;
    LDISP->bt3.Linear_Displacement_Sensor_Sensor_Figure_of_Merit = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckA1SCRAI2 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRAI2_t *A1SCRAI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCRAI2->Aftertreatment_1_SCR_Intermediate_NH3 = Parameter_Translate(buff ,0.1,-200) ;
    A1SCRAI2->bt3.Aftertreatment_1_SCR_Intermediate_NH3_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    A1SCRAI2->bt4.Aftertreatment_1_SCR_Intermediate_NH3_Reading_Stable = J1939_MESSAGE->Mxe.Data[3]>>0;
    A1SCRAI2->bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range = J1939_MESSAGE->Mxe.Data[3]>>2;
    A1SCRAI2->bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[3]>>4;
    A1SCRAI2->bt5.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A1SCRAI2->bt6.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckA2SCRAI2 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRAI2_t *A2SCRAI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCRAI2->Aftertreatment_2_SCR_Intermediate_NH3 = Parameter_Translate(buff ,0.1,-200) ;
    A2SCRAI2->bt3.Aftertreatment_2_SCR_Intermediate_NH3_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    A2SCRAI2->bt4.Aftertreatment_2_SCR_Intermediate_NH3_Reading_Stable = J1939_MESSAGE->Mxe.Data[3]>>0;
    A2SCRAI2->bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range = J1939_MESSAGE->Mxe.Data[3]>>2;
    A2SCRAI2->bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature = J1939_MESSAGE->Mxe.Data[3]>>4;
    A2SCRAI2->bt5.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A2SCRAI2->bt6.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckHSS ( J1939_MESSAGE *J1939_MESSAGE,getHSS_t *HSS)
{
       uint64_t buff;
    HSS->bt1.Hybrid_System_Warning_Indicator = J1939_MESSAGE->Mxe.Data[0]>>0;
    HSS->bt1.Hybrid_System_Overheat_Indicator = J1939_MESSAGE->Mxe.Data[0]>>2;
    HSS->bt1.Hybrid_System_Stop_Indicator = J1939_MESSAGE->Mxe.Data[0]>>4;
}
void CheckGFI4 ( J1939_MESSAGE *J1939_MESSAGE,getGFI4_t *GFI4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    GFI4->Supply_Gas_Methane_Percentage = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckA2SCREGT2 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCREGT2_t *A2SCREGT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCREGT2->Aftertreatment_2_SCR_Intermediate_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    A2SCREGT2->bt3.Aftertreatment_2_SCR_Intermediate_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckA1SCREGT2 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCREGT2_t *A1SCREGT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCREGT2->Aftertreatment_1_SCR_Intermediate_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    A1SCREGT2->bt3.Aftertreatment_1_SCR_Intermediate_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckEEC13 ( J1939_MESSAGE *J1939_MESSAGE,getEEC13_t *EEC13)
{
       uint64_t buff;
    EEC13->bt1.Feedback_Engine_Fueling_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    EEC13->bt1.Engine_Fueling_Inhibit_Allowed = J1939_MESSAGE->Mxe.Data[0]>>2;
    EEC13->bt1.Engine_Fueling_Inhibit_Prevented_Reason = J1939_MESSAGE->Mxe.Data[0]>>4;
}
void CheckEF_TVI2 ( J1939_MESSAGE *J1939_MESSAGE,getEF_TVI2_t *EF_TVI2)
{
       uint64_t buff;
    EF_TVI2->Engine_Throttle_Valve_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    EF_TVI2->Engine_Throttle_Valve_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    EF_TVI2->Engine_Fuel_Valve_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    EF_TVI2->Engine_Fuel_Valve_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-40) ;
    EF_TVI2->Engine_Turbocharger_Wastegate_Actuator_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
}
void CheckEEGR1A ( J1939_MESSAGE *J1939_MESSAGE,getEEGR1A_t *EEGR1A)
{
       uint64_t buff;
    EEGR1A->bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[0]>>0;
    EEGR1A->bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature_Status = J1939_MESSAGE->Mxe.Data[0]>>5;
    EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Desired_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EEGR1A->bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[3]>>0;
    EEGR1A->bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature_Status = J1939_MESSAGE->Mxe.Data[3]>>5;
    EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
    EEGR1A->Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Desired_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    EEGR1A->bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Operation_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    EEGR1A->bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Operation_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
}
void CheckEEGR1B ( J1939_MESSAGE *J1939_MESSAGE,getEEGR1B_t *EEGR1B)
{
       uint64_t buff;
    EEGR1B->bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[0]>>0;
    EEGR1B->bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature_Status = J1939_MESSAGE->Mxe.Data[0]>>5;
    EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Desired_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EEGR1B->bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[3]>>0;
    EEGR1B->bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature_Status = J1939_MESSAGE->Mxe.Data[3]>>5;
    EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
    EEGR1B->Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Desired_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    EEGR1B->bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Operation_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    EEGR1B->bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Operation_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
}
void CheckEEC12 ( J1939_MESSAGE *J1939_MESSAGE,getEEC12_t *EEC12)
{
       uint64_t buff;
    EEC12->bt1.Aftertreatment_1_Intake_Gas_Sensor_Power_Supply = J1939_MESSAGE->Mxe.Data[0]>>0;
    EEC12->bt1.Aftertreatment_1_Outlet_Gas_Sensor_Power_Supply = J1939_MESSAGE->Mxe.Data[0]>>2;
    EEC12->bt1.Aftertreatment_2_Intake_Gas_Sensor_Power_Supply = J1939_MESSAGE->Mxe.Data[0]>>4;
    EEC12->bt1.Aftertreatment_2_Outlet_Gas_Sensor_Power_Supply = J1939_MESSAGE->Mxe.Data[0]>>6;
}
void CheckNSSR ( J1939_MESSAGE *J1939_MESSAGE,getNSSR_t *NSSR)
{
       uint64_t buff;
    NSSR->bt1.NOx_Sensor_ATO1_Self_diagnosis_Trigger = J1939_MESSAGE->Mxe.Data[0]>>0;
    NSSR->bt1.NOx_Sensor_ATI1_Self_diagnosis_Trigger = J1939_MESSAGE->Mxe.Data[0]>>4;
    NSSR->bt2.NOx_Sensor_ATO2_Self_diagnosis_Trigger = J1939_MESSAGE->Mxe.Data[1]>>0;
    NSSR->bt2.NOx_Sensor_ATI2_Self_diagnosis_Trigger = J1939_MESSAGE->Mxe.Data[1]>>4;
}
void CheckEPSI ( J1939_MESSAGE *J1939_MESSAGE,getEPSI_t *EPSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EPSI->Aftertreatment_1_Particulate_Sensor = Parameter_Translate(buff ,0.0125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EPSI->Aftertreatment_2_Particulate_Sensor = Parameter_Translate(buff ,0.0125,0) ;
}
void CheckAT1P1I ( J1939_MESSAGE *J1939_MESSAGE,getAT1P1I_t *AT1P1I)
{
       uint64_t buff;
    AT1P1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
}
void CheckAT1DPF2S5 ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPF2S5_t *AT1DPF2S5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_3 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_3_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_4 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1DPF2S5->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_4_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT1DPF2S4 ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPF2S4_t *AT1DPF2S4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_1_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_2 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1DPF2S4->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_2_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT1DPF2S3 ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPF2S3_t *AT1DPF2S3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_2 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_3 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1DPF2S3->Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_4 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAT1DPF1S5 ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPF1S5_t *AT1DPF1S5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_3 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_3_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_4 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1DPF1S5->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_4_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT1DPF1S4 ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPF1S4_t *AT1DPF1S4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_1_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_2 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1DPF1S4->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_2_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT1DPF1S3 ( J1939_MESSAGE *J1939_MESSAGE,getAT1DPF1S3_t *AT1DPF1S3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_2 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_3 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1DPF1S3->Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_4 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckCCVS3 ( J1939_MESSAGE *J1939_MESSAGE,getCCVS3_t *CCVS3)
{
       uint64_t buff;
    CCVS3->bt1.Adaptive_Cruise_Control_Readiness_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    CCVS3->bt1.Cruise_Control_System_Command_State = J1939_MESSAGE->Mxe.Data[0]>>2;
    CCVS3->Source_Address_of_Controlling_Device_for_Disabling_Cruise_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    CCVS3->Source_Address_of_Controlling_Device_for_Pausing_Cruise_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
}
void CheckAT2AC3 ( J1939_MESSAGE *J1939_MESSAGE,getAT2AC3_t *AT2AC3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2AC3->Aftertreatment_2_Secondary_Air_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAT1AC3 ( J1939_MESSAGE *J1939_MESSAGE,getAT1AC3_t *AT1AC3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1AC3->Aftertreatment_1_Secondary_Air_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEFL_P12 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P12_t *EFL_P12)
{
       uint64_t buff;
    EFL_P12->Engine_Fuel_Delivery_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    EFL_P12->Engine_Filtered_Fuel_Delivery_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],4,0) ;
    EFL_P12->Engine_Filtered_Fuel_Delivery_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],4,0) ;
    EFL_P12->Engine_Fuel_Filter_Degradation = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
}
void CheckDPFC2 ( J1939_MESSAGE *J1939_MESSAGE,getDPFC2_t *DPFC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    DPFC2->Aftertreatment_1_Diesel_Particulate_Filter_Intake_Temperature_Set_Point = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    DPFC2->Relative_Unburned_Fuel_Mass_from_Engine = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    DPFC2->Aftertreatment_1_Fuel_Mass_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    DPFC2->Aftertreatment_2_Fuel_Mass_Rate = Parameter_Translate(buff ,0.05,0) ;
}
void CheckLFE2 ( J1939_MESSAGE *J1939_MESSAGE,getLFE2_t *LFE2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LFE2->High_Resolution_Engine_Fuel_Rate = Parameter_Translate(buff ,0.001,0) ;
}
void CheckSFS ( J1939_MESSAGE *J1939_MESSAGE,getSFS_t *SFS)
{
       uint64_t buff;
    SFS->bt1.Supplemental_Fan_Enable_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    SFS->bt1.Supplemental_Fan_Direction_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    SFS->bt1.Supplemental_Fan_Velocity_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    SFS->bt2.Supplemental_Fan_Controller_Temperature_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    SFS->bt2.Supplemental_Fan_Drive_Status = J1939_MESSAGE->Mxe.Data[1]>>3;
    SFS->Supplemental_Fan_Controller_ECU_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    SFS->Supplemental_Fan_Speed = Parameter_Translate(buff ,0.5,0) ;
    SFS->Supplemental_Fan_Current = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    SFS->Supplemental_Fan_Power = Parameter_Translate(buff ,0.5,0) ;
}
void CheckEBCC ( J1939_MESSAGE *J1939_MESSAGE,getEBCC_t *EBCC)
{
       uint64_t buff;
    EBCC->Engine_Turbocharger_1_Turbine_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],2,0) ;
    EBCC->Desired_Engine_Turbocharger_1_Turbine_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],2,0) ;
    EBCC->Engine_Exhaust_Brake_Actuator_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EBCC->Engine_Turbocharger_2_Turbine_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],2,0) ;
    EBCC->Desired_Engine_Turbocharger_2_Turbine_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],2,0) ;
}
void CheckEFP ( J1939_MESSAGE *J1939_MESSAGE,getEFP_t *EFP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFP->Engine_Fuel_Dynamic_Viscosity = Parameter_Translate(buff ,0.015625,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFP->Engine_Fuel_Density = Parameter_Translate(buff ,0.00003052,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFP->Engine_Fuel_Dielectricity__high_resolution_ = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFP->Engine_Fuel_Temperature__High_Resolution_ = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckHOP ( J1939_MESSAGE *J1939_MESSAGE,getHOP_t *HOP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    HOP->Hydraulic_Oil_Dynamic_Viscosity = Parameter_Translate(buff ,0.015625,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    HOP->Hydraulic_Oil_Density = Parameter_Translate(buff ,0.00003052,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    HOP->Hydraulic_Oil_Relative_Dielectricity__high_resolution_ = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    HOP->Hydraulic_Oil_Temperature__High_Resolution_ = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckVLS2 ( J1939_MESSAGE *J1939_MESSAGE,getVLS2_t *VLS2)
{
       uint64_t buff;
    VLS2->bt1.Lubrication_Cycle_Mode_Lock_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    VLS2->bt1.Lubrication_Cycle_Mode_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    VLS2->bt1.Lubrication_Operation_Mode_Status = J1939_MESSAGE->Mxe.Data[0]>>5;
    VLS2->bt2.Lubrication_Pump_Enable_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    VLS2->bt2.Lubrication_Reservoir_Level = J1939_MESSAGE->Mxe.Data[1]>>2;
    VLS2->bt2.Lubrication_Timing_Cycle_Status = J1939_MESSAGE->Mxe.Data[1]>>4;
}
void CheckEC3 ( J1939_MESSAGE *J1939_MESSAGE,getEC3_t *EC3)
{
       uint64_t buff;
    EC3->Engine_Friction_Percent_Torque_At_Idle_Point_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    EC3->Engine_Friction_Percent_Torque_Point_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    EC3->Engine_Friction_Percent_Torque_Point_3 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    EC3->Engine_Friction_Percent_Torque_Point_4 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    EC3->Engine_Friction_Percent_Torque_Point_5 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    EC3->Engine_Friction_Percent_Torque_Point_6 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-125) ;
    EC3->Engine_Friction_Percent_Torque_Point_7 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
}
void CheckIVAC ( J1939_MESSAGE *J1939_MESSAGE,getIVAC_t *IVAC)
{
       uint64_t buff;
    IVAC->bt1.Intake_Valve_Actuation_System_Oil_Pressure_1_Solenoid_Control = J1939_MESSAGE->Mxe.Data[0]>>0;
    IVAC->bt1.Intake_Valve_Actuation_System_Oil_Pressure_2_Solenoid_Control = J1939_MESSAGE->Mxe.Data[0]>>2;
}
void CheckARMSWIMC ( J1939_MESSAGE *J1939_MESSAGE,getARMSWIMC_t *ARMSWIMC)
{
       uint64_t buff;
    ARMSWIMC->bt1.Armrest_1_Switch_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    ARMSWIMC->bt1.Armrest_1_Switch_2 = J1939_MESSAGE->Mxe.Data[0]>>2;
    ARMSWIMC->bt1.Armrest_2_Switch_1 = J1939_MESSAGE->Mxe.Data[0]>>4;
    ARMSWIMC->bt1.Armrest_2_Switch_2 = J1939_MESSAGE->Mxe.Data[0]>>6;
}
void CheckVEP4 ( J1939_MESSAGE *J1939_MESSAGE,getVEP4_t *VEP4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    VEP4->Hybrid_Battery_Pack_Remaining_Charge = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAFT2NAI ( J1939_MESSAGE *J1939_MESSAGE,getAFT2NAI_t *AFT2NAI)
{
       uint64_t buff;
    AFT2NAI->bt1.Aftertreatment_2_NOx_Adsorber_deNOx_Regeneration_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    AFT2NAI->bt1.Aftertreatment_2_NOx_Adsorber_deSOx_Regeneration_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
}
void CheckAFT1NAI ( J1939_MESSAGE *J1939_MESSAGE,getAFT1NAI_t *AFT1NAI)
{
       uint64_t buff;
    AFT1NAI->bt1.Aftertreatment_1_NOx_Adsorber_deNOx_Regeneration_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    AFT1NAI->bt1.Aftertreatment_1_NOx_Adsorber_deSOx_Regeneration_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
}
void CheckAT2WUDOC ( J1939_MESSAGE *J1939_MESSAGE,getAT2WUDOC_t *AT2WUDOC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2WUDOC->Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2WUDOC->Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckLLRE ( J1939_MESSAGE *J1939_MESSAGE,getLLRE_t *LLRE)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LLRE->Blade_Elevation_Deviation___Left = Parameter_Translate(buff ,1,-32000) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LLRE->Blade_Elevation_Deviation___Right = Parameter_Translate(buff ,1,-32000) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    LLRE->Blade_Reference_Elevation_Offset___Left = Parameter_Translate(buff ,1,-32000) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    LLRE->Blade_Reference_Elevation_Offset___Right = Parameter_Translate(buff ,1,-32000) ;
}
void CheckEFL_P11 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P11_t *EFL_P11)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P11->Engine_Exhaust_Gas_Recirculation_1_Intake_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P11->Engine_Exhaust_Gas_Recirculation_1_Outlet_Absolute_Pressure__High_Resolution_ = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEFS2 ( J1939_MESSAGE *J1939_MESSAGE,getEFS2_t *EFS2)
{
       uint64_t buff;
    EFS2->Engine_Fuel_Filter__Suction_Side__Intake_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],2,0) ;
}
void CheckInformation ( J1939_MESSAGE *J1939_MESSAGE,getInformation_t *Information)
{
       uint64_t buff;
    Information->bt1.Engine_Turbocharger_Wastegate_Actuator_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[0]>>0;
    Information->bt1.Engine_Turbocharger_Wastegate_Actuator_2_Temperature_Status = J1939_MESSAGE->Mxe.Data[0]>>5;
    Information->bt2.Engine_Turbocharger_Wastegate_Actuator_1_Operation_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    Information->bt2.Engine_Turbocharger_Wastegate_Actuator_2_Operation_Status = J1939_MESSAGE->Mxe.Data[1]>>4;
    Information->Engine_Exhaust_Back_Pressure_Regulator_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    Information->bt4.Engine_Exhaust_Back_Pressure_Regulator_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[3]>>0;
    Information->bt4.Engine_Exhaust_Back_Pressure_Regulator_Temperature_Status = J1939_MESSAGE->Mxe.Data[3]>>5;
    Information->bt5.Engine_Exhaust_Back_Pressure_Regulator_Control_Operation_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    Information->Engine_Turbocharger_Wastegate_Actuator_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-40) ;
    Information->Engine_Exhaust_Back_Pressure_Actuator_1_Desired_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    Information->Engine_Exhaust_Back_Pressure_Actuator_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-40) ;
}
void CheckEFTVI1 ( J1939_MESSAGE *J1939_MESSAGE,getEFTVI1_t *EFTVI1)
{
       uint64_t buff;
    EFTVI1->Engine_Desired_Throttle_Valve_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    EFTVI1->bt2.Engine_Throttle_Valve_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[1]>>0;
    EFTVI1->bt2.Engine_Throttle_Valve_1_Temperature_Status = J1939_MESSAGE->Mxe.Data[1]>>5;
    EFTVI1->Engine_Desired_Throttle_Valve_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EFTVI1->bt4.Engine_Throttle_Valve_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[3]>>0;
    EFTVI1->bt4.Engine_Throttle_Valve_2_Temperature_status = J1939_MESSAGE->Mxe.Data[3]>>5;
    EFTVI1->bt5.Engine_Fuel_Valve_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    EFTVI1->bt5.Engine_Fuel_Valve_1_Temperature_Status = J1939_MESSAGE->Mxe.Data[4]>>5;
    EFTVI1->bt6.Engine_Fuel_Valve_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    EFTVI1->bt6.Engine_Fuel_Valve_2_Temperature_Status = J1939_MESSAGE->Mxe.Data[5]>>5;
    EFTVI1->bt7.Engine_Throttle_Valve_1_Operation_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    EFTVI1->bt7.Engine_Throttle_Valve_2_Operation_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EFTVI1->bt8.Engine_Fuel_Valve_1_Operation_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    EFTVI1->bt8.Engine_Fuel_Valve_2_Operation_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckETCBI ( J1939_MESSAGE *J1939_MESSAGE,getETCBI_t *ETCBI)
{
       uint64_t buff;
    ETCBI->Engine_Turbocharger_Compressor_Bypass_Actuator_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    ETCBI->Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    ETCBI->bt3.Engine_Turbocharger_compressor_Bypass_Actuator_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    ETCBI->bt3.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature_Status = J1939_MESSAGE->Mxe.Data[2]>>5;
    ETCBI->bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Operation_Status = J1939_MESSAGE->Mxe.Data[3]>>0;
    ETCBI->bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Operation_Status = J1939_MESSAGE->Mxe.Data[3]>>4;
    ETCBI->Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
    ETCBI->Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-40) ;
}
void CheckCAC2 ( J1939_MESSAGE *J1939_MESSAGE,getCAC2_t *CAC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CAC2->Engine_Charge_Air_Cooler_2_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CAC2->Engine_Charge_Air_Cooler_2_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    CAC2->Engine_Charge_Air_Cooler_2_Ambient_Air_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    CAC2->Engine_Charge_Air_Cooler_2_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckCAC2P ( J1939_MESSAGE *J1939_MESSAGE,getCAC2P_t *CAC2P)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    CAC2P->Engine_Charge_Air_Cooler_2_Precooler_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
}
void CheckCAC1 ( J1939_MESSAGE *J1939_MESSAGE,getCAC1_t *CAC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CAC1->Engine_Charge_Air_Cooler_1_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CAC1->Engine_Charge_Air_Cooler_1_Ambient_Air_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    CAC1->Engine_Charge_Air_Cooler_1_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
}
void CheckCAC1P ( J1939_MESSAGE *J1939_MESSAGE,getCAC1P_t *CAC1P)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    CAC1P->Engine_Charge_Air_Cooler_1_Precooler_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
}
void CheckDPF2S2 ( J1939_MESSAGE *J1939_MESSAGE,getDPF2S2_t *DPF2S2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Standard_Deviation = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Maximum = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    DPF2S2->Diesel_Particulate_Filter_2_Soot_Signal_Minimum = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckDPF1S2 ( J1939_MESSAGE *J1939_MESSAGE,getDPF1S2_t *DPF1S2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Standard_Deviation = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Maximum = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    DPF1S2->Diesel_Particulate_Filter_1_Soot_Signal_Minimum = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckEEC11 ( J1939_MESSAGE *J1939_MESSAGE,getEEC11_t *EEC11)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC11->Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_Control = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC11->Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_2_Control = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC11->Engine_Exhaust_Gas_Recirculation_2_Valve_1_Position_Error = Parameter_Translate(buff ,0.004,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EEC11->Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position_Error = Parameter_Translate(buff ,0.004,-125) ;
}
void CheckEMAP ( J1939_MESSAGE *J1939_MESSAGE,getEMAP_t *EMAP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EMAP->Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Position = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EMAP->Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Position = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckEMAC ( J1939_MESSAGE *J1939_MESSAGE,getEMAC_t *EMAC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EMAC->Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Control = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EMAC->Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Control = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckEEC9 ( J1939_MESSAGE *J1939_MESSAGE,getEEC9_t *EEC9)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC9->Engine_Exhaust_Gas_Recirculation_2_Valve_Position = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC9->Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC9->Commanded_Engine_Fuel_Rail_Pressure = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EEC9->Commanded_Engine_Fuel_Injection_Control_Pressure = Parameter_Translate(buff ,1,0) ;
}
void CheckEEC10 ( J1939_MESSAGE *J1939_MESSAGE,getEEC10_t *EEC10)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Gas_Absolute_Pressure = Parameter_Translate(buff ,0.5,0) ;
    EEC10->Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    EEC10->EGR_2_Cooler_Bypass_Actuator_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
}
void CheckET5 ( J1939_MESSAGE *J1939_MESSAGE,getET5_t *ET5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ET5->Engine_Exhaust_Gas_Recirculation_2_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ET5->Engine_Exhaust_Gas_Recirculation_2_Mixer_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEFL_P10 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P10_t *EFL_P10)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Differential_Pressure = Parameter_Translate(buff ,1,-250) ;
    EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Outlet_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    EFL_P10->Engine_Exhaust_Gas_Recirculation_2_Intake_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
    EFL_P10->Engine_Coolant_Pressure_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],2,0) ;
}
void CheckLVDS ( J1939_MESSAGE *J1939_MESSAGE,getLVDS_t *LVDS)
{
       uint64_t buff;
    LVDS->bt1.Low_Voltage_Disconnect_Manual_Disconnect_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    LVDS->bt1.Low_Voltage_Disconnect_Manual_Connect_State = J1939_MESSAGE->Mxe.Data[0]>>2;
    LVDS->bt1.Low_Voltage_Disconnect_Current_Operating_Mode = J1939_MESSAGE->Mxe.Data[0]>>4;
    LVDS->bt2.Low_Voltage_Disconnect_Output_3_State = J1939_MESSAGE->Mxe.Data[1]>>0;
    LVDS->bt2.Low_Voltage_Disconnect_Output_2_State = J1939_MESSAGE->Mxe.Data[1]>>4;
    LVDS->bt3.Low_Voltage_Disconnect_Output_1_State = J1939_MESSAGE->Mxe.Data[2]>>0;
    LVDS->bt3.Low_Voltage_Disconnect_Vout_Output_State = J1939_MESSAGE->Mxe.Data[2]>>4;
    LVDS->Low_Voltage_Disconnect_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-40) ;
}
void CheckDLCD2 ( J1939_MESSAGE *J1939_MESSAGE,getDLCD2_t *DLCD2)
{
       uint64_t buff;
    DLCD2->bt1.Vehicle_Battery_Voltage_Low_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>0;
    DLCD2->bt1.Vehicle_Fuel_Level_Low_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>2;
    DLCD2->bt1.Vehicle_Air_Pressure_Low_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>4;
    DLCD2->bt1.Vehicle_HVAC_Recirculation_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>6;
    DLCD2->bt2.Vehicle_Battery_Charging_Lamp_Data = J1939_MESSAGE->Mxe.Data[1]>>0;
}
void CheckDLCD1 ( J1939_MESSAGE *J1939_MESSAGE,getDLCD1_t *DLCD1)
{
       uint64_t buff;
    DLCD1->bt1.Engine_Protect_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>0;
    DLCD1->bt1.Engine_Amber_Warning_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>2;
    DLCD1->bt1.Engine_Red_Stop_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>4;
    DLCD1->bt1.OBD_Malfunction_Indicator_Lamp_Data = J1939_MESSAGE->Mxe.Data[0]>>6;
    DLCD1->bt2.Engine_Brake_Active_Lamp_Data = J1939_MESSAGE->Mxe.Data[1]>>0;
    DLCD1->bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Data = J1939_MESSAGE->Mxe.Data[1]>>2;
    DLCD1->bt2.Engine_Oil_Pressure_Low_Lamp_Data = J1939_MESSAGE->Mxe.Data[1]>>4;
    DLCD1->bt2.Engine_Coolant_Temperature_High_Lamp_Data = J1939_MESSAGE->Mxe.Data[1]>>6;
    DLCD1->bt3.Engine_Coolant_Level_Low_Lamp_Data = J1939_MESSAGE->Mxe.Data[2]>>0;
    DLCD1->bt3.Engine_Idle_Management_Active_Lamp_Data = J1939_MESSAGE->Mxe.Data[2]>>2;
    DLCD1->bt3.Engine_Air_Filter_Restriction_Lamp_Data = J1939_MESSAGE->Mxe.Data[2]>>4;
    DLCD1->bt3.Engine_Fuel_Filter_Restricted_Lamp_Data = J1939_MESSAGE->Mxe.Data[2]>>6;
    DLCD1->bt8.Engine_Wait_To_Start_Lamp_Data = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckDLCC2 ( J1939_MESSAGE *J1939_MESSAGE,getDLCC2_t *DLCC2)
{
       uint64_t buff;
    DLCC2->bt1.Vehicle_Battery_Voltage_Low_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    DLCC2->bt1.Vehicle_Fuel_Level_Low_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    DLCC2->bt1.Vehicle_Air_Pressure_Low_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>4;
    DLCC2->bt1.Vehicle_HVAC_Recirculation_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>6;
    DLCC2->bt2.Vehicle_Battery_Charging_Lamp_Command = J1939_MESSAGE->Mxe.Data[1]>>0;
}
void CheckDLCC1 ( J1939_MESSAGE *J1939_MESSAGE,getDLCC1_t *DLCC1)
{
       uint64_t buff;
    DLCC1->bt1.Engine_Protect_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    DLCC1->bt1.Engine_Amber_Warning_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    DLCC1->bt1.Engine_Red_Stop_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>4;
    DLCC1->bt1.OBD_Malfunction_Indicator_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>6;
    DLCC1->bt2.Engine_Brake_Active_Lamp_Command = J1939_MESSAGE->Mxe.Data[1]>>0;
    DLCC1->bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Command = J1939_MESSAGE->Mxe.Data[1]>>2;
    DLCC1->bt2.Engine_Oil_Pressure_Low_Lamp_Command = J1939_MESSAGE->Mxe.Data[1]>>4;
    DLCC1->bt2.Engine_Coolant_Temperature_High_Lamp_Command = J1939_MESSAGE->Mxe.Data[1]>>6;
    DLCC1->bt3.Engine_Coolant_Level_Low_Lamp_Command = J1939_MESSAGE->Mxe.Data[2]>>0;
    DLCC1->bt3.Engine_Idle_Management_Active_Lamp_Command = J1939_MESSAGE->Mxe.Data[2]>>2;
    DLCC1->bt3.Engine_Air_Filter_Restriction_Lamp_Command = J1939_MESSAGE->Mxe.Data[2]>>4;
    DLCC1->bt3.Engine_Fuel_Filter_Restricted_Lamp_Command = J1939_MESSAGE->Mxe.Data[2]>>6;
}
void CheckEOM ( J1939_MESSAGE *J1939_MESSAGE,getEOM_t *EOM)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EOM->Engine_Oil_Viscosity = Parameter_Translate(buff ,0.015625,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EOM->Engine_Oil_Density = Parameter_Translate(buff ,0.00003052,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EOM->Engine_Oil_Relative_Dielectricity__high_resolution_ = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EOM->High_Resolution_Engine_Total_Fuel_Used = Parameter_Translate(buff ,0.001,0) ;
}
void CheckAT2OGC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT2OGC2_t *AT2OGC2)
{
       uint64_t buff;
    AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Lambda = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.5,0) ;
    AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Nox = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.5,0) ;
    AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_NO2_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.5,0) ;
    AT2OGC2->Aftertreatment_2_Outlet_Gas_NOx_Sensor_NH3_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.5,0) ;
    AT2OGC2->NOx_Sensor_ATO2_Self_diagnosis_Final_Result = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
}
void CheckAT2OGC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT2OGC1_t *AT2OGC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_Heater_Ratio = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Gain = Parameter_Translate(buff ,0.1,-100) ;
    AT2OGC1->Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    AT2OGC1->NOx_Sensor_ATO2_Operation_Hours_Counter = Parameter_Translate(buff ,1,0) ;
}
void CheckAT2IGC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT2IGC2_t *AT2IGC2)
{
       uint64_t buff;
    AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Lambda = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.5,0) ;
    AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Nox = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.5,0) ;
    AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_NO2_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.5,0) ;
    AT2IGC2->Aftertreatment_2_Intake_Gas_NOx_Sensor_NH3_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.5,0) ;
    AT2IGC2->NOx_Sensor_ATI2_Self_diagnosis_Final_Result = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
}
void CheckAT2IGC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT2IGC1_t *AT2IGC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_Heater_Ratio = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain = Parameter_Translate(buff ,0.1,-100) ;
    AT2IGC1->Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    AT2IGC1->NOx_Sensor_ATI2_Operation_Hours_Counter = Parameter_Translate(buff ,1,0) ;
}
void CheckAT1OGC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT1OGC2_t *AT1OGC2)
{
       uint64_t buff;
    AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_Lambda = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.5,0) ;
    AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_NOx = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.5,0) ;
    AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_NO2_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.5,0) ;
    AT1OGC2->Aftertreatment_1_Outlet_Gas_NOx_Sensor_NH3_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.5,0) ;
    AT1OGC2->NOx_Sensor_ATO1_Self_diagnosis_Final_Result = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
}
void CheckAT1OGC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT1OGC1_t *AT1OGC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_Heater_Ratio = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Gain = Parameter_Translate(buff ,0.1,-100) ;
    AT1OGC1->Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    AT1OGC1->NOx_Sensor_ATO1_Operation_Hours_Counter = Parameter_Translate(buff ,1,0) ;
}
void CheckAT1IGC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT1IGC2_t *AT1IGC2)
{
       uint64_t buff;
    AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_Lambda = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.5,0) ;
    AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_NOx = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.5,0) ;
    AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_NO2_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.5,0) ;
    AT1IGC2->Aftertreatment_1_Intake_Gas_NOx_Sensor_NH3_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.5,0) ;
    AT1IGC2->NOx_Sensor_ATI1_Self_diagnosis_Final_Result = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
}
void CheckAT1IGC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT1IGC1_t *AT1IGC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_Heater_Ratio = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain = Parameter_Translate(buff ,0.1,-100) ;
    AT1IGC1->Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    AT1IGC1->NOx_Sensor_ATI1_Operation_Hours_Counter = Parameter_Translate(buff ,1,0) ;
}
void CheckMSI1 ( J1939_MESSAGE *J1939_MESSAGE,getMSI1_t *MSI1)
{
       uint64_t buff;
    MSI1->bt1.Generator_Overheat_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    MSI1->bt1.Genset_System_Output_Voltage_Range_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    MSI1->bt1.Grapple_Magnet_Selection_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    MSI1->bt1.Genset_Softstart_Active_Status = J1939_MESSAGE->Mxe.Data[0]>>6;
    MSI1->bt2.Reverse_Current_Range_Setting = J1939_MESSAGE->Mxe.Data[1]>>0;
    MSI1->bt3.Genset_Enable_Active_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    MSI1->bt3.Voltage_Monitor_Active_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    MSI1->bt3.Generator_Duty_Cycle_Exceeded_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
}
void CheckMSCI ( J1939_MESSAGE *J1939_MESSAGE,getMSCI_t *MSCI)
{
       uint64_t buff;
    MSCI->Magnet_Boost_Time = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.25,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    MSCI->Magnet_Rated_Power = Parameter_Translate(buff ,0.5,0) ;
}
void CheckBCH2 ( J1939_MESSAGE *J1939_MESSAGE,getBCH2_t *BCH2)
{
       uint64_t buff;
    BCH2->bt1.Battery_Charger_2_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    BCH2->bt1.Battery_Charger_2_Power_Line_State = J1939_MESSAGE->Mxe.Data[0]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    BCH2->Battery_Charger_2_Output_Voltage = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    BCH2->Battery_Charger_2_Output_Current = Parameter_Translate(buff ,0.05,-1600) ;
}
void CheckBCH1 ( J1939_MESSAGE *J1939_MESSAGE,getBCH1_t *BCH1)
{
       uint64_t buff;
    BCH1->bt1.Battery_Charger_1_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    BCH1->bt1.Battery_Charger_1_Power_Line_State = J1939_MESSAGE->Mxe.Data[0]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    BCH1->Battery_Charger_1_Output_Voltage = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    BCH1->Battery_Charger_1_Output_Current = Parameter_Translate(buff ,0.05,-1600) ;
}
void CheckOCSI ( J1939_MESSAGE *J1939_MESSAGE,getOCSI_t *OCSI)
{
       uint64_t buff;
    OCSI->bt1.Driver_Occupant_Classification_System_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    OCSI->bt1.Passenger_Occupant_Classification_System_Status = J1939_MESSAGE->Mxe.Data[0]>>3;
    OCSI->bt2.Occupant_Classification_System_3_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    OCSI->bt2.Occupant_Classification_System_4_Status = J1939_MESSAGE->Mxe.Data[1]>>2;
    OCSI->bt2.Occupant_Classification_System_5_Status = J1939_MESSAGE->Mxe.Data[1]>>4;
    OCSI->bt2.Occupant_Classification_System_6_Status = J1939_MESSAGE->Mxe.Data[1]>>6;
    OCSI->bt3.Occupant_Classification_System_7_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    OCSI->bt3.Occupant_Classification_System_8_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    OCSI->bt3.Occupant_Classification_System_9_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    OCSI->bt3.Occupant_Classification_System_10_Status = J1939_MESSAGE->Mxe.Data[2]>>6;
}
void CheckBDS ( J1939_MESSAGE *J1939_MESSAGE,getBDS_t *BDS)
{
       uint64_t buff;
    BDS->bt1.Driver_Beltlock_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BDS->bt1.Passenger_Beltlock_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BDS->bt1.Beltlock_3_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BDS->bt1.Beltlock_4_Status = J1939_MESSAGE->Mxe.Data[0]>>6;
    BDS->bt2.Beltlock_5_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    BDS->bt2.Beltlock_6_Status = J1939_MESSAGE->Mxe.Data[1]>>2;
    BDS->bt2.Beltlock_7_Status = J1939_MESSAGE->Mxe.Data[1]>>4;
    BDS->bt2.Beltlock_8_Status = J1939_MESSAGE->Mxe.Data[1]>>6;
    BDS->bt3.Beltlock_9_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BDS->bt3.Beltlock_10_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BDS->bt3.Passenger_Airbag_Deactivation_Switch_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
}
void CheckCSI ( J1939_MESSAGE *J1939_MESSAGE,getCSI_t *CSI)
{
       uint64_t buff;
    CSI->bt1.Frontal_Collision_Sensor_1___Type = J1939_MESSAGE->Mxe.Data[0]>>0;
    CSI->bt1.Frontal_Collision_Sensor_2___Type = J1939_MESSAGE->Mxe.Data[0]>>4;
    CSI->bt2.Frontal_Collision_Sensor_3___Type = J1939_MESSAGE->Mxe.Data[1]>>0;
    CSI->bt2.Frontal_Collision_Sensor_4___Type = J1939_MESSAGE->Mxe.Data[1]>>4;
    CSI->bt3.Side_Collision_Sensor_Front_Left___Type = J1939_MESSAGE->Mxe.Data[2]>>0;
    CSI->bt3.Side_Collision_Sensor_Mid_Front_Left___Type = J1939_MESSAGE->Mxe.Data[2]>>4;
    CSI->bt4.Side_Collision_Sensor_Mid_Rear_Left___Type = J1939_MESSAGE->Mxe.Data[3]>>0;
    CSI->bt4.Side_Collision_Sensor_Rear_Left___Type = J1939_MESSAGE->Mxe.Data[3]>>4;
    CSI->bt5.Side_Collision_Sensor_Front_Right___Type = J1939_MESSAGE->Mxe.Data[4]>>0;
    CSI->bt5.Side_Collision_Sensor_Mid_Front_Right___Type = J1939_MESSAGE->Mxe.Data[4]>>4;
    CSI->bt6.Side_Collision_Sensor_Mid_Rear_Right___Type = J1939_MESSAGE->Mxe.Data[5]>>0;
    CSI->bt6.Side_Collision_Sensor_Rear_Right___Type = J1939_MESSAGE->Mxe.Data[5]>>4;
    CSI->bt7.Rear_Collision_Sensor_1___Type = J1939_MESSAGE->Mxe.Data[6]>>0;
    CSI->bt7.Rear_Collision_Sensor_2___Type = J1939_MESSAGE->Mxe.Data[6]>>4;
    CSI->bt8.Rear_Collision_Sensor_3___Type = J1939_MESSAGE->Mxe.Data[7]>>0;
    CSI->bt8.Rear_Collision_Sensor_4___Type = J1939_MESSAGE->Mxe.Data[7]>>4;
    CSI->bt9.Rollover_Sensor___Type = J1939_MESSAGE->Mxe.Data[8]>>0;
}
void CheckILI ( J1939_MESSAGE *J1939_MESSAGE,getILI_t *ILI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ILI->Driver_Airbag_Ignitor_Loop_1st_Stage___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ILI->Passenger_Airbag_Ignitor_Loop_1st_Stage___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ILI->Driver_Airbag_Ignitor_Loop_2nd_Stage___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9]);
    ILI->Passenger_Airbag_Ignitor_Loop_2nd_Stage___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    ILI->Driver_Belt_Tensioner_Ignitior_Loop___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13]);
    ILI->Passenger_Belt_Tensioner_Ignitor_Loop___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    ILI->Side_Bag_Ignitor_Loop_1___Left___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17]);
    ILI->Side_Bag_Ignitor_Loop_2___Left___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    ILI->Side_Bag_Ignitor_Loop_1___Right___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[20])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[21]);
    ILI->Side_Bag_Ignitor_Loop_2___Right___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[20])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[21])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[22])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[23]);
    ILI->Special_Ignitor_Loop_1___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[22])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[23])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[24])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[25]);
    ILI->Special_Ignitor_Loop_2___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[24])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[25])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[26])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[27]);
    ILI->Special_Ignitor_Loop_3___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[26])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[27])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[28])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[29]);
    ILI->Special_Ignitor_Loop_4___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[28])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[29])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[30])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[31]);
    ILI->Special_Ignitor_Loop_5___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[30])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[31])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[32])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[33]);
    ILI->Special_Ignitor_Loop_6___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[32])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[33])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[34])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[35]);
    ILI->Special_Ignitor_Loop_7___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[34])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[35])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[36])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[37]);
    ILI->Special_Ignitor_Loop_8___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[36])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[37])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[38])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[39]);
    ILI->Special_Ignitor_Loop_9___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[38])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[39])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[40])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[41]);
    ILI->Special_Ignitor_Loop_10___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[40])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[41])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[42])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[43]);
    ILI->Special_Ignitor_Loop_11___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[42])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[43])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[44])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[45]);
    ILI->Special_Ignitor_Loop_12___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[44])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[45])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[46])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[47]);
    ILI->Special_Ignitor_Loop_13___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[46])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[47])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[48])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[49]);
    ILI->Special_Ignitor_Loop_14___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[48])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[49])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[50])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[51]);
    ILI->Special_Ignitor_Loop_15___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[50])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[51])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[52])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[53]);
    ILI->Special_Ignitor_Loop_16___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[52])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[53])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[54])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[55]);
    ILI->Special_Ignitor_Loop_17___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[54])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[55])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[56])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[57]);
    ILI->Special_Ignitor_Loop_18___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[56])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[57])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[58])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[59]);
    ILI->Special_Ignitor_Loop_19___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[58])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[59])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[60])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[61]);
    ILI->Special_Ignitor_Loop_20___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[60])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[61])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[62])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[63]);
    ILI->Special_Ignitor_Loop_21___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[62])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[63])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[64])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[65]);
    ILI->Special_Ignitor_Loop_22___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[64])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[65])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[66])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[67]);
    ILI->Special_Ignitor_Loop_23___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[66])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[67])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[68])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[69]);
    ILI->Special_Ignitor_Loop_24___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[68])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[69])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[70])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[71]);
    ILI->Special_Ignitor_Loop_25___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[70])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[71])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[72])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[73]);
    ILI->Special_Ignitor_Loop_26___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[72])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[73])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[74])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[75]);
    ILI->Special_Ignitor_Loop_27___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[74])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[75])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[76])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[77]);
    ILI->Special_Ignitor_Loop_28___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[76])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[77])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[78])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[79]);
    ILI->Special_Ignitor_Loop_29___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[78])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[79])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[80])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[81]);
    ILI->Special_Ignitor_Loop_30___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[80])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[81])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[82])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[83]);
    ILI->Special_Ignitor_Loop_31___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[82])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[83])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[84])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[85]);
    ILI->Special_Ignitor_Loop_32___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[84])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[85])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[86])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[87]);
    ILI->Special_Ignitor_Loop_33___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[86])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[87])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[88])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[89]);
    ILI->Special_Ignitor_Loop_34___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[88])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[89])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[90])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[91]);
    ILI->Special_Ignitor_Loop_35___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[90])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[91])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[92])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[93]);
    ILI->Special_Ignitor_Loop_36___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[92])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[93])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[94])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[95]);
    ILI->Special_Ignitor_Loop_37___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[94])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[95])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[96])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[97]);
    ILI->Special_Ignitor_Loop_38___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[96])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[97])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[98])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[99]);
    ILI->Special_Ignitor_Loop_39___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[98])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[99])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[100])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[101]);
    ILI->Special_Ignitor_Loop_40___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[100])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[101])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[102])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[103]);
    ILI->Special_Ignitor_Loop_41___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[102])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[103])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[104])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[105]);
    ILI->Special_Ignitor_Loop_42___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[104])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[105])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[106])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[107]);
    ILI->Special_Ignitor_Loop_43___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[106])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[107])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[108])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[109]);
    ILI->Special_Ignitor_Loop_44___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[108])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[109])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[110])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[111]);
    ILI->Special_Ignitor_Loop_45___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[110])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[111])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[112])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[113]);
    ILI->Special_Ignitor_Loop_46___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[112])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[113])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[114])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[115]);
    ILI->Special_Ignitor_Loop_47___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[114])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[115])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[116])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[117]);
    ILI->Special_Ignitor_Loop_48___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[116])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[117])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[118])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[119]);
    ILI->Special_Ignitor_Loop_49___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[118])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[119])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[120])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[121]);
    ILI->Special_Ignitor_Loop_50___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[120])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[121])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[122])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[123]);
    ILI->Special_Ignitor_Loop_51___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[122])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[123])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[124])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[125]);
    ILI->Special_Ignitor_Loop_52___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[124])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[125])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[126])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[127]);
    ILI->Special_Ignitor_Loop_53___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[126])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[127])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[128])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[129]);
    ILI->Special_Ignitor_Loop_54___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[128])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[129])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[130])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[131]);
    ILI->Special_Ignitor_Loop_55___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[130])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[131])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[132])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[133]);
    ILI->Special_Ignitor_Loop_56___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[132])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[133])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[134])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[135]);
    ILI->Special_Ignitor_Loop_57___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[134])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[135])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[136])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[137]);
    ILI->Special_Ignitor_Loop_58___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[136])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[137])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[138])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[139]);
    ILI->Special_Ignitor_Loop_59___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[138])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[139])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[140])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[141]);
    ILI->Special_Ignitor_Loop_60___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[140])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[141])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[142])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[143]);
    ILI->Special_Ignitor_Loop_61___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[142])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[143])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[144])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[145]);
    ILI->Special_Ignitor_Loop_62___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[144])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[145])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[146])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[147]);
    ILI->Special_Ignitor_Loop_63___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[146])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[147])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[148])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[149]);
    ILI->Special_Ignitor_Loop_64___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[148])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[149])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[150])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[151]);
    ILI->Special_Ignitor_Loop_65___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[150])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[151])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[152])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[153]);
    ILI->Special_Ignitor_Loop_66___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[152])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[153])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[154])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[155]);
    ILI->Special_Ignitor_Loop_67___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[154])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[155])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[156])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[157]);
    ILI->Special_Ignitor_Loop_68___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[156])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[157])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[158])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[159]);
    ILI->Special_Ignitor_Loop_69___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[158])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[159])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[160])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[161]);
    ILI->Special_Ignitor_Loop_70___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[160])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[161])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[162])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[163]);
    ILI->Special_Ignitor_Loop_71___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[162])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[163])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[164])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[165]);
    ILI->Special_Ignitor_Loop_72___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[164])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[165])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[166])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[167]);
    ILI->Special_Ignitor_Loop_73___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[166])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[167])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[168])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[169]);
    ILI->Special_Ignitor_Loop_74___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[168])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[169])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[170])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[171]);
    ILI->Special_Ignitor_Loop_75___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[170])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[171])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[172])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[173]);
    ILI->Special_Ignitor_Loop_76___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[172])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[173])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[174])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[175]);
    ILI->Special_Ignitor_Loop_77___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[174])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[175])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[176])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[177]);
    ILI->Special_Ignitor_Loop_78___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[176])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[177])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[178])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[179]);
    ILI->Special_Ignitor_Loop_79___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[178])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[179])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[180])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[181]);
    ILI->Special_Ignitor_Loop_80___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[180])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[181])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[182])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[183]);
    ILI->Special_Ignitor_Loop_81___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[182])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[183])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[184])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[185]);
    ILI->Special_Ignitor_Loop_82___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[184])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[185])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[186])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[187]);
    ILI->Special_Ignitor_Loop_83___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[186])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[187])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[188])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[189]);
    ILI->Special_Ignitor_Loop_84___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[188])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[189])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[190])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[191]);
    ILI->Special_Ignitor_Loop_85___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[190])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[191])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[192])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[193]);
    ILI->Special_Ignitor_Loop_86___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[192])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[193])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[194])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[195]);
    ILI->Special_Ignitor_Loop_87___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[194])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[195])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[196])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[197]);
    ILI->Special_Ignitor_Loop_88___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[196])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[197])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[198])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[199]);
    ILI->Special_Ignitor_Loop_89___Resistance = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[198])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[199])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[200])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[201]);
    ILI->Special_Ignitor_Loop_90___Resistance = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAT1WUDOC ( J1939_MESSAGE *J1939_MESSAGE,getAT1WUDOC_t *AT1WUDOC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1WUDOC->Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1WUDOC->Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckDPF2S ( J1939_MESSAGE *J1939_MESSAGE,getDPF2S_t *DPF2S)
{
       uint64_t buff;
    DPF2S->Diesel_Particulate_Filter_2_Soot_Mass = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    DPF2S->Diesel_Particulate_Filter_2_Soot_Density = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.08,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    DPF2S->Diesel_Particulate_Filter_2_Mean_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    DPF2S->Diesel_Particulate_Filter_2_Median_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    DPF2S->bt7.Diesel_Particulate_Filter_2_Soot_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    DPF2S->Diesel_Particulate_Filter_2_Soot_Sensor_ECU_Internal_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-40) ;
}
void CheckDPF1S ( J1939_MESSAGE *J1939_MESSAGE,getDPF1S_t *DPF1S)
{
       uint64_t buff;
    DPF1S->Diesel_Particulate_Filter_1_Soot_Mass = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    DPF1S->Diesel_Particulate_Filter_1_Soot_Density = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.08,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    DPF1S->Diesel_Particulate_Filter_1_Mean_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    DPF1S->Diesel_Particulate_Filter_1_Median_Soot_Signal = Parameter_Translate(buff ,0.0025,0) ;
    DPF1S->bt7.Diesel_Particulate_Filter_1_Soot_Sensor_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    DPF1S->Diesel_Particulate_Filter_1_Soot_Sensor_ECU_Internal_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-40) ;
}
void CheckATDT2 ( J1939_MESSAGE *J1939_MESSAGE,getATDT2_t *ATDT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ATDT2->Aftertreatment_1_Three_Way_Catalyst_Differential_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ATDT2->Aftertreatment_2_Three_Way_Catalyst_Differential_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckATDT1 ( J1939_MESSAGE *J1939_MESSAGE,getATDT1_t *ATDT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ATDT1->Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ATDT1->Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckA2DOC ( J1939_MESSAGE *J1939_MESSAGE,getA2DOC_t *A2DOC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    A2DOC->Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure = Parameter_Translate(buff ,0.5,0) ;
    A2DOC->bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    A2DOC->bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI = buff16 ;
    A2DOC->bt8.Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckA1DOC ( J1939_MESSAGE *J1939_MESSAGE,getA1DOC_t *A1DOC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    A1DOC->Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    A1DOC->bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    A1DOC->bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI = buff16 ;
    A1DOC->bt8.Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckA2GOC ( J1939_MESSAGE *J1939_MESSAGE,getA2GOC_t *A2GOC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    A2GOC->Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    A2GOC->bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    A2GOC->bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI = buff16 ;
    A2GOC->bt8.Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckA1GOC ( J1939_MESSAGE *J1939_MESSAGE,getA1GOC_t *A1GOC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    A1GOC->Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    A1GOC->bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    A1GOC->bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI = buff16 ;
    A1GOC->bt8.Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckEJM10 ( J1939_MESSAGE *J1939_MESSAGE,getEJM10_t *EJM10)
{
       uint64_t buff;
    EJM10->bt1.Joystick_10_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM10->bt1.Joystick_10_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM10->bt1.Joystick_10_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM10->bt3.Joystick_10_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM10->bt3.Joystick_10_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM10->bt3.Joystick_10_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM10->bt5.Joystick_10_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM10->bt5.Joystick_10_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM10->bt5.Joystick_10_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM10->bt7.Joystick_10_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM10->bt7.Joystick_10_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM10->bt7.Joystick_10_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM10 ( J1939_MESSAGE *J1939_MESSAGE,getBJM10_t *BJM10)
{
       uint64_t buff;
    BJM10->bt1.Joystick_10_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM10->bt1.Joystick_10_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM10->bt1.Joystick_10_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM10->bt3.Joystick_10_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM10->bt3.Joystick_10_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM10->bt3.Joystick_10_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM10->bt5.Joystick_10_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM10->bt5.Joystick_10_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM10->bt6.Joystick_10_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM10->bt6.Joystick_10_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM10->bt6.Joystick_10_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM10->bt6.Joystick_10_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM10->bt7.Joystick_10_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM10->bt7.Joystick_10_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM10->bt7.Joystick_10_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM10->bt7.Joystick_10_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM10->bt8.Joystick_10_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM10->bt8.Joystick_10_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM10->bt8.Joystick_10_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM10->bt8.Joystick_10_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM9 ( J1939_MESSAGE *J1939_MESSAGE,getEJM9_t *EJM9)
{
       uint64_t buff;
    EJM9->bt1.Joystick_9_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM9->bt1.Joystick_9_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM9->bt1.Joystick_9_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM9->bt3.Joystick_9_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM9->bt3.Joystick_9_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM9->bt3.Joystick_9_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM9->bt5.Joystick_9_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM9->bt5.Joystick_9_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM9->bt5.Joystick_9_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM9->bt7.Joystick_9_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM9->bt7.Joystick_9_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM9->bt7.Joystick_9_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM9 ( J1939_MESSAGE *J1939_MESSAGE,getBJM9_t *BJM9)
{
       uint64_t buff;
    BJM9->bt1.Joystick_9_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM9->bt1.Joystick_9_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM9->bt1.Joystick_9_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM9->bt3.Joystick_9_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM9->bt3.Joystick_9_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM9->bt3.Joystick_9_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM9->bt5.Joystick_9_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM9->bt5.Joystick_9_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM9->bt6.Joystick_9_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM9->bt6.Joystick_9_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM9->bt6.Joystick_9_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM9->bt6.Joystick_9_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM9->bt7.Joystick_9_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM9->bt7.Joystick_9_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM9->bt7.Joystick_9_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM9->bt7.Joystick_9_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM9->bt8.Joystick_9_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM9->bt8.Joystick_9_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM9->bt8.Joystick_9_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM9->bt8.Joystick_9_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM8 ( J1939_MESSAGE *J1939_MESSAGE,getEJM8_t *EJM8)
{
       uint64_t buff;
    EJM8->bt1.Joystick_8_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM8->bt1.Joystick_8_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM8->bt1.Joystick_8_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM8->bt3.Joystick_8_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM8->bt3.Joystick_8_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM8->bt3.Joystick_8_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM8->bt5.Joystick_8_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM8->bt5.Joystick_8_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM8->bt5.Joystick_8_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM8->bt7.Joystick_8_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM8->bt7.Joystick_8_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM8->bt7.Joystick_8_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM8 ( J1939_MESSAGE *J1939_MESSAGE,getBJM8_t *BJM8)
{
       uint64_t buff;
    BJM8->bt1.Joystick_8_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM8->bt1.Joystick_8_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM8->bt1.Joystick_8_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM8->bt3.Joystick_8_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM8->bt3.Joystick_8_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM8->bt3.Joystick_8_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM8->bt5.Joystick_8_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM8->bt5.Joystick_8_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM8->bt6.Joystick_8_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM8->bt6.Joystick_8_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM8->bt6.Joystick_8_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM8->bt6.Joystick_8_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM8->bt7.Joystick_8_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM8->bt7.Joystick_8_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM8->bt7.Joystick_8_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM8->bt7.Joystick_8_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM8->bt8.Joystick_8_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM8->bt8.Joystick_8_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM8->bt8.Joystick_8_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM8->bt8.Joystick_8_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM7 ( J1939_MESSAGE *J1939_MESSAGE,getEJM7_t *EJM7)
{
       uint64_t buff;
    EJM7->bt1.Joystick_7_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM7->bt1.Joystick_7_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM7->bt1.Joystick_7_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM7->bt3.Joystick_7_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM7->bt3.Joystick_7_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM7->bt3.Joystick_7_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM7->bt5.Joystick_7_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM7->bt5.Joystick_7_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM7->bt5.Joystick_7_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM7->bt7.Joystick_7_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM7->bt7.Joystick_7_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM7->bt7.Joystick_7_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM7 ( J1939_MESSAGE *J1939_MESSAGE,getBJM7_t *BJM7)
{
       uint64_t buff;
    BJM7->bt1.Joystick_7_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM7->bt1.Joystick_7_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM7->bt1.Joystick_7_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM7->bt3.Joystick_7_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM7->bt3.Joystick_7_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM7->bt3.Joystick_7_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM7->bt5.Joystick_7_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM7->bt5.Joystick_7_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM7->bt6.Joystick_7_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM7->bt6.Joystick_7_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM7->bt6.Joystick_7_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM7->bt6.Joystick_7_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM7->bt7.Joystick_7_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM7->bt7.Joystick_7_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM7->bt7.Joystick_7_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM7->bt7.Joystick_7_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM7->bt8.Joystick_7_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM7->bt8.Joystick_7_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM7->bt8.Joystick_7_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM7->bt8.Joystick_7_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM6 ( J1939_MESSAGE *J1939_MESSAGE,getEJM6_t *EJM6)
{
       uint64_t buff;
    EJM6->bt1.Joystick_6_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM6->bt1.Joystick_6_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM6->bt1.Joystick_6_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM6->bt3.Joystick_6_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM6->bt3.Joystick_6_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM6->bt3.Joystick_6_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM6->bt5.Joystick_6_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM6->bt5.Joystick_6_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM6->bt5.Joystick_6_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM6->bt7.Joystick_6_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM6->bt7.Joystick_6_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM6->bt7.Joystick_6_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM6 ( J1939_MESSAGE *J1939_MESSAGE,getBJM6_t *BJM6)
{
       uint64_t buff;
    BJM6->bt1.Joystick_6_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM6->bt1.Joystick_6_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM6->bt1.Joystick_6_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM6->bt3.Joystick_6_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM6->bt3.Joystick_6_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM6->bt3.Joystick_6_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM6->bt5.Joystick_6_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM6->bt5.Joystick_6_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM6->bt6.Joystick_6_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM6->bt6.Joystick_6_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM6->bt6.Joystick_6_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM6->bt6.Joystick_6_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM6->bt7.Joystick_6_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM6->bt7.Joystick_6_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM6->bt7.Joystick_6_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM6->bt7.Joystick_6_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM6->bt8.Joystick_6_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM6->bt8.Joystick_6_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM6->bt8.Joystick_6_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM6->bt8.Joystick_6_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM5 ( J1939_MESSAGE *J1939_MESSAGE,getEJM5_t *EJM5)
{
       uint64_t buff;
    EJM5->bt1.Joystick_5_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM5->bt1.Joystick_5_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM5->bt1.Joystick_5_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM5->bt3.Joystick_5_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM5->bt3.Joystick_5_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM5->bt3.Joystick_5_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM5->bt5.Joystick_5_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM5->bt5.Joystick_5_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM5->bt5.Joystick_5_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM5->bt7.Joystick_5_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM5->bt7.Joystick_5_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM5->bt7.Joystick_5_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM5 ( J1939_MESSAGE *J1939_MESSAGE,getBJM5_t *BJM5)
{
       uint64_t buff;
    BJM5->bt1.Joystick_5_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM5->bt1.Joystick_5_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM5->bt1.Joystick_5_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM5->bt3.Joystick_5_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM5->bt3.Joystick_5_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM5->bt3.Joystick_5_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM5->bt5.Joystick_5_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM5->bt5.Joystick_5_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM5->bt6.Joystick_5_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM5->bt6.Joystick_5_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM5->bt6.Joystick_5_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM5->bt6.Joystick_5_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM5->bt7.Joystick_5_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM5->bt7.Joystick_5_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM5->bt7.Joystick_5_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM5->bt7.Joystick_5_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM5->bt8.Joystick_5_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM5->bt8.Joystick_5_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM5->bt8.Joystick_5_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM5->bt8.Joystick_5_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM4 ( J1939_MESSAGE *J1939_MESSAGE,getEJM4_t *EJM4)
{
       uint64_t buff;
    EJM4->bt1.Joystick_4_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM4->bt1.Joystick_4_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM4->bt1.Joystick_4_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM4->bt3.Joystick_4_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM4->bt3.Joystick_4_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM4->bt3.Joystick_4_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM4->bt5.Joystick_4_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM4->bt5.Joystick_4_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM4->bt5.Joystick_4_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM4->bt7.Joystick_4_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM4->bt7.Joystick_4_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM4->bt7.Joystick_4_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM4 ( J1939_MESSAGE *J1939_MESSAGE,getBJM4_t *BJM4)
{
       uint64_t buff;
    BJM4->bt1.Joystick_4_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM4->bt1.Joystick_4_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM4->bt1.Joystick_4_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM4->bt3.Joystick_4_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM4->bt3.Joystick_4_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM4->bt3.Joystick_4_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM4->bt5.Joystick_4_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM4->bt5.Joystick_4_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM4->bt6.Joystick_4_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM4->bt6.Joystick_4_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM4->bt6.Joystick_4_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM4->bt6.Joystick_4_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM4->bt7.Joystick_4_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM4->bt7.Joystick_4_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM4->bt7.Joystick_4_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM4->bt7.Joystick_4_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM4->bt8.Joystick_4_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM4->bt8.Joystick_4_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM4->bt8.Joystick_4_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM4->bt8.Joystick_4_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckFD2 ( J1939_MESSAGE *J1939_MESSAGE,getFD2_t *FD2)
{
       uint64_t buff;
    FD2->Estimated_Percent_Fan_2_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    FD2->bt2.Fan_2_Drive_State = J1939_MESSAGE->Mxe.Data[1]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    FD2->Fan_2_Speed = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    FD2->Hydraulic_Fan_2_Motor_Pressure = Parameter_Translate(buff ,0.5,0) ;
    FD2->Fan_2_Drive_Bypass_Command_Status = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckA2DEFSI ( J1939_MESSAGE *J1939_MESSAGE,getA2DEFSI_t *A2DEFSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Motor_Speed = Parameter_Translate(buff ,0.5,0) ;
    A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Drive_Percentage = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Return_Valve = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    A2DEFSI->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_State = J1939_MESSAGE->Mxe.Data[5]>>0;
    A2DEFSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckA2SCRRT2I ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRRT2I_t *A2SCRRT2I)
{
       uint64_t buff;
    A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A2SCRRT2I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_2 = Parameter_Translate(buff ,0.1,0) ;
    A2SCRRT2I->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A2SCRRT2I->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    A2SCRRT2I->bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater = J1939_MESSAGE->Mxe.Data[6]>>-1;
    A2SCRRT2I->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckA2SCRRT1I ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRRT1I_t *A2SCRRT1I)
{
       uint64_t buff;
    A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_2 = Parameter_Translate(buff ,0.1,0) ;
    A2SCRRT1I->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A2SCRRT1I->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    A2SCRRT1I->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    A2SCRRT1I->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckA2DEFI ( J1939_MESSAGE *J1939_MESSAGE,getA2DEFI_t *A2DEFI)
{
       uint64_t buff;
    A2DEFI->Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    A2DEFI->Aftertreatment_2_Diesel_Exhaust_Fluid_Concentration = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.25,0) ;
    A2DEFI->Aftertreatment_2_Diesel_Exhaust_Fluid_Conductivity = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],5,0) ;
    A2DEFI->bt4.Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[3]>>0;
    A2DEFI->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A2DEFI->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Type = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckA2SCRSI ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRSI_t *A2SCRSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCRSI->Aftertreatment_2_Diesel_Exhaust_Fluid_Average_Consumption = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A2SCRSI->Aftertreatment_2_SCR_Commanded_Catalyst_Diesel_Exhaust_Fluid_Consumption = Parameter_Translate(buff ,0.05,0) ;
    A2SCRSI->Aftertreatment_2_SCR_Conversion_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
}
void CheckA2SCREGT1 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCREGT1_t *A2SCREGT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCREGT1->Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    A2SCREGT1->bt3.Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    A2SCREGT1->Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    A2SCREGT1->bt6.Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckA2SCREGP ( J1939_MESSAGE *J1939_MESSAGE,getA2SCREGP_t *A2SCREGP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A2SCREGP->Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    A2SCREGP->bt3.Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckA2SCRDSR2 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRDSR2_t *A2SCRDSR2)
{
       uint64_t buff;
    A2SCRDSR2->bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Request = J1939_MESSAGE->Mxe.Data[0]>>2;
    A2SCRDSR2->bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request = J1939_MESSAGE->Mxe.Data[0]>>4;
    A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1 = J1939_MESSAGE->Mxe.Data[1]>>0;
    A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2 = J1939_MESSAGE->Mxe.Data[1]>>2;
    A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3 = J1939_MESSAGE->Mxe.Data[1]>>4;
    A2SCRDSR2->bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4 = J1939_MESSAGE->Mxe.Data[1]>>6;
    A2SCRDSR2->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    A2SCRDSR2->Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
}
void CheckA2SCRDSI2 ( J1939_MESSAGE *J1939_MESSAGE,getA2SCRDSI2_t *A2SCRDSI2)
{
       uint64_t buff;
    A2SCRDSI2->Aftertreatment_2_SCR_Dosing_Air_Assist_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],8,0) ;
    A2SCRDSI2->Aftertreatment_2_SCR_Dosing_Air_Assist_Valve = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    A2SCRDSI2->Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    A2SCRDSI2->bt4.Aftertreatment_2_SCR_Dosing_Valve_Exhaust_Temp__Reduction_Request = J1939_MESSAGE->Mxe.Data[3]>>0;
    A2SCRDSI2->bt4.Aftertreatment_2_SCR_Feedback_Control_Status = J1939_MESSAGE->Mxe.Data[3]>>3;
    A2SCRDSI2->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_State = J1939_MESSAGE->Mxe.Data[4]>>0;
    A2SCRDSI2->bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>2;
    A2SCRDSI2->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_State = J1939_MESSAGE->Mxe.Data[5]>>0;
    A2SCRDSI2->bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>2;
    A2SCRDSI2->bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_State = J1939_MESSAGE->Mxe.Data[6]>>0;
    A2SCRDSI2->bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>2;
    A2SCRDSI2->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_State = J1939_MESSAGE->Mxe.Data[7]>>0;
    A2SCRDSI2->bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckA1DEFSI ( J1939_MESSAGE *J1939_MESSAGE,getA1DEFSI_t *A1DEFSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Motor_Speed = Parameter_Translate(buff ,0.5,0) ;
    A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Drive_Percentage = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Return_Valve = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    A1DEFSI->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_State = J1939_MESSAGE->Mxe.Data[5]>>0;
    A1DEFSI->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckA1SCRRT2I ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRRT2I_t *A1SCRRT2I)
{
       uint64_t buff;
    A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_2 = Parameter_Translate(buff ,0.1,0) ;
    A1SCRRT2I->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A1SCRRT2I->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    A1SCRRT2I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    A1SCRRT2I->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckA1SCREGT1 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCREGT1_t *A1SCREGT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCREGT1->Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    A1SCREGT1->bt3.Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    A1SCREGT1->Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    A1SCREGT1->bt6.Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckA1SCREGP ( J1939_MESSAGE *J1939_MESSAGE,getA1SCREGP_t *A1SCREGP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    A1SCREGP->Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    A1SCREGP->bt3.Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckA1SCRDSR2 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRDSR2_t *A1SCRDSR2)
{
       uint64_t buff;
    A1SCRDSR2->bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Fault_Suppression_Request = J1939_MESSAGE->Mxe.Data[0]>>2;
    A1SCRDSR2->bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request = J1939_MESSAGE->Mxe.Data[0]>>4;
    A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1 = J1939_MESSAGE->Mxe.Data[1]>>0;
    A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2 = J1939_MESSAGE->Mxe.Data[1]>>2;
    A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3 = J1939_MESSAGE->Mxe.Data[1]>>4;
    A1SCRDSR2->bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4 = J1939_MESSAGE->Mxe.Data[1]>>6;
    A1SCRDSR2->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    A1SCRDSR2->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    A1SCRDSR2->Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
}
void CheckA1SCRDSI2 ( J1939_MESSAGE *J1939_MESSAGE,getA1SCRDSI2_t *A1SCRDSI2)
{
       uint64_t buff;
    A1SCRDSI2->Aftertreatment_1_SCR_Dosing_Air_Assist_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],8,0) ;
    A1SCRDSI2->Aftertreatment_1_SCR_Dosing_Air_Assist_Valve = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    A1SCRDSI2->Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    A1SCRDSI2->bt4.Aftertreatment_1_SCR_Dosing_Valve_Exhaust_Temperature_Reduction_Request = J1939_MESSAGE->Mxe.Data[3]>>0;
    A1SCRDSI2->bt4.Aftertreatment_1_SCR_Feedback_Control_Status = J1939_MESSAGE->Mxe.Data[3]>>3;
    A1SCRDSI2->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_State = J1939_MESSAGE->Mxe.Data[4]>>0;
    A1SCRDSI2->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>2;
    A1SCRDSI2->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_State = J1939_MESSAGE->Mxe.Data[5]>>0;
    A1SCRDSI2->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>2;
    A1SCRDSI2->bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_State = J1939_MESSAGE->Mxe.Data[6]>>0;
    A1SCRDSI2->bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>2;
    A1SCRDSI2->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_State = J1939_MESSAGE->Mxe.Data[7]>>0;
    A1SCRDSI2->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckAT2FC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT2FC2_t *AT2FC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2FC2->Aftertreatment_2_Fuel_Pressure_2 = Parameter_Translate(buff ,0.1,0) ;
    AT2FC2->bt3.Aftertreatment_2_Fuel_Pump_Relay_Control = J1939_MESSAGE->Mxe.Data[2]>>0;
    AT2FC2->bt3.Aftertreatment_2_Fuel_Flow_Diverter_Valve_Control = J1939_MESSAGE->Mxe.Data[2]>>2;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    AT2FC2->Aftertreatment_2_Fuel_Pressure_2_Control = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT2TWCC ( J1939_MESSAGE *J1939_MESSAGE,getAT2TWCC_t *AT2TWCC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT2TWCC->Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    AT2TWCC->bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    AT2TWCC->bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI = buff16 ;
    AT2TWCC->bt8.Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckAT1TWCC ( J1939_MESSAGE *J1939_MESSAGE,getAT1TWCC_t *AT1TWCC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1TWCC->Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    AT1TWCC->bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    AT1TWCC->bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI = buff16 ;
    AT1TWCC->bt8.Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckO2FT2 ( J1939_MESSAGE *J1939_MESSAGE,getO2FT2_t *O2FT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    O2FT2->Long_term_Fuel_Trim___Bank_2 = Parameter_Translate(buff ,0.1,-100) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    O2FT2->Short_term_Fuel_Trim___Bank_2 = Parameter_Translate(buff ,0.1,-100) ;
    O2FT2->bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_2 = J1939_MESSAGE->Mxe.Data[4]>>0;
}
void CheckO2FT1 ( J1939_MESSAGE *J1939_MESSAGE,getO2FT1_t *O2FT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    O2FT1->Long_term_Fuel_Trim___Bank_1 = Parameter_Translate(buff ,0.1,-100) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    O2FT1->Short_term_Fuel_Trim___Bank_1 = Parameter_Translate(buff ,0.1,-100) ;
    O2FT1->bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_1 = J1939_MESSAGE->Mxe.Data[4]>>0;
}
void CheckACCVC ( J1939_MESSAGE *J1939_MESSAGE,getACCVC_t *ACCVC)
{
       uint64_t buff;
    ACCVC->bt1.Aftercooler_Coolant_Thermostat_Mode = J1939_MESSAGE->Mxe.Data[0]>>0;
    ACCVC->Desired_Aftercooler_Coolant_Intake_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    ACCVC->Desired_Aftercooler_Coolant_Thermostat_Opening = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
}
void CheckECCVC ( J1939_MESSAGE *J1939_MESSAGE,getECCVC_t *ECCVC)
{
       uint64_t buff;
    ECCVC->bt1.Engine_Coolant_Thermostat_Mode = J1939_MESSAGE->Mxe.Data[0]>>0;
    ECCVC->Desired_Engine_Coolant_Pump_Outlet_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    ECCVC->Desired_Engine_Coolant_Thermostat_Opening = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    ECCVC->Engine_Auxiliary_Cooler_Supply_Valve_1_Actuator_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    ECCVC->Engine_Auxiliary_Cooler_Supply_Valve_2_Actuator_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
}
void CheckEAI ( J1939_MESSAGE *J1939_MESSAGE,getEAI_t *EAI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EAI->Engine_Exhaust_Gas_Temperature_Average = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EAI->Engine_Exhaust_Gas_Temperature_Average___Bank_1 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EAI->Engine_Exhaust_Gas_Temperature_Average___Bank_2 = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckAT1FC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT1FC2_t *AT1FC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1FC2->Aftertreatment_1_Fuel_Pressure_2 = Parameter_Translate(buff ,0.1,0) ;
    AT1FC2->bt3.Aftertreatment_1_Fuel_Pump_Relay_Control = J1939_MESSAGE->Mxe.Data[2]>>0;
    AT1FC2->bt3.Aftertreatment_1_Fuel_Flow_Diverter_Valve_Control = J1939_MESSAGE->Mxe.Data[2]>>2;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    AT1FC2->Aftertreatment_1_Fuel_Pressure_2_Actuator_Control = Parameter_Translate(buff ,0.0025,0) ;
    AT1FC2->Aftertreatment_1_Hydrocarbon_Doser_Intake_Fuel_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-40) ;
}
void CheckET4 ( J1939_MESSAGE *J1939_MESSAGE,getET4_t *ET4)
{
       uint64_t buff;
    ET4->Engine_Coolant_Temperature_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    ET4->Engine_Coolant_Pump_Outlet_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    ET4->Engine_Coolant_Thermostat_Opening = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    ET4->Engine_Exhaust_Valve_Actuation_System_Oil_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    ET4->Engine_Exhaust_Gas_Recirculation_1_Mixer_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckZNVW ( J1939_MESSAGE *J1939_MESSAGE,getZNVW_t *ZNVW)
{
       uint64_t buff;
    ZNVW->bt1.Zero_Net_Vehicle_Weight_Change = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckGCVW ( J1939_MESSAGE *J1939_MESSAGE,getGCVW_t *GCVW)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    GCVW->Gross_Combination_Weight = Parameter_Translate(buff ,2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    GCVW->Net_Vehicle_Weight_Change = Parameter_Translate(buff ,2,535) ;
}
void CheckAGCW ( J1939_MESSAGE *J1939_MESSAGE,getAGCW_t *AGCW)
{
       uint64_t buff;
    AGCW->bt1.Axle_Group_Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    AGCW->Axle_Group_Empty_Weight_Calibration = Parameter_Translate(buff ,2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    AGCW->Axle_Group_Full_Weight_Calibration = Parameter_Translate(buff ,2,0) ;
}
void CheckAGW ( J1939_MESSAGE *J1939_MESSAGE,getAGW_t *AGW)
{
       uint64_t buff;
    AGW->bt1.Axle_Group_Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    AGW->Axle_Group_Weight = Parameter_Translate(buff ,2,0) ;
}
void CheckAAGW ( J1939_MESSAGE *J1939_MESSAGE,getAAGW_t *AAGW)
{
       uint64_t buff;
    AAGW->bt1.Steer_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[0]>>0;
    AAGW->bt1.Lift_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[0]>>2;
    AAGW->bt1.Drive_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[0]>>4;
    AAGW->bt1.Tag_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[0]>>6;
    AAGW->bt2.Additional_Tractor_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[1]>>0;
    AAGW->bt2.Trailer_A_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[1]>>2;
    AAGW->bt2.Trailer_B_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[1]>>4;
    AAGW->bt2.Trailer_C_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[1]>>6;
    AAGW->bt3.Trailer_D_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[2]>>0;
    AAGW->bt3.Trailer_E_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[2]>>2;
    AAGW->bt3.Trailer_F_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[2]>>4;
    AAGW->bt3.Trailer_G_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[2]>>6;
    AAGW->bt4.Trailer_H_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[3]>>0;
    AAGW->bt4.Additional_Trailer_Axle_Group_Weight_Available = J1939_MESSAGE->Mxe.Data[3]>>2;
}
void CheckAT2AC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT2AC2_t *AT2AC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2AC2->Aftertreatment_2_Secondary_Air_Differential_Pressure = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2AC2->Aftertreatment_2_Secondary_Air_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT2AC2->Aftertreatment_2_Secondary_Air_Mass_Flow = Parameter_Translate(buff ,0.2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT2AC2->Aftertreatment_2_Secondary_Air_Pressure = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAT1AC2 ( J1939_MESSAGE *J1939_MESSAGE,getAT1AC2_t *AT1AC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1AC2->Aftertreatment_1_Secondary_Air_Differential_Pressure = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1AC2->Aftertreatment_1_Secondary_Air_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1AC2->Aftertreatment_1_Secondary_Air_Mass_Flow = Parameter_Translate(buff ,0.2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1AC2->Aftertreatment_1_Secondary_Air_Pressure = Parameter_Translate(buff ,0.1,0) ;
}
void CheckSCR1 ( J1939_MESSAGE *J1939_MESSAGE,getSCR1_t *SCR1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    SCR1->Aftertreatment_1_Diesel_Exhaust_Fluid_Average_Consumption = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    SCR1->Aftertreatment_1_Commanded_Diesel_Exhaust_Fluid_Consumption = Parameter_Translate(buff ,0.05,0) ;
    SCR1->Aftertreatment_1_SCR_Conversion_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    SCR1->Aftertreatment_1_SCR_Operator_Inducement_Active_Traveled_Distance = Parameter_Translate(buff ,1,0) ;
}
void CheckEEC8 ( J1939_MESSAGE *J1939_MESSAGE,getEEC8_t *EEC8)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_2_Control = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Gas_Absolute_Pressure = Parameter_Translate(buff ,0.5,0) ;
    EEC8->Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Efficiency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckDRC ( J1939_MESSAGE *J1939_MESSAGE,getDRC_t *DRC)
{
       uint64_t buff;
    DRC->bt1.Retract_Status_of_ramp_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    DRC->bt1.Enable_status_of_ramp_1 = J1939_MESSAGE->Mxe.Data[0]>>2;
    DRC->bt1.Movement_status_of_ramp_1 = J1939_MESSAGE->Mxe.Data[0]>>4;
    DRC->bt2.Retract_Status_of_ramp_2 = J1939_MESSAGE->Mxe.Data[1]>>0;
    DRC->bt2.Enable_status_of_ramp_2 = J1939_MESSAGE->Mxe.Data[1]>>2;
    DRC->bt2.Movement_status_of_ramp_2 = J1939_MESSAGE->Mxe.Data[1]>>4;
    DRC->bt3.Retract_Status_of_ramp_3 = J1939_MESSAGE->Mxe.Data[2]>>0;
    DRC->bt3.Enable_status_of_ramp_3 = J1939_MESSAGE->Mxe.Data[2]>>2;
    DRC->bt3.Movement_status_of_ramp_3 = J1939_MESSAGE->Mxe.Data[2]>>4;
    DRC->bt4.Retract_Status_of_ramp_4 = J1939_MESSAGE->Mxe.Data[3]>>0;
    DRC->bt4.Enable_status_of_ramp_4 = J1939_MESSAGE->Mxe.Data[3]>>2;
    DRC->bt4.Movement_status_of_ramp_4 = J1939_MESSAGE->Mxe.Data[3]>>4;
    DRC->bt5.Retract_Status_of_ramp_5 = J1939_MESSAGE->Mxe.Data[4]>>0;
    DRC->bt5.Enable_status_of_ramp_5 = J1939_MESSAGE->Mxe.Data[4]>>2;
    DRC->bt5.Movement_status_of_ramp_5 = J1939_MESSAGE->Mxe.Data[4]>>4;
}
void CheckBSA ( J1939_MESSAGE *J1939_MESSAGE,getBSA_t *BSA)
{
       uint64_t buff;
    BSA->bt1.Tractor_Brake_Stroke_Axle_1_Left = J1939_MESSAGE->Mxe.Data[0]>>0;
    BSA->bt1.Tractor_Brake_Stroke_Axle_1_Right = J1939_MESSAGE->Mxe.Data[0]>>3;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[0]>>6;
    buff16 |=J1939_MESSAGE->Mxe.Data[1]<<8;
    BSA->bt1.Tractor_Brake_Stroke_Axle_2_Left = buff16 ;
    BSA->bt2.Tractor_Brake_Stroke_Axle_2_Right = J1939_MESSAGE->Mxe.Data[1]>>1;
    BSA->bt2.Tractor_Brake_Stroke_Axle_3_Left = J1939_MESSAGE->Mxe.Data[1]>>4;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[1]>>7;
    buff16 |=J1939_MESSAGE->Mxe.Data[2]<<8;
    BSA->bt2.Tractor_Brake_Stroke_Axle_3_Right = buff16 ;
    BSA->bt3.Tractor_Brake_Stroke_Axle_4_Left = J1939_MESSAGE->Mxe.Data[2]>>2;
    BSA->bt3.Tractor_Brake_Stroke_Axle_4_Right = J1939_MESSAGE->Mxe.Data[2]>>5;
    BSA->bt4.Tractor_Brake_Stroke_Axle_5_Left = J1939_MESSAGE->Mxe.Data[3]>>0;
    BSA->bt4.Tractor_Brake_Stroke_Axle_5_Right = J1939_MESSAGE->Mxe.Data[3]>>3;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[3]>>6;
    buff16 |=J1939_MESSAGE->Mxe.Data[4]<<8;
    BSA->bt4.Trailer_Brake_Stroke_Axle_1_Left = buff16 ;
    BSA->bt5.Trailer_Brake_Stroke_Axle_1_Right = J1939_MESSAGE->Mxe.Data[4]>>1;
    BSA->bt5.Trailer_Brake_Stroke_Axle_2_Left = J1939_MESSAGE->Mxe.Data[4]>>4;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[4]>>7;
    buff16 |=J1939_MESSAGE->Mxe.Data[5]<<8;
    BSA->bt5.Trailer_Brake_Stroke_Axle_2_Right = buff16 ;
    BSA->bt6.Trailer_Brake_Stroke_Axle_3_Left = J1939_MESSAGE->Mxe.Data[5]>>2;
    BSA->bt6.Trailer_Brake_Stroke_Axle_3_Right = J1939_MESSAGE->Mxe.Data[5]>>5;
    BSA->bt7.Trailer_Brake_Stroke_Axle_4_Left = J1939_MESSAGE->Mxe.Data[6]>>0;
    BSA->bt7.Trailer_Brake_Stroke_Axle_4_Right = J1939_MESSAGE->Mxe.Data[6]>>3;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>6;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    BSA->bt7.Trailer_Brake_Stroke_Axle_5_Left = buff16 ;
    BSA->bt8.Trailer_Brake_Stroke_Axle_5_Right = J1939_MESSAGE->Mxe.Data[7]>>1;
}
void CheckESV6 ( J1939_MESSAGE *J1939_MESSAGE,getESV6_t *ESV6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESV6->Engine_Spark_Plug_21 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESV6->Engine_Spark_Plug_22 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESV6->Engine_Spark_Plug_23 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ESV6->Engine_Spark_Plug_24 = Parameter_Translate(buff ,1,0) ;
}
void CheckESV5 ( J1939_MESSAGE *J1939_MESSAGE,getESV5_t *ESV5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESV5->Engine_Spark_Plug_17 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESV5->Engine_Spark_Plug_18 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESV5->Engine_Spark_Plug_19 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ESV5->Engine_Spark_Plug_20 = Parameter_Translate(buff ,1,0) ;
}
void CheckESV4 ( J1939_MESSAGE *J1939_MESSAGE,getESV4_t *ESV4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESV4->Engine_Spark_Plug_13 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESV4->Engine_Spark_Plug_14 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESV4->Engine_Spark_Plug_15 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ESV4->Engine_Spark_Plug_16 = Parameter_Translate(buff ,1,0) ;
}
void CheckESV3 ( J1939_MESSAGE *J1939_MESSAGE,getESV3_t *ESV3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESV3->Engine_Spark_Plug_9 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESV3->Engine_Spark_Plug_10 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESV3->Engine_Spark_Plug_11 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ESV3->Engine_Spark_Plug_12 = Parameter_Translate(buff ,1,0) ;
}
void CheckESV2 ( J1939_MESSAGE *J1939_MESSAGE,getESV2_t *ESV2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESV2->Engine_Spark_Plug_5 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESV2->Engine_Spark_Plug_6 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESV2->Engine_Spark_Plug_7 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ESV2->Engine_Spark_Plug_8 = Parameter_Translate(buff ,1,0) ;
}
void CheckESV1 ( J1939_MESSAGE *J1939_MESSAGE,getESV1_t *ESV1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ESV1->Engine_Spark_Plug_1 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ESV1->Engine_Spark_Plug_2 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ESV1->Engine_Spark_Plug_3 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ESV1->Engine_Spark_Plug_4 = Parameter_Translate(buff ,1,0) ;
}
void CheckAT2TI ( J1939_MESSAGE *J1939_MESSAGE,getAT2TI_t *AT2TI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[20])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[21])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[22])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[23]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[24])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[25])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[26])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[27]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[28])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[29])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[30])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[31]);
    AT2TI->Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests = Parameter_Translate(buff ,1,0) ;
}
void CheckAT1TI ( J1939_MESSAGE *J1939_MESSAGE,getAT1TI_t *AT1TI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[20])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[21])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[22])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[23]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[24])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[25])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[26])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[27]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[28])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[29])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[30])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[31]);
    AT1TI->Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests = Parameter_Translate(buff ,1,0) ;
}
void CheckAT2S ( J1939_MESSAGE *J1939_MESSAGE,getAT2S_t *AT2S)
{
       uint64_t buff;
    AT2S->Diesel_Particulate_Filter_2_Soot_Load_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    AT2S->Diesel_Particulate_Filter_2_Ash_Load_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT2S->Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT2S->Aftertreatment_2_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckAT1S ( J1939_MESSAGE *J1939_MESSAGE,getAT1S_t *AT1S)
{
       uint64_t buff;
    AT1S->Diesel_Particulate_Filter_1_Soot_Load_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    AT1S->Diesel_Particulate_Filter_1_Ash_Load_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1S->Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1S->Aftertreatment_1_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckDPFC1 ( J1939_MESSAGE *J1939_MESSAGE,getDPFC1_t *DPFC1)
{
       uint64_t buff;
    DPFC1->bt1.Diesel_Particulate_Filter_Lamp_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    DPFC1->bt2.Diesel_Particulate_Filter_Passive_Regeneration_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    DPFC1->bt2.Diesel_Particulate_Filter_Active_Regeneration_Status = J1939_MESSAGE->Mxe.Data[1]>>2;
    DPFC1->bt2.Diesel_Particulate_Filter_Status = J1939_MESSAGE->Mxe.Data[1]>>4;
    DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Inhibit_Switch = J1939_MESSAGE->Mxe.Data[2]>>2;
    DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Clutch_Disengaged = J1939_MESSAGE->Mxe.Data[2]>>4;
    DPFC1->bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Service_Brake_Active = J1939_MESSAGE->Mxe.Data[2]>>6;
    DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_PTO_Active = J1939_MESSAGE->Mxe.Data[3]>>0;
    DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Accelerator_Pedal_Off_Idle = J1939_MESSAGE->Mxe.Data[3]>>2;
    DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Out_of_Neutral = J1939_MESSAGE->Mxe.Data[3]>>4;
    DPFC1->bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Above_Allowed_Speed = J1939_MESSAGE->Mxe.Data[3]>>6;
    DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Parking_Brake_Not_Set = J1939_MESSAGE->Mxe.Data[4]>>0;
    DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Temperature = J1939_MESSAGE->Mxe.Data[4]>>2;
    DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Fault_Active = J1939_MESSAGE->Mxe.Data[4]>>4;
    DPFC1->bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Timeout = J1939_MESSAGE->Mxe.Data[4]>>6;
    DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Temporary_System_Lockout = J1939_MESSAGE->Mxe.Data[5]>>0;
    DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Permanent_System_Lockout = J1939_MESSAGE->Mxe.Data[5]>>2;
    DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Engine_Not_Warmed_Up = J1939_MESSAGE->Mxe.Data[5]>>4;
    DPFC1->bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Below_Allowed_Speed = J1939_MESSAGE->Mxe.Data[5]>>6;
    DPFC1->bt7.Diesel_Particulate_Filter_Automatic_Active_Regeneration_Initiation_Configuration = J1939_MESSAGE->Mxe.Data[6]>>0;
    DPFC1->bt7.Exhaust_System_High_Temperature_Lamp_Command = J1939_MESSAGE->Mxe.Data[6]>>2;
    DPFC1->bt7.Diesel_Particulate_Filter_Active_Regeneration_Forced_Status = J1939_MESSAGE->Mxe.Data[6]>>5;
    DPFC1->bt8.Hydrocarbon_Doser_Purging_Enable = J1939_MESSAGE->Mxe.Data[7]>>0;
    DPFC1->bt8.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Pressure = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckAFSS ( J1939_MESSAGE *J1939_MESSAGE,getAFSS_t *AFSS)
{
       uint64_t buff;
    AFSS->bt1.Left_Headlamp_Dynamic_Bending_Light = J1939_MESSAGE->Mxe.Data[0]>>0;
    AFSS->bt1.Right_Headlamp_Dynamic_Bending_Light = J1939_MESSAGE->Mxe.Data[0]>>3;
    AFSS->bt2.Left_Headlamp_Light_Distribution = J1939_MESSAGE->Mxe.Data[1]>>0;
    AFSS->bt2.Right_Headlamp_Light_Distribution = J1939_MESSAGE->Mxe.Data[1]>>4;
}
void CheckEC2 ( J1939_MESSAGE *J1939_MESSAGE,getEC2_t *EC2)
{
       uint64_t buff;
    EC2->Maximum_Crank_Attempts_per_Start_Attempt = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
}
void CheckEGRBV ( J1939_MESSAGE *J1939_MESSAGE,getEGRBV_t *EGRBV)
{
       uint64_t buff;
    EGRBV->EGR1_Cooler_Bypass_Actuator_Postion = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
}
void CheckTCI ( J1939_MESSAGE *J1939_MESSAGE,getTCI_t *TCI)
{
       uint64_t buff;
    TCI->bt1.Transfer_case_status = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckEFL_P9 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P9_t *EFL_P9)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_17 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_18 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_19 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P9->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_20 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEFL_P8 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P8_t *EFL_P8)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_13 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_14 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_15 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P8->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_16 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEFL_P7 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P7_t *EFL_P7)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_9 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_10 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_11 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P7->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_12 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEFL_P6 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P6_t *EFL_P6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_5 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_6 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_7 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P6->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_8 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEFL_P5 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P5_t *EFL_P5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_2 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_3 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P5->Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_4 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckVDS2 ( J1939_MESSAGE *J1939_MESSAGE,getVDS2_t *VDS2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    VDS2->Vehicle_Roll = Parameter_Translate(buff ,1,-200) ;
}
void CheckJ2012 ( J1939_MESSAGE *J1939_MESSAGE,getJ2012_t *J2012)
{
       uint64_t buff;
    J2012->Number_of_J2012_DTCs = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<32;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    J2012->J2012_DTC = Parameter_Translate(buff,1,0) ;
    J2012->bt7.J2012_DTC_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    J2012->bt7.J2012_DTC_Occurrence_Count = J1939_MESSAGE->Mxe.Data[6]>>1;
}
void CheckAT2GP ( J1939_MESSAGE *J1939_MESSAGE,getAT2GP_t *AT2GP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2GP->Diesel_Particulate_Filter_Intake_Pressure_2 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2GP->Diesel_Particulate_Filter_Outlet_Pressure_2 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAT1GP ( J1939_MESSAGE *J1939_MESSAGE,getAT1GP_t *AT1GP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1GP->Diesel_Particulate_Filter_Intake_Pressure_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1GP->Diesel_Particulate_Filter_Outlet_Pressure_1 = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAETC ( J1939_MESSAGE *J1939_MESSAGE,getAETC_t *AETC)
{
       uint64_t buff;
    AETC->bt1.AETC_Data_Collection_Standard = J1939_MESSAGE->Mxe.Data[0]>>0;
    AETC->bt1.Number_of_AETC_data_points = J1939_MESSAGE->Mxe.Data[0]>>4;
}
void CheckEOI ( J1939_MESSAGE *J1939_MESSAGE,getEOI_t *EOI)
{
       uint64_t buff;
    EOI->bt1.Engine_Operating_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    EOI->bt1.Fuel_Pump_Primer_Control = J1939_MESSAGE->Mxe.Data[0]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    EOI->Time_Remaining_in_Engine_Operating_State = Parameter_Translate(buff ,1,0) ;
    EOI->bt4.Engine_Fuel_Shutoff_Vent_Control = J1939_MESSAGE->Mxe.Data[3]>>0;
    EOI->bt4.Engine_Fuel_Shutoff_1_Control = J1939_MESSAGE->Mxe.Data[3]>>2;
    EOI->bt4.Engine_Fuel_Shutoff_2_Control = J1939_MESSAGE->Mxe.Data[3]>>4;
    EOI->bt4.Engine_Fuel_Shutoff_Valve_Leak_Test_Control = J1939_MESSAGE->Mxe.Data[3]>>6;
    EOI->bt5.Engine_Oil_Priming_Pump_Control = J1939_MESSAGE->Mxe.Data[4]>>0;
    EOI->bt5.Engine_Oil_Pre_heater_Control = J1939_MESSAGE->Mxe.Data[4]>>2;
    EOI->bt5.Engine_Electrical_System_Power_Conservation_Control = J1939_MESSAGE->Mxe.Data[4]>>4;
    EOI->bt5.Engine_Block___Coolant_Pre_heater_Control = J1939_MESSAGE->Mxe.Data[4]>>6;
    EOI->bt6.Engine_Coolant_Circulating_Pump_Control = J1939_MESSAGE->Mxe.Data[5]>>0;
    EOI->bt6.Engine_Controlled_Shutdown_Request = J1939_MESSAGE->Mxe.Data[5]>>2;
    EOI->bt6.Engine_Emergency__Immediate__Shutdown_Indication = J1939_MESSAGE->Mxe.Data[5]>>4;
    EOI->Engine_Derate_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckEEC7 ( J1939_MESSAGE *J1939_MESSAGE,getEEC7_t *EEC7)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC7->Engine_Exhaust_Gas_Recirculation_1_Valve_Position = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC7->Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC7->Engine_Crankcase_Breather_Oil_Separator_Speed = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EEC7->Commanded_Engine_Intake_Manifold_Pressure = Parameter_Translate(buff ,0.125,0) ;
}
void CheckTRF2 ( J1939_MESSAGE *J1939_MESSAGE,getTRF2_t *TRF2)
{
       uint64_t buff;
    TRF2->bt1.Transmission_Oil_Filter_Restriction_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    TRF2->bt1.Transmission_Oil_Level_Switch = J1939_MESSAGE->Mxe.Data[0]>>2;
    TRF2->bt1.Transmission_Overheat_Indicator = J1939_MESSAGE->Mxe.Data[0]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    TRF2->Transmission_Torque_Converter_Oil_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    TRF2->Transmission_Oil_Life_Remaining = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TRF2->Transmission_Oil_Temperature_2 = Parameter_Translate(buff ,0.03125,-273) ;
    TRF2->Transmission_Oil_Level_2_High___Low = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.5,-62.5) ;
    TRF2->bt8.Transmission_Oil_Level_2_Countdown_Timer = J1939_MESSAGE->Mxe.Data[7]>>0;
    TRF2->bt8.Transmission_Oil_Level_2_Measurement_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckAT1HI ( J1939_MESSAGE *J1939_MESSAGE,getAT1HI_t *AT1HI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1HI->Aftertreatment_1_Total_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT1HI->Aftertreatment_1_Total_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    AT1HI->Aftertreatment_1_Total_Disabled_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    AT1HI->Aftertreatment_1_Total_Number_of_Active_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[20])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[21])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[22])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[23]);
    AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[24])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[25])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[26])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[27]);
    AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[28])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[29])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[30])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[31]);
    AT1HI->Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[32])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[33])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[34])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[35]);
    AT1HI->Aftertreatment_1_Average_Time_Between_Active_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[36])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[37])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[38])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[39]);
    AT1HI->Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations = Parameter_Translate(buff ,0.125,0) ;
}
void CheckAT2HI ( J1939_MESSAGE *J1939_MESSAGE,getAT2HI_t *AT2HI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2HI->Aftertreatment_2_Total_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AT2HI->Aftertreatment_2_Total_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    AT2HI->Aftertreatment_2_Total_Disabled_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    AT2HI->Aftertreatment_2_Total_Number_of_Active_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[20])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[21])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[22])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[23]);
    AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[24])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[25])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[26])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[27]);
    AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[28])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[29])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[30])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[31]);
    AT2HI->Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[32])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[33])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[34])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[35]);
    AT2HI->Aftertreatment_2_Average_Time_Between_Active_Regenerations = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[36])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[37])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[38])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[39]);
    AT2HI->Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations = Parameter_Translate(buff ,0.125,0) ;
}
void CheckA1DEFI ( J1939_MESSAGE *J1939_MESSAGE,getA1DEFI_t *A1DEFI)
{
       uint64_t buff;
    A1DEFI->Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    A1DEFI->Aftertreatment_1_Diesel_Exhaust_Fluid_Concentration = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.25,0) ;
    A1DEFI->Aftertreatment_1_Diesel_Exhaust_Fluid_Conductivity = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],5,0) ;
    A1DEFI->bt4.Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[3]>>0;
    A1DEFI->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    A1DEFI->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Property = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckSEP2 ( J1939_MESSAGE *J1939_MESSAGE,getSEP2_t *SEP2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    SEP2->Sensor_supply_voltage_5 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    SEP2->Sensor_supply_voltage_6 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    SEP2->Sensor_supply_voltage_7 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    SEP2->Sensor_supply_voltage_8 = Parameter_Translate(buff ,0.05,0) ;
}
void CheckSEP1 ( J1939_MESSAGE *J1939_MESSAGE,getSEP1_t *SEP1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    SEP1->Sensor_supply_voltage_1 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    SEP1->Sensor_supply_voltage_2 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    SEP1->Sensor_supply_voltage_3 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    SEP1->Sensor_supply_voltage_4 = Parameter_Translate(buff ,0.05,0) ;
}
void CheckAT2AC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT2AC1_t *AT2AC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2AC1->Aftertreatment_2_Supply_Air_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2AC1->Aftertreatment_2_Purge_Air_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT2AC1->Aftertreatment_2_Air_Pressure_Control = Parameter_Translate(buff ,0.0025,0) ;
    AT2AC1->Aftertreatment_2_Air_Pressure_Actuator_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    AT2AC1->bt7.Aftertreatment_2_Air_Pressure_Actuator_Position = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT2AC1->bt8.Aftertreatment_2_Air_System_Relay = J1939_MESSAGE->Mxe.Data[7]>>0;
    AT2AC1->bt8.Aftertreatment_2_Atomization_Air_Actuator = J1939_MESSAGE->Mxe.Data[7]>>2;
    AT2AC1->bt8.Aftertreatment_2_Purge_Air_Actuator = J1939_MESSAGE->Mxe.Data[7]>>4;
    AT2AC1->bt8.Aftertreatment_2_Air_Enable_Actuator = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckAT1AC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT1AC1_t *AT1AC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1AC1->Aftertreatment_1_Supply_Air_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1AC1->Aftertreatment_1_Purge_Air_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1AC1->Aftertreatment_1_Air_Pressure_Control = Parameter_Translate(buff ,0.0025,0) ;
    AT1AC1->Aftertreatment_1_Air_Pressure_Actuator_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    AT1AC1->bt7.Aftertreatment_1_Air_Pressure_Actuator_Position = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT1AC1->bt8.Aftertreatment_1_Air_System_Relay = J1939_MESSAGE->Mxe.Data[7]>>0;
    AT1AC1->bt8.Aftertreatment_1_Atomization_Air_Actuator = J1939_MESSAGE->Mxe.Data[7]>>2;
    AT1AC1->bt8.Aftertreatment_1_Purge_Air_Actuator = J1939_MESSAGE->Mxe.Data[7]>>4;
    AT1AC1->bt8.Aftertreatment_1_Air_Enable_Actuator = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckAT2FC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT2FC1_t *AT2FC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2FC1->Aftertreatment_2_Fuel_Pressure_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2FC1->Aftertreatment_2_Fuel_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT2FC1->Aftertreatment_2_Fuel_Pressure_1_Control = Parameter_Translate(buff ,0.0025,0) ;
    AT2FC1->bt7.Aftertreatment_2_Fuel_Drain_Actuator = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT2FC1->bt7.Aftertreatment_2_Ignition = J1939_MESSAGE->Mxe.Data[6]>>2;
    AT2FC1->bt7.Aftertreatment_2_Regeneration_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    AT2FC1->bt7.Aftertreatment_2_Fuel_Enable_Actuator = J1939_MESSAGE->Mxe.Data[6]>>6;
    AT2FC1->Aftertreatment_2_Fuel_Injector_1_Heater_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckAT1FC1 ( J1939_MESSAGE *J1939_MESSAGE,getAT1FC1_t *AT1FC1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1FC1->Aftertreatment_1_Fuel_Pressure_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1FC1->Aftertreatment_1_Fuel_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1FC1->Aftertreatment_1_Fuel_Pressure_1_Control = Parameter_Translate(buff ,0.0025,0) ;
    AT1FC1->bt7.Aftertreatment_1_Fuel_Drain_Actuator = J1939_MESSAGE->Mxe.Data[6]>>0;
    AT1FC1->bt7.Aftertreatment_1_Ignition = J1939_MESSAGE->Mxe.Data[6]>>2;
    AT1FC1->bt7.Aftertreatment_1_Regeneration_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    AT1FC1->bt7.Aftertreatment_1_Fuel_Enable_Actuator = J1939_MESSAGE->Mxe.Data[6]>>6;
    AT1FC1->Aftertreatment_1_Fuel_Injector_1_Heater_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckGFI ( J1939_MESSAGE *J1939_MESSAGE,getGFI_t *GFI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    GFI->Engine_Fuel_Valve_2_Intake_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GFI->Engine_Gas_2_Mass_Flow_Rate = Parameter_Translate(buff ,0.05,0) ;
    GFI->Engine_Fuel_Temperature_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    GFI->Engine_Fuel = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEEC6 ( J1939_MESSAGE *J1939_MESSAGE,getEEC6_t *EEC6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_1_Command = Parameter_Translate(buff ,0.0025,0) ;
    EEC6->Engine_Variable_Geometry_Turbocharger_Actuator_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC6->Engine_Turbocharger_Compressor_Bypass_Actuator_2_command = Parameter_Translate(buff ,0.0025,0) ;
    EEC6->Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    EEC6->bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
    EEC6->bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature_Status = J1939_MESSAGE->Mxe.Data[7]>>5;
}
void CheckPTODE ( J1939_MESSAGE *J1939_MESSAGE,getPTODE_t *PTODE)
{
       uint64_t buff;
    PTODE->bt1.Enable_Switch__Transfer_case_output_shaft_PTO = J1939_MESSAGE->Mxe.Data[0]>>0;
    PTODE->bt1.Enable_Switch__Transmission_output_shaft_PTO = J1939_MESSAGE->Mxe.Data[0]>>2;
    PTODE->bt1.Enable_Switch__Transmission_input_shaft_PTO_2 = J1939_MESSAGE->Mxe.Data[0]>>4;
    PTODE->bt1.Enable_Switch__Transmission_input_shaft_PTO_1 = J1939_MESSAGE->Mxe.Data[0]>>6;
    PTODE->bt2.Enable_Switch___PTO_Engine_Flywheel = J1939_MESSAGE->Mxe.Data[1]>>0;
    PTODE->bt2.Enable_Switch___PTO_Engine_Accessory_Drive_1 = J1939_MESSAGE->Mxe.Data[1]>>2;
    PTODE->bt2.Enable_Switch___PTO_Engine_Accessory_Drive_2 = J1939_MESSAGE->Mxe.Data[1]>>4;
    PTODE->bt3.Engagement_Consent__Transfer_case_output_shaft_PTO = J1939_MESSAGE->Mxe.Data[2]>>0;
    PTODE->bt3.Engagement_Consent__Transmission_output_shaft_PTO = J1939_MESSAGE->Mxe.Data[2]>>2;
    PTODE->bt3.Engagement_Consent__Transmission_input_shaft_PTO_2 = J1939_MESSAGE->Mxe.Data[2]>>4;
    PTODE->bt3.Engagement_Consent__Transmission_input_shaft_PTO_1 = J1939_MESSAGE->Mxe.Data[2]>>6;
    PTODE->bt4.Engagement_Consent___PTO_Engine_Flywheel = J1939_MESSAGE->Mxe.Data[3]>>0;
    PTODE->bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_1 = J1939_MESSAGE->Mxe.Data[3]>>2;
    PTODE->bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_2 = J1939_MESSAGE->Mxe.Data[3]>>4;
    PTODE->bt5.Engagement_Status__Transfer_case_output_shaft_PTO = J1939_MESSAGE->Mxe.Data[4]>>0;
    PTODE->bt5.Engagement_Status__Transmission_output_shaft_PTO = J1939_MESSAGE->Mxe.Data[4]>>2;
    PTODE->bt5.Engagement_Status__Transmission_input_shaft_PTO_2 = J1939_MESSAGE->Mxe.Data[4]>>4;
    PTODE->bt5.Engagement_Status__Transmission_input_shaft_PTO_1 = J1939_MESSAGE->Mxe.Data[4]>>6;
    PTODE->bt6.Engagement_Status___PTO_Engine_Flywheel = J1939_MESSAGE->Mxe.Data[5]>>0;
    PTODE->bt6.Engagement_Status___PTO_Engine_Accessory_Drive_1 = J1939_MESSAGE->Mxe.Data[5]>>2;
    PTODE->bt6.Engagement_Status___PTO_Engine_Accessory_Drive_2 = J1939_MESSAGE->Mxe.Data[5]>>4;
    PTODE->bt7.At_least_one_PTO_engaged = J1939_MESSAGE->Mxe.Data[6]>>0;
}
void CheckDC2 ( J1939_MESSAGE *J1939_MESSAGE,getDC2_t *DC2)
{
       uint64_t buff;
    DC2->bt1.Lock_Status_of_Door_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    DC2->bt1.Open_Status_of_Door_1 = J1939_MESSAGE->Mxe.Data[0]>>2;
    DC2->bt1.Enable_Status_of_Door_1 = J1939_MESSAGE->Mxe.Data[0]>>4;
    DC2->bt1.Lock_Status_of_Door_2 = J1939_MESSAGE->Mxe.Data[0]>>6;
    DC2->bt2.Open_Status_of_Door_2 = J1939_MESSAGE->Mxe.Data[1]>>0;
    DC2->bt2.Enable_Status_of_Door_2 = J1939_MESSAGE->Mxe.Data[1]>>2;
    DC2->bt2.Lock_Status_of_Door_3 = J1939_MESSAGE->Mxe.Data[1]>>4;
    DC2->bt2.Open_Status_of_Door_3 = J1939_MESSAGE->Mxe.Data[1]>>6;
    DC2->bt3.Enable_Status_of_Door_3 = J1939_MESSAGE->Mxe.Data[2]>>0;
    DC2->bt3.Lock_Status_of_Door_4 = J1939_MESSAGE->Mxe.Data[2]>>2;
    DC2->bt3.Open_Status_of_Door_4 = J1939_MESSAGE->Mxe.Data[2]>>4;
    DC2->bt3.Enable_Status_of_Door_4 = J1939_MESSAGE->Mxe.Data[2]>>6;
    DC2->bt4.Lock_Status_of_Door_5 = J1939_MESSAGE->Mxe.Data[3]>>0;
    DC2->bt4.Open_Status_of_Door_5 = J1939_MESSAGE->Mxe.Data[3]>>2;
    DC2->bt4.Enable_Status_of_Door_5 = J1939_MESSAGE->Mxe.Data[3]>>4;
    DC2->bt4.Lock_Status_of_Door_6 = J1939_MESSAGE->Mxe.Data[3]>>6;
    DC2->bt5.Open_Status_of_Door_6 = J1939_MESSAGE->Mxe.Data[4]>>0;
    DC2->bt5.Enable_Status_of_Door_6 = J1939_MESSAGE->Mxe.Data[4]>>2;
    DC2->bt5.Lock_Status_of_Door_7 = J1939_MESSAGE->Mxe.Data[4]>>4;
    DC2->bt5.Open_Status_of_Door_7 = J1939_MESSAGE->Mxe.Data[4]>>6;
    DC2->bt6.Enable_Status_of_Door_7 = J1939_MESSAGE->Mxe.Data[5]>>0;
    DC2->bt6.Lock_Status_of_Door_8 = J1939_MESSAGE->Mxe.Data[5]>>2;
    DC2->bt6.Open_Status_of_Door_8 = J1939_MESSAGE->Mxe.Data[5]>>4;
    DC2->bt6.Enable_Status_of_Door_8 = J1939_MESSAGE->Mxe.Data[5]>>6;
    DC2->bt7.Lock_Status_of_Door_9 = J1939_MESSAGE->Mxe.Data[6]>>0;
    DC2->bt7.Open_Status_of_Door_9 = J1939_MESSAGE->Mxe.Data[6]>>2;
    DC2->bt7.Enable_Status_of_Door_9 = J1939_MESSAGE->Mxe.Data[6]>>4;
    DC2->bt7.Lock_Status_of_Door_10 = J1939_MESSAGE->Mxe.Data[6]>>6;
    DC2->bt8.Open_Status_of_Door_10 = J1939_MESSAGE->Mxe.Data[7]>>0;
    DC2->bt8.Enable_Status_of_Door_10 = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckWCM2 ( J1939_MESSAGE *J1939_MESSAGE,getWCM2_t *WCM2)
{
       uint64_t buff;
    WCM2->bt1.Network_Transceiver_Status_2 = J1939_MESSAGE->Mxe.Data[0]>>0;
    WCM2->bt2.Network_Service_Status_2 = J1939_MESSAGE->Mxe.Data[1]>>0;
    WCM2->bt3.Network_Antenna_Status_2 = J1939_MESSAGE->Mxe.Data[2]>>0;
    WCM2->Network_Signal_Strength_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    WCM2->bt5.Wireless_Communication_Network_Type_2 = J1939_MESSAGE->Mxe.Data[4]>>0;
}
void CheckWCM1 ( J1939_MESSAGE *J1939_MESSAGE,getWCM1_t *WCM1)
{
       uint64_t buff;
    WCM1->bt1.Network_Transceiver_Status_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    WCM1->bt2.Network_Service_Status_1 = J1939_MESSAGE->Mxe.Data[1]>>0;
    WCM1->bt3.Network_Antenna_Status_1 = J1939_MESSAGE->Mxe.Data[2]>>0;
    WCM1->Network_Signal_Strength_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    WCM1->bt5.Wireless_Communication_Network_Type_1 = J1939_MESSAGE->Mxe.Data[4]>>0;
}
void CheckEFL_P4 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P4_t *EFL_P4)
{
       uint64_t buff;
    EFL_P4->Engine_Charge_Air_Cooler_1_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],2,0) ;
    EFL_P4->Engine_Charge_Air_Cooler_2_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],2,0) ;
    EFL_P4->Engine_Coolant_Pump_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1.64,-7) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    EFL_P4->Engine_Centrifugal_Oil_Filter_speed = Parameter_Translate(buff ,4,0) ;
    EFL_P4->Engine_Intercooler_Coolant_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    EFL_P4->Engine_Charge_Air_Cooler_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],2,0) ;
}
void CheckFWSS2 ( J1939_MESSAGE *J1939_MESSAGE,getFWSS2_t *FWSS2)
{
       uint64_t buff;
    FWSS2->bt1.Fifth_Wheel_Error_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    FWSS2->bt1.Fifth_Wheel_Lock_Ready_to_Couple_Indicator = J1939_MESSAGE->Mxe.Data[0]>>4;
    FWSS2->bt1.Fifth_Wheel_Lock_Couple_Status_Indicator = J1939_MESSAGE->Mxe.Data[0]>>6;
    FWSS2->Fifth_Wheel_Slider_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],10,0) ;
    FWSS2->bt3.Fifth_Wheel_Slider_Lock_Indicator = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckAT2IMG ( J1939_MESSAGE *J1939_MESSAGE,getAT2IMG_t *AT2IMG)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2IMG->Aftertreatment_2_Exhaust_Gas_Temperature_2 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2IMG->Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT2IMG->Aftertreatment_2_Diesel_Particulate_Filter_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    AT2IMG->bt7.Aftertreatment_2_Exhaust_Gas_Temperature_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    AT2IMG->bt7.Aftertreatment_2_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI = buff16 ;
    AT2IMG->bt8.Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckAT2OG2 ( J1939_MESSAGE *J1939_MESSAGE,getAT2OG2_t *AT2OG2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2OG2->Aftertreatment_2_Exhaust_Gas_Temperature_3 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2OG2->Aftertreatment_2_Diesel_Particulate_Filter_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    AT2OG2->bt5.Aftertreatment_2_Exhaust_Gas_Temperature_3_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT2OG2->bt6.Aftertreatment_2_Diesel_Particulate_Filter_Exhaust_Gas = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckAT2IG2 ( J1939_MESSAGE *J1939_MESSAGE,getAT2IG2_t *AT2IG2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT2IG2->Aftertreatment_2_Exhaust_Gas_Temperature_1 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT2IG2->Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    AT2IG2->bt5.Aftertreatment_2_Exhaust_Gas_Temperature_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT2IG2->bt6.Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckAT1IMG ( J1939_MESSAGE *J1939_MESSAGE,getAT1IMG_t *AT1IMG)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1IMG->Aftertreatment_1_Exhaust_Gas_Temperature_2 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1IMG->Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AT1IMG->Aftertreatment_1_Diesel_Particulate_Filter_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    AT1IMG->bt7.Aftertreatment_1_Exhaust_Gas_Temperature_2_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    uint16_t buff16;
    buff16 =J1939_MESSAGE->Mxe.Data[6]>>5;
    buff16 |=J1939_MESSAGE->Mxe.Data[7]<<8;
    AT1IMG->bt7.Aftertreatment_1_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI = buff16 ;
    AT1IMG->bt8.Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>2;
}
void CheckAT1OG2 ( J1939_MESSAGE *J1939_MESSAGE,getAT1OG2_t *AT1OG2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1OG2->Aftertreatment_1_Exhaust_Gas_Temperature_3 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1OG2->Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    AT1OG2->bt5.Aftertreatment_1_Exhaust_Gas_Temperature_3_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT1OG2->bt6.Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Exhaust_Gas = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckAT1IG2 ( J1939_MESSAGE *J1939_MESSAGE,getAT1IG2_t *AT1IG2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AT1IG2->Aftertreatment_1_Exhaust_Gas_Temperature_1 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1IG2->Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    AT1IG2->bt5.Aftertreatment_1_Exhaust_Gas_Temperature_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT1IG2->bt6.Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
}
void CheckTPRI ( J1939_MESSAGE *J1939_MESSAGE,getTPRI_t *TPRI)
{
       uint64_t buff;
    TPRI->bt1.Tire_Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    TPRI->Reference_Tire_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],8,0) ;
}
void CheckTR6 ( J1939_MESSAGE *J1939_MESSAGE,getTR6_t *TR6)
{
       uint64_t buff;
    TR6->bt1.Farebox_Emergency_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    TR6->bt2.Farebox_Alarm_Identifier = J1939_MESSAGE->Mxe.Data[1]>>0;
}
void CheckTR5 ( J1939_MESSAGE *J1939_MESSAGE,getTR5_t *TR5)
{
       uint64_t buff;
    TR5->bt1.Transaction_Type = J1939_MESSAGE->Mxe.Data[0]>>0;
    TR5->bt1.Passenger_Type = J1939_MESSAGE->Mxe.Data[0]>>4;
    TR5->bt2.Type_of_Fare = J1939_MESSAGE->Mxe.Data[1]>>0;
    TR5->bt2.Payment_Details = J1939_MESSAGE->Mxe.Data[1]>>4;
    TR5->bt3.Fare_Validity = J1939_MESSAGE->Mxe.Data[2]>>0;
    TR5->bt3.Pass_Category = J1939_MESSAGE->Mxe.Data[2]>>4;
    TR5->bt4.Initial_Fare_Agency = J1939_MESSAGE->Mxe.Data[3]>>0;
    TR5->bt5.Type_of_Service = J1939_MESSAGE->Mxe.Data[4]>>0;
    TR5->bt5.Transfer_Type = J1939_MESSAGE->Mxe.Data[4]>>3;
    TR5->Transfer_Sold = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckTR3 ( J1939_MESSAGE *J1939_MESSAGE,getTR3_t *TR3)
{
       uint64_t buff;
    TR3->bt1.Range_Code_Enable = J1939_MESSAGE->Mxe.Data[0]>>2;
    TR3->bt1.Transit_Route_ID_Usage = J1939_MESSAGE->Mxe.Data[0]>>4;
    TR3->bt1.Intersection_Preemption_Request_Response = J1939_MESSAGE->Mxe.Data[0]>>6;
    TR3->bt2.Priority_of_Response_Sent_by_Emitter = J1939_MESSAGE->Mxe.Data[1]>>0;
    TR3->bt2.Transit_Door_Enable = J1939_MESSAGE->Mxe.Data[1]>>4;
    TR3->bt2.Strobe_Activation_Control_Status = J1939_MESSAGE->Mxe.Data[1]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TR3->Vehicle_ID = Parameter_Translate(buff ,1,0) ;
}
void CheckTR1 ( J1939_MESSAGE *J1939_MESSAGE,getTR1_t *TR1)
{
       uint64_t buff;
    TR1->Agency = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    TR1->Number_of_bytes_in_the_Transit_Assigned_Route_Identity = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    TR1->Number_of_bytes_in_the_Transit_Assigned_Run_Identity = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    TR1->Number_of_bytes_in_the_Transit_Assigned_Block_Identity = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
}
void CheckTR2 ( J1939_MESSAGE *J1939_MESSAGE,getTR2_t *TR2)
{
       uint64_t buff;
    TR2->Number_of_bytes_in_the_Milepost_Identification = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
}
void CheckTR7 ( J1939_MESSAGE *J1939_MESSAGE,getTR7_t *TR7)
{
       uint64_t buff;
    TR7->bt1.Type_of_Passenger_Count = J1939_MESSAGE->Mxe.Data[0]>>0;
    TR7->Patron_Count = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    TR7->bt3.Silent_Alarm_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    TR7->bt3.Vehicle_Use_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    TR7->bt3.Transit_Run_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
}
void CheckEFL_P3 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P3_t *EFL_P3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P3->Engine_Intake_Valve_Actuation_System_Oil_Pressure = Parameter_Translate(buff ,1,0) ;
    EFL_P3->Engine_Exhaust_Gas_Recirculation_1_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    EFL_P3->Engine_Exhaust_Valve_Actuation_System_Oil_Pressure = Parameter_Translate(buff ,1,0) ;
    EFL_P3->Engine_Exhaust_Gas_Recirculation_1_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P3->Engine_Throttle_Valve_1_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
}
void CheckEEC14 ( J1939_MESSAGE *J1939_MESSAGE,getEEC14_t *EEC14)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC14->Engine_Exhaust_Gas_Recirculation_1_Valve_1_Position_Error = Parameter_Translate(buff ,0.004,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC14->Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position_Error = Parameter_Translate(buff ,0.004,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC14->Engine_Fuel_Mass_Flow_Rate = Parameter_Translate(buff ,0.005,0) ;
    EEC14->bt7.Fuel_Type = J1939_MESSAGE->Mxe.Data[6]>>0;
}
void CheckEEC15 ( J1939_MESSAGE *J1939_MESSAGE,getEEC15_t *EEC15)
{
       uint64_t buff;
    EEC15->Accelerator_Pedal_1_Channel_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    EEC15->Accelerator_Pedal_1_Channel_3 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    EEC15->Accelerator_Pedal_2_Channel_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EEC15->Accelerator_Pedal_2_Channel_3 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
}
void CheckEBC5 ( J1939_MESSAGE *J1939_MESSAGE,getEBC5_t *EBC5)
{
       uint64_t buff;
    EBC5->bt1.Brake_Temperature_Warning = J1939_MESSAGE->Mxe.Data[0]>>0;
    EBC5->bt1.Halt_brake_mode = J1939_MESSAGE->Mxe.Data[0]>>2;
    EBC5->bt1.Hill_holder_mode = J1939_MESSAGE->Mxe.Data[0]>>5;
    EBC5->bt2.Foundation_Brake_Use = J1939_MESSAGE->Mxe.Data[1]>>0;
    EBC5->bt2.XBR_System_State = J1939_MESSAGE->Mxe.Data[1]>>2;
    EBC5->bt2.XBR_Active_Control_Mode = J1939_MESSAGE->Mxe.Data[1]>>4;
    EBC5->XBR_Acceleration_Limit = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.1,-12.5) ;
    EBC5->bt4.Parking_Brake_Actuator_Fully_Activated = J1939_MESSAGE->Mxe.Data[3]>>0;
    EBC5->bt4.Emergency_Braking_Active = J1939_MESSAGE->Mxe.Data[3]>>2;
}
void CheckCSA ( J1939_MESSAGE *J1939_MESSAGE,getCSA_t *CSA)
{
       uint64_t buff;
    CSA->bt1.Engine_Start_Enable_Device_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    CSA->bt1.Engine_Start_Enable_Device_2 = J1939_MESSAGE->Mxe.Data[0]>>2;
    CSA->bt2.Engine_Start_Enable_Device_1_Configuration = J1939_MESSAGE->Mxe.Data[1]>>0;
    CSA->bt2.Engine_Start_Enable_Device_2_Configuration = J1939_MESSAGE->Mxe.Data[1]>>4;
    CSA->Engine_Cold_Start_Fuel_Igniter_Command = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    CSA->bt4.Engine_Cold_Start_Fuel_Igniter_Relay = J1939_MESSAGE->Mxe.Data[3]>>0;
    CSA->bt4.Engine_Cold_Start_Fuel_Igniter_Relay_Feedback = J1939_MESSAGE->Mxe.Data[3]>>2;
}
void CheckOHCSS ( J1939_MESSAGE *J1939_MESSAGE,getOHCSS_t *OHCSS)
{
       uint64_t buff;
    OHCSS->bt1.Engine_Auxiliary_Governor_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    OHCSS->bt1.Engine_Multi_Unit_Sync_State = J1939_MESSAGE->Mxe.Data[0]>>2;
    OHCSS->bt1.Engine_Alternate_Low_Idle_Select_State = J1939_MESSAGE->Mxe.Data[0]>>4;
    OHCSS->bt2.Engine_Alternate_Rating_Select_State = J1939_MESSAGE->Mxe.Data[1]>>0;
    OHCSS->bt3.Engine_Alternate_Droop_Accelerator_1_Select_State = J1939_MESSAGE->Mxe.Data[2]>>0;
    OHCSS->bt3.Engine_Alternate_Droop_Accelerator_2_Select_State = J1939_MESSAGE->Mxe.Data[2]>>4;
    OHCSS->bt4.Engine_Alternate_Droop_Remote_Accelerator_Select_State = J1939_MESSAGE->Mxe.Data[3]>>0;
    OHCSS->bt4.Engine_Alternate_Droop_Auxiliary_Input_Select_State = J1939_MESSAGE->Mxe.Data[3]>>4;
}
void CheckISCS ( J1939_MESSAGE *J1939_MESSAGE,getISCS_t *ISCS)
{
       uint64_t buff;
    ISCS->bt1.Engine_Operator_Primary_Intermediate_Speed_Select_State = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckCMI ( J1939_MESSAGE *J1939_MESSAGE,getCMI_t *CMI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CMI->Total_Count_of_Configuration_Changes_Made = Parameter_Translate(buff ,1,0) ;
}
void CheckISC ( J1939_MESSAGE *J1939_MESSAGE,getISC_t *ISC)
{
       uint64_t buff;
    ISC->bt1.Engine_Operator_Primary_Intermediate_Speed_Select = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckOHECS ( J1939_MESSAGE *J1939_MESSAGE,getOHECS_t *OHECS)
{
       uint64_t buff;
    OHECS->bt1.Engine_Auxiliary_Governor_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    OHECS->bt1.Engine_Synchronization_Switch = J1939_MESSAGE->Mxe.Data[0]>>2;
    OHECS->bt1.Engine_Alternate_Low_Idle_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    OHECS->Engine_Alternate_Rating_Select = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    OHECS->bt3.Engine_Alternate_Droop_Accelerator_1_Select = J1939_MESSAGE->Mxe.Data[2]>>0;
    OHECS->bt3.Engine_Alternate_Droop_Accelerator_2_Select = J1939_MESSAGE->Mxe.Data[2]>>4;
    OHECS->bt4.Engine_Alternate_Droop_Remote_Accelerator_Select = J1939_MESSAGE->Mxe.Data[3]>>0;
    OHECS->bt4.Engine_Alternate_Droop_Auxiliary_Input_Select = J1939_MESSAGE->Mxe.Data[3]>>4;
}
void CheckOEL ( J1939_MESSAGE *J1939_MESSAGE,getOEL_t *OEL)
{
       uint64_t buff;
    OEL->bt1.Work_Light_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    OEL->bt1.Main_Light_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    OEL->bt2.Turn_Signal_Switch = J1939_MESSAGE->Mxe.Data[1]>>0;
    OEL->bt2.Hazard_Light_Switch = J1939_MESSAGE->Mxe.Data[1]>>4;
    OEL->bt2.High_Low_Beam_Switch = J1939_MESSAGE->Mxe.Data[1]>>6;
    OEL->Operators_Desired_Back_light = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    OEL->Operators_Desired___Delayed_Lamp_Off_Time = Parameter_Translate(buff ,1,0) ;
}
void CheckOWW ( J1939_MESSAGE *J1939_MESSAGE,getOWW_t *OWW)
{
       uint64_t buff;
    OWW->bt1.Front_Non_operator_Wiper_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    OWW->bt1.Front_Operator_Wiper_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    OWW->bt2.Rear_Wiper_Switch = J1939_MESSAGE->Mxe.Data[1]>>4;
    OWW->Front_Operator_Wiper_Delay_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    OWW->Front_Non_operator_Wiper_Delay_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    OWW->Rear_Wiper_Delay_Control = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    OWW->bt6.Front_Non_operator_Washer_Switch = J1939_MESSAGE->Mxe.Data[5]>>2;
    OWW->bt6.Front_Operator_Washer_Switch = J1939_MESSAGE->Mxe.Data[5]>>5;
    OWW->bt7.Rear_Washer_Function = J1939_MESSAGE->Mxe.Data[6]>>5;
}
void CheckIC2 ( J1939_MESSAGE *J1939_MESSAGE,getIC2_t *IC2)
{
       uint64_t buff;
    IC2->Engine_Air_Filter_2_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.05,0) ;
    IC2->Engine_Air_Filter_3_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.05,0) ;
    IC2->Engine_Air_Filter_4_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.05,0) ;
    IC2->Engine_Intake_Manifold_2_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],2,0) ;
    IC2->Engine_Intake_Manifold_1_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    IC2->Engine_Intake_Manifold_1_Absolute_Pressure__High_Resolution_ = Parameter_Translate(buff ,0.1,0) ;
    IC2->Engine_Intake_Manifold_2_Absolute_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],2,0) ;
}
void CheckFMS ( J1939_MESSAGE *J1939_MESSAGE,getFMS_t *FMS)
{
       uint64_t buff;
    FMS->bt1.FMS_standard_Diagnostics_Supported = J1939_MESSAGE->Mxe.Data[0]>>0;
    FMS->bt1.FMS_standard_Requests_Supported = J1939_MESSAGE->Mxe.Data[0]>>2;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    FMS->FMS_standard_SW_version_supported_ = Parameter_Translate(buff ,4,0) ;
}
void CheckEP ( J1939_MESSAGE *J1939_MESSAGE,getEP_t *EP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EP->Keep_Alive_Battery_Consumption = Parameter_Translate(buff ,1,0) ;
    EP->Data_Memory_Usage = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
}
void CheckTCI6 ( J1939_MESSAGE *J1939_MESSAGE,getTCI6_t *TCI6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TCI6->Engine_Turbocharger_1_Compressor_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TCI6->Engine_Turbocharger_2_Compressor_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TCI6->Engine_Turbocharger_3_Compressor_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TCI6->Engine_Turbocharger_4_Compressor_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckCM3 ( J1939_MESSAGE *J1939_MESSAGE,getCM3_t *CM3)
{
       uint64_t buff;
    CM3->bt1.Transfer_Case_Selector_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    CM3->bt2.Fifth_Wheel_Release_Control = J1939_MESSAGE->Mxe.Data[1]>>0;
    CM3->bt2.Fifth_Wheel_Release_Control_Security_Lockout = J1939_MESSAGE->Mxe.Data[1]>>2;
    CM3->bt3.Transmission_Oil_Level_Request = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckEEC5 ( J1939_MESSAGE *J1939_MESSAGE,getEEC5_t *EEC5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC5->Engine_Turbocharger_1_Calculated_Turbine_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC5->Engine_Turbocharger_1_Calculated_Turbine_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EEC5->Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_Control = Parameter_Translate(buff ,0.0025,0) ;
    EEC5->bt7.Engine_Variable_Geometry_Turbocharger__VGT__Air_Control_Shutoff_Valve = J1939_MESSAGE->Mxe.Data[6]>>0;
    EEC5->bt7.Engine_Fuel_Control_Control_Mode = J1939_MESSAGE->Mxe.Data[6]>>2;
    EEC5->bt7.Engine_Variable_Geometry_Turbocharger_1_Control_Mode = J1939_MESSAGE->Mxe.Data[6]>>4;
    EEC5->Engine_Variable_Geometry_Turbocharger__VGT__1_Actuator_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckBJM1 ( J1939_MESSAGE *J1939_MESSAGE,getBJM1_t *BJM1)
{
       uint64_t buff;
    BJM1->bt1.Joystick_1_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM1->bt1.Joystick_1_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM1->bt1.Joystick_1_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM1->bt3.Joystick_1_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM1->bt3.Joystick_1_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM1->bt3.Joystick_1_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM1->bt5.Joystick_1_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM1->bt5.Joystick_1_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM1->bt6.Joystick_1_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM1->bt6.Joystick_1_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM1->bt6.Joystick_1_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM1->bt6.Joystick_1_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM1->bt7.Joystick_1_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM1->bt7.Joystick_1_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM1->bt7.Joystick_1_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM1->bt7.Joystick_1_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM1->bt8.Joystick_1_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM1->bt8.Joystick_1_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM1->bt8.Joystick_1_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM1->bt8.Joystick_1_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM1 ( J1939_MESSAGE *J1939_MESSAGE,getEJM1_t *EJM1)
{
       uint64_t buff;
    EJM1->bt1.Joystick_1_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM1->bt1.Joystick_1_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM1->bt1.Joystick_1_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM1->bt3.Joystick_1_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM1->bt3.Joystick_1_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM1->bt3.Joystick_1_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM1->bt5.Joystick_1_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM1->bt5.Joystick_1_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM1->bt5.Joystick_1_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM1->bt7.Joystick_1_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM1->bt7.Joystick_1_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM1->bt7.Joystick_1_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM2 ( J1939_MESSAGE *J1939_MESSAGE,getBJM2_t *BJM2)
{
       uint64_t buff;
    BJM2->bt1.Joystick_2_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM2->bt1.Joystick_2_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM2->bt1.Joystick_2_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM2->bt3.Joystick_2_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM2->bt3.Joystick_2_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM2->bt3.Joystick_2_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM2->bt5.Joystick_2_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM2->bt5.Joystick_2_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM2->bt6.Joystick_2_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM2->bt6.Joystick_2_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM2->bt6.Joystick_2_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM2->bt6.Joystick_2_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM2->bt7.Joystick_2_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM2->bt7.Joystick_2_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM2->bt7.Joystick_2_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM2->bt7.Joystick_2_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM2->bt8.Joystick_2_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM2->bt8.Joystick_2_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM2->bt8.Joystick_2_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM2->bt8.Joystick_2_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM2 ( J1939_MESSAGE *J1939_MESSAGE,getEJM2_t *EJM2)
{
       uint64_t buff;
    EJM2->bt1.Joystick_2_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM2->bt1.Joystick_2_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM2->bt1.Joystick_2_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM2->bt3.Joystick_2_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM2->bt3.Joystick_2_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM2->bt3.Joystick_2_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM2->bt5.Joystick_2_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM2->bt5.Joystick_2_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM2->bt5.Joystick_2_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM2->bt7.Joystick_2_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM2->bt7.Joystick_2_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM2->bt7.Joystick_2_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckBJM3 ( J1939_MESSAGE *J1939_MESSAGE,getBJM3_t *BJM3)
{
       uint64_t buff;
    BJM3->bt1.Joystick_3_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    BJM3->bt1.Joystick_3_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    BJM3->bt1.Joystick_3_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    BJM3->bt3.Joystick_3_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    BJM3->bt3.Joystick_3_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    BJM3->bt3.Joystick_3_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    BJM3->bt5.Joystick_3_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    BJM3->bt5.Joystick_3_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
    BJM3->bt6.Joystick_3_Button_4_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    BJM3->bt6.Joystick_3_Button_3_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>2;
    BJM3->bt6.Joystick_3_Button_2_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>4;
    BJM3->bt6.Joystick_3_Button_1_Pressed_Status = J1939_MESSAGE->Mxe.Data[5]>>6;
    BJM3->bt7.Joystick_3_Button_8_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    BJM3->bt7.Joystick_3_Button_7_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    BJM3->bt7.Joystick_3_Button_6_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    BJM3->bt7.Joystick_3_Button_5_Pressed_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    BJM3->bt8.Joystick_3_Button_12_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    BJM3->bt8.Joystick_3_Button_11_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>2;
    BJM3->bt8.Joystick_3_Button_10_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
    BJM3->bt8.Joystick_3_Button_9_Pressed_Status = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckEJM3 ( J1939_MESSAGE *J1939_MESSAGE,getEJM3_t *EJM3)
{
       uint64_t buff;
    EJM3->bt1.Joystick_3_Grip_X_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    EJM3->bt1.Joystick_3_Grip_X_Axis_Lever_Left_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>2;
    EJM3->bt1.Joystick_3_Grip_X_Axis_Lever_Right_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    EJM3->bt3.Joystick_3_Grip_Y_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    EJM3->bt3.Joystick_3_Grip_Y_Axis_Lever_Back_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    EJM3->bt3.Joystick_3_Grip_Y_Axis_Lever_Forward_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    EJM3->bt5.Joystick_3_Theta_Axis_Neutral_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    EJM3->bt5.Joystick_3_Theta_Axis_Counter_Clockwise_Negative_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    EJM3->bt5.Joystick_3_Theta_Axis_Clockwise_Positive_Position_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    EJM3->bt7.Joystick_3_Theta_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    EJM3->bt7.Joystick_3_Grip_Y_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    EJM3->bt7.Joystick_3_Grip_X_Axis_Detent_Position_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckMCI ( J1939_MESSAGE *J1939_MESSAGE,getMCI_t *MCI)
{
       uint64_t buff;
    MCI->bt1.Engine_Throttle_Synchronization_Mode_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
    MCI->bt1.Trolling_Mode_Status = J1939_MESSAGE->Mxe.Data[0]>>4;
    MCI->bt1.Slow_Vessel_Mode_Status = J1939_MESSAGE->Mxe.Data[0]>>6;
}
void CheckFWD ( J1939_MESSAGE *J1939_MESSAGE,getFWD_t *FWD)
{
       uint64_t buff;
    FWD->bt1.Front_Wheel_Drive_Actuator_Status = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckAMB2 ( J1939_MESSAGE *J1939_MESSAGE,getAMB2_t *AMB2)
{
       uint64_t buff;
    AMB2->Solar_Intensity_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    AMB2->Solar_Sensor_Maximum = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AMB2->Specific_Humidity = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AMB2->Calculated_Ambient_Air_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AMB2->Barometric_Absolute_Pressure__High_Resolution_ = Parameter_Translate(buff ,0.1,0) ;
}
void CheckCACI ( J1939_MESSAGE *J1939_MESSAGE,getCACI_t *CACI)
{
       uint64_t buff;
    CACI->Cab_A_C_Refrigerant_Compressor_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],16,0) ;
}
void CheckSPR ( J1939_MESSAGE *J1939_MESSAGE,getSPR_t *SPR)
{
       uint64_t buff;
    SPR->Pneumatic_Supply_Pressure_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],8,0) ;
    SPR->Parking_and_or_Trailer_Air_Pressure_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],8,0) ;
    SPR->Service_Brake_Air_Pressure_Request_Circuit_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],8,0) ;
    SPR->Service_Brake_Air_Pressure_Request_Circuit_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],8,0) ;
    SPR->Auxiliary_Equipment_Supply_Pressure_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],8,0) ;
    SPR->Air_Suspension_Supply_Pressure_Request = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],8,0) ;
}
void CheckEOAC ( J1939_MESSAGE *J1939_MESSAGE,getEOAC_t *EOAC)
{
       uint64_t buff;
    EOAC->Travel_Velocity_Control_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
}
void CheckEPD ( J1939_MESSAGE *J1939_MESSAGE,getEPD_t *EPD)
{
       uint64_t buff;
    EPD->Payload_Percentage = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
}
void CheckMVS ( J1939_MESSAGE *J1939_MESSAGE,getMVS_t *MVS)
{
       uint64_t buff;
    MVS->Maximum_Vehicle_Speed_Limit_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    MVS->Maximum_Vehicle_Speed_Limit_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    MVS->Maximum_Vehicle_Speed_Limit_3 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    MVS->Maximum_Vehicle_Speed_Limit_4 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    MVS->Maximum_Vehicle_Speed_Limit_5 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    MVS->Maximum_Vehicle_Speed_Limit_6 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    MVS->Maximum_Vehicle_Speed_Limit_7 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,0) ;
    MVS->Applied_Vehicle_Speed_Limit = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,0) ;
}
void CheckHBS ( J1939_MESSAGE *J1939_MESSAGE,getHBS_t *HBS)
{
       uint64_t buff;
    HBS->Hydraulic_Brake_Pressure_Circuit_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],100,0) ;
    HBS->Hydraulic_Brake_Pressure_Circuit_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],100,0) ;
    HBS->bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_1 = J1939_MESSAGE->Mxe.Data[2]>>0;
    HBS->bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_2 = J1939_MESSAGE->Mxe.Data[2]>>2;
    HBS->bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_1 = J1939_MESSAGE->Mxe.Data[2]>>4;
    HBS->bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_2 = J1939_MESSAGE->Mxe.Data[2]>>6;
    HBS->bt4.Hydraulic_Brake_System_Audible_Warning_Command = J1939_MESSAGE->Mxe.Data[3]>>0;
    HBS->bt4.Hydraulic_Brake_Fluid_Level_Switch = J1939_MESSAGE->Mxe.Data[3]>>2;
}
void CheckET ( J1939_MESSAGE *J1939_MESSAGE,getET_t *ET)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ET->Engine_Exhaust_Gas_Temperature___Right_Manifold = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ET->Engine_Exhaust_Gas_Temperature___Left_Manifold = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckLD ( J1939_MESSAGE *J1939_MESSAGE,getLD_t *LD)
{
       uint64_t buff;
    LD->bt1.Running_Light = J1939_MESSAGE->Mxe.Data[0]>>0;
    LD->bt1.Alternate_Beam_Head_Light_Data = J1939_MESSAGE->Mxe.Data[0]>>2;
    LD->bt1.Low_Beam_Head_Light_Data = J1939_MESSAGE->Mxe.Data[0]>>4;
    LD->bt1.High_Beam_Head_Light_Data = J1939_MESSAGE->Mxe.Data[0]>>6;
    LD->bt2.Tractor_Front_Fog_Lights = J1939_MESSAGE->Mxe.Data[1]>>0;
    LD->bt2.Rotating_Beacon_Light = J1939_MESSAGE->Mxe.Data[1]>>2;
    LD->bt2.Right_Turn_Signal_Lights = J1939_MESSAGE->Mxe.Data[1]>>4;
    LD->bt2.Left_Turn_Signal_Lights = J1939_MESSAGE->Mxe.Data[1]>>6;
    LD->bt3.Back_Up_Light_and_Alarm_Horn = J1939_MESSAGE->Mxe.Data[2]>>0;
    LD->bt3.Center_Stop_Light = J1939_MESSAGE->Mxe.Data[2]>>2;
    LD->bt3.Right_Stop_Light = J1939_MESSAGE->Mxe.Data[2]>>4;
    LD->bt3.Left_Stop_Light = J1939_MESSAGE->Mxe.Data[2]>>6;
    LD->bt4.Implement_Clearance_Light = J1939_MESSAGE->Mxe.Data[3]>>0;
    LD->bt4.Tractor_Clearance_Light = J1939_MESSAGE->Mxe.Data[3]>>2;
    LD->bt4.Implement_Marker_Light = J1939_MESSAGE->Mxe.Data[3]>>4;
    LD->bt4.Tractor_Marker_Light = J1939_MESSAGE->Mxe.Data[3]>>6;
    LD->bt5.Rear_Fog_Lights = J1939_MESSAGE->Mxe.Data[4]>>0;
    LD->bt5.Tractor_Underside_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[4]>>2;
    LD->bt5.Tractor_Rear_Low_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[4]>>4;
    LD->bt5.Tractor_Rear_High_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[4]>>6;
    LD->bt6.Tractor_Side_Low_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[5]>>0;
    LD->bt6.Tractor_Side_High_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[5]>>2;
    LD->bt6.Tractor_Front_Low_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[5]>>4;
    LD->bt6.Tractor_Front_High_Mounted_Work_Lights = J1939_MESSAGE->Mxe.Data[5]>>6;
    LD->bt7.Implement_OEM_Option_2_Light = J1939_MESSAGE->Mxe.Data[6]>>0;
    LD->bt7.Implement_OEM_Option_1_Light = J1939_MESSAGE->Mxe.Data[6]>>2;
    LD->bt7.Implement_Right_Facing_Work_Light = J1939_MESSAGE->Mxe.Data[6]>>4;
    LD->bt7.Implement_Left_Forward_Work_Light = J1939_MESSAGE->Mxe.Data[6]>>6;
    LD->bt8.Implement_Right_Forward_Work_Light = J1939_MESSAGE->Mxe.Data[7]>>2;
    LD->bt8.Implement_Left_Facing_Work_Light = J1939_MESSAGE->Mxe.Data[7]>>4;
    LD->bt8.Implement_Rear_Work_Light = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckLCMD ( J1939_MESSAGE *J1939_MESSAGE,getLCMD_t *LCMD)
{
       uint64_t buff;
    LCMD->bt1.Running_Light_Command = J1939_MESSAGE->Mxe.Data[0]>>0;
    LCMD->bt1.Alternate_Beam_Head_Light_Command = J1939_MESSAGE->Mxe.Data[0]>>2;
    LCMD->bt1.Low_Beam_Head_Light_Command = J1939_MESSAGE->Mxe.Data[0]>>4;
    LCMD->bt1.High_Beam_Head_Light_Command = J1939_MESSAGE->Mxe.Data[0]>>6;
    LCMD->bt2.Tractor_Front_Fog_Lights_Command = J1939_MESSAGE->Mxe.Data[1]>>0;
    LCMD->bt2.Rotating_Beacon_Light_Command = J1939_MESSAGE->Mxe.Data[1]>>2;
    LCMD->bt2.Right_Turn_Signal_Lights_Command = J1939_MESSAGE->Mxe.Data[1]>>4;
    LCMD->bt2.Left_Turn_Signal_Lights_Command = J1939_MESSAGE->Mxe.Data[1]>>6;
    LCMD->bt3.Back_Up_Light_and_Alarm_Horn_Command = J1939_MESSAGE->Mxe.Data[2]>>0;
    LCMD->bt3.Center_Stop_Light_Command = J1939_MESSAGE->Mxe.Data[2]>>2;
    LCMD->bt3.Right_Stop_Light_Command = J1939_MESSAGE->Mxe.Data[2]>>4;
    LCMD->bt3.Left_Stop_Light_Command = J1939_MESSAGE->Mxe.Data[2]>>6;
    LCMD->bt4.Implement_Clearance_Light_Command = J1939_MESSAGE->Mxe.Data[3]>>0;
    LCMD->bt4.Tractor_Clearance_Light_Command = J1939_MESSAGE->Mxe.Data[3]>>2;
    LCMD->bt4.Implement_Marker_Light_Command = J1939_MESSAGE->Mxe.Data[3]>>4;
    LCMD->bt4.Tractor_Marker_Light_Command = J1939_MESSAGE->Mxe.Data[3]>>6;
    LCMD->bt5.Rear_Fog_Light_Command = J1939_MESSAGE->Mxe.Data[4]>>0;
    LCMD->bt5.Tractor_Underside_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[4]>>2;
    LCMD->bt5.Tractor_Rear_Low_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[4]>>4;
    LCMD->bt5.Tractor_Rear_High_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[4]>>6;
    LCMD->bt6.Tractor_Side_Low_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[5]>>0;
    LCMD->bt6.Tractor_Side_High_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[5]>>2;
    LCMD->bt6.Tractor_Front_Low_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[5]>>4;
    LCMD->bt6.Tractor_Front_High_Mounted_Work_Lights_Command = J1939_MESSAGE->Mxe.Data[5]>>6;
    LCMD->bt7.Implement_OEM_Option_2_Light_Command = J1939_MESSAGE->Mxe.Data[6]>>0;
    LCMD->bt7.Implement_OEM_Option_1_Light_Command = J1939_MESSAGE->Mxe.Data[6]>>2;
    LCMD->bt7.Implement_Right_Facing_Work_Light_Command = J1939_MESSAGE->Mxe.Data[6]>>4;
    LCMD->bt7.Implement_Left_Forward_Work_Light_Command = J1939_MESSAGE->Mxe.Data[6]>>6;
    LCMD->bt8.Lighting_Data_Request_Command = J1939_MESSAGE->Mxe.Data[7]>>0;
    LCMD->bt8.Implement_Right_Forward_Work_Light_Command = J1939_MESSAGE->Mxe.Data[7]>>2;
    LCMD->bt8.Implement_Left_Facing_Work_Light_Command = J1939_MESSAGE->Mxe.Data[7]>>4;
    LCMD->bt8.Implement_Rear_Work_Light_Command = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckETC7 ( J1939_MESSAGE *J1939_MESSAGE,getETC7_t *ETC7)
{
       uint64_t buff;
    ETC7->bt1.Transmission_Current_Range_Display_Blank_State = J1939_MESSAGE->Mxe.Data[0]>>0;
    ETC7->bt1.Transmission_Service_Indicator = J1939_MESSAGE->Mxe.Data[0]>>2;
    ETC7->bt1.Transmission_Requested_Range_Display_Blank_State = J1939_MESSAGE->Mxe.Data[0]>>4;
    ETC7->bt1.Transmission_Requested_Range_Display_Flash_State = J1939_MESSAGE->Mxe.Data[0]>>6;
    ETC7->bt2.Transmission_Ready_for_Brake_Release = J1939_MESSAGE->Mxe.Data[1]>>0;
    ETC7->bt2.Active_Shift_Console_Indicator = J1939_MESSAGE->Mxe.Data[1]>>2;
    ETC7->bt2.Transmission_Engine_Crank_Enable = J1939_MESSAGE->Mxe.Data[1]>>4;
    ETC7->bt2.Transmission_Shift_Inhibit_Indicator = J1939_MESSAGE->Mxe.Data[1]>>6;
    ETC7->bt3.Transmission_Mode_4_Indicator = J1939_MESSAGE->Mxe.Data[2]>>0;
    ETC7->bt3.Transmission_Mode_3_Indicator = J1939_MESSAGE->Mxe.Data[2]>>2;
    ETC7->bt3.Transmission_Mode_2_Indicator = J1939_MESSAGE->Mxe.Data[2]>>4;
    ETC7->bt3.Transmission_Mode_1_Indicator = J1939_MESSAGE->Mxe.Data[2]>>6;
    ETC7->Transmission_Requested_Gear_Feedback = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    ETC7->bt5.Transmission_Mode_5_Indicator = J1939_MESSAGE->Mxe.Data[4]>>0;
    ETC7->bt5.Transmission_Mode_6_Indicator = J1939_MESSAGE->Mxe.Data[4]>>2;
    ETC7->bt5.Transmission_Mode_7_Indicator = J1939_MESSAGE->Mxe.Data[4]>>4;
    ETC7->bt5.Transmission_Mode_8_Indicator = J1939_MESSAGE->Mxe.Data[4]>>6;
    ETC7->bt6.Transmission_Reverse_Gear_Shift_Inhibit_Status = J1939_MESSAGE->Mxe.Data[5]>>0;
    ETC7->bt6.Transmission_Warning_Indicator = J1939_MESSAGE->Mxe.Data[5]>>2;
}
void CheckTCFG2 ( J1939_MESSAGE *J1939_MESSAGE,getTCFG2_t *TCFG2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TCFG2->Transmission_Torque_Limit = Parameter_Translate(buff ,1,0) ;
}
void CheckML ( J1939_MESSAGE *J1939_MESSAGE,getML_t *ML)
{
       uint64_t buff;
    ML->bt1.Rear_Black_Out_Marker_Select = J1939_MESSAGE->Mxe.Data[0]>>0;
    ML->bt1.Front_Black_Out_Marker_Lamp_Select = J1939_MESSAGE->Mxe.Data[0]>>2;
    ML->bt1.Convoy_Lamp_Select = J1939_MESSAGE->Mxe.Data[0]>>4;
    ML->bt1.Convoy_Driving_Lamp_Select = J1939_MESSAGE->Mxe.Data[0]>>6;
    ML->bt3.Black_Out_Brake_Stop_Lamp_Select = J1939_MESSAGE->Mxe.Data[2]>>6;
    ML->bt4.Night_Vision_Illuminator_Select = J1939_MESSAGE->Mxe.Data[3]>>0;
    ML->bt4.Black_Out_Work_Lamp_Select = J1939_MESSAGE->Mxe.Data[3]>>6;
    ML->Operators_Black_Out_Intensity_Selection = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckTAVG ( J1939_MESSAGE *J1939_MESSAGE,getTAVG_t *TAVG)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TAVG->Engine_Total_Average_Fuel_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TAVG->Engine_Total_Average_Fuel_Economy = Parameter_Translate(buff ,1,0) ;
}
void CheckDC1 ( J1939_MESSAGE *J1939_MESSAGE,getDC1_t *DC1)
{
       uint64_t buff;
    DC1->bt1.Position_of_doors = J1939_MESSAGE->Mxe.Data[0]>>0;
    DC1->bt1.Ramp___Wheel_Chair_Lift_Position = J1939_MESSAGE->Mxe.Data[0]>>4;
    DC1->bt1.Status_2_of_doors = J1939_MESSAGE->Mxe.Data[0]>>6;
}
void CheckVDC1 ( J1939_MESSAGE *J1939_MESSAGE,getVDC1_t *VDC1)
{
       uint64_t buff;
    VDC1->bt1.VDC_Information_Signal = J1939_MESSAGE->Mxe.Data[0]>>0;
    VDC1->bt1.VDC_Fully_Operational = J1939_MESSAGE->Mxe.Data[0]>>2;
    VDC1->bt1.VDC_brake_light_request = J1939_MESSAGE->Mxe.Data[0]>>4;
    VDC1->bt2.ROP_Engine_Control_active = J1939_MESSAGE->Mxe.Data[1]>>0;
    VDC1->bt2.ROP_Brake_Control_active = J1939_MESSAGE->Mxe.Data[1]>>2;
    VDC1->bt2.YC_Engine_Control_active = J1939_MESSAGE->Mxe.Data[1]>>4;
    VDC1->bt2.YC_Brake_Control_active = J1939_MESSAGE->Mxe.Data[1]>>6;
    VDC1->bt3.Trailer_VDC_Active = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckBT1 ( J1939_MESSAGE *J1939_MESSAGE,getBT1_t *BT1)
{
       uint64_t buff;
    BT1->Battery_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    BT1->Battery_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
}
void CheckACC2 ( J1939_MESSAGE *J1939_MESSAGE,getACC2_t *ACC2)
{
       uint64_t buff;
    ACC2->bt1.ACC_usage_demand = J1939_MESSAGE->Mxe.Data[0]>>0;
    ACC2->bt1.Requested_ACC_Distance_Mode = J1939_MESSAGE->Mxe.Data[0]>>5;
}
void CheckVEP3 ( J1939_MESSAGE *J1939_MESSAGE,getVEP3_t *VEP3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    VEP3->Alternator_Current__High_Range_Resolution_ = Parameter_Translate(buff ,0.05,-1600) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VEP3->Net_Battery_Current__High_Range_Resolution_ = Parameter_Translate(buff ,0.05,-1600) ;
}
void CheckRTC1 ( J1939_MESSAGE *J1939_MESSAGE,getRTC1_t *RTC1)
{
       uint64_t buff;
    RTC1->Low_Limit_Threshold_for_Maximum_RPM_from_Retarder = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],32,0) ;
    RTC1->High_Limit_Threshold_for_Minimum_Continuous_RPM_from_Retarder = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],32,0) ;
    RTC1->Low_Limit_Threshold_for_Maximum_Torque_from_Retarder = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    RTC1->High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Retarder = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    RTC1->Maximum_Continuous_Retarder_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],32,0) ;
    RTC1->Minimum_Continuous_Retarder_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],32,0) ;
    RTC1->Maximum_Continuous_Retarder_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    RTC1->Minimum_Continuous_Retarder_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckECT1 ( J1939_MESSAGE *J1939_MESSAGE,getECT1_t *ECT1)
{
       uint64_t buff;
    ECT1->Engine_Low_Limit_Threshold_for_Maximum_RPM_from_Engine = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],32,0) ;
    ECT1->Engine_High_Limit_Threshold_for_Minimum_Continuous_Engine_RPM = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],32,0) ;
    ECT1->Engine_Low_Limit_Threshold_for_Maximum_Torque_from_Engine = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    ECT1->Engine_High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Engine = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    ECT1->Engine_Maximum_Continuous_RPM = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],32,0) ;
    ECT1->Engine_Minimum_Continuous_RPM = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],32,0) ;
    ECT1->Engine_Maximum_Continuous_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    ECT1->Engine_Minimum_Continuous_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckGFD ( J1939_MESSAGE *J1939_MESSAGE,getGFD_t *GFD)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    GFD->Specific_Heat_Ratio = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GFD->Reference_Engine_Gas_Mass_Flow_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    GFD->Fuel_energy_content = Parameter_Translate(buff ,1,0) ;
}
void CheckAT1T1I ( J1939_MESSAGE *J1939_MESSAGE,getAT1T1I_t *AT1T1I)
{
       uint64_t buff;
    AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_2 = Parameter_Translate(buff ,0.1,0) ;
    AT1T1I->bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[4]>>0;
    AT1T1I->bt5.Aftertreatment_Selective_Catalytic_Reduction_Operator_Inducement_Active = J1939_MESSAGE->Mxe.Data[4]>>5;
    AT1T1I->bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[5]>>0;
    AT1T1I->bt6.Aftertreatment_SCR_Operator_Inducement_Severity = J1939_MESSAGE->Mxe.Data[5]>>5;
    AT1T1I->Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    AT1T1I->bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[7]>>0;
}
void CheckASC5 ( J1939_MESSAGE *J1939_MESSAGE,getASC5_t *ASC5)
{
       uint64_t buff;
    ASC5->Damper_Stiffness_Front_Axle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    ASC5->Damper_Stiffness_Rear_Axle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    ASC5->Damper_Stiffness_Lift___Tag_Axle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    ASC5->bt4.Electronic_Shock_Absorber_Control_Mode__ = J1939_MESSAGE->Mxe.Data[3]>>0;
    ASC5->bt4.Electronic_Shock_Absorber_Control_Mode___Rear_Axle = J1939_MESSAGE->Mxe.Data[3]>>2;
    ASC5->bt4.Electronic_Shock_Absorber_Control_Mode___Lift_Tag_Axle = J1939_MESSAGE->Mxe.Data[3]>>4;
}
void CheckASC4 ( J1939_MESSAGE *J1939_MESSAGE,getASC4_t *ASC4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ASC4->Bellow_Pressure_Front_Axle_Left = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ASC4->Bellow_Pressure_Front_Axle_Right = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ASC4->Bellow_Pressure_Rear_Axle_Left = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ASC4->Bellow_Pressure_Rear_Axle_Right = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ASC4->Relative_Level_Front_Axle_Right = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ASC4->Relative_Level_Rear_Axle_Left = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ASC4->Relative_Level_Rear_Axle_Right = Parameter_Translate(buff ,0.1,200) ;
}
void CheckASC1 ( J1939_MESSAGE *J1939_MESSAGE,getASC1_t *ASC1)
{
       uint64_t buff;
    ASC1->bt1.Nominal_Level_Front_Axle = J1939_MESSAGE->Mxe.Data[0]>>0;
    ASC1->bt1.Nominal_Level_Rear_Axle = J1939_MESSAGE->Mxe.Data[0]>>4;
    ASC1->bt2.Below_Nominal_Level_Front_Axle = J1939_MESSAGE->Mxe.Data[1]>>0;
    ASC1->bt2.Below_Nominal_Level_Rear_Axle = J1939_MESSAGE->Mxe.Data[1]>>2;
    ASC1->bt2.Above_Nominal_Level_Front_Axle = J1939_MESSAGE->Mxe.Data[1]>>4;
    ASC1->bt2.Above_Nominal_Level_Rear_Axle = J1939_MESSAGE->Mxe.Data[1]>>6;
    ASC1->bt3.Lowering_Control_Mode_Front_Axle = J1939_MESSAGE->Mxe.Data[2]>>0;
    ASC1->bt3.Lowering_Control_Mode_Rear_Axle = J1939_MESSAGE->Mxe.Data[2]>>2;
    ASC1->bt3.Lifting_Control_Mode_Front_Axle = J1939_MESSAGE->Mxe.Data[2]>>4;
    ASC1->bt3.Lifting_Control_Mode_Rear_Axle = J1939_MESSAGE->Mxe.Data[2]>>6;
    ASC1->bt4.Kneeling_Information = J1939_MESSAGE->Mxe.Data[3]>>0;
    ASC1->bt4.Level_Control_Mode = J1939_MESSAGE->Mxe.Data[3]>>4;
    ASC1->bt5.Security_Device = J1939_MESSAGE->Mxe.Data[4]>>0;
    ASC1->bt5.Vehicle_Motion_Inhibit = J1939_MESSAGE->Mxe.Data[4]>>2;
    ASC1->bt5.Door_Release = J1939_MESSAGE->Mxe.Data[4]>>4;
    ASC1->bt5.Lift_Axle_1_Position = J1939_MESSAGE->Mxe.Data[4]>>6;
    ASC1->bt6.Front_Axle_in_Bumper_Range = J1939_MESSAGE->Mxe.Data[5]>>0;
    ASC1->bt6.Rear_Axle_in_Bumper_Range = J1939_MESSAGE->Mxe.Data[5]>>2;
    ASC1->bt6.Lift_Axle_2_Position = J1939_MESSAGE->Mxe.Data[5]>>6;
    ASC1->bt7.Suspension_Remote_Control_1 = J1939_MESSAGE->Mxe.Data[6]>>0;
    ASC1->bt7.Suspension_Remote_control_2 = J1939_MESSAGE->Mxe.Data[6]>>2;
    ASC1->bt7.Allow_Level_Control_During_Braking_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    ASC1->bt7.Speed_Dependant_Level_Control_Status = J1939_MESSAGE->Mxe.Data[6]>>6;
    ASC1->bt8.Suspension_Control_Refusal_Information = J1939_MESSAGE->Mxe.Data[7]>>0;
    ASC1->bt8.Memory_level = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckFLI2 ( J1939_MESSAGE *J1939_MESSAGE,getFLI2_t *FLI2)
{
       uint64_t buff;
    FLI2->bt1.Lane_Tracking_Status_Right_Side = J1939_MESSAGE->Mxe.Data[0]>>2;
    FLI2->bt1.Lane_Tracking_Status_Left_Side = J1939_MESSAGE->Mxe.Data[0]>>4;
    FLI2->bt1.Lane_Departure_Indication_Enable_Status = J1939_MESSAGE->Mxe.Data[0]>>6;
}
void CheckBM ( J1939_MESSAGE *J1939_MESSAGE,getBM_t *BM)
{
       uint64_t buff;
    BM->bt1.Battery_Main_Switch_Hold_State = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckCCC ( J1939_MESSAGE *J1939_MESSAGE,getCCC_t *CCC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CCC->Auxiliary_Heater_Maximum_Output_Power = Parameter_Translate(buff ,2,0) ;
}
void CheckVF ( J1939_MESSAGE *J1939_MESSAGE,getVF_t *VF)
{
       uint64_t buff;
    VF->Hydraulic_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    VF->bt2.Hydraulic_Oil_Filter_Restriction_Switch = J1939_MESSAGE->Mxe.Data[1]>>0;
    VF->bt2.Winch_Oil_Pressure_Switch = J1939_MESSAGE->Mxe.Data[1]>>2;
    VF->Hydraulic_Oil_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
}
void CheckET3 ( J1939_MESSAGE *J1939_MESSAGE,getET3_t *ET3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ET3->Engine_Intake_Manifold_1_Air_Temperature__High_Resolution_ = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ET3->Engine_Coolant_Temperature__High_Resolution_ = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ET3->Engine_Intake_Valve_Actuation_System_Oil_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ET3->Engine_Charge_Air_Cooler_1_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEFS ( J1939_MESSAGE *J1939_MESSAGE,getEFS_t *EFS)
{
       uint64_t buff;
    EFS->Engine_Oil_Level_Remote_Reservoir = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    EFS->Engine_Fuel_Supply_Pump_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],2,0) ;
    EFS->Engine_Fuel_Filter__suction_side__Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],2,0) ;
    EFS->Engine_Waste_Oil_Reservoir_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    EFS->Engine_Oil_Filter_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],4,0) ;
    EFS->bt6.Engine_Oil_Priming_Pump_Switch = J1939_MESSAGE->Mxe.Data[5]>>0;
    EFS->bt6.Engine_Oil_Priming_State = J1939_MESSAGE->Mxe.Data[5]>>2;
    EFS->bt6.Engine_Oil_Pre_Heated_State = J1939_MESSAGE->Mxe.Data[5]>>4;
    EFS->bt6.Engine_Coolant_Pre_heated_State = J1939_MESSAGE->Mxe.Data[5]>>6;
    EFS->bt7.Engine_Ventilation_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
    EFS->bt7.Fuel_Pump_Primer_Status = J1939_MESSAGE->Mxe.Data[6]>>3;
}
void CheckTCO1 ( J1939_MESSAGE *J1939_MESSAGE,getTCO1_t *TCO1)
{
       uint64_t buff;
    TCO1->bt1.Driver_1_working_state = J1939_MESSAGE->Mxe.Data[0]>>0;
    TCO1->bt1.Driver_2_working_state = J1939_MESSAGE->Mxe.Data[0]>>3;
    TCO1->bt1.Vehicle_motion = J1939_MESSAGE->Mxe.Data[0]>>6;
    TCO1->bt2.Driver_1_Time_Related_States = J1939_MESSAGE->Mxe.Data[1]>>0;
    TCO1->bt2.Driver_card_driver_1 = J1939_MESSAGE->Mxe.Data[1]>>4;
    TCO1->bt2.Vehicle_Overspeed = J1939_MESSAGE->Mxe.Data[1]>>6;
    TCO1->bt3.Driver_2_Time_Related_States = J1939_MESSAGE->Mxe.Data[2]>>0;
    TCO1->bt3.Driver_card_driver_2 = J1939_MESSAGE->Mxe.Data[2]>>4;
    TCO1->bt4.System_event = J1939_MESSAGE->Mxe.Data[3]>>0;
    TCO1->bt4.Handling_information = J1939_MESSAGE->Mxe.Data[3]>>2;
    TCO1->bt4.Tachograph_performance = J1939_MESSAGE->Mxe.Data[3]>>4;
    TCO1->bt4.Direction_indicator = J1939_MESSAGE->Mxe.Data[3]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TCO1->Tachograph_output_shaft_speed = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TCO1->Tachograph_vehicle_speed = Parameter_Translate(buff ,1,0) ;
}
void CheckHTR ( J1939_MESSAGE *J1939_MESSAGE,getHTR_t *HTR)
{
       uint64_t buff;
    HTR->Auxiliary_Heater_Output_Coolant_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    HTR->Auxiliary_Heater_Input_Air_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    HTR->Auxiliary_Heater_Output_Power_Percent = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    HTR->bt4.Auxiliary_Heater_Mode = J1939_MESSAGE->Mxe.Data[3]>>0;
    HTR->bt5.Auxiliary_Heater_Water_Pump_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    HTR->bt5.Cab_Ventilation = J1939_MESSAGE->Mxe.Data[4]>>2;
    HTR->bt5.Engine_Heating_Zone = J1939_MESSAGE->Mxe.Data[4]>>4;
    HTR->bt5.Cab_Heating_Zone = J1939_MESSAGE->Mxe.Data[4]>>6;
}
void CheckHRW ( J1939_MESSAGE *J1939_MESSAGE,getHRW_t *HRW)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    HRW->Front_Axle_Left_Wheel_Speed = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    HRW->Front_axle_right_wheel_speed = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    HRW->Rear_axle_left_wheel_speed = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    HRW->Rear_axle_right_wheel_speed = Parameter_Translate(buff ,1,0) ;
}
void CheckACC1 ( J1939_MESSAGE *J1939_MESSAGE,getACC1_t *ACC1)
{
       uint64_t buff;
    ACC1->Speed_of_forward_vehicle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    ACC1->Distance_to_forward_vehicle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    ACC1->Adaptive_Cruise_Control_Set_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    ACC1->bt4.Adaptive_Cruise_Control_Mode = J1939_MESSAGE->Mxe.Data[3]>>0;
    ACC1->bt4.Adaptive_cruise_control_set_distance_mode = J1939_MESSAGE->Mxe.Data[3]>>3;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ACC1->Road_curvature = Parameter_Translate(buff ,1,1) ;
    ACC1->bt7.ACC_Target_Detected = J1939_MESSAGE->Mxe.Data[6]>>0;
    ACC1->bt7.ACC_System_Shutoff_Warning = J1939_MESSAGE->Mxe.Data[6]>>2;
    ACC1->bt7.ACC_Distance_Alert_Signal = J1939_MESSAGE->Mxe.Data[6]>>4;
    ACC1->bt7.Forward_Collision_Warning = J1939_MESSAGE->Mxe.Data[6]>>6;
}
void CheckCVW ( J1939_MESSAGE *J1939_MESSAGE,getCVW_t *CVW)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CVW->Powered_Vehicle_Weight = Parameter_Translate(buff ,10,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CVW->Gross_Combination_Vehicle_Weight = Parameter_Translate(buff ,10,0) ;
}
void CheckLTP ( J1939_MESSAGE *J1939_MESSAGE,getLTP_t *LTP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LTP->Laser_Tracer_Target_Deviation = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LTP->Laser_Tracer_Vertical_Distance = Parameter_Translate(buff ,0.1,0) ;
    LTP->Laser_Tracer_Horizontal_Deviation = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,0) ;
    LTP->bt6.LED_Display_Data_2 = J1939_MESSAGE->Mxe.Data[5]>>0;
    LTP->bt7.Laser_Tracer_Information = J1939_MESSAGE->Mxe.Data[6]>>0;
}
void CheckLBC ( J1939_MESSAGE *J1939_MESSAGE,getLBC_t *LBC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LBC->Blade_Duration_and_Direction = Parameter_Translate(buff ,0.1,276.8) ;
    LBC->bt3.Blade_Control_Mode = J1939_MESSAGE->Mxe.Data[2]>>0;
    LBC->bt4.Blade_Control_Mode___Left = J1939_MESSAGE->Mxe.Data[3]>>0;
    LBC->bt4.Blade_Control_Mode___Right = J1939_MESSAGE->Mxe.Data[3]>>4;
    LBC->bt5.Land_Leveling_System_Enable_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
}
void CheckLMP ( J1939_MESSAGE *J1939_MESSAGE,getLMP_t *LMP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LMP->Mast_Position = Parameter_Translate(buff ,0.1,200) ;
}
void CheckLSP ( J1939_MESSAGE *J1939_MESSAGE,getLSP_t *LSP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LSP->Modify_Leveling_System_Set_Point = Parameter_Translate(buff ,0.1,200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    LSP->Blade_Height_Set_Point___High_Resolution = Parameter_Translate(buff ,100,-209.7152) ;
}
void CheckLVD ( J1939_MESSAGE *J1939_MESSAGE,getLVD_t *LVD)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LVD->Laser_Strike_Vertical_Deviation = Parameter_Translate(buff ,0.1,200) ;
    LVD->Laser_Receiver_Type = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    LVD->Laser_Strike_Data_Latency = Parameter_Translate(buff ,51.2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    LVD->Absolute_Laser_Strike_Position = Parameter_Translate(buff ,0.1,0) ;
}
void CheckLVDD ( J1939_MESSAGE *J1939_MESSAGE,getLVDD_t *LVDD)
{
       uint64_t buff;
    LVDD->bt1.LED_Display_Data_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    LVDD->bt2.LED_Display_Mode_Control = J1939_MESSAGE->Mxe.Data[1]>>0;
    LVDD->bt2.LED_Display_Deadband_Control = J1939_MESSAGE->Mxe.Data[1]>>4;
    LVDD->bt3.LED_Pattern_Control = J1939_MESSAGE->Mxe.Data[2]>>0;
    LVDD->bt3.Display_Deadbands = J1939_MESSAGE->Mxe.Data[2]>>4;
}
void CheckAP ( J1939_MESSAGE *J1939_MESSAGE,getAP_t *AP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AP->Auxiliary_Vacuum_Pressure_Reading = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    AP->Auxiliary_Gage_Pressure_Reading_1 = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AP->Auxiliary_Absolute_Pressure_Reading = Parameter_Translate(buff ,0.5,0) ;
}
void CheckTP1 ( J1939_MESSAGE *J1939_MESSAGE,getTP1_t *TP1)
{
       uint64_t buff;
    TP1->Tire_Pressure_Check_Interval = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    TP1->bt2.Steer_Channel_Mode = J1939_MESSAGE->Mxe.Data[1]>>0;
    TP1->bt3.Trailer_tag_Channel_Mode = J1939_MESSAGE->Mxe.Data[2]>>0;
    TP1->bt3.Drive_Channel_Mode = J1939_MESSAGE->Mxe.Data[2]>>4;
    TP1->bt4.PCU_Drive_Solenoid_Status = J1939_MESSAGE->Mxe.Data[3]>>0;
    TP1->bt4.PCU_Steer_Solenoid_Status = J1939_MESSAGE->Mxe.Data[3]>>2;
    TP1->bt4.Tire_Pressure_Supply_Switch_Status = J1939_MESSAGE->Mxe.Data[3]>>4;
    TP1->bt5.PCU_Deflate_Solenoid_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    TP1->bt5.PCU_Control_Solenoid_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    TP1->bt5.PCU_Supply_Solenoid_Status = J1939_MESSAGE->Mxe.Data[4]>>4;
    TP1->bt5.PCU_Trailer_Tag_or_Push_Solenoid_Status = J1939_MESSAGE->Mxe.Data[4]>>6;
}
void CheckTP2 ( J1939_MESSAGE *J1939_MESSAGE,getTP2_t *TP2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TP2->Trailer_Tag_Or_Push_Channel_Tire_Pressure_Target = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TP2->Drive_Channel_Tire_Pressure_Target = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TP2->Steer_Channel_Tire_Pressure_Target = Parameter_Translate(buff ,0.5,0) ;
}
void CheckTP3 ( J1939_MESSAGE *J1939_MESSAGE,getTP3_t *TP3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TP3->Trailer_Tag_Or_Push_Channel_Tire_Pressure = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TP3->Drive_Channel_Tire_Pressure = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TP3->Steer_Channel_Tire_Pressure = Parameter_Translate(buff ,0.5,0) ;
}
void CheckCT1 ( J1939_MESSAGE *J1939_MESSAGE,getCT1_t *CT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CT1->Engine_Cylinder_1_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CT1->Engine_Cylinder_2_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    CT1->Engine_Cylinder_3_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    CT1->Engine_Cylinder_4_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
}
void CheckCT2 ( J1939_MESSAGE *J1939_MESSAGE,getCT2_t *CT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CT2->Engine_Cylinder_5_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CT2->Engine_Cylinder_6_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    CT2->Engine_Cylinder_7_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    CT2->Engine_Cylinder_8_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
}
void CheckCT3 ( J1939_MESSAGE *J1939_MESSAGE,getCT3_t *CT3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CT3->Engine_Cylinder_9_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CT3->Engine_Cylinder_10_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    CT3->Engine_Cylinder_11_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    CT3->Engine_Cylinder_12_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
}
void CheckCT4 ( J1939_MESSAGE *J1939_MESSAGE,getCT4_t *CT4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CT4->Engine_Cylinder_13_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CT4->Engine_Cylinder_14_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    CT4->Engine_Cylinder_15_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    CT4->Engine_Cylinder_16_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
}
void CheckCT5 ( J1939_MESSAGE *J1939_MESSAGE,getCT5_t *CT5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CT5->Engine_Cylinder_17_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CT5->Engine_Cylinder_18_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    CT5->Engine_Cylinder_19_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    CT5->Engine_Cylinder_20_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
}
void CheckCT6 ( J1939_MESSAGE *J1939_MESSAGE,getCT6_t *CT6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    CT6->Engine_Desired_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CT6->Engine_Average_Combustion_Time = Parameter_Translate(buff ,0.01,0) ;
}
void CheckGFI2 ( J1939_MESSAGE *J1939_MESSAGE,getGFI2_t *GFI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    GFI2->Engine_Fuel_Flow_Rate_1 = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GFI2->Engine_Fuel_Flow_Rate_2 = Parameter_Translate(buff ,0.1,0) ;
    GFI2->Engine_Fuel_Valve_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    GFI2->Engine_Fuel_Valve_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    GFI2->Engine_Requested_Fuel_Valve_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    GFI2->Engine_Requested_Fuel_Valve_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckIT1 ( J1939_MESSAGE *J1939_MESSAGE,getIT1_t *IT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IT1->Engine_Cylinder_1_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IT1->Engine_Cylinder_2_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IT1->Engine_Cylinder_3_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IT1->Engine_Cylinder_4_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
}
void CheckIT2 ( J1939_MESSAGE *J1939_MESSAGE,getIT2_t *IT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IT2->Engine_Cylinder_5_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IT2->Engine_Cylinder_6_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IT2->Engine_Cylinder_7_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IT2->Engine_Cylinder_8_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
}
void CheckIT3 ( J1939_MESSAGE *J1939_MESSAGE,getIT3_t *IT3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IT3->Engine_Cylinder_9_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IT3->Engine_Cylinder_10_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IT3->Engine_Cylinder_11_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IT3->Engine_Cylinder_12_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
}
void CheckIT4 ( J1939_MESSAGE *J1939_MESSAGE,getIT4_t *IT4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IT4->Engine_Cylinder_13_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IT4->Engine_Cylinder_14_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IT4->Engine_Cylinder_15_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IT4->Engine_Cylinder_16_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
}
void CheckIT5 ( J1939_MESSAGE *J1939_MESSAGE,getIT5_t *IT5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IT5->Engine_Cylinder_17_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IT5->Engine_Cylinder_18_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IT5->Engine_Cylinder_19_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IT5->Engine_Cylinder_20_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
}
void CheckIT6 ( J1939_MESSAGE *J1939_MESSAGE,getIT6_t *IT6)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IT6->Engine_Desired_Ignition_Timing_1 = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IT6->Engine_Desired_Ignition_Timing_2 = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IT6->Engine_Desired_Ignition_Timing_3 = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IT6->Engine_Actual_Ignition_Timing = Parameter_Translate(buff ,1,-200) ;
}
void CheckISO1 ( J1939_MESSAGE *J1939_MESSAGE,getISO1_t *ISO1)
{
       uint64_t buff;
    ISO1->Engine_Cylinder_1_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    ISO1->Engine_Cylinder_2_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    ISO1->Engine_Cylinder_3_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    ISO1->Engine_Cylinder_4_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    ISO1->Engine_Cylinder_5_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    ISO1->Engine_Cylinder_6_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-125) ;
    ISO1->Engine_Cylinder_7_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    ISO1->Engine_Cylinder_8_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckISO2 ( J1939_MESSAGE *J1939_MESSAGE,getISO2_t *ISO2)
{
       uint64_t buff;
    ISO2->Engine_Cylinder_9_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    ISO2->Engine_Cylinder_10_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    ISO2->Engine_Cylinder_11_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    ISO2->Engine_Cylinder_12_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
    ISO2->Engine_Cylinder_13_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    ISO2->Engine_Cylinder_14_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-125) ;
    ISO2->Engine_Cylinder_15_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    ISO2->Engine_Cylinder_16_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckISO3 ( J1939_MESSAGE *J1939_MESSAGE,getISO3_t *ISO3)
{
       uint64_t buff;
    ISO3->Engine_Cylinder_17_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    ISO3->Engine_Cylinder_18_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    ISO3->Engine_Cylinder_19_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    ISO3->Engine_Cylinder_20_Ignition_Transformer_Secondary_Output = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-125) ;
}
void CheckGFP ( J1939_MESSAGE *J1939_MESSAGE,getGFP_t *GFP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    GFP->Engine_Fuel_Valve_1_Intake_Absolute_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GFP->Engine_Fuel_Valve_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    GFP->Engine_Air_to_Fuel_Differential_Pressure = Parameter_Translate(buff ,0.1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    GFP->Engine_Fuel = Parameter_Translate(buff ,0.1,0) ;
}
void CheckAAI ( J1939_MESSAGE *J1939_MESSAGE,getAAI_t *AAI)
{
       uint64_t buff;
    AAI->Auxiliary_Temperature_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    AAI->Auxiliary_Temperature_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    AAI->Auxiliary_Pressure_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],16,0) ;
    AAI->Auxiliary_Pressure_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],16,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AAI->Auxiliary_Level = Parameter_Translate(buff ,0.1,0) ;
    AAI->Relative_Humidity = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckVEP2 ( J1939_MESSAGE *J1939_MESSAGE,getVEP2_t *VEP2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    VEP2->Battery_Potential___Power_Input_2 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VEP2->ECU_Power_Output_Supply_Voltage_1 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    VEP2->ECU_Power_Output_Supply_Voltage_2 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VEP2->ECU_Power_Output_Supply_Voltage_3 = Parameter_Translate(buff ,0.05,0) ;
}
void CheckSP2 ( J1939_MESSAGE *J1939_MESSAGE,getSP2_t *SP2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    SP2->Engine_External_Shutdown_Air_Supply_Pressure = Parameter_Translate(buff ,0.5,0) ;
}
void CheckFL ( J1939_MESSAGE *J1939_MESSAGE,getFL_t *FL)
{
       uint64_t buff;
    FL->bt1.Engine_Fuel_Leakage_1 = J1939_MESSAGE->Mxe.Data[0]>>0;
    FL->bt1.Engine_Fuel_Leakage_2 = J1939_MESSAGE->Mxe.Data[0]>>2;
}
void CheckEI ( J1939_MESSAGE *J1939_MESSAGE,getEI_t *EI)
{
       uint64_t buff;
    EI->Engine_Pre_filter_Oil_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    EI->Engine_Exhaust_Gas_Pressure_1 = Parameter_Translate(buff ,1,-250) ;
    EI->Engine_Fuel_Rack_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EI->Engine_Gas_Mass_Flow_Rate_1 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EI->Instantaneous_Estimated_Brake_Power = Parameter_Translate(buff ,0.5,0) ;
}
void CheckEES ( J1939_MESSAGE *J1939_MESSAGE,getEES_t *EES)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EES->Electrical_Load = Parameter_Translate(buff ,0.5,0) ;
    EES->bt3.Safety_Wire_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckEAC ( J1939_MESSAGE *J1939_MESSAGE,getEAC_t *EAC)
{
       uint64_t buff;
    EAC->Engine_Auxiliary_Coolant_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    EAC->Engine_Auxiliary_Coolant_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    EAC->Sea_Water_Pump_Outlet_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],2,0) ;
    EAC->Engine_Extended_Range_Coolant_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],4,0) ;
}
void CheckRBI ( J1939_MESSAGE *J1939_MESSAGE,getRBI_t *RBI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    RBI->Engine_Operation_Time_Since_Rebuild = Parameter_Translate(buff ,1,0) ;
}
void CheckTCW ( J1939_MESSAGE *J1939_MESSAGE,getTCW_t *TCW)
{
       uint64_t buff;
    TCW->Engine_Turbocharger_Wastegate_Actuator_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    TCW->Engine_Turbocharger_Wastegate_Actuator_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    TCW->Engine_Turbocharger_Wastegate_Actuator_3_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    TCW->Engine_Turbocharger_Wastegate_Actuator_4_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    TCW->Engine_Turbocharger_Wastegate_Actuator_Control_Air_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],4,0) ;
    TCW->Engine_Desired_Turbocharger_Wastegate_Actuator_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    TCW->bt7.Engine_Turbocharger_Wastegate_Actuator_1_Preliminary_FMI = J1939_MESSAGE->Mxe.Data[6]>>0;
    TCW->bt7.Engine_Turbocharger_Wastegate_Actuator_1_Temperature_Status = J1939_MESSAGE->Mxe.Data[6]>>5;
    TCW->Engine_Desired_Turbocharger_Wastegate_Actuator_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckTCI5 ( J1939_MESSAGE *J1939_MESSAGE,getTCI5_t *TCI5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TCI5->Engine_Turbocharger_1_Turbine_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TCI5->Engine_Turbocharger_2_Turbine_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TCI5->Engine_Turbocharger_3_Turbine_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TCI5->Engine_Turbocharger_4_Turbine_Outlet_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckTCI4 ( J1939_MESSAGE *J1939_MESSAGE,getTCI4_t *TCI4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TCI4->Engine_Turbocharger_1_Turbine_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TCI4->Engine_Turbocharger_2_Turbine_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TCI4->Engine_Turbocharger_3_Turbine_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TCI4->Engine_Turbocharger_4_Turbine_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckTCI3 ( J1939_MESSAGE *J1939_MESSAGE,getTCI3_t *TCI3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TCI3->Engine_Turbocharger_1_Compressor_Intake_Pressure = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TCI3->Engine_Turbocharger_2_Compressor_Intake_Pressure = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TCI3->Engine_Turbocharger_3_Compressor_Intake_Pressure = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TCI3->Engine_Turbocharger_4_Compressor_Intake_Pressure = Parameter_Translate(buff ,1,-250) ;
}
void CheckTCI2 ( J1939_MESSAGE *J1939_MESSAGE,getTCI2_t *TCI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TCI2->Engine_Turbocharger_1_Compressor_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TCI2->Engine_Turbocharger_2_Compressor_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TCI2->Engine_Turbocharger_3_Compressor_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TCI2->Engine_Turbocharger_4_Compressor_Intake_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckTCI1 ( J1939_MESSAGE *J1939_MESSAGE,getTCI1_t *TCI1)
{
       uint64_t buff;
    TCI1->Engine_Turbocharger_Lube_Oil_Pressure_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    TCI1->Engine_Turbocharger_2_Speed = Parameter_Translate(buff ,4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    TCI1->Engine_Turbocharger_3_Speed = Parameter_Translate(buff ,4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    TCI1->Engine_Turbocharger_4_Speed = Parameter_Translate(buff ,4,0) ;
}
void CheckMBT3 ( J1939_MESSAGE *J1939_MESSAGE,getMBT3_t *MBT3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    MBT3->Engine_Main_Bearing_9_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    MBT3->Engine_Main_Bearing_10_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    MBT3->Engine_Main_Bearing_11_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckMBT2 ( J1939_MESSAGE *J1939_MESSAGE,getMBT2_t *MBT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    MBT2->Engine_Main_Bearing_5_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    MBT2->Engine_Main_Bearing_6_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    MBT2->Engine_Main_Bearing_7_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    MBT2->Engine_Main_Bearing_8_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckMBT1 ( J1939_MESSAGE *J1939_MESSAGE,getMBT1_t *MBT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    MBT1->Engine_Main_Bearing_1_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    MBT1->Engine_Main_Bearing_2_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    MBT1->Engine_Main_Bearing_3_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    MBT1->Engine_Main_Bearing_4_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEPT5 ( J1939_MESSAGE *J1939_MESSAGE,getEPT5_t *EPT5)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EPT5->Engine_Exhaust_Gas_Port_17_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EPT5->Engine_Exhaust_Gas_Port_18_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EPT5->Engine_Exhaust_Gas_Port_19_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EPT5->Engine_Exhaust_Gas_Port_20_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEPT4 ( J1939_MESSAGE *J1939_MESSAGE,getEPT4_t *EPT4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EPT4->Engine_Exhaust_Gas_Port_13_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EPT4->Engine_Exhaust_Gas_Port_14_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EPT4->Engine_Exhaust_Gas_Port_15_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EPT4->Engine_Exhaust_Gas_Port_16_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEPT3 ( J1939_MESSAGE *J1939_MESSAGE,getEPT3_t *EPT3)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EPT3->Engine_Exhaust_Gas_Port_9_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EPT3->Engine_Exhaust_Gas_Port_10_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EPT3->Engine_Exhaust_Gas_Port_11_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EPT3->Engine_Exhaust_Gas_Port_12_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEPT2 ( J1939_MESSAGE *J1939_MESSAGE,getEPT2_t *EPT2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EPT2->Engine_Exhaust_Gas_Port_5_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EPT2->Engine_Exhaust_Gas_Port_6_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EPT2->Engine_Exhaust_Gas_Port_7_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EPT2->Engine_Exhaust_Gas_Port_8_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckEPT1 ( J1939_MESSAGE *J1939_MESSAGE,getEPT1_t *EPT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EPT1->Engine_Exhaust_Gas_Port_1_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EPT1->Engine_Exhaust_Gas_Port_2_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EPT1->Engine_Exhaust_Gas_Port_3_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EPT1->Engine_Exhaust_Gas_Port_4_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckET2 ( J1939_MESSAGE *J1939_MESSAGE,getET2_t *ET2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    ET2->Engine_Oil_Temperature_2 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ET2->Engine_ECU_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ET2->Engine_Exhaust_Gas_Recirculation_1_Differential_Pressure = Parameter_Translate(buff ,1,-250) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    ET2->Engine_Exhaust_Gas_Recirculation_1_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckIMT2 ( J1939_MESSAGE *J1939_MESSAGE,getIMT2_t *IMT2)
{
       uint64_t buff;
    IMT2->Engine_Intake_Manifold_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    IMT2->Engine_Intake_Manifold_3_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    IMT2->Engine_Intake_Manifold_4_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    IMT2->Engine_Intake_Manifold_5_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-40) ;
    IMT2->Engine_Intake_Manifold_6_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
}
void CheckIMT1 ( J1939_MESSAGE *J1939_MESSAGE,getIMT1_t *IMT1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    IMT1->Engine_Turbocharger_1_Boost_Pressure = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IMT1->Engine_Turbocharger_2_Boost_Pressure = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    IMT1->Engine_Turbocharger_3_Boost_Pressure = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IMT1->Engine_Turbocharger_4_Boost_Pressure = Parameter_Translate(buff ,0.125,0) ;
}
void CheckAT ( J1939_MESSAGE *J1939_MESSAGE,getAT_t *AT)
{
       uint64_t buff;
    AT->Engine_Alternator_Bearing_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    AT->Engine_Alternator_Bearing_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    AT->Engine_Alternator_Winding_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    AT->Engine_Alternator_Winding_2_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-40) ;
    AT->Engine_Alternator_Winding_3_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-40) ;
}
void CheckACTL ( J1939_MESSAGE *J1939_MESSAGE,getACTL_t *ACTL)
{
       uint64_t buff;
    ACTL->Articulation_Angle = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
}
void CheckEO1 ( J1939_MESSAGE *J1939_MESSAGE,getEO1_t *EO1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EO1->Engine_Desired_Rated_Exhaust_Oxygen = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EO1->Engine_Desired_Exhaust_Oxygen = Parameter_Translate(buff ,0.0025,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EO1->Engine_Actual_Exhaust_Oxygen = Parameter_Translate(buff ,0.0025,0) ;
    EO1->Engine_Exhaust_Gas_Oxygen_Sensor_Fueling_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    EO1->bt8.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckAF2 ( J1939_MESSAGE *J1939_MESSAGE,getAF2_t *AF2)
{
       uint64_t buff;
    AF2->Engine_Gaseous_Fuel_Correction_Factor = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    AF2->Engine_Desired_Absolute_Intake_Manifold_Pressure__Turbo_Boost_Limit_ = Parameter_Translate(buff ,0.1,0) ;
    AF2->Engine_Turbocharger_Wastegate_Valve_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    AF2->Engine_Gas_Mass_Flow_Sensor_Fueling_Correction = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
}
void CheckETC6 ( J1939_MESSAGE *J1939_MESSAGE,getETC6_t *ETC6)
{
       uint64_t buff;
    ETC6->Recommended_Gear = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    ETC6->Highest_Possible_Gear = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-125) ;
    ETC6->Lowest_Possible_Gear = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-125) ;
    ETC6->Clutch_Life_Remaining = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
}
void CheckEBC4 ( J1939_MESSAGE *J1939_MESSAGE,getEBC4_t *EBC4)
{
       uint64_t buff;
    EBC4->Brake_Lining_Remaining_Front_Axle_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Front_Axle_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Rear_Axle_1_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Rear_Axle_1_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Rear_Axle_2_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Rear_Axle_2_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Rear_Axle_3_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    EBC4->Brake_Lining_Remaining_Rear_Axle_3_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckEBC3 ( J1939_MESSAGE *J1939_MESSAGE,getEBC3_t *EBC3)
{
       uint64_t buff;
    EBC3->Brake_Application_Pressure_High_Range_Front_Axle_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Front_Axle_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_1_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_1_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_2_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_2_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_3_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],5,0) ;
    EBC3->Brake_Application_Pressure_High_Range_Rear_Axle_3_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],5,0) ;
}
void CheckAIR1 ( J1939_MESSAGE *J1939_MESSAGE,getAIR1_t *AIR1)
{
       uint64_t buff;
    AIR1->Pneumatic_Supply_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],8,0) ;
    AIR1->Parking_and_or_Trailer_Air_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],8,0) ;
    AIR1->Service_Brake_Circuit_1_Air_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],8,0) ;
    AIR1->Service_Brake_Circuit_2_Air_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],8,0) ;
    AIR1->Auxiliary_Equipment_Supply_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],8,0) ;
    AIR1->Air_Suspension_Supply_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],8,0) ;
    AIR1->bt7.Air_Compressor_Status = J1939_MESSAGE->Mxe.Data[6]>>0;
}
void CheckGFC ( J1939_MESSAGE *J1939_MESSAGE,getGFC_t *GFC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GFC->Trip_Fuel__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    GFC->Total_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
}
void CheckTTI2 ( J1939_MESSAGE *J1939_MESSAGE,getTTI2_t *TTI2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TTI2->Trip_Cruise_Time = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TTI2->Trip_PTO_Governor_Time = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    TTI2->Trip_Engine_Running_Time = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    TTI2->Trip_Idle_Time = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    TTI2->Trip_Air_Compressor_On_Time = Parameter_Translate(buff ,0.05,0) ;
}
void CheckEH ( J1939_MESSAGE *J1939_MESSAGE,getEH_t *EH)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EH->Total_ECU_Distance = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EH->Total_ECU_Run_Time = Parameter_Translate(buff ,0.05,0) ;
}
void CheckGFI1 ( J1939_MESSAGE *J1939_MESSAGE,getGFI1_t *GFI1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GFI1->Total_Engine_PTO_Governor_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    GFI1->Trip_Average_Fuel_Rate__Gaseous_ = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    GFI1->Engine_Fuel_Specific_Gravity = Parameter_Translate(buff ,0.0001,0) ;
}
void CheckLFI ( J1939_MESSAGE *J1939_MESSAGE,getLFI_t *LFI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LFI->Total_Engine_PTO_Governor_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    LFI->Trip_Average_Fuel_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    LFI->Flexible_Fuel_Percentage = Parameter_Translate(buff ,0.0025,0) ;
}
void CheckTTI1 ( J1939_MESSAGE *J1939_MESSAGE,getTTI1_t *TTI1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TTI1->Trip_Time_in_VSL = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TTI1->Trip_Time_in_Top_Gear = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    TTI1->Trip_Time_in_Gear_Down = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    TTI1->Trip_Time_in_Derate_by_Engine = Parameter_Translate(buff ,0.05,0) ;
}
void CheckTSI ( J1939_MESSAGE *J1939_MESSAGE,getTSI_t *TSI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TSI->Trip_Number_of_Hot_Shutdowns = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TSI->Trip_Number_of_Idle_Shutdowns = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TSI->Trip_Number_of_Idle_Shutdown_Overrides = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TSI->Trip_Sudden_Decelerations = Parameter_Translate(buff ,1,0) ;
}
void CheckTVI ( J1939_MESSAGE *J1939_MESSAGE,getTVI_t *TVI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    TVI->Trip_Maximum_Vehicle_Speed = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TVI->Trip_Cruise_Distance = Parameter_Translate(buff ,0.125,0) ;
}
void CheckLF ( J1939_MESSAGE *J1939_MESSAGE,getLF_t *LF)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LF->Trip_Maximum_Engine_Speed = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LF->Trip_Average_Engine_Speed = Parameter_Translate(buff ,0.125,0) ;
    LF->Trip_Drive_Average_Load_Factor = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.4,0) ;
    LF->Total_Drive_Average_Load_Factor = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9]);
    LF->Total_Engine_Cruise_Time = Parameter_Translate(buff ,0.05,0) ;
}
void CheckGTFI ( J1939_MESSAGE *J1939_MESSAGE,getGTFI_t *GTFI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    GTFI->Trip_Drive_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    GTFI->Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    GTFI->Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    GTFI->Trip_Vehicle_Idle_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    GTFI->Trip_Cruise_Fuel_Used__Gaseous_ = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    GTFI->Trip_Drive_Fuel_Economy__Gaseous_ = Parameter_Translate(buff ,1,0) ;
}
void CheckLTFI ( J1939_MESSAGE *J1939_MESSAGE,getLTFI_t *LTFI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LTFI->Trip_Drive_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    LTFI->Trip_PTO_Governor_Moving_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    LTFI->Trip_PTO_Governor_Non_moving_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    LTFI->Trip_Vehicle_Idle_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[16])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[17])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[18])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[19]);
    LTFI->Trip_Cruise_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    LTFI->Trip_Drive_Fuel_Economy = Parameter_Translate(buff ,1,0) ;
}
void CheckTDI ( J1939_MESSAGE *J1939_MESSAGE,getTDI_t *TDI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TDI->Trip_Distance_on_VSL = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TDI->Trip_Gear_Down_Distance = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    TDI->Trip_Distance_in_Top_Gear = Parameter_Translate(buff ,0.125,0) ;
}
void CheckTFI ( J1939_MESSAGE *J1939_MESSAGE,getTFI_t *TFI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TFI->Trip_Fan_On_Time = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    TFI->Trip_Fan_On_Time_Due_to_the_Engine_System = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    TFI->Trip_Fan_On_Time_Due_to_a_Manual_Switch = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    TFI->Trip_Fan_On_Time_Due_to_the_A_C_System = Parameter_Translate(buff ,0.05,0) ;
}
void CheckCBI ( J1939_MESSAGE *J1939_MESSAGE,getCBI_t *CBI)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    CBI->Total_Compression_Brake_Distance = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    CBI->Trip_Compression_Brake_Distance = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[8])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[9])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[10])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[11]);
    CBI->Trip_Service_Brake_Distance = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[12])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[13])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[14])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[15]);
    CBI->Trip_Service_Brake_Applications = Parameter_Translate(buff ,1,0) ;
}
void CheckFD1 ( J1939_MESSAGE *J1939_MESSAGE,getFD1_t *FD1)
{
       uint64_t buff;
    FD1->Estimated_Percent_Fan_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    FD1->bt2.Fan_Drive_State = J1939_MESSAGE->Mxe.Data[1]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    FD1->Fan_Speed = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    FD1->Hydraulic_Fan_Motor_Pressure = Parameter_Translate(buff ,0.5,0) ;
    FD1->Fan_Drive_Bypass_Command_Status = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckEEC4 ( J1939_MESSAGE *J1939_MESSAGE,getEEC4_t *EEC4)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EEC4->Engine_Rated_Power = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EEC4->Engine_Rated_Speed = Parameter_Translate(buff ,0.125,0) ;
    EEC4->bt5.Engine_Rotation_Direction = J1939_MESSAGE->Mxe.Data[4]>>0;
    EEC4->bt5.Engine_Intake_Manifold_Pressure_Control_Mode = J1939_MESSAGE->Mxe.Data[4]>>2;
    EEC4->Crank_Attempt_Count_on_Present_Start_Attempt = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
}
void CheckEBC2 ( J1939_MESSAGE *J1939_MESSAGE,getEBC2_t *EBC2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EBC2->Front_Axle_Speed = Parameter_Translate(buff ,1,0) ;
    EBC2->Relative_Speed__Front_Axle_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-7.8125) ;
    EBC2->Relative_Speed__Front_Axle_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-7.8125) ;
    EBC2->Relative_Speed__Rear_Axle_1_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-7.8125) ;
    EBC2->Relative_Speed__Rear_Axle_1_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-7.8125) ;
    EBC2->Relative_Speed__Rear_Axle_2_Left_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-7.8125) ;
    EBC2->Relative_Speed__Rear_Axle_2_Right_Wheel = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-7.8125) ;
}
void CheckVDHR ( J1939_MESSAGE *J1939_MESSAGE,getVDHR_t *VDHR)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VDHR->High_Resolution_Total_Vehicle_Distance = Parameter_Translate(buff ,5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VDHR->High_Resolution_Trip_Distance = Parameter_Translate(buff ,5,0) ;
}
void CheckERC2 ( J1939_MESSAGE *J1939_MESSAGE,getERC2_t *ERC2)
{
       uint64_t buff;
    ERC2->bt1.Transmission_Output_Retarder = J1939_MESSAGE->Mxe.Data[0]>>0;
}
void CheckETC5 ( J1939_MESSAGE *J1939_MESSAGE,getETC5_t *ETC5)
{
       uint64_t buff;
    ETC5->bt1.Transmission_High_Range_Sense_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    ETC5->bt1.Transmission_Low_Range_Sense_Switch = J1939_MESSAGE->Mxe.Data[0]>>2;
    ETC5->bt2.Transmission_Reverse_Direction_Switch = J1939_MESSAGE->Mxe.Data[1]>>0;
    ETC5->bt2.Transmission_Neutral_Switch = J1939_MESSAGE->Mxe.Data[1]>>2;
    ETC5->bt2.Transmission_Forward_Direction_Switch = J1939_MESSAGE->Mxe.Data[1]>>4;
}
void CheckETC4 ( J1939_MESSAGE *J1939_MESSAGE,getETC4_t *ETC4)
{
       uint64_t buff;
    ETC4->Transmission_Synchronizer_Clutch_Value = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    ETC4->Transmission_Synchronizer_Brake_Value = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
}
void CheckETC3 ( J1939_MESSAGE *J1939_MESSAGE,getETC3_t *ETC3)
{
       uint64_t buff;
    ETC3->Transmission_Shift_Finger_Gear_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    ETC3->Transmission_Shift_Finger_Rail_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    ETC3->bt3.Transmission_Shift_Finger_Neutral_Indicator = J1939_MESSAGE->Mxe.Data[2]>>0;
    ETC3->bt3.Transmission_Shift_Finger_Engagement_Indicator = J1939_MESSAGE->Mxe.Data[2]>>2;
    ETC3->bt3.Transmission_Shift_Finger_Center_Rail_Indicator = J1939_MESSAGE->Mxe.Data[2]>>4;
    ETC3->bt4.Transmission_Shift_Finger_Rail_Actuator_1 = J1939_MESSAGE->Mxe.Data[3]>>0;
    ETC3->bt4.Transmission_Shift_Finger_Gear_Actuator_1 = J1939_MESSAGE->Mxe.Data[3]>>2;
    ETC3->bt4.Transmission_Shift_Finger_Rail_Actuator_2 = J1939_MESSAGE->Mxe.Data[3]>>4;
    ETC3->bt4.Transmission_Shift_Finger_Gear_Actuator_2 = J1939_MESSAGE->Mxe.Data[3]>>6;
    ETC3->bt5.Transmission_Range_High_Actuator = J1939_MESSAGE->Mxe.Data[4]>>0;
    ETC3->bt5.Transmission_Range_Low_Actuator = J1939_MESSAGE->Mxe.Data[4]>>2;
    ETC3->bt5.Transmission_Splitter_Direct_Actuator = J1939_MESSAGE->Mxe.Data[4]>>4;
    ETC3->bt5.Transmission_Splitter_Indirect_Actuator = J1939_MESSAGE->Mxe.Data[4]>>6;
    ETC3->bt6.Transmission_Clutch_Actuator = J1939_MESSAGE->Mxe.Data[5]>>0;
    ETC3->bt6.Transmission_Lockup_Clutch_Actuator = J1939_MESSAGE->Mxe.Data[5]>>2;
    ETC3->bt6.Transmission_Defuel_Actuator = J1939_MESSAGE->Mxe.Data[5]>>4;
    ETC3->bt6.Transmission_Inertia_Brake_Actuator = J1939_MESSAGE->Mxe.Data[5]>>6;
}
void CheckAS ( J1939_MESSAGE *J1939_MESSAGE,getAS_t *AS)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    AS->Alternator_Speed = Parameter_Translate(buff ,0.5,0) ;
    AS->bt3.Alternator_1_Status = J1939_MESSAGE->Mxe.Data[2]>>0;
    AS->bt3.Alternator_2_Status = J1939_MESSAGE->Mxe.Data[2]>>2;
    AS->bt3.Alternator_3_Status = J1939_MESSAGE->Mxe.Data[2]>>4;
    AS->bt3.Alternator_4_Status = J1939_MESSAGE->Mxe.Data[2]>>6;
}
void CheckAUXIO1 ( J1939_MESSAGE *J1939_MESSAGE,getAUXIO1_t *AUXIO1)
{
       uint64_t buff;
    AUXIO1->bt1.Auxiliary_I_O_04 = J1939_MESSAGE->Mxe.Data[0]>>0;
    AUXIO1->bt1.Auxiliary_I_O_03 = J1939_MESSAGE->Mxe.Data[0]>>2;
    AUXIO1->bt1.Auxiliary_I_O_02 = J1939_MESSAGE->Mxe.Data[0]>>4;
    AUXIO1->bt1.Auxiliary_I_O_01 = J1939_MESSAGE->Mxe.Data[0]>>6;
    AUXIO1->bt2.Auxiliary_I_O_08 = J1939_MESSAGE->Mxe.Data[1]>>0;
    AUXIO1->bt2.Auxiliary_I_O_07 = J1939_MESSAGE->Mxe.Data[1]>>2;
    AUXIO1->bt2.Auxiliary_I_O_06 = J1939_MESSAGE->Mxe.Data[1]>>4;
    AUXIO1->bt2.Auxiliary_I_O_05 = J1939_MESSAGE->Mxe.Data[1]>>6;
    AUXIO1->bt3.Auxiliary_I_O_12 = J1939_MESSAGE->Mxe.Data[2]>>0;
    AUXIO1->bt3.Auxiliary_I_O_11 = J1939_MESSAGE->Mxe.Data[2]>>2;
    AUXIO1->bt3.Auxiliary_I_O_10 = J1939_MESSAGE->Mxe.Data[2]>>4;
    AUXIO1->bt3.Auxiliary_I_O_09 = J1939_MESSAGE->Mxe.Data[2]>>6;
    AUXIO1->bt4.Auxiliary_I_O_16 = J1939_MESSAGE->Mxe.Data[3]>>0;
    AUXIO1->bt4.Auxiliary_I_O_15 = J1939_MESSAGE->Mxe.Data[3]>>2;
    AUXIO1->bt4.Auxiliary_I_O_14 = J1939_MESSAGE->Mxe.Data[3]>>4;
    AUXIO1->bt4.Auxiliary_I_O_13 = J1939_MESSAGE->Mxe.Data[3]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    AUXIO1->Auxiliary_I_O_Channel_1 = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AUXIO1->Auxiliary_I_O_Channel_2 = Parameter_Translate(buff ,1,0) ;
}
void CheckSOFT ( J1939_MESSAGE *J1939_MESSAGE,getSOFT_t *SOFT)
{
       uint64_t buff;
    SOFT->Number_of_Software_Identification_Fields = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
}
void CheckEFL_P2 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P2_t *EFL_P2)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    EFL_P2->Engine_Injection_Control_Pressure = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    EFL_P2->Engine_Injector_Metering_Rail_1_Pressure = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P2->Engine_Injector_Timing_Rail_1_Pressure = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    EFL_P2->Engine_Injector_Metering_Rail_2_Pressure = Parameter_Translate(buff ,1,0) ;
}
void CheckIO ( J1939_MESSAGE *J1939_MESSAGE,getIO_t *IO)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    IO->Engine_Total_Idle_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    IO->Engine_Total_Idle_Hours = Parameter_Translate(buff ,0.05,0) ;
}
void CheckTC ( J1939_MESSAGE *J1939_MESSAGE,getTC_t *TC)
{
       uint64_t buff;
    TC->Engine_Turbocharger_Lube_Oil_Pressure_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    TC->Engine_Turbocharger_1_Speed = Parameter_Translate(buff ,4,0) ;
    TC->bt4.Engine_Turbocharger_Oil_Level_Switch = J1939_MESSAGE->Mxe.Data[3]>>6;
}
void CheckAIR2 ( J1939_MESSAGE *J1939_MESSAGE,getAIR2_t *AIR2)
{
       uint64_t buff;
    AIR2->Engine_Air_Start_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
}
void CheckEEC3 ( J1939_MESSAGE *J1939_MESSAGE,getEEC3_t *EEC3)
{
       uint64_t buff;
    EEC3->Nominal_Friction___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    EEC3->Engine_s_Desired_Operating_Speed = Parameter_Translate(buff ,0.125,0) ;
    EEC3->Engine_s_Desired_Operating_Speed_Asymmetry_Adjustment = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    EEC3->Estimated_Engine_Parasitic_Losses___Percent_Torque = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],1,-125) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    EEC3->Aftertreatment_1_Exhaust_Gas_Mass_Flow = Parameter_Translate(buff ,0.2,0) ;
    EEC3->bt8.Aftertreatment_1_Intake_Dew_Point = J1939_MESSAGE->Mxe.Data[7]>>0;
    EEC3->bt8.Aftertreatment_1_Exhaust_Dew_Point = J1939_MESSAGE->Mxe.Data[7]>>2;
    EEC3->bt8.Aftertreatment_2_Intake_Dew_Point = J1939_MESSAGE->Mxe.Data[7]>>4;
    EEC3->bt8.Aftertreatment_2_Exhaust_Dew_Point = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckVD ( J1939_MESSAGE *J1939_MESSAGE,getVD_t *VD)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VD->Trip_Distance = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VD->Total_Vehicle_Distance = Parameter_Translate(buff ,0.125,0) ;
}
void CheckTCFG ( J1939_MESSAGE *J1939_MESSAGE,getTCFG_t *TCFG)
{
       uint64_t buff;
    TCFG->Number_of_Reverse_Gear_Ratios = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    TCFG->Number_of_Forward_Gear_Ratios = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TCFG->Transmission_Gear_Ratio = Parameter_Translate(buff ,0.001,0) ;
}
void CheckSHUTDN ( J1939_MESSAGE *J1939_MESSAGE,getSHUTDN_t *SHUTDN)
{
       uint64_t buff;
    SHUTDN->bt1.Engine_Idle_Shutdown_has_Shutdown_Engine = J1939_MESSAGE->Mxe.Data[0]>>0;
    SHUTDN->bt1.Engine_Idle_Shutdown_Driver_Alert_Mode = J1939_MESSAGE->Mxe.Data[0]>>2;
    SHUTDN->bt1.Engine_Idle_Shutdown_Timer_Override = J1939_MESSAGE->Mxe.Data[0]>>4;
    SHUTDN->bt1.Engine_Idle_Shutdown_Timer_State = J1939_MESSAGE->Mxe.Data[0]>>6;
    SHUTDN->bt2.Engine_Idle_Shutdown_Timer_Function = J1939_MESSAGE->Mxe.Data[1]>>6;
    SHUTDN->bt3.A_C_High_Pressure_Fan_Switch = J1939_MESSAGE->Mxe.Data[2]>>0;
    SHUTDN->bt3.Refrigerant_Low_Pressure_Switch = J1939_MESSAGE->Mxe.Data[2]>>2;
    SHUTDN->bt3.Refrigerant_High_Pressure_Switch = J1939_MESSAGE->Mxe.Data[2]>>4;
    SHUTDN->bt4.Engine_Wait_to_Start_Lamp = J1939_MESSAGE->Mxe.Data[3]>>0;
    SHUTDN->bt5.Engine_Protection_System_has_Shutdown_Engine = J1939_MESSAGE->Mxe.Data[4]>>0;
    SHUTDN->bt5.Engine_Protection_System_Approaching_Shutdown = J1939_MESSAGE->Mxe.Data[4]>>2;
    SHUTDN->bt5.Engine_Protection_System_Timer_Override = J1939_MESSAGE->Mxe.Data[4]>>4;
    SHUTDN->bt5.Engine_Protection_System_Timer_State = J1939_MESSAGE->Mxe.Data[4]>>6;
    SHUTDN->bt6.Engine_Protection_System_Configuration = J1939_MESSAGE->Mxe.Data[5]>>6;
    SHUTDN->bt7.Engine_Alarm_Acknowledge = J1939_MESSAGE->Mxe.Data[6]>>0;
    SHUTDN->bt7.Engine_Alarm_Output_Command_Status = J1939_MESSAGE->Mxe.Data[6]>>2;
    SHUTDN->bt7.Engine_Air_Shutoff_Command_Status = J1939_MESSAGE->Mxe.Data[6]>>4;
    SHUTDN->bt7.Engine_Overspeed_Test = J1939_MESSAGE->Mxe.Data[6]>>6;
    SHUTDN->bt8.Engine_Air_Shutoff_Status = J1939_MESSAGE->Mxe.Data[7]>>0;
    SHUTDN->bt8.PTO_Shutdown_has_Shutdown_Engine = J1939_MESSAGE->Mxe.Data[7]>>2;
    SHUTDN->bt8.Coolant_Level_Engine_Protection_Shutdown_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckHOURS ( J1939_MESSAGE *J1939_MESSAGE,getHOURS_t *HOURS)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    HOURS->Engine_Total_Hours_of_Operation = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    HOURS->Engine_Total_Revolutions = Parameter_Translate(buff ,1000,0) ;
}
void CheckTD ( J1939_MESSAGE *J1939_MESSAGE,getTD_t *TD)
{
       uint64_t buff;
    TD->Seconds = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.25,0) ;
    TD->Minutes = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    TD->Hours = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
    TD->Month = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,0) ;
    TD->Day = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.25,0) ;
    TD->Year = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,1985) ;
    TD->Local_minute_offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-125) ;
    TD->Local_hour_offset = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],1,-125) ;
}
void CheckVH ( J1939_MESSAGE *J1939_MESSAGE,getVH_t *VH)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VH->Total_Vehicle_Hours = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VH->Total_Power_Takeoff_Hours = Parameter_Translate(buff ,0.05,0) ;
}
void CheckVDS ( J1939_MESSAGE *J1939_MESSAGE,getVDS_t *VDS)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    VDS->Compass_Bearing = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VDS->Navigation_Based_Vehicle_Speed = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    VDS->Pitch = Parameter_Translate(buff ,1,-200) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VDS->Altitude = Parameter_Translate(buff ,0.125,-2500) ;
}
void CheckLFC ( J1939_MESSAGE *J1939_MESSAGE,getLFC_t *LFC)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LFC->Engine_Trip_Fuel = Parameter_Translate(buff ,0.001,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    LFC->Engine_Total_Fuel_Used = Parameter_Translate(buff ,0.5,0) ;
}
void CheckVW ( J1939_MESSAGE *J1939_MESSAGE,getVW_t *VW)
{
       uint64_t buff;
    VW->bt1.Axle_Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    VW->Axle_Weight = Parameter_Translate(buff ,0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    VW->Trailer_Weight = Parameter_Translate(buff ,2,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    VW->Cargo_Weight = Parameter_Translate(buff ,2,0) ;
}
void CheckCCSS ( J1939_MESSAGE *J1939_MESSAGE,getCCSS_t *CCSS)
{
       uint64_t buff;
    CCSS->Maximum_Vehicle_Speed_Limit = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,0) ;
    CCSS->Cruise_Control_High_Set_Limit_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    CCSS->Cruise_Control_Low_Set_Limit_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,0) ;
}
void CheckET1 ( J1939_MESSAGE *J1939_MESSAGE,getET1_t *ET1)
{
       uint64_t buff;
    ET1->Engine_Coolant_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    ET1->Engine_Fuel_Temperature_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    ET1->Engine_Oil_Temperature_1 = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    ET1->Engine_Turbocharger_Oil_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    ET1->Engine_Intercooler_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],1,-40) ;
    ET1->Engine_Intercooler_Thermostat_Opening = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckEFL_P1 ( J1939_MESSAGE *J1939_MESSAGE,getEFL_P1_t *EFL_P1)
{
       uint64_t buff;
    EFL_P1->Engine_Fuel_Delivery_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    EFL_P1->Engine_Extended_Crankcase_Blow_by_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.05,0) ;
    EFL_P1->Engine_Oil_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],0.4,0) ;
    EFL_P1->Engine_Oil_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    EFL_P1->Engine_Crankcase_Pressure = Parameter_Translate(buff ,1,-250) ;
    EFL_P1->Engine_Coolant_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],2,0) ;
    EFL_P1->Engine_Coolant_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckPTO ( J1939_MESSAGE *J1939_MESSAGE,getPTO_t *PTO)
{
       uint64_t buff;
    PTO->Power_Takeoff_Oil_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    PTO->Power_Takeoff_Speed = Parameter_Translate(buff ,0.125,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    PTO->Power_Takeoff_Set_Speed = Parameter_Translate(buff ,0.125,0) ;
    PTO->bt6.Engine_PTO_Governor_Enable_Switch = J1939_MESSAGE->Mxe.Data[5]>>0;
    PTO->bt6.Engine_Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch = J1939_MESSAGE->Mxe.Data[5]>>2;
    PTO->bt6.Engine_Remote_PTO_Governor_Variable_Speed_Control_Switch = J1939_MESSAGE->Mxe.Data[5]>>4;
    PTO->bt7.Engine_PTO_Governor_Set_Switch = J1939_MESSAGE->Mxe.Data[6]>>0;
    PTO->bt7.Engine_PTO_Governor_Coast_Decelerate_Switch = J1939_MESSAGE->Mxe.Data[6]>>2;
    PTO->bt7.Engine_PTO_Governor_Resume_Switch = J1939_MESSAGE->Mxe.Data[6]>>4;
    PTO->bt7.Engine_PTO_Governor_Accelerate_Switch = J1939_MESSAGE->Mxe.Data[6]>>6;
    PTO->bt8.Operator_Engine_PTO_Governor_Memory_Select_Switch = J1939_MESSAGE->Mxe.Data[7]>>0;
    PTO->bt8.Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch_2 = J1939_MESSAGE->Mxe.Data[7]>>2;
    PTO->bt8.Auxiliary_Input_Ignore_Switch = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckCCVS1 ( J1939_MESSAGE *J1939_MESSAGE,getCCVS1_t *CCVS1)
{
       uint64_t buff;
    CCVS1->bt1.Two_Speed_Axle_Switch = J1939_MESSAGE->Mxe.Data[0]>>0;
    CCVS1->bt1.Parking_Brake_Switch = J1939_MESSAGE->Mxe.Data[0]>>2;
    CCVS1->bt1.Cruise_Control_Pause_Switch = J1939_MESSAGE->Mxe.Data[0]>>4;
    CCVS1->bt1.Park_Brake_Release_Inhibit_Request = J1939_MESSAGE->Mxe.Data[0]>>6;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    CCVS1->Wheel_Based_Vehicle_Speed = Parameter_Translate(buff ,1,0) ;
    CCVS1->bt4.Cruise_Control_Active = J1939_MESSAGE->Mxe.Data[3]>>0;
    CCVS1->bt4.Cruise_Control_Enable_Switch = J1939_MESSAGE->Mxe.Data[3]>>2;
    CCVS1->bt4.Brake_Switch = J1939_MESSAGE->Mxe.Data[3]>>4;
    CCVS1->bt4.Clutch_Switch = J1939_MESSAGE->Mxe.Data[3]>>6;
    CCVS1->bt5.Cruise_Control_Set_Switch = J1939_MESSAGE->Mxe.Data[4]>>0;
    CCVS1->bt5.Cruise_Control_Coast__Decelerate__Switch = J1939_MESSAGE->Mxe.Data[4]>>2;
    CCVS1->bt5.Cruise_Control_Resume_Switch = J1939_MESSAGE->Mxe.Data[4]>>4;
    CCVS1->bt5.Cruise_Control_Accelerate_Switch = J1939_MESSAGE->Mxe.Data[4]>>6;
    CCVS1->Cruise_Control_Set_Speed = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,0) ;
    CCVS1->bt7.PTO_Governor_State = J1939_MESSAGE->Mxe.Data[6]>>0;
    CCVS1->bt7.Cruise_Control_States = J1939_MESSAGE->Mxe.Data[6]>>5;
    CCVS1->bt8.Engine_Idle_Increment_Switch = J1939_MESSAGE->Mxe.Data[7]>>0;
    CCVS1->bt8.Engine_Idle_Decrement_Switch = J1939_MESSAGE->Mxe.Data[7]>>2;
    CCVS1->bt8.Engine_Test_Mode_Switch = J1939_MESSAGE->Mxe.Data[7]>>4;
    CCVS1->bt8.Engine_Shutdown_Override_Switch = J1939_MESSAGE->Mxe.Data[7]>>6;
}
void CheckLFE1 ( J1939_MESSAGE *J1939_MESSAGE,getLFE1_t *LFE1)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1]);
    LFE1->Engine_Fuel_Rate = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    LFE1->Engine_Instantaneous_Fuel_Economy = Parameter_Translate(buff ,1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    LFE1->Engine_Average_Fuel_Economy = Parameter_Translate(buff ,1,0) ;
    LFE1->Engine_Throttle_Valve_1_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
    LFE1->Engine_Throttle_Valve_2_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.4,0) ;
}
void CheckVP ( J1939_MESSAGE *J1939_MESSAGE,getVP_t *VP)
{
       uint64_t buff;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[0])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VP->Latitude = Parameter_Translate(buff ,10,-210) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<24;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<16;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VP->Longitude = Parameter_Translate(buff ,10,-210) ;
}
void CheckTIRE ( J1939_MESSAGE *J1939_MESSAGE,getTIRE_t *TIRE)
{
       uint64_t buff;
    TIRE->bt1.Tire_Location = J1939_MESSAGE->Mxe.Data[0]>>0;
    TIRE->Tire_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    TIRE->Tire_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    TIRE->bt5.CTI_Wheel_Sensor_Status = J1939_MESSAGE->Mxe.Data[4]>>0;
    TIRE->bt5.CTI_Tire_Status = J1939_MESSAGE->Mxe.Data[4]>>2;
    TIRE->bt5.CTI_Wheel_End_Electrical_Fault = J1939_MESSAGE->Mxe.Data[4]>>4;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    TIRE->Tire_Air_Leakage_Rate = Parameter_Translate(buff ,0.1,0) ;
    TIRE->bt8.Tire_Pressure_Threshold_Detection = J1939_MESSAGE->Mxe.Data[7]>>5;
}
void CheckAMB ( J1939_MESSAGE *J1939_MESSAGE,getAMB_t *AMB)
{
       uint64_t buff;
    AMB->Barometric_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    AMB->Cab_Interior_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[3])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[4]);
    AMB->Ambient_Air_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    AMB->Engine_Air_Intake_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[5],1,-40) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    AMB->Road_Surface_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
}
void CheckIC1 ( J1939_MESSAGE *J1939_MESSAGE,getIC1_t *IC1)
{
       uint64_t buff;
    IC1->Engine_Diesel_Particulate_Filter_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.5,0) ;
    IC1->Engine_Intake_Manifold_1_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],2,0) ;
    IC1->Engine_Intake_Manifold_1_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],1,-40) ;
    IC1->Engine_Air_Intake_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],2,0) ;
    IC1->Engine_Air_Filter_1_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[5])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[6]);
    IC1->Engine_Exhaust_Gas_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    IC1->Engine_Coolant_Filter_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],0.5,0) ;
}
void CheckVEP1 ( J1939_MESSAGE *J1939_MESSAGE,getVEP1_t *VEP1)
{
       uint64_t buff;
    VEP1->Net_Battery_Current = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-125) ;
    VEP1->Alternator_Current = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[2])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[3]);
    VEP1->Charging_System_Potential__Voltage_ = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    VEP1->Battery_Potential___Power_Input_1 = Parameter_Translate(buff ,0.05,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[6])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[7]);
    VEP1->Keyswitch_Battery_Potential = Parameter_Translate(buff ,0.05,0) ;
}
void CheckTRF1 ( J1939_MESSAGE *J1939_MESSAGE,getTRF1_t *TRF1)
{
       uint64_t buff;
    TRF1->Clutch_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],16,0) ;
    TRF1->Transmission_Oil_Level_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    TRF1->Transmission_Filter_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],2,0) ;
    TRF1->Transmission_Oil_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],16,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    TRF1->Transmission_Oil_Temperature_1 = Parameter_Translate(buff ,0.03125,-273) ;
    TRF1->Transmission_Oil_Level_1_High___Low = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.5,-62.5) ;
    TRF1->bt8.Transmission_Oil_Level_1_Countdown_Timer = J1939_MESSAGE->Mxe.Data[7]>>0;
    TRF1->bt8.Transmission_Oil_Level_1_Measurement_Status = J1939_MESSAGE->Mxe.Data[7]>>4;
}
void CheckAI ( J1939_MESSAGE *J1939_MESSAGE,getAI_t *AI)
{
       uint64_t buff;
    AI->Steering_Axle_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],1,-40) ;
    AI->bt2.Drive_Axle_Location = J1939_MESSAGE->Mxe.Data[1]>>0;
    AI->Drive_Axle_Lift_Air_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],4,0) ;
    AI->Drive_Axle_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],1,-40) ;
    AI->Drive_Axle_Lube_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[4],4,0) ;
    AI->Steering_Axle_Lube_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[7],4,0) ;
}
void CheckB ( J1939_MESSAGE *J1939_MESSAGE,getB_t *B)
{
       uint64_t buff;
    B->Brake_Application_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],4,0) ;
    B->Brake_Primary_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],4,0) ;
    B->Brake_Secondary_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],4,0) ;
    B->bt4.Parking_Brake_Actuator = J1939_MESSAGE->Mxe.Data[3]>>0;
    B->bt4.Parking_Brake_Red_Warning_Signal = J1939_MESSAGE->Mxe.Data[3]>>2;
    B->bt4.Park_Brake_Release_Inhibit_Status = J1939_MESSAGE->Mxe.Data[3]>>4;
}
void CheckRF ( J1939_MESSAGE *J1939_MESSAGE,getRF_t *RF)
{
       uint64_t buff;
    RF->Hydraulic_Retarder_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],16,0) ;
    RF->Hydraulic_Retarder_Oil_Temperature = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],1,-40) ;
    RF->bt3.Driveline_Retarder_Overheat_Indicator = J1939_MESSAGE->Mxe.Data[2]>>0;
}
void CheckDD ( J1939_MESSAGE *J1939_MESSAGE,getDD_t *DD)
{
       uint64_t buff;
    DD->Washer_Fluid_Level = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    DD->Fuel_Level_1 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[1],0.4,0) ;
    DD->Engine_Fuel_Filter_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[2],2,0) ;
    DD->Engine_Oil_Filter_Differential_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[3],0.5,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[4])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[5]);
    DD->Cargo_Ambient_Temperature = Parameter_Translate(buff ,0.03125,-273) ;
    DD->Fuel_Level_2 = Parameter_Translate(J1939_MESSAGE->Mxe.Data[6],0.4,0) ;
}
void CheckA1 ( J1939_MESSAGE *J1939_MESSAGE,getA1_t *A1)
{
       uint64_t buff;
    A1->Engine_Blower_Bypass_Valve_Position = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],0.4,0) ;
    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[1])<<8;
    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[2]);
    A1->Engine_Gas_Supply_Pressure = Parameter_Translate(buff ,0.5,0) ;
}
void CheckAWPP ( J1939_MESSAGE *J1939_MESSAGE,getAWPP_t *AWPP)
{
       uint64_t buff;
    AWPP->Auxiliary_Pump_Pressure = Parameter_Translate(J1939_MESSAGE->Mxe.Data[0],16,0) ;
}
void CheckOI ( J1939_MESSAGE *J1939_MESSAGE,getOI_t *OI)
{
       uint64_t buff;
    OI->bt1.Water_In_Fuel_Indicator = J1939_MESSAGE->Mxe.Data[0]>>0;
    OI->bt1.Operator_Shift_Prompt = J1939_MESSAGE->Mxe.Data[0]>>2;
    OI->bt2.Driver_Warning_System_Indicator_Status = J1939_MESSAGE->Mxe.Data[1]>>0;
    OI->bt2.Emission_Control_System_Operator_Inducement_Severity = J1939_MESSAGE->Mxe.Data[1]>>3;
}