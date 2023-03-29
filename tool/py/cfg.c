}
void config_TSC1 (getTSC1_t *TSC1)
{
    TSC1 -> bt1.Engine_Override_Control_Mode= 3.0*RATE;
    TSC1 -> bt1.Engine_Requested_Speed_Control_Conditions= 3.0*RATE;
    TSC1 -> bt1.Override_Control_Mode_Priority= 3.0*RATE;
    TSC1 -> Engine_Requested_Speed_Speed_Limit= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    TSC1 -> Engine_Requested_Torque_Torque_Limit= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    TSC1 -> bt5.TSC1_Transmission_Rate= 7.0*RATE;
    TSC1 -> bt5.TSC1_Control_Purpose= 31.0*RATE;
    TSC1 -> bt6.Engine_Requested_Torque__High_Resolution= 0.875*RATE;
    TSC1 -> bt8.Message_Counter= 15.0*RATE;
    TSC1 -> bt8.Message_Checksum= 15.0*RATE;
}
void config_TC1 (getTC1_t *TC1)
{
    TC1 -> bt1.Transmission_Gear_Shift_Inhibit_Request= 3.0*RATE;
    TC1 -> bt1.Transmission_Torque_Converter_Lockup_Disable_Request= 3.0*RATE;
    TC1 -> bt1.Disengage_Driveline_Request= 3.0*RATE;
    TC1 -> Requested_Percent_Clutch_Slip= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TC1 -> Transmission_Requested_Gear= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    TC1 -> bt4.Disengage_Differential_Lock_Request___Front_Axle_1= 3.0*RATE;
    TC1 -> bt4.Disengage_Differential_Lock_Request___Front_Axle_2= 3.0*RATE;
    TC1 -> bt4.Disengage_Differential_Lock_Request___Rear_Axle_1= 3.0*RATE;
    TC1 -> bt4.Disengage_Differential_Lock_Request___Rear_Axle_2= 3.0*RATE;
    TC1 -> bt5.Disengage_Differential_Lock_Request___Central= 3.0*RATE;
    TC1 -> bt5.Disengage_Differential_Lock_Request___Central_Front= 3.0*RATE;
    TC1 -> bt5.Disengage_Differential_Lock_Request___Central_Rear= 3.0*RATE;
    TC1 -> bt5.Transmission_Load_Reduction_Inhibit_Request= 3.0*RATE;
    TC1 -> bt6.Transmission_Mode_1= 3.0*RATE;
    TC1 -> bt6.Transmission_Mode_2= 3.0*RATE;
    TC1 -> bt6.Transmission_Mode_3= 3.0*RATE;
    TC1 -> bt6.Transmission_Mode_4= 3.0*RATE;
    TC1 -> bt7.Transmission_Requested_Launch_Gear= 15.0*RATE;
    TC1 -> bt7.Transmission_Shift_Selector_Display_Mode_Switch= 3.0*RATE;
    TC1 -> bt8.Transmission_Mode_5= 3.0*RATE;
    TC1 -> bt8.Transmission_Mode_6= 3.0*RATE;
    TC1 -> bt8.Transmission_Mode_7= 3.0*RATE;
    TC1 -> bt8.Transmission_Mode_8= 3.0*RATE;
}
void config_XBR (getXBR_t *XBR)
{
    XBR -> External_Acceleration_Demand= Parameter_Translate(15.687*RATE , 1.0 , -15.687);
    XBR -> bt3.XBR_EBI_Mode= 3.0*RATE;
    XBR -> bt3.XBR_Priority= 3.0*RATE;
    XBR -> bt3.XBR_Control_Mode= 3.0*RATE;
    XBR -> XBR_urgency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    XBR -> bt8.XBR_Message_Counter= 15.0*RATE;
    XBR -> bt8.XBR_Message_Checksum= 15.0*RATE;
}
void config_GPV4 (getGPV4_t *GPV4)
{
    GPV4 -> Valve_Load_Sense_Pressure= Parameter_Translate(321275.0*RATE , 5.0 , 0.0);
    GPV4 -> Valve_Pilot_Pressure= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
    GPV4 -> Valve_Assembly_Load_sense_Pressure= Parameter_Translate(321275.0*RATE , 5.0 , 0.0);
    GPV4 -> Valve_Assembly_Supply_Pressure= Parameter_Translate(321275.0*RATE , 5.0 , 0.0);
}
void config_AUXIO5 (getAUXIO5_t *AUXIO5)
{
    AUXIO5 -> Auxiliary_I_O_Channel_6= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    AUXIO5 -> Auxiliary_I_O_Channel_5= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    AUXIO5 -> Auxiliary_I_O_Channel_4= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    AUXIO5 -> Auxiliary_I_O_Channel_3= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_SRASI (getSRASI_t *SRASI)
{
    SRASI -> Static_Roll_Angle= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    SRASI -> bt2.Static_Roll_Angle_Status= 7.0*RATE;
}
void config_CCVS2 (getCCVS2_t *CCVS2)
{
    CCVS2 -> bt1.Cruise_Control_Disable_Command= 3.0*RATE;
    CCVS2 -> bt1.Cruise_Control_Resume_Command= 3.0*RATE;
    CCVS2 -> bt1.Cruise_Control_Pause_Command= 3.0*RATE;
}
void config_AEBS2 (getAEBS2_t *AEBS2)
{
    AEBS2 -> bt1.Driver_activation_demand_for_Advanced_Emergency_Braking_System= 3.0*RATE;
    AEBS2 -> bt8.AEBS2_message_Counter= 15.0*RATE;
    AEBS2 -> bt8.AEBS2_message_checksum= 15.0*RATE;
}
void config_ESR (getESR_t *ESR)
{
    ESR -> bt1.Desired_Engine_Fueling_State= 3.0*RATE;
}
void config_RBR (getRBR_t *RBR)
{
    RBR -> Unique_Beacon_Message_Identifier_Number= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    RBR -> bt3.Radio_Beacon_Direction= 3.0*RATE;
    RBR -> Transmitter_ID_2= Parameter_Translate(16449635.0*RATE , 1.0 , 0.0);
    RBR -> Wireless_Signal_Strength_2= Parameter_Translate(0.0*RATE , 0.5 , 0.0);
}
void config_ECC (getECC_t *ECC)
{
    ECC -> bt1.Coolant_Level_Engine_Protection_Shutdown_Override_Command= 3.0*RATE;
}
void config_SFC (getSFC_t *SFC)
{
    SFC -> bt1.Supplemental_Fan_Enable_Command= 3.0*RATE;
    SFC -> bt1.Supplemental_Fan_Direction_Command= 3.0*RATE;
    SFC -> Supplemental_Fan_Speed_Command= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    SFC -> bt4.Supplemental_Fan_Power_Hold= 3.0*RATE;
}
void config_VLS1 (getVLS1_t *VLS1)
{
    VLS1 -> bt1.Lubrication_Cycle_Mode_Lock_Command= 3.0*RATE;
    VLS1 -> bt1.Lubrication_Cycle_Set_Command= 7.0*RATE;
    VLS1 -> bt1.Lubrication_Operation_Mode_Set_Command= 7.0*RATE;
    VLS1 -> bt2.Lubrication_Pump_Enable_Command= 3.0*RATE;
    VLS1 -> bt2.Lubrication_Timing_Cycle_Command= 3.0*RATE;
}
void config_HCDI1 (getHCDI1_t *HCDI1)
{
    HCDI1 -> Requested_Fuel_Mass_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    HCDI1 -> bt3.HC_Doser_Status= 7.0*RATE;
    HCDI1 -> bt3.HC_Doser_Injecting_Status= 3.0*RATE;
    HCDI1 -> bt3.Diagnostic_Status_of_HC_Doser= 7.0*RATE;
    HCDI1 -> bt4.Hydrocarbon_Doser_Purging_Required= 3.0*RATE;
}
void config_AT1DPFSSC (getAT1DPFSSC_t *AT1DPFSSC)
{
    AT1DPFSSC -> Aftertreatment_1_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1DPFSSC -> Aftertreatment_1_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT2DPFSSC (getAT2DPFSSC_t *AT2DPFSSC)
{
    AT2DPFSSC -> Aftertreatment_2_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT2DPFSSC -> Aftertreatment_2_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_LVDSOM (getLVDSOM_t *LVDSOM)
{
    LVDSOM -> bt1.Low_Voltage_Disconnect_Desired_Operating_Mode= 15.0*RATE;
}
void config_NCS (getNCS_t *NCS)
{
    NCS -> bt1.Cab_Noise_Control_Status= 3.0*RATE;
    NCS -> bt1.Cab_Noise_Control_Tuning_Status= 15.0*RATE;
}
void config_NC1 (getNC1_t *NC1)
{
    NC1 -> bt1.Cab_Noise_Control_Command= 3.0*RATE;
    NC1 -> bt1.Cab_Noise_Control_Tuning_Command= 7.0*RATE;
}
void config_JLCM (getJLCM_t *JLCM)
{
    JLCM -> bt1.Joystick_1_Lamp_1_Command= 3.0*RATE;
    JLCM -> bt1.Joystick_1_Lamp_2_Command= 3.0*RATE;
    JLCM -> bt1.Joystick_1_Lamp_3_Command= 3.0*RATE;
    JLCM -> bt1.Joystick_1_Lamp_4_Command= 3.0*RATE;
    JLCM -> bt2.Joystick_1_Lamp_5_Command= 3.0*RATE;
    JLCM -> bt2.Joystick_1_Lamp_6_Command= 3.0*RATE;
    JLCM -> bt2.Joystick_1_Lamp_7_Command= 3.0*RATE;
    JLCM -> bt2.Joystick_1_Lamp_8_Command= 3.0*RATE;
    JLCM -> bt3.Joystick_1_Lamp_9_Command= 3.0*RATE;
    JLCM -> bt3.Joystick_1_Lamp_10_Command= 3.0*RATE;
    JLCM -> bt3.Joystick_2_Lamp_1_Command= 3.0*RATE;
    JLCM -> bt3.Joystick_2_Lamp_2_Command= 3.0*RATE;
    JLCM -> bt4.Joystick_2_Lamp_3_Command= 3.0*RATE;
    JLCM -> bt4.Joystick_2_Lamp_4_Command= 3.0*RATE;
    JLCM -> bt4.Joystick_2_Lamp_5_Command= 3.0*RATE;
    JLCM -> bt4.Joystick_2_Lamp_6_Command= 3.0*RATE;
    JLCM -> bt5.Joystick_2_Lamp_7_Command= 3.0*RATE;
    JLCM -> bt5.Joystick_2_Lamp_8_Command= 3.0*RATE;
    JLCM -> bt5.Joystick_2_Lamp_9_Command= 3.0*RATE;
    JLCM -> bt5.Joystick_2_Lamp_10_Command= 3.0*RATE;
    JLCM -> bt6.Joystick_3_Lamp_1_Command= 3.0*RATE;
    JLCM -> bt6.Joystick_3_Lamp_2_Command= 3.0*RATE;
    JLCM -> bt6.Joystick_3_Lamp_3_Command= 3.0*RATE;
    JLCM -> bt6.Joystick_3_Lamp_4_Command= 3.0*RATE;
    JLCM -> bt7.Joystick_3_Lamp_5_Command= 3.0*RATE;
    JLCM -> bt7.Joystick_3_Lamp_6_Command= 3.0*RATE;
    JLCM -> bt7.Joystick_3_Lamp_7_Command= 3.0*RATE;
    JLCM -> bt7.Joystick_3_Lamp_8_Command= 3.0*RATE;
    JLCM -> bt8.Joystick_3_Lamp_9_Command= 3.0*RATE;
    JLCM -> bt8.Joystick_3_Lamp_10_Command= 3.0*RATE;
}
void config_AUXIO7 (getAUXIO7_t *AUXIO7)
{
    AUXIO7 -> Auxiliary_I_O_Channel_18= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_17= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_16= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_15= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_22= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_21= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_20= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO7 -> Auxiliary_I_O_Channel_19= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_AUXIO6 (getAUXIO6_t *AUXIO6)
{
    AUXIO6 -> Auxiliary_I_O_Channel_10= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_9= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_8= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_7= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_14= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_13= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_12= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AUXIO6 -> Auxiliary_I_O_Channel_11= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_AUXIO4 (getAUXIO4_t *AUXIO4)
{
    AUXIO4 -> bt1.Auxiliary_I_O_84= 3.0*RATE;
    AUXIO4 -> bt1.Auxiliary_I_O_83= 3.0*RATE;
    AUXIO4 -> bt1.Auxiliary_I_O_82= 3.0*RATE;
    AUXIO4 -> bt1.Auxiliary_I_O_81= 3.0*RATE;
    AUXIO4 -> bt2.Auxiliary_I_O_88= 3.0*RATE;
    AUXIO4 -> bt2.Auxiliary_I_O_87= 3.0*RATE;
    AUXIO4 -> bt2.Auxiliary_I_O_86= 3.0*RATE;
    AUXIO4 -> bt2.Auxiliary_I_O_85= 3.0*RATE;
    AUXIO4 -> bt3.Auxiliary_I_O_92= 3.0*RATE;
    AUXIO4 -> bt3.Auxiliary_I_O_91= 3.0*RATE;
    AUXIO4 -> bt3.Auxiliary_I_O_90= 3.0*RATE;
    AUXIO4 -> bt3.Auxiliary_I_O_89= 3.0*RATE;
    AUXIO4 -> bt4.Auxiliary_I_O_96= 3.0*RATE;
    AUXIO4 -> bt4.Auxiliary_I_O_95= 3.0*RATE;
    AUXIO4 -> bt4.Auxiliary_I_O_94= 3.0*RATE;
    AUXIO4 -> bt4.Auxiliary_I_O_93= 3.0*RATE;
    AUXIO4 -> bt5.Auxiliary_I_O_100= 3.0*RATE;
    AUXIO4 -> bt5.Auxiliary_I_O_99= 3.0*RATE;
    AUXIO4 -> bt5.Auxiliary_I_O_98= 3.0*RATE;
    AUXIO4 -> bt5.Auxiliary_I_O_97= 3.0*RATE;
    AUXIO4 -> bt6.Auxiliary_I_O_104= 3.0*RATE;
    AUXIO4 -> bt6.Auxiliary_I_O_103= 3.0*RATE;
    AUXIO4 -> bt6.Auxiliary_I_O_102= 3.0*RATE;
    AUXIO4 -> bt6.Auxiliary_I_O_101= 3.0*RATE;
    AUXIO4 -> bt7.Auxiliary_I_O_108= 3.0*RATE;
    AUXIO4 -> bt7.Auxiliary_I_O_107= 3.0*RATE;
    AUXIO4 -> bt7.Auxiliary_I_O_106= 3.0*RATE;
    AUXIO4 -> bt7.Auxiliary_I_O_105= 3.0*RATE;
    AUXIO4 -> bt8.Auxiliary_I_O_112= 3.0*RATE;
    AUXIO4 -> bt8.Auxiliary_I_O_111= 3.0*RATE;
    AUXIO4 -> bt8.Auxiliary_I_O_110= 3.0*RATE;
    AUXIO4 -> bt8.Auxiliary_I_O_109= 3.0*RATE;
}
void config_AUXIO3 (getAUXIO3_t *AUXIO3)
{
    AUXIO3 -> bt1.Auxiliary_I_O_52= 3.0*RATE;
    AUXIO3 -> bt1.Auxiliary_I_O_51= 3.0*RATE;
    AUXIO3 -> bt1.Auxiliary_I_O_50= 3.0*RATE;
    AUXIO3 -> bt1.Auxiliary_I_O_49= 3.0*RATE;
    AUXIO3 -> bt2.Auxiliary_I_O_56= 3.0*RATE;
    AUXIO3 -> bt2.Auxiliary_I_O_55= 3.0*RATE;
    AUXIO3 -> bt2.Auxiliary_I_O_54= 3.0*RATE;
    AUXIO3 -> bt2.Auxiliary_I_O_53= 3.0*RATE;
    AUXIO3 -> bt3.Auxiliary_I_O_60= 3.0*RATE;
    AUXIO3 -> bt3.Auxiliary_I_O_59= 3.0*RATE;
    AUXIO3 -> bt3.Auxiliary_I_O_58= 3.0*RATE;
    AUXIO3 -> bt3.Auxiliary_I_O_57= 3.0*RATE;
    AUXIO3 -> bt4.Auxiliary_I_O_64= 3.0*RATE;
    AUXIO3 -> bt4.Auxiliary_I_O_63= 3.0*RATE;
    AUXIO3 -> bt4.Auxiliary_I_O_62= 3.0*RATE;
    AUXIO3 -> bt4.Auxiliary_I_O_61= 3.0*RATE;
    AUXIO3 -> bt5.Auxiliary_I_O_68= 3.0*RATE;
    AUXIO3 -> bt5.Auxiliary_I_O_67= 3.0*RATE;
    AUXIO3 -> bt5.Auxiliary_I_O_66= 3.0*RATE;
    AUXIO3 -> bt5.Auxiliary_I_O_65= 3.0*RATE;
    AUXIO3 -> bt6.Auxiliary_I_O_72= 3.0*RATE;
    AUXIO3 -> bt6.Auxiliary_I_O_71= 3.0*RATE;
    AUXIO3 -> bt6.Auxiliary_I_O_70= 3.0*RATE;
    AUXIO3 -> bt6.Auxiliary_I_O_69= 3.0*RATE;
    AUXIO3 -> bt7.Auxiliary_I_O_76= 3.0*RATE;
    AUXIO3 -> bt7.Auxiliary_I_O_75= 3.0*RATE;
    AUXIO3 -> bt7.Auxiliary_I_O_74= 3.0*RATE;
    AUXIO3 -> bt7.Auxiliary_I_O_73= 3.0*RATE;
    AUXIO3 -> bt8.Auxiliary_I_O_80= 3.0*RATE;
    AUXIO3 -> bt8.Auxiliary_I_O_79= 3.0*RATE;
    AUXIO3 -> bt8.Auxiliary_I_O_78= 3.0*RATE;
    AUXIO3 -> bt8.Auxiliary_I_O_77= 3.0*RATE;
}
void config_AUXIO2 (getAUXIO2_t *AUXIO2)
{
    AUXIO2 -> bt1.Auxiliary_I_O_20= 3.0*RATE;
    AUXIO2 -> bt1.Auxiliary_I_O_19= 3.0*RATE;
    AUXIO2 -> bt1.Auxiliary_I_O_18= 3.0*RATE;
    AUXIO2 -> bt1.Auxiliary_I_O_17= 3.0*RATE;
    AUXIO2 -> bt2.Auxiliary_I_O_24= 3.0*RATE;
    AUXIO2 -> bt2.Auxiliary_I_O_23= 3.0*RATE;
    AUXIO2 -> bt2.Auxiliary_I_O_22= 3.0*RATE;
    AUXIO2 -> bt2.Auxiliary_I_O_21= 3.0*RATE;
    AUXIO2 -> bt3.Auxiliary_I_O_28= 3.0*RATE;
    AUXIO2 -> bt3.Auxiliary_I_O_27= 3.0*RATE;
    AUXIO2 -> bt3.Auxiliary_I_O_26= 3.0*RATE;
    AUXIO2 -> bt3.Auxiliary_I_O_25= 3.0*RATE;
    AUXIO2 -> bt4.Auxiliary_I_O_32= 3.0*RATE;
    AUXIO2 -> bt4.Auxiliary_I_O_31= 3.0*RATE;
    AUXIO2 -> bt4.Auxiliary_I_O_30= 3.0*RATE;
    AUXIO2 -> bt4.Auxiliary_I_O_29= 3.0*RATE;
    AUXIO2 -> bt5.Auxiliary_I_O_36= 3.0*RATE;
    AUXIO2 -> bt5.Auxiliary_I_O_35= 3.0*RATE;
    AUXIO2 -> bt5.Auxiliary_I_O_34= 3.0*RATE;
    AUXIO2 -> bt5.Auxiliary_I_O_33= 3.0*RATE;
    AUXIO2 -> bt6.Auxiliary_I_O_40= 3.0*RATE;
    AUXIO2 -> bt6.Auxiliary_I_O_39= 3.0*RATE;
    AUXIO2 -> bt6.Auxiliary_I_O_38= 3.0*RATE;
    AUXIO2 -> bt6.Auxiliary_I_O_37= 3.0*RATE;
    AUXIO2 -> bt7.Auxiliary_I_O_44= 3.0*RATE;
    AUXIO2 -> bt7.Auxiliary_I_O_43= 3.0*RATE;
    AUXIO2 -> bt7.Auxiliary_I_O_42= 3.0*RATE;
    AUXIO2 -> bt7.Auxiliary_I_O_41= 3.0*RATE;
    AUXIO2 -> bt8.Auxiliary_I_O_48= 3.0*RATE;
    AUXIO2 -> bt8.Auxiliary_I_O_47= 3.0*RATE;
    AUXIO2 -> bt8.Auxiliary_I_O_46= 3.0*RATE;
    AUXIO2 -> bt8.Auxiliary_I_O_45= 3.0*RATE;
}
void config_DISP1 (getDISP1_t *DISP1)
{
    DISP1 -> bt1.Text_Display_Instructions= 15.0*RATE;
    DISP1 -> Text_Display_Index= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_FLIC (getFLIC_t *FLIC)
{
    FLIC -> bt1.Lane_Departure_Warning_Enable_Command= 3.0*RATE;
}
void config_TPRS (getTPRS_t *TPRS)
{
    TPRS -> bt1.Tire_Location= 255.0*RATE;
    TPRS -> Reference_Tire_Pressure_Setting= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
}
void config_CTL (getCTL_t *CTL)
{
    CTL -> Engine_Speed_Limit_Request___Minimum_Continuous= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    CTL -> Engine_Speed_Limit_Request___Maximum_Continuous= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    CTL -> Engine_Torque_Limit_Request___Minimum_Continuous= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    CTL -> Engine_Torque_Limit_Request___Maximum_Continuous= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    CTL -> Minimum_Continuous_Retarder_Speed_Limit_Request= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    CTL -> Maximum_Continuous_Retarder_Speed_Limit_Request= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    CTL -> Minimum_Continuous_Retarder_Torque_Limit_Request= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    CTL -> Maximum_Continuous_Retarder_Torque_Limit_Request= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_CL (getCL_t *CL)
{
    CL -> Illumination_Brightness_Percent= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    CL -> Switch_Backlight_Illumination_Brightness_Percent= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_ASC6 (getASC6_t *ASC6)
{
    ASC6 -> Level_Preset_Front_Axle_Left= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    ASC6 -> Level_Preset_Front_Axle_Right= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    ASC6 -> Level_Preset_Rear_Axle_Left= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    ASC6 -> Level_Preset_Rear_Axle_Right= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
}
void config_ASC2 (getASC2_t *ASC2)
{
    ASC2 -> bt1.Automatic_traction_help__load_transfer_= 3.0*RATE;
    ASC2 -> bt1.Kneeling_Request_Left_Side= 3.0*RATE;
    ASC2 -> bt1.Kneeling_Request_Right_Side= 3.0*RATE;
    ASC2 -> bt1.Kneeling_Control_Mode_Request= 3.0*RATE;
    ASC2 -> bt2.Nominal_Level_Request_Front_Axle= 15.0*RATE;
    ASC2 -> bt2.Nominal_Level_Request_Rear_Axle= 15.0*RATE;
    ASC2 -> bt3.Level_Control_Mode_Request= 15.0*RATE;
    ASC2 -> bt3.Lift_Axle_1_Position_Command= 3.0*RATE;
    ASC2 -> bt3.Lift_Axle_2_Position_Command= 3.0*RATE;
    ASC2 -> Damper_Stiffness_Request_Front_Axle= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ASC2 -> Damper_Stiffness_Request_Rear_Axle= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ASC2 -> Damper_Stiffness_Request_Lift___Tag_Axle= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ASC2 -> bt7.Kneeling_Command___Front_Axle= 3.0*RATE;
    ASC2 -> bt7.Kneeling_Command___Rear_Axle= 3.0*RATE;
    ASC2 -> bt7.Prohibit_air_suspension_control= 3.0*RATE;
    ASC2 -> bt7.Allow_Level_Control_During_Braking_Command= 3.0*RATE;
    ASC2 -> bt8.Speed_Dependent_Level_Control_Request= 3.0*RATE;
    ASC2 -> bt8.Prohibit_Automatic_Air_Suspension_Control= 3.0*RATE;
    ASC2 -> bt8.Memory_level_request= 15.0*RATE;
}
void config_TDA (getTDA_t *TDA)
{
    TDA -> Adjust_seconds= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    TDA -> Adjust_minutes= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TDA -> Adjust_hours= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TDA -> Adjust_month= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TDA -> Adjust_day= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    TDA -> Adjust_year= Parameter_Translate(2235.0*RATE , 1.0 , 1985.0);
    TDA -> Adjust_local_minute_offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    TDA -> Adjust_local_hour_offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_ATS (getATS_t *ATS)
{
    ATS -> bt1.Anti_theft_Encryption_Seed_Present_Indicator= 3.0*RATE;
    ATS -> bt1.Anti_theft_Password_Valid_Indicator= 3.0*RATE;
    ATS -> bt1.Anti_theft_Component_Status_States= 3.0*RATE;
    ATS -> bt1.Anti_theft_Modify_Password_States= 3.0*RATE;
    ATS -> Anti_theft_Random_Number= Parameter_Translate(255.0*RATE , 4.0 , 0.0);
}
void config_ATR (getATR_t *ATR)
{
    ATR -> bt1.Anti_theft_Encryption_Indicator_States= 3.0*RATE;
    ATR -> bt1.Anti_theft_Desired_Exit_Mode_States= 3.0*RATE;
    ATR -> bt1.Anti_theft_Command_States= 7.0*RATE;
    ATR -> Anti_theft_Password_Representation= Parameter_Translate(255.0*RATE , 8.0 , 0.0);
}
void config_CM1 (getCM1_t *CM1)
{
    CM1 -> Requested_Percent_Fan_Speed= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    CM1 -> Cab_Interior_Temperature_Command= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CM1 -> bt4.Auxiliary_Heater_Coolant_Pump_Request= 3.0*RATE;
    CM1 -> bt4.Battery_Main_Switch_Hold_Request= 3.0*RATE;
    CM1 -> bt4.Operator_Seat_Direction_Switch= 3.0*RATE;
    CM1 -> bt4.Seat_Belt_Switch= 3.0*RATE;
    CM1 -> bt5.Park_Brake_Command= 3.0*RATE;
    CM1 -> bt5.Vehicle_Limiting_Speed_Governor_Decrement_Switch= 3.0*RATE;
    CM1 -> bt5.Vehicle_Limiting_Speed_Governor_Increment_Switch= 3.0*RATE;
    CM1 -> bt5.Vehicle_Limiting_Speed_Governor_Enable_Switch= 3.0*RATE;
    CM1 -> bt6.Diesel_Particulate_Filter_Regeneration_Force_Switch= 3.0*RATE;
    CM1 -> bt6.Automatic_Gear_Shifting_Enable_Switch= 3.0*RATE;
    CM1 -> bt6.Engine_Automatic_Start_Enable_Switch= 3.0*RATE;
    CM1 -> bt7.Auxiliary_Heater_Mode_Request= 15.0*RATE;
    CM1 -> bt7.Request_Engine_Zone_Heating= 3.0*RATE;
    CM1 -> bt7.Request_Cab_Zone_Heating= 3.0*RATE;
    CM1 -> Selected_Maximum_Vehicle_Speed_Limit= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_ERC1 (getERC1_t *ERC1)
{
    ERC1 -> bt1.Retarder_Torque_Mode= 15.0*RATE;
    ERC1 -> bt1.Retarder_Enable___Brake_Assist_Switch= 3.0*RATE;
    ERC1 -> bt1.Retarder_Enable___Shift_Assist_Switch= 3.0*RATE;
    ERC1 -> Actual_Retarder___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ERC1 -> Intended_Retarder_Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ERC1 -> bt4.Engine_Coolant_Load_Increase= 3.0*RATE;
    ERC1 -> bt4.Retarder_Requesting_Brake_Light= 3.0*RATE;
    ERC1 -> bt4.Retarder_Road_Speed_Limit_Switch= 3.0*RATE;
    ERC1 -> bt4.Retarder_Road_Speed_Exceeded_Status= 3.0*RATE;
    ERC1 -> Source_Address_of_Controlling_Device_for_Retarder_Control= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    ERC1 -> Drivers_Demand_Retarder__= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ERC1 -> Retarder_Selection_non_engine= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ERC1 -> Actual_Maximum_Available_Retarder___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_EBC1 (getEBC1_t *EBC1)
{
    EBC1 -> bt1.ASR_Engine_Control_Active= 3.0*RATE;
    EBC1 -> bt1.ASR_Brake_Control_Active= 3.0*RATE;
    EBC1 -> bt1.Anti_Lock_Braking__ABS__Active= 3.0*RATE;
    EBC1 -> bt1.EBS_Brake_Switch= 3.0*RATE;
    EBC1 -> Brake_Pedal_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC1 -> bt3.ABS_Off_road_Switch= 3.0*RATE;
    EBC1 -> bt3.ASR_Off_road_Switch= 3.0*RATE;
    EBC1 -> bt3.ASR__Hill_Holder__Switch= 3.0*RATE;
    EBC1 -> bt3.Traction_Control_Override_Switch= 3.0*RATE;
    EBC1 -> bt4.Accelerator_Interlock_Switch= 3.0*RATE;
    EBC1 -> bt4.Engine_Derate_Switch= 3.0*RATE;
    EBC1 -> bt4.Engine_Auxiliary_Shutdown_Switch= 3.0*RATE;
    EBC1 -> bt4.Remote_Accelerator_Enable_Switch= 3.0*RATE;
    EBC1 -> Engine_Retarder_Selection= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC1 -> bt6.ABS_Fully_Operational= 3.0*RATE;
    EBC1 -> bt6.EBS_Red_Warning_Signal= 3.0*RATE;
    EBC1 -> bt6.ABS_EBS_Amber_Warning_Signal__Powered_Vehicle_= 3.0*RATE;
    EBC1 -> bt6.ATC_ASR_Information_Signal= 3.0*RATE;
    EBC1 -> Source_Address_of_Controlling_Device_for_Brake_Control= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    EBC1 -> bt8.Halt_brake_switch= 3.0*RATE;
    EBC1 -> bt8.Trailer_ABS_Status= 3.0*RATE;
    EBC1 -> bt8.Tractor_Mounted_Trailer_ABS_Warning_Signal= 3.0*RATE;
}
void config_ETC1 (getETC1_t *ETC1)
{
    ETC1 -> bt1.Transmission_Driveline_Engaged= 3.0*RATE;
    ETC1 -> bt1.Transmission_Torque_Converter_Lockup_Engaged= 3.0*RATE;
    ETC1 -> bt1.Transmission_Shift_In_Process= 3.0*RATE;
    ETC1 -> bt1.Transmission_Torque_Converter_Lockup_Transition_in_Process= 3.0*RATE;
    ETC1 -> Transmission_Output_Shaft_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    ETC1 -> Percent_Clutch_Slip= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ETC1 -> bt5.Engine_Momentary_Overspeed_Enable= 3.0*RATE;
    ETC1 -> bt5.Progressive_Shift_Disable= 3.0*RATE;
    ETC1 -> bt5.Momentary_Engine_Maximum_Power_Enable= 3.0*RATE;
    ETC1 -> Transmission_Input_Shaft_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    ETC1 -> Source_Address_of_Controlling_Device_for_Transmission_Control= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
}
void config_EEC2 (getEEC2_t *EEC2)
{
    EEC2 -> bt1.Accelerator_Pedal_1_Low_Idle_Switch= 3.0*RATE;
    EEC2 -> bt1.Accelerator_Pedal_Kickdown_Switch= 3.0*RATE;
    EEC2 -> bt1.Road_Speed_Limit_Status= 3.0*RATE;
    EEC2 -> bt1.Accelerator_Pedal_2_Low_Idle_Switch= 3.0*RATE;
    EEC2 -> Accelerator_Pedal_Position_1= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC2 -> Engine_Percent_Load_At_Current_Speed= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    EEC2 -> Remote_Accelerator_Pedal_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC2 -> Accelerator_Pedal_Position_2= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC2 -> bt6.Vehicle_Acceleration_Rate_Limit_Status= 3.0*RATE;
    EEC2 -> bt6.Momentary_Engine_Maximum_Power_Enable_Feedback= 3.0*RATE;
    EEC2 -> bt6.DPF_Thermal_Management_Active= 3.0*RATE;
    EEC2 -> bt6.SCR_Thermal_Management_Active= 3.0*RATE;
    EEC2 -> Actual_Maximum_Available_Engine___Percent_Torque= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC2 -> Estimated_Pumping___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_EEC1 (getEEC1_t *EEC1)
{
    EEC1 -> bt1.Engine_Torque_Mode= 15.0*RATE;
    EEC1 -> bt1.Actual_Engine___Percent_Torque_High_Resolution= 0.875*RATE;
    EEC1 -> Driver_s_Demand_Engine___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EEC1 -> Actual_Engine___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EEC1 -> Engine_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    EEC1 -> Source_Address_of_Controlling_Device_for_Engine_Control= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    EEC1 -> bt7.Engine_Starter_Mode= 15.0*RATE;
    EEC1 -> Engine_Demand__Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_ETC2 (getETC2_t *ETC2)
{
    ETC2 -> Transmission_Selected_Gear= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ETC2 -> Transmission_Actual_Gear_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    ETC2 -> Transmission_Current_Gear= Parameter_Translate(3.0*RATE , 4.0 , 0.0);
    ETC2 -> Transmission_Requested_Range= Parameter_Translate(255.0*RATE , 4.0 , 0.0);
    ETC2 -> Transmission_Current_Range= Parameter_Translate(255.0*RATE , 4.0 , 0.0);
}
void config_EAC1 (getEAC1_t *EAC1)
{
    EAC1 -> bt1.Location= 255.0*RATE;
    EAC1 -> bt2.Differential_Lock_State___Front_Axle_1= 3.0*RATE;
    EAC1 -> bt2.Differential_Lock_State___Front_Axle_2= 3.0*RATE;
    EAC1 -> bt2.Differential_Lock_State___Rear_Axle_1= 3.0*RATE;
    EAC1 -> bt2.Differential_Lock_State___Rear_Axle_2= 3.0*RATE;
    EAC1 -> bt3.Differential_Lock_State___Central= 3.0*RATE;
    EAC1 -> bt3.Differential_Lock_State___Central_Front= 3.0*RATE;
    EAC1 -> bt3.Differential_Lock_State___Central_Rear= 3.0*RATE;
    EAC1 -> bt4.Front_axle_group_engagement_status= 3.0*RATE;
    EAC1 -> bt4.Rear_axle_group_engagement_status= 3.0*RATE;
}
void config_FLI1 (getFLI1_t *FLI1)
{
    FLI1 -> bt1.Lane_Departure_Left= 3.0*RATE;
    FLI1 -> bt1.Lane_Departure_Right= 3.0*RATE;
    FLI1 -> bt1.Lane_Departure_Imminent_Right_Side= 3.0*RATE;
    FLI1 -> bt1.Lane_Departure_Imminent_Left_Side= 3.0*RATE;
}
void config_HPG (getHPG_t *HPG)
{
    HPG -> Hydraulic_Pressure= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
    HPG -> bt3.Engine_Hydraulic_Pressure_Governor_Mode_Indicator= 3.0*RATE;
    HPG -> bt3.Engine_Hydraulic_Pressure_Governor_Switch= 3.0*RATE;
    HPG -> bt3.Fire_Apparatus_Pump_Engagement= 3.0*RATE;
}
void config_VDC2 (getVDC2_t *VDC2)
{
    VDC2 -> Steering_Wheel_Angle= Parameter_Translate(31.374*RATE , 1.0 , -31.374);
    VDC2 -> bt3.Steering_Wheel_Turn_Counter= 29.0*RATE;
    VDC2 -> bt3.Steering_Wheel_Angle_Sensor_Type= 3.0*RATE;
    VDC2 -> Yaw_Rate= Parameter_Translate(3.92*RATE , 1.0 , -3.92);
    VDC2 -> Lateral_Acceleration= Parameter_Translate(322.55*RATE , 0.01 , -320.0);
    VDC2 -> Longitudinal_Acceleration= Parameter_Translate(12.5*RATE , 0.1 , -12.5);
}
void config_EGF1 (getEGF1_t *EGF1)
{
    EGF1 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Mass_Flow_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    EGF1 -> Engine_Intake_Air_Mass_Flow_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    EGF1 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Mass_Flow_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
}
void config_ESC1 (getESC1_t *ESC1)
{
    ESC1 -> Actual_Inner_wheel_steering_angle= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ESC1 -> bt3.Axle_Location= 255.0*RATE;
    ESC1 -> bt4.Status_of_Steering_Axle= 15.0*RATE;
    ESC1 -> bt4.Steerable_Lift_Axle_Lowering_Inhibit= 3.0*RATE;
    ESC1 -> bt5.Steering_Type= 15.0*RATE;
    ESC1 -> bt5.Type_of_Steering_Forces= 15.0*RATE;
    ESC1 -> bt6.Type_of_Steering_Transmission= 15.0*RATE;
}
void config_ETC8 (getETC8_t *ETC8)
{
    ETC8 -> Transmission_Torque_Converter_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    ETC8 -> Transmission_Clutch_Converter_Input_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
}
void config_LOI (getLOI_t *LOI)
{
    LOI -> bt1.Blade_Control_Mode_Switch= 15.0*RATE;
    LOI -> bt1.Desired_Grade_Offset_Switch= 15.0*RATE;
    LOI -> bt2.Blade_Auto_Mode_Command= 15.0*RATE;
    LOI -> bt2.Left_Blade_Control_Mode_Operator_Control= 15.0*RATE;
    LOI -> bt3.Right_Blade_Control_Mode_Operator_Control= 15.0*RATE;
    LOI -> bt3.Left_Desired_Blade_Offset_Operator_Control= 15.0*RATE;
    LOI -> bt4.Right_Desired_Blade_Offset_Operator_Control= 15.0*RATE;
    LOI -> bt4.Side_shift_Blade_Control_Mode_Operator_Control= 15.0*RATE;
    LOI -> bt5.Side_shift_Desired_Blade_Offset_Operator_Control= 15.0*RATE;
    LOI -> bt5.Set_Elevation_Sensor_1_Reference_Elevation= 3.0*RATE;
    LOI -> bt5.Set_Elevation_Sensor_2_Reference_Elevation= 3.0*RATE;
}
void config_AT1IG1 (getAT1IG1_t *AT1IG1)
{
    AT1IG1 -> Aftertreatment_1_Intake_NOx= Parameter_Translate(3012.75*RATE , 0.05 , -200.0);
    AT1IG1 -> Aftertreatment_1_Intake_O2= Parameter_Translate(21.0*RATE , 0.000514 , -12.0);
    AT1IG1 -> bt5.Aftertreatment_1_Intake_Gas_Sensor_Power_Status= 3.0*RATE;
    AT1IG1 -> bt5.Aftertreatment_1_Intake_Gas_Sensor_at_Temperature= 3.0*RATE;
    AT1IG1 -> bt5.Aftertreatment_1_Intake_NOx_Reading_Stable= 3.0*RATE;
    AT1IG1 -> bt5.Aftertreatment_1_Intake_Wide_Range___O2_Reading_Stable= 3.0*RATE;
    AT1IG1 -> bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    AT1IG1 -> bt6.Aftertreatment_1_Intake_Gas_Sensor_Heater_Control= 3.0*RATE;
    AT1IG1 -> bt7.Aftertreatment_1_Intake_NOx_Sensor_Preliminary_FMI= 31.0*RATE;
    AT1IG1 -> bt7.NOx_Sensor_ATI1_Self_diagnosis_Status= 7.0*RATE;
    AT1IG1 -> bt8.Aftertreatment_1_Intake_Oxygen_Sensor_Preliminary_FMI= 31.0*RATE;
}
void config_AT1OG1 (getAT1OG1_t *AT1OG1)
{
    AT1OG1 -> Aftertreatment_1_Outlet_NOx= Parameter_Translate(3012.75*RATE , 0.05 , -200.0);
    AT1OG1 -> Aftertreatment_1_Outlet_O2= Parameter_Translate(21.0*RATE , 0.000514 , -12.0);
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_Gas_Sensor_Power_Status= 3.0*RATE;
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_Gas_Sensor_at_Temperature= 3.0*RATE;
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_NOx_Reading_Stable= 3.0*RATE;
    AT1OG1 -> bt5.Aftertreatment_1_Outlet_Wide_Range__O2_Reading_Stable= 3.0*RATE;
    AT1OG1 -> bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    AT1OG1 -> bt6.Aftertreatment_1_Outlet_Gas_Sensor_Heater_Control= 3.0*RATE;
    AT1OG1 -> bt7.Aftertreatment_1_Outlet_NOx_Sensor_Preliminary_FMI= 31.0*RATE;
    AT1OG1 -> bt7.NOx_Sensor_ATO1_Self_diagnosis_Status= 7.0*RATE;
    AT1OG1 -> bt8.Aftertreatment_1_Outlet_Oxygen_Sensor_Preliminary_FMI= 31.0*RATE;
}
void config_AT2IG1 (getAT2IG1_t *AT2IG1)
{
    AT2IG1 -> Aftertreatment_2_Intake_NOx= Parameter_Translate(3012.75*RATE , 0.05 , -200.0);
    AT2IG1 -> Aftertreatment_2_Intake_O2= Parameter_Translate(21.0*RATE , 0.000514 , -12.0);
    AT2IG1 -> bt5.Aftertreatment_2_Intake_Gas_Sensor_Power_Status= 3.0*RATE;
    AT2IG1 -> bt5.Aftertreatment_2_Intake_Gas_Sensor_at_Temperature= 3.0*RATE;
    AT2IG1 -> bt5.Aftertreatment_2_Intake_NOx_Reading_Stable= 3.0*RATE;
    AT2IG1 -> bt5.Aftertreatment_2_Intake_Wide_Range___O2_Reading_Stable= 3.0*RATE;
    AT2IG1 -> bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    AT2IG1 -> bt6.Aftertreatment_2_Intake_Gas_Sensor_Heater_Control= 3.0*RATE;
    AT2IG1 -> bt7.Aftertreatment_2_Intake_NOx_Sensor_Preliminary_FMI= 31.0*RATE;
    AT2IG1 -> bt7.NOx_Sensor_ATI2_Self_diagnosis_Status= 7.0*RATE;
    AT2IG1 -> bt8.Aftertreatment_2_Intake_Oxygen_Sensor_Preliminary_FMI= 31.0*RATE;
}
void config_AT2OG1 (getAT2OG1_t *AT2OG1)
{
    AT2OG1 -> Aftertreatment_2_Outlet_NOx= Parameter_Translate(3012.75*RATE , 0.05 , -200.0);
    AT2OG1 -> Aftertreatment_2_Outlet_O2= Parameter_Translate(21.0*RATE , 0.000514 , -12.0);
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_Gas_Sensor_Power_Status= 3.0*RATE;
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_Gas_Sensor_at_Temperature= 3.0*RATE;
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_NOx_Reading_Stable= 3.0*RATE;
    AT2OG1 -> bt5.Aftertreatment_2_Outlet_Wide_Range___O2_Reading_Stable= 3.0*RATE;
    AT2OG1 -> bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    AT2OG1 -> bt6.Aftertreatment_2_Outlet_Gas_Sensor_Heater_Control= 3.0*RATE;
    AT2OG1 -> bt7.Aftertreatment_2_Outlet_NOx_Sensor_Preliminary_FMI= 31.0*RATE;
    AT2OG1 -> bt7.NOx_Sensor_ATO2_Self_diagnosis_Status= 7.0*RATE;
    AT2OG1 -> bt8.Aftertreatment_2_Outlet_Oxygen_Sensor_Preliminary_FMI= 31.0*RATE;
}
void config_FWSS1 (getFWSS1_t *FWSS1)
{
    FWSS1 -> Fifth_Wheel_Vertical_Force= Parameter_Translate(321275.0*RATE , 5.0 , 0.0);
    FWSS1 -> Fifth_Wheel_Drawbar_Force= Parameter_Translate(322550.0*RATE , 10.0 , 0.0);
    FWSS1 -> Fifth_Wheel_Roll_Moment= Parameter_Translate(322550.0*RATE , 10.0 , 0.0);
    FWSS1 -> bt7.Fifth_Wheel_Roll_Warning_Indicator= 3.0*RATE;
}
void config_SSI (getSSI_t *SSI)
{
    SSI -> Pitch_Angle= Parameter_Translate(64.51*RATE , 0.002 , -64.0);
    SSI -> Roll_Angle= Parameter_Translate(64.51*RATE , 0.002 , -64.0);
    SSI -> Pitch_Rate= Parameter_Translate(64.51*RATE , 0.002 , -64.0);
    SSI -> bt7.Pitch_Angle_Figure_of_Merit= 3.0*RATE;
    SSI -> bt7.Roll_Angle_Figure_of_Merit= 3.0*RATE;
    SSI -> bt7.Pitch_Rate_Figure_of_Merit= 3.0*RATE;
    SSI -> bt7.Pitch_and_Roll_Compensated= 3.0*RATE;
    SSI -> Roll_and_Pitch_Measurement_Latency= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
}
void config_BI (getBI_t *BI)
{
    BI -> Relative_Blade_Height= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    BI -> Blade_Rotation_Angle= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    BI -> Relative_Blade_Height_and_Blade_Rotation_Angle_Measurement_Latency= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    BI -> bt6.Relative_Blade_Height_Figure_of_Merit= 3.0*RATE;
    BI -> bt6.Blade_Rotation_Angle_Figure_of_Merit= 3.0*RATE;
}
void config_CCS (getCCS_t *CCS)
{
    CCS -> bt1.Engine_Cylinder_1_Combustion_Status= 3.0*RATE;
    CCS -> bt1.Engine_Cylinder_2_Combustion_Status= 3.0*RATE;
    CCS -> bt1.Engine_Cylinder_3_Combustion_Status= 3.0*RATE;
    CCS -> bt1.Engine_Cylinder_4_Combustion_Status= 3.0*RATE;
    CCS -> bt2.Engine_Cylinder_5_Combustion_Status= 3.0*RATE;
    CCS -> bt2.Engine_Cylinder_6_Combustion_Status= 3.0*RATE;
    CCS -> bt2.Engine_Cylinder_7_Combustion_Status= 3.0*RATE;
    CCS -> bt2.Engine_Cylinder_8_Combustion_Status= 3.0*RATE;
    CCS -> bt3.Engine_Cylinder_9_Combustion_Status= 3.0*RATE;
    CCS -> bt3.Engine_Cylinder_10_Combustion_Status= 3.0*RATE;
    CCS -> bt3.Engine_Cylinder_11_Combustion_Status= 3.0*RATE;
    CCS -> bt3.Engine_Cylinder_12_Combustion_Status= 3.0*RATE;
    CCS -> bt4.Engine_Cylinder_13_Combustion_Status= 3.0*RATE;
    CCS -> bt4.Engine_Cylinder_14_Combustion_Status= 3.0*RATE;
    CCS -> bt4.Engine_Cylinder_15_Combustion_Status= 3.0*RATE;
    CCS -> bt4.Engine_Cylinder_16_Combustion_Status= 3.0*RATE;
    CCS -> bt5.Engine_Cylinder_17_Combustion_Status= 3.0*RATE;
    CCS -> bt5.Engine_Cylinder_18_Combustion_Status= 3.0*RATE;
    CCS -> bt5.Engine_Cylinder_19_Combustion_Status= 3.0*RATE;
    CCS -> bt5.Engine_Cylinder_20_Combustion_Status= 3.0*RATE;
    CCS -> bt6.Engine_Cylinder_21_Combustion_Status= 3.0*RATE;
    CCS -> bt6.Engine_Cylinder_22_Combustion_Status= 3.0*RATE;
    CCS -> bt6.Engine_Cylinder_23_Combustion_Status= 3.0*RATE;
    CCS -> bt6.Engine_Cylinder_24_Combustion_Status= 3.0*RATE;
}
void config_KL1 (getKL1_t *KL1)
{
    KL1 -> Engine_Cylinder_1_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_2_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_3_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_4_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_5_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_6_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_7_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL1 -> Engine_Cylinder_8_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_KL2 (getKL2_t *KL2)
{
    KL2 -> Engine_Cylinder_9_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_10_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_11_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_12_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_13_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_14_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_15_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL2 -> Engine_Cylinder_16_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_KL3 (getKL3_t *KL3)
{
    KL3 -> Engine_Cylinder_17_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_18_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_19_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_20_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_21_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_22_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_23_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    KL3 -> Engine_Cylinder_24_Knock_Level= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_TFAC (getTFAC_t *TFAC)
{
    TFAC -> Engine_Throttle_Actuator_1_Control_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    TFAC -> Engine_Throttle_Actuator_2_Control_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    TFAC -> Engine_Fuel_Actuator_1_Control_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    TFAC -> Engine_Fuel_Actuator_2_Control_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_SAS (getSAS_t *SAS)
{
    SAS -> Steering_Wheel_Angle= Parameter_Translate(31.374*RATE , 1.0 , -31.374);
    SAS -> bt3.Steering_Wheel_Angle_Range_Counter= 29.0*RATE;
    SAS -> bt3.Steering_Wheel_Angle_Range_Counter_Type= 3.0*RATE;
    SAS -> Steering_Wheel_Angle_Range= Parameter_Translate(31.374*RATE , 1.0 , -31.374);
    SAS -> bt7.Steering_Angle_Sensor_Active_Mode= 3.0*RATE;
    SAS -> bt7.Steering_Angle_Sensor_Calibrated= 3.0*RATE;
    SAS -> bt8.Message_Counter= 15.0*RATE;
    SAS -> bt8.Message_Checksum= 15.0*RATE;
}
void config_ESSI (getESSI_t *ESSI)
{
    ESSI -> Engine_Speed_1= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    ESSI -> Engine_Speed_2= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    ESSI -> Engine_Speed_3= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    ESSI -> bt7.Engine_Speed_Sensor_3_Timing_Pattern_Status= 3.0*RATE;
    ESSI -> bt7.Engine_Speed_Sensor_2_Timing_Pattern_Status= 3.0*RATE;
    ESSI -> bt7.Engine_Speed_Sensor_1_Timing_Pattern_Status= 3.0*RATE;
}
void config_A1SCRDSI1 (getA1SCRDSI1_t *A1SCRDSI1)
{
    A1SCRDSI1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity= Parameter_Translate(19276.5*RATE , 0.3 , 0.0);
    A1SCRDSI1 -> bt3.Aftertreatment_1_SCR_System_State= 15.0*RATE;
    A1SCRDSI1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A1SCRDSI1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Absolute_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
}
void config_A1SCRDSR1 (getA1SCRDSR1_t *A1SCRDSR1)
{
    A1SCRDSR1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity= Parameter_Translate(19276.5*RATE , 0.3 , 0.0);
    A1SCRDSR1 -> bt3.Aftertreatment_1_SCR_System_Requested_State= 15.0*RATE;
    A1SCRDSR1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_A1SCRAI (getA1SCRAI_t *A1SCRAI)
{
    A1SCRAI -> Aftertreatment_1_Outlet_NH3= Parameter_Translate(3012.75*RATE , 0.05 , -200.0);
    A1SCRAI -> bt3.Aftertreatment_1_Outlet_NH3_Sensor_Preliminary_FMI= 31.0*RATE;
    A1SCRAI -> bt4.Aftertreatment_1_Outlet_NH3_Reading_Stable= 3.0*RATE;
    A1SCRAI -> bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Power_In_Range= 3.0*RATE;
    A1SCRAI -> bt4.Aftertreatment_1_Outlet_NH3_Gas_Sensor_at_Temperature= 3.0*RATE;
    A1SCRAI -> bt5.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    A1SCRAI -> bt6.Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Control= 3.0*RATE;
}
void config_A2SCRDSI1 (getA2SCRDSI1_t *A2SCRDSI1)
{
    A2SCRDSI1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity= Parameter_Translate(19276.5*RATE , 0.3 , 0.0);
    A2SCRDSI1 -> bt3.Aftertreatment_2_SCR_System_State= 15.0*RATE;
    A2SCRDSI1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A2SCRDSI1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Absolute_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
}
void config_A2SCRDSR1 (getA2SCRDSR1_t *A2SCRDSR1)
{
    A2SCRDSR1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity= Parameter_Translate(19276.5*RATE , 0.3 , 0.0);
    A2SCRDSR1 -> bt3.Aftertreatment_2_SCR_System_Requested_State= 15.0*RATE;
    A2SCRDSR1 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_A2SCRAI (getA2SCRAI_t *A2SCRAI)
{
    A2SCRAI -> Aftertreatment_2_Outlet_NH3= Parameter_Translate(3012.75*RATE , 0.05 , -200.0);
    A2SCRAI -> bt3.Aftertreatment_2_Outlet_NH3_Sensor_Preliminary_FMI= 31.0*RATE;
    A2SCRAI -> bt4.Aftertreatment_2_Outlet_NH3_Reading_Stable= 3.0*RATE;
    A2SCRAI -> bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Power_In_Range= 3.0*RATE;
    A2SCRAI -> bt4.Aftertreatment_2_Outlet_NH3_Gas_Sensor_at_Temperature= 3.0*RATE;
    A2SCRAI -> bt5.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    A2SCRAI -> bt6.Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Control= 3.0*RATE;
}
void config_SSI2 (getSSI2_t *SSI2)
{
    SSI2 -> Pitch_Angle_Extended_Range= Parameter_Translate(250.9999*RATE , 1.0 , -250.0);
    SSI2 -> Roll_Angle_Extended_Range= Parameter_Translate(250.9999*RATE , 1.0 , -250.0);
    SSI2 -> bt7.Pitch_Angle_Extended_Range_Compensation= 3.0*RATE;
    SSI2 -> bt7.Pitch_Angle_Extended_Range_Figure_of_Merit= 3.0*RATE;
    SSI2 -> bt7.Roll_Angle_Extended_Range_Compensation= 3.0*RATE;
    SSI2 -> bt7.Roll_Angle_Extended_Range_Figure_of_Merit= 3.0*RATE;
    SSI2 -> Roll_and_Pitch_Extended_Range_Measurement_Latency= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
}
void config_ARI (getARI_t *ARI)
{
    ARI -> Pitch_Rate_Extended_Range= Parameter_Translate(250.992*RATE , 1.0 , -250.0);
    ARI -> Roll_Rate_Extended_Range= Parameter_Translate(250.992*RATE , 1.0 , -250.0);
    ARI -> Yaw_Rate_Extended_Range= Parameter_Translate(250.992*RATE , 1.0 , -250.0);
    ARI -> bt7.Pitch_Rate_Extended_Range_Figure_of_Merit= 3.0*RATE;
    ARI -> bt7.Roll_Rate_Extended_Range_Figure_of_Merit= 3.0*RATE;
    ARI -> bt7.Yaw_Rate_Extended_Range_Figure_of_Merit= 3.0*RATE;
    ARI -> Angular_Rate_Measurement_Latency= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
}
void config_CN (getCN_t *CN)
{
    CN -> bt8.Crash_Counter= 15.0*RATE;
    CN -> bt8.Crash_Checksum= 15.0*RATE;
}
void config_MSI2 (getMSI2_t *MSI2)
{
    MSI2 -> Magnet_Forward_Current= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    MSI2 -> Magnet_Reverse_Current= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MSI2 -> bt4.Material_Lift_Switch= 3.0*RATE;
    MSI2 -> bt4.Material_Drop_Switch= 3.0*RATE;
    MSI2 -> bt4.Generator_Current_Boost_Active_Status= 3.0*RATE;
    MSI2 -> bt4.Material_Lift_Active_Status= 3.0*RATE;
    MSI2 -> bt5.Material_Drop_Active_Status= 3.0*RATE;
    MSI2 -> bt5.Lift_Relay_Control= 3.0*RATE;
    MSI2 -> bt5.Drop_Relay_Control= 3.0*RATE;
    MSI2 -> bt5.Magnet_Generator_Control= 3.0*RATE;
}
void config_ACCS (getACCS_t *ACCS)
{
    ACCS -> Lateral_Acceleration_Extended_Range= Parameter_Translate(15.687*RATE , 1.0 , -15.687);
    ACCS -> Longitudinal_Acceleration_Extended_Range= Parameter_Translate(322.55*RATE , 0.01 , -320.0);
    ACCS -> Vertical_Acceleration_Extended_Range= Parameter_Translate(322.55*RATE , 0.01 , -320.0);
    ACCS -> bt7.Lateral_Acceleration_Extended_Range_Figure_of_Merit= 3.0*RATE;
    ACCS -> bt7.Longitudinal_Acceleration_Extended_Range_Figure_of_Merit= 3.0*RATE;
    ACCS -> bt7.Vertical_Acceleration_Extended_Range_Figure_of_Merit= 3.0*RATE;
    ACCS -> bt7.Support_Variable_Transmission_Repetition_Rate_for_Acceleration_Sensor= 3.0*RATE;
}
void config_Command (getCommand_t *Command)
{
    Command -> Engine_Turbocharger_Wastegate_Actuator_1_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    Command -> Engine_Turbocharger_Wastegate_Actuator_2_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    Command -> Engine_Exhaust_Back_Pressure_Regulator_Control_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AEBS1 (getAEBS1_t *AEBS1)
{
    AEBS1 -> bt1.Advanced_emergency_braking_system_state= 15.0*RATE;
    AEBS1 -> bt1.Collision_warning_level= 15.0*RATE;
    AEBS1 -> bt2.Relevant_object_detected_for_advanced_emergency_braking_system= 7.0*RATE;
    AEBS1 -> bt2.Bend_off_probability_of_relevant_object= 7.0*RATE;
    AEBS1 -> Time_to_collision_with_relevant_object= Parameter_Translate(12.5*RATE , 0.05 , 0.0);
}
void config_WS (getWS_t *WS)
{
    WS -> Wireless_Rolling_Message_Counter= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    WS -> bt3.Transmitter_Command_State= 15.0*RATE;
    WS -> Transmitter_ID_1= Parameter_Translate(16449635.0*RATE , 1.0 , 0.0);
    WS -> Wireless_Signal_Strength_1= Parameter_Translate(0.0*RATE , 0.5 , 0.0);
}
void config_WAND (getWAND_t *WAND)
{
    WAND -> Wand_Angle= Parameter_Translate(64.51*RATE , 0.002 , -64.0);
    WAND -> bt3.Wand_Sensor_Figure_of_Merit= 3.0*RATE;
}
void config_LDISP (getLDISP_t *LDISP)
{
    LDISP -> Measured_Linear_Displacement= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    LDISP -> bt3.Linear_Displacement_Sensor_Sensor_Figure_of_Merit= 3.0*RATE;
}
void config_A1SCRAI2 (getA1SCRAI2_t *A1SCRAI2)
{
    A1SCRAI2 -> Aftertreatment_1_SCR_Intermediate_NH3= Parameter_Translate(6225.5*RATE , 0.1 , -200.0);
    A1SCRAI2 -> bt3.Aftertreatment_1_SCR_Intermediate_NH3_Sensor_Preliminary_FMI= 31.0*RATE;
    A1SCRAI2 -> bt4.Aftertreatment_1_SCR_Intermediate_NH3_Reading_Stable= 3.0*RATE;
    A1SCRAI2 -> bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range= 3.0*RATE;
    A1SCRAI2 -> bt4.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature= 3.0*RATE;
    A1SCRAI2 -> bt5.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    A1SCRAI2 -> bt6.Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control= 3.0*RATE;
}
void config_A2SCRAI2 (getA2SCRAI2_t *A2SCRAI2)
{
    A2SCRAI2 -> Aftertreatment_2_SCR_Intermediate_NH3= Parameter_Translate(6225.5*RATE , 0.1 , -200.0);
    A2SCRAI2 -> bt3.Aftertreatment_2_SCR_Intermediate_NH3_Sensor_Preliminary_FMI= 31.0*RATE;
    A2SCRAI2 -> bt4.Aftertreatment_2_SCR_Intermediate_NH3_Reading_Stable= 3.0*RATE;
    A2SCRAI2 -> bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range= 3.0*RATE;
    A2SCRAI2 -> bt4.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature= 1.0*RATE;
    A2SCRAI2 -> bt5.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI= 31.0*RATE;
    A2SCRAI2 -> bt6.Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control= 3.0*RATE;
}
void config_HSS (getHSS_t *HSS)
{
    HSS -> bt1.Hybrid_System_Warning_Indicator= 3.0*RATE;
    HSS -> bt1.Hybrid_System_Overheat_Indicator= 3.0*RATE;
    HSS -> bt1.Hybrid_System_Stop_Indicator= 3.0*RATE;
}
void config_GFI4 (getGFI4_t *GFI4)
{
    GFI4 -> Supply_Gas_Methane_Percentage= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_A2SCREGT2 (getA2SCREGT2_t *A2SCREGT2)
{
    A2SCREGT2 -> Aftertreatment_2_SCR_Intermediate_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2SCREGT2 -> bt3.Aftertreatment_2_SCR_Intermediate_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_A1SCREGT2 (getA1SCREGT2_t *A1SCREGT2)
{
    A1SCREGT2 -> Aftertreatment_1_SCR_Intermediate_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1SCREGT2 -> bt3.Aftertreatment_1_SCR_Intermediate_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_EEC13 (getEEC13_t *EEC13)
{
    EEC13 -> bt1.Feedback_Engine_Fueling_State= 3.0*RATE;
    EEC13 -> bt1.Engine_Fueling_Inhibit_Allowed= 3.0*RATE;
    EEC13 -> bt1.Engine_Fueling_Inhibit_Prevented_Reason= 15.0*RATE;
}
void config_EF_TVI2 (getEF_TVI2_t *EF_TVI2)
{
    EF_TVI2 -> Engine_Throttle_Valve_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EF_TVI2 -> Engine_Throttle_Valve_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EF_TVI2 -> Engine_Fuel_Valve_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EF_TVI2 -> Engine_Fuel_Valve_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EF_TVI2 -> Engine_Turbocharger_Wastegate_Actuator_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_EEGR1A (getEEGR1A_t *EEGR1A)
{
    EEGR1A -> bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Preliminary_FMI= 31.0*RATE;
    EEGR1A -> bt1.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature_Status= 7.0*RATE;
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Desired_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEGR1A -> bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Preliminary_FMI= 31.0*RATE;
    EEGR1A -> bt4.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature_Status= 7.0*RATE;
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EEGR1A -> Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Desired_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEGR1A -> bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Operation_Status= 15.0*RATE;
    EEGR1A -> bt7.Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Operation_Status= 15.0*RATE;
}
void config_EEGR1B (getEEGR1B_t *EEGR1B)
{
    EEGR1B -> bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Preliminary_FMI= 31.0*RATE;
    EEGR1B -> bt1.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature_Status= 7.0*RATE;
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Desired_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEGR1B -> bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Preliminary_FMI= 31.0*RATE;
    EEGR1B -> bt4.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature_Status= 7.0*RATE;
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EEGR1B -> Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Desired_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEGR1B -> bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Operation_Status= 15.0*RATE;
    EEGR1B -> bt7.Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Operation_Status= 15.0*RATE;
}
void config_EEC12 (getEEC12_t *EEC12)
{
    EEC12 -> bt1.Aftertreatment_1_Intake_Gas_Sensor_Power_Supply= 3.0*RATE;
    EEC12 -> bt1.Aftertreatment_1_Outlet_Gas_Sensor_Power_Supply= 3.0*RATE;
    EEC12 -> bt1.Aftertreatment_2_Intake_Gas_Sensor_Power_Supply= 3.0*RATE;
    EEC12 -> bt1.Aftertreatment_2_Outlet_Gas_Sensor_Power_Supply= 3.0*RATE;
}
void config_NSSR (getNSSR_t *NSSR)
{
    NSSR -> bt1.NOx_Sensor_ATO1_Self_diagnosis_Trigger= 15.0*RATE;
    NSSR -> bt1.NOx_Sensor_ATI1_Self_diagnosis_Trigger= 15.0*RATE;
    NSSR -> bt2.NOx_Sensor_ATO2_Self_diagnosis_Trigger= 15.0*RATE;
    NSSR -> bt2.NOx_Sensor_ATI2_Self_diagnosis_Trigger= 15.0*RATE;
}
void config_EPSI (getEPSI_t *EPSI)
{
    EPSI -> Aftertreatment_1_Particulate_Sensor= Parameter_Translate(803.1875*RATE , 0.0125 , 0.0);
    EPSI -> Aftertreatment_2_Particulate_Sensor= Parameter_Translate(803.1875*RATE , 0.0125 , 0.0);
}
void config_AT1P1I (getAT1P1I_t *AT1P1I)
{
    AT1P1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_AT1DPF2S5 (getAT1DPF2S5_t *AT1DPF2S5)
{
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_3= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_3_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_4= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S5 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_4_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT1DPF2S4 (getAT1DPF2S4_t *AT1DPF2S4)
{
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_1_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S4 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_2_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT1DPF2S3 (getAT1DPF2S3_t *AT1DPF2S3)
{
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_3= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF2S3 -> Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_4= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AT1DPF1S5 (getAT1DPF1S5_t *AT1DPF1S5)
{
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_3= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_3_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_4= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S5 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_4_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT1DPF1S4 (getAT1DPF1S4_t *AT1DPF1S4)
{
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_1_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S4 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_2_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT1DPF1S3 (getAT1DPF1S3_t *AT1DPF1S3)
{
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_3= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1DPF1S3 -> Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_4= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_CCVS3 (getCCVS3_t *CCVS3)
{
    CCVS3 -> bt1.Adaptive_Cruise_Control_Readiness_Status= 3.0*RATE;
    CCVS3 -> bt1.Cruise_Control_System_Command_State= 7.0*RATE;
    CCVS3 -> Source_Address_of_Controlling_Device_for_Disabling_Cruise_Control= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    CCVS3 -> Source_Address_of_Controlling_Device_for_Pausing_Cruise_Control= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
}
void config_AT2AC3 (getAT2AC3_t *AT2AC3)
{
    AT2AC3 -> Aftertreatment_2_Secondary_Air_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AT1AC3 (getAT1AC3_t *AT1AC3)
{
    AT1AC3 -> Aftertreatment_1_Secondary_Air_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EFL_P12 (getEFL_P12_t *EFL_P12)
{
    EFL_P12 -> Engine_Fuel_Delivery_Absolute_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EFL_P12 -> Engine_Filtered_Fuel_Delivery_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EFL_P12 -> Engine_Filtered_Fuel_Delivery_Absolute_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EFL_P12 -> Engine_Fuel_Filter_Degradation= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_DPFC2 (getDPFC2_t *DPFC2)
{
    DPFC2 -> Aftertreatment_1_Diesel_Particulate_Filter_Intake_Temperature_Set_Point= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    DPFC2 -> Relative_Unburned_Fuel_Mass_from_Engine= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPFC2 -> Aftertreatment_1_Fuel_Mass_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    DPFC2 -> Aftertreatment_2_Fuel_Mass_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
}
void config_LFE2 (getLFE2_t *LFE2)
{
    LFE2 -> High_Resolution_Engine_Fuel_Rate= Parameter_Translate(4211081.215*RATE , 0.001 , 0.0);
}
void config_SFS (getSFS_t *SFS)
{
    SFS -> bt1.Supplemental_Fan_Enable_Status= 3.0*RATE;
    SFS -> bt1.Supplemental_Fan_Direction_Status= 3.0*RATE;
    SFS -> bt1.Supplemental_Fan_Velocity_Status= 15.0*RATE;
    SFS -> bt2.Supplemental_Fan_Controller_Temperature_Status= 7.0*RATE;
    SFS -> bt2.Supplemental_Fan_Drive_Status= 15.0*RATE;
    SFS -> Supplemental_Fan_Controller_ECU_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    SFS -> Supplemental_Fan_Speed= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    SFS -> Supplemental_Fan_Current= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    SFS -> Supplemental_Fan_Power= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_EBCC (getEBCC_t *EBCC)
{
    EBCC -> Engine_Turbocharger_1_Turbine_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EBCC -> Desired_Engine_Turbocharger_1_Turbine_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EBCC -> Engine_Exhaust_Brake_Actuator_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBCC -> Engine_Turbocharger_2_Turbine_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EBCC -> Desired_Engine_Turbocharger_2_Turbine_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
}
void config_EFP (getEFP_t *EFP)
{
    EFP -> Engine_Fuel_Dynamic_Viscosity= Parameter_Translate(1003.984375*RATE , 0.015625 , 0.0);
    EFP -> Engine_Fuel_Density= Parameter_Translate(1.961*RATE , 3.052e-05 , 0.0);
    EFP -> Engine_Fuel_Dielectricity__high_resolution_= Parameter_Translate(7.844*RATE , 1.0 , 0.0);
    EFP -> Engine_Fuel_Temperature__High_Resolution_= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_HOP (getHOP_t *HOP)
{
    HOP -> Hydraulic_Oil_Dynamic_Viscosity= Parameter_Translate(1003.984375*RATE , 0.015625 , 0.0);
    HOP -> Hydraulic_Oil_Density= Parameter_Translate(1.961*RATE , 3.052e-05 , 0.0);
    HOP -> Hydraulic_Oil_Relative_Dielectricity__high_resolution_= Parameter_Translate(7.844*RATE , 1.0 , 0.0);
    HOP -> Hydraulic_Oil_Temperature__High_Resolution_= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_VLS2 (getVLS2_t *VLS2)
{
    VLS2 -> bt1.Lubrication_Cycle_Mode_Lock_Status= 3.0*RATE;
    VLS2 -> bt1.Lubrication_Cycle_Mode_Status= 7.0*RATE;
    VLS2 -> bt1.Lubrication_Operation_Mode_Status= 7.0*RATE;
    VLS2 -> bt2.Lubrication_Pump_Enable_Status= 3.0*RATE;
    VLS2 -> bt2.Lubrication_Reservoir_Level= 3.0*RATE;
    VLS2 -> bt2.Lubrication_Timing_Cycle_Status= 3.0*RATE;
}
void config_EC3 (getEC3_t *EC3)
{
    EC3 -> Engine_Friction_Percent_Torque_At_Idle_Point_1= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_2= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_3= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_4= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_5= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_6= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EC3 -> Engine_Friction_Percent_Torque_Point_7= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_IVAC (getIVAC_t *IVAC)
{
    IVAC -> bt1.Intake_Valve_Actuation_System_Oil_Pressure_1_Solenoid_Control= 3.0*RATE;
    IVAC -> bt1.Intake_Valve_Actuation_System_Oil_Pressure_2_Solenoid_Control= 3.0*RATE;
}
void config_ARMSWIMC (getARMSWIMC_t *ARMSWIMC)
{
    ARMSWIMC -> bt1.Armrest_1_Switch_1= 3.0*RATE;
    ARMSWIMC -> bt1.Armrest_1_Switch_2= 3.0*RATE;
    ARMSWIMC -> bt1.Armrest_2_Switch_1= 3.0*RATE;
    ARMSWIMC -> bt1.Armrest_2_Switch_2= 3.0*RATE;
}
void config_VEP4 (getVEP4_t *VEP4)
{
    VEP4 -> Hybrid_Battery_Pack_Remaining_Charge= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AFT2NAI (getAFT2NAI_t *AFT2NAI)
{
    AFT2NAI -> bt1.Aftertreatment_2_NOx_Adsorber_deNOx_Regeneration_Status= 3.0*RATE;
    AFT2NAI -> bt1.Aftertreatment_2_NOx_Adsorber_deSOx_Regeneration_Status= 3.0*RATE;
}
void config_AFT1NAI (getAFT1NAI_t *AFT1NAI)
{
    AFT1NAI -> bt1.Aftertreatment_1_NOx_Adsorber_deNOx_Regeneration_Status= 3.0*RATE;
    AFT1NAI -> bt1.Aftertreatment_1_NOx_Adsorber_deSOx_Regeneration_Status= 3.0*RATE;
}
void config_AT2WUDOC (getAT2WUDOC_t *AT2WUDOC)
{
    AT2WUDOC -> Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2WUDOC -> Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_LLRE (getLLRE_t *LLRE)
{
    LLRE -> Blade_Elevation_Deviation___Left= Parameter_Translate(32255.0*RATE , 1.0 , -32000.0);
    LLRE -> Blade_Elevation_Deviation___Right= Parameter_Translate(32255.0*RATE , 1.0 , -32000.0);
    LLRE -> Blade_Reference_Elevation_Offset___Left= Parameter_Translate(32255.0*RATE , 1.0 , -32000.0);
    LLRE -> Blade_Reference_Elevation_Offset___Right= Parameter_Translate(32255.0*RATE , 1.0 , -32000.0);
}
void config_EFL_P11 (getEFL_P11_t *EFL_P11)
{
    EFL_P11 -> Engine_Exhaust_Gas_Recirculation_1_Intake_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P11 -> Engine_Exhaust_Gas_Recirculation_1_Outlet_Absolute_Pressure__High_Resolution_= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EFS2 (getEFS2_t *EFS2)
{
    EFS2 -> Engine_Fuel_Filter__Suction_Side__Intake_Absolute_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
}
void config_Information (getInformation_t *Information)
{
    Information -> bt1.Engine_Turbocharger_Wastegate_Actuator_2_Preliminary_FMI= 31.0*RATE;
    Information -> bt1.Engine_Turbocharger_Wastegate_Actuator_2_Temperature_Status= 7.0*RATE;
    Information -> bt2.Engine_Turbocharger_Wastegate_Actuator_1_Operation_Status= 15.0*RATE;
    Information -> bt2.Engine_Turbocharger_Wastegate_Actuator_2_Operation_Status= 15.0*RATE;
    Information -> Engine_Exhaust_Back_Pressure_Regulator_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    Information -> bt4.Engine_Exhaust_Back_Pressure_Regulator_Preliminary_FMI= 31.0*RATE;
    Information -> bt4.Engine_Exhaust_Back_Pressure_Regulator_Temperature_Status= 7.0*RATE;
    Information -> bt5.Engine_Exhaust_Back_Pressure_Regulator_Control_Operation_Status= 15.0*RATE;
    Information -> Engine_Turbocharger_Wastegate_Actuator_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    Information -> Engine_Exhaust_Back_Pressure_Actuator_1_Desired_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    Information -> Engine_Exhaust_Back_Pressure_Actuator_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_EFTVI1 (getEFTVI1_t *EFTVI1)
{
    EFTVI1 -> Engine_Desired_Throttle_Valve_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EFTVI1 -> bt2.Engine_Throttle_Valve_1_Preliminary_FMI= 31.0*RATE;
    EFTVI1 -> bt2.Engine_Throttle_Valve_1_Temperature_Status= 7.0*RATE;
    EFTVI1 -> Engine_Desired_Throttle_Valve_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EFTVI1 -> bt4.Engine_Throttle_Valve_2_Preliminary_FMI= 31.0*RATE;
    EFTVI1 -> bt4.Engine_Throttle_Valve_2_Temperature_status= 7.0*RATE;
    EFTVI1 -> bt5.Engine_Fuel_Valve_1_Preliminary_FMI= 31.0*RATE;
    EFTVI1 -> bt5.Engine_Fuel_Valve_1_Temperature_Status= 7.0*RATE;
    EFTVI1 -> bt6.Engine_Fuel_Valve_2_Preliminary_FMI= 31.0*RATE;
    EFTVI1 -> bt6.Engine_Fuel_Valve_2_Temperature_Status= 7.0*RATE;
    EFTVI1 -> bt7.Engine_Throttle_Valve_1_Operation_Status= 15.0*RATE;
    EFTVI1 -> bt7.Engine_Throttle_Valve_2_Operation_Status= 15.0*RATE;
    EFTVI1 -> bt8.Engine_Fuel_Valve_1_Operation_Status= 15.0*RATE;
    EFTVI1 -> bt8.Engine_Fuel_Valve_2_Operation_Status= 15.0*RATE;
}
void config_ETCBI (getETCBI_t *ETCBI)
{
    ETCBI -> Engine_Turbocharger_Compressor_Bypass_Actuator_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ETCBI -> Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ETCBI -> bt3.Engine_Turbocharger_compressor_Bypass_Actuator_2_Preliminary_FMI= 31.0*RATE;
    ETCBI -> bt3.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature_Status= 7.0*RATE;
    ETCBI -> bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Operation_Status= 15.0*RATE;
    ETCBI -> bt4.Engine_Turbocharger_Compressor_Bypass_Actuator_2_Operation_Status= 15.0*RATE;
    ETCBI -> Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ETCBI -> Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_CAC2 (getCAC2_t *CAC2)
{
    CAC2 -> Engine_Charge_Air_Cooler_2_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC2 -> Engine_Charge_Air_Cooler_2_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC2 -> Engine_Charge_Air_Cooler_2_Ambient_Air_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC2 -> Engine_Charge_Air_Cooler_2_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_CAC2P (getCAC2P_t *CAC2P)
{
    CAC2P -> Engine_Charge_Air_Cooler_2_Precooler_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC2P -> Engine_Charge_Air_Cooler_2_Precooler_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC2P -> Engine_Charge_Air_Cooler_2_Precooler_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_CAC1 (getCAC1_t *CAC1)
{
    CAC1 -> Engine_Charge_Air_Cooler_1_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC1 -> Engine_Charge_Air_Cooler_1_Ambient_Air_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC1 -> Engine_Charge_Air_Cooler_1_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_CAC1P (getCAC1P_t *CAC1P)
{
    CAC1P -> Engine_Charge_Air_Cooler_1_Precooler_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC1P -> Engine_Charge_Air_Cooler_1_Precooler_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    CAC1P -> Engine_Charge_Air_Cooler_1_Precooler_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_DPF2S2 (getDPF2S2_t *DPF2S2)
{
    DPF2S2 -> Diesel_Particulate_Filter_2_Soot_Signal_Standard_Deviation= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF2S2 -> Diesel_Particulate_Filter_2_Soot_Signal_Maximum= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF2S2 -> Diesel_Particulate_Filter_2_Soot_Signal_Minimum= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_DPF1S2 (getDPF1S2_t *DPF1S2)
{
    DPF1S2 -> Diesel_Particulate_Filter_1_Soot_Signal_Standard_Deviation= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF1S2 -> Diesel_Particulate_Filter_1_Soot_Signal_Maximum= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF1S2 -> Diesel_Particulate_Filter_1_Soot_Signal_Minimum= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_EEC11 (getEEC11_t *EEC11)
{
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_2_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2_Valve_1_Position_Error= Parameter_Translate(132.02*RATE , 0.004 , -125.0);
    EEC11 -> Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position_Error= Parameter_Translate(132.02*RATE , 0.004 , -125.0);
}
void config_EMAP (getEMAP_t *EMAP)
{
    EMAP -> Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Position= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EMAP -> Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Position= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_EMAC (getEMAC_t *EMAC)
{
    EMAC -> Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EMAC -> Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_EEC9 (getEEC9_t *EEC9)
{
    EEC9 -> Engine_Exhaust_Gas_Recirculation_2_Valve_Position= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC9 -> Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC9 -> Commanded_Engine_Fuel_Rail_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EEC9 -> Commanded_Engine_Fuel_Injection_Control_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
}
void config_EEC10 (getEEC10_t *EEC10)
{
    EEC10 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EEC10 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Gas_Absolute_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    EEC10 -> Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC10 -> EGR_2_Cooler_Bypass_Actuator_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_ET5 (getET5_t *ET5)
{
    ET5 -> Engine_Exhaust_Gas_Recirculation_2_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET5 -> Engine_Exhaust_Gas_Recirculation_2_Mixer_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EFL_P10 (getEFL_P10_t *EFL_P10)
{
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Differential_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Intake_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Outlet_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P10 -> Engine_Exhaust_Gas_Recirculation_2_Intake_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P10 -> Engine_Coolant_Pressure_2= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
}
void config_LVDS (getLVDS_t *LVDS)
{
    LVDS -> bt1.Low_Voltage_Disconnect_Manual_Disconnect_State= 3.0*RATE;
    LVDS -> bt1.Low_Voltage_Disconnect_Manual_Connect_State= 3.0*RATE;
    LVDS -> bt1.Low_Voltage_Disconnect_Current_Operating_Mode= 15.0*RATE;
    LVDS -> bt2.Low_Voltage_Disconnect_Output_3_State= 15.0*RATE;
    LVDS -> bt2.Low_Voltage_Disconnect_Output_2_State= 15.0*RATE;
    LVDS -> bt3.Low_Voltage_Disconnect_Output_1_State= 15.0*RATE;
    LVDS -> bt3.Low_Voltage_Disconnect_Vout_Output_State= 15.0*RATE;
    LVDS -> Low_Voltage_Disconnect_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_DLCD2 (getDLCD2_t *DLCD2)
{
    DLCD2 -> bt1.Vehicle_Battery_Voltage_Low_Lamp_Data= 3.0*RATE;
    DLCD2 -> bt1.Vehicle_Fuel_Level_Low_Lamp_Data= 3.0*RATE;
    DLCD2 -> bt1.Vehicle_Air_Pressure_Low_Lamp_Data= 3.0*RATE;
    DLCD2 -> bt1.Vehicle_HVAC_Recirculation_Lamp_Data= 3.0*RATE;
    DLCD2 -> bt2.Vehicle_Battery_Charging_Lamp_Data= 3.0*RATE;
}
void config_DLCD1 (getDLCD1_t *DLCD1)
{
    DLCD1 -> bt1.Engine_Protect_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt1.Engine_Amber_Warning_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt1.Engine_Red_Stop_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt1.OBD_Malfunction_Indicator_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt2.Engine_Brake_Active_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt2.Engine_Oil_Pressure_Low_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt2.Engine_Coolant_Temperature_High_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt3.Engine_Coolant_Level_Low_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt3.Engine_Idle_Management_Active_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt3.Engine_Air_Filter_Restriction_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt3.Engine_Fuel_Filter_Restricted_Lamp_Data= 3.0*RATE;
    DLCD1 -> bt8.Engine_Wait_To_Start_Lamp_Data= 3.0*RATE;
}
void config_DLCC2 (getDLCC2_t *DLCC2)
{
    DLCC2 -> bt1.Vehicle_Battery_Voltage_Low_Lamp_Command= 3.0*RATE;
    DLCC2 -> bt1.Vehicle_Fuel_Level_Low_Lamp_Command= 3.0*RATE;
    DLCC2 -> bt1.Vehicle_Air_Pressure_Low_Lamp_Command= 3.0*RATE;
    DLCC2 -> bt1.Vehicle_HVAC_Recirculation_Lamp_Command= 3.0*RATE;
    DLCC2 -> bt2.Vehicle_Battery_Charging_Lamp_Command= 3.0*RATE;
}
void config_DLCC1 (getDLCC1_t *DLCC1)
{
    DLCC1 -> bt1.Engine_Protect_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt1.Engine_Amber_Warning_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt1.Engine_Red_Stop_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt1.OBD_Malfunction_Indicator_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt2.Engine_Brake_Active_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt2.Compression_Brake_Enable_Switch_Indicator_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt2.Engine_Oil_Pressure_Low_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt2.Engine_Coolant_Temperature_High_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt3.Engine_Coolant_Level_Low_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt3.Engine_Idle_Management_Active_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt3.Engine_Air_Filter_Restriction_Lamp_Command= 3.0*RATE;
    DLCC1 -> bt3.Engine_Fuel_Filter_Restricted_Lamp_Command= 3.0*RATE;
}
void config_EOM (getEOM_t *EOM)
{
    EOM -> Engine_Oil_Viscosity= Parameter_Translate(1003.984375*RATE , 0.015625 , 0.0);
    EOM -> Engine_Oil_Density= Parameter_Translate(1.961*RATE , 3.052e-05 , 0.0);
    EOM -> Engine_Oil_Relative_Dielectricity__high_resolution_= Parameter_Translate(7.844*RATE , 1.0 , 0.0);
    EOM -> High_Resolution_Engine_Total_Fuel_Used= Parameter_Translate(4211081.215*RATE , 0.001 , 0.0);
}
void config_AT2OGC2 (getAT2OGC2_t *AT2OGC2)
{
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Lambda= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Nox= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2OGC2 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2OGC2 -> NOx_Sensor_ATO2_Self_diagnosis_Final_Result= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_AT2OGC1 (getAT2OGC1_t *AT2OGC1)
{
    AT2OGC1 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    AT2OGC1 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Gain= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    AT2OGC1 -> Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    AT2OGC1 -> NOx_Sensor_ATO2_Operation_Hours_Counter= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_AT2IGC2 (getAT2IGC2_t *AT2IGC2)
{
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Lambda= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Nox= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2IGC2 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT2IGC2 -> NOx_Sensor_ATI2_Self_diagnosis_Final_Result= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_AT2IGC1 (getAT2IGC1_t *AT2IGC1)
{
    AT2IGC1 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    AT2IGC1 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    AT2IGC1 -> Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    AT2IGC1 -> NOx_Sensor_ATI2_Operation_Hours_Counter= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_AT1OGC2 (getAT1OGC2_t *AT1OGC2)
{
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_Lambda= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_NOx= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1OGC2 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1OGC2 -> NOx_Sensor_ATO1_Self_diagnosis_Final_Result= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_AT1OGC1 (getAT1OGC1_t *AT1OGC1)
{
    AT1OGC1 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    AT1OGC1 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Gain= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    AT1OGC1 -> Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    AT1OGC1 -> NOx_Sensor_ATO1_Operation_Hours_Counter= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_AT1IGC2 (getAT1IGC2_t *AT1IGC2)
{
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_Lambda= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_NOx= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_NO2_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1IGC2 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_NH3_Correction= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AT1IGC2 -> NOx_Sensor_ATI1_Self_diagnosis_Final_Result= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_AT1IGC1 (getAT1IGC1_t *AT1IGC1)
{
    AT1IGC1 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_Heater_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    AT1IGC1 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    AT1IGC1 -> Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    AT1IGC1 -> NOx_Sensor_ATI1_Operation_Hours_Counter= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_MSI1 (getMSI1_t *MSI1)
{
    MSI1 -> bt1.Generator_Overheat_Status= 3.0*RATE;
    MSI1 -> bt1.Genset_System_Output_Voltage_Range_Status= 3.0*RATE;
    MSI1 -> bt1.Grapple_Magnet_Selection_Switch= 3.0*RATE;
    MSI1 -> bt1.Genset_Softstart_Active_Status= 3.0*RATE;
    MSI1 -> bt2.Reverse_Current_Range_Setting= 31.0*RATE;
    MSI1 -> bt3.Genset_Enable_Active_Status= 3.0*RATE;
    MSI1 -> bt3.Voltage_Monitor_Active_Status= 3.0*RATE;
    MSI1 -> bt3.Generator_Duty_Cycle_Exceeded_Status= 3.0*RATE;
}
void config_MSCI (getMSCI_t *MSCI)
{
    MSCI -> Magnet_Boost_Time= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    MSCI -> Magnet_Rated_Power= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_BCH2 (getBCH2_t *BCH2)
{
    BCH2 -> bt1.Battery_Charger_2_State= 15.0*RATE;
    BCH2 -> bt1.Battery_Charger_2_Power_Line_State= 3.0*RATE;
    BCH2 -> Battery_Charger_2_Output_Voltage= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    BCH2 -> Battery_Charger_2_Output_Current= Parameter_Translate(1612.75*RATE , 0.05 , -1600.0);
}
void config_BCH1 (getBCH1_t *BCH1)
{
    BCH1 -> bt1.Battery_Charger_1_State= 15.0*RATE;
    BCH1 -> bt1.Battery_Charger_1_Power_Line_State= 3.0*RATE;
    BCH1 -> Battery_Charger_1_Output_Voltage= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    BCH1 -> Battery_Charger_1_Output_Current= Parameter_Translate(1612.75*RATE , 0.05 , -1600.0);
}
void config_OCSI (getOCSI_t *OCSI)
{
    OCSI -> bt1.Driver_Occupant_Classification_System_Status= 7.0*RATE;
    OCSI -> bt1.Passenger_Occupant_Classification_System_Status= 7.0*RATE;
    OCSI -> bt2.Occupant_Classification_System_3_Status= 3.0*RATE;
    OCSI -> bt2.Occupant_Classification_System_4_Status= 3.0*RATE;
    OCSI -> bt2.Occupant_Classification_System_5_Status= 3.0*RATE;
    OCSI -> bt2.Occupant_Classification_System_6_Status= 3.0*RATE;
    OCSI -> bt3.Occupant_Classification_System_7_Status= 3.0*RATE;
    OCSI -> bt3.Occupant_Classification_System_8_Status= 3.0*RATE;
    OCSI -> bt3.Occupant_Classification_System_9_Status= 3.0*RATE;
    OCSI -> bt3.Occupant_Classification_System_10_Status= 3.0*RATE;
}
void config_BDS (getBDS_t *BDS)
{
    BDS -> bt1.Driver_Beltlock_Status= 3.0*RATE;
    BDS -> bt1.Passenger_Beltlock_Status= 3.0*RATE;
    BDS -> bt1.Beltlock_3_Status= 3.0*RATE;
    BDS -> bt1.Beltlock_4_Status= 3.0*RATE;
    BDS -> bt2.Beltlock_5_Status= 3.0*RATE;
    BDS -> bt2.Beltlock_6_Status= 3.0*RATE;
    BDS -> bt2.Beltlock_7_Status= 3.0*RATE;
    BDS -> bt2.Beltlock_8_Status= 3.0*RATE;
    BDS -> bt3.Beltlock_9_Status= 3.0*RATE;
    BDS -> bt3.Beltlock_10_Status= 3.0*RATE;
    BDS -> bt3.Passenger_Airbag_Deactivation_Switch_Status= 3.0*RATE;
}
void config_CSI (getCSI_t *CSI)
{
    CSI -> bt1.Frontal_Collision_Sensor_1___Type= 15.0*RATE;
    CSI -> bt1.Frontal_Collision_Sensor_2___Type= 15.0*RATE;
    CSI -> bt2.Frontal_Collision_Sensor_3___Type= 15.0*RATE;
    CSI -> bt2.Frontal_Collision_Sensor_4___Type= 15.0*RATE;
    CSI -> bt3.Side_Collision_Sensor_Front_Left___Type= 15.0*RATE;
    CSI -> bt3.Side_Collision_Sensor_Mid_Front_Left___Type= 15.0*RATE;
    CSI -> bt4.Side_Collision_Sensor_Mid_Rear_Left___Type= 15.0*RATE;
    CSI -> bt4.Side_Collision_Sensor_Rear_Left___Type= 15.0*RATE;
    CSI -> bt5.Side_Collision_Sensor_Front_Right___Type= 15.0*RATE;
    CSI -> bt5.Side_Collision_Sensor_Mid_Front_Right___Type= 15.0*RATE;
    CSI -> bt6.Side_Collision_Sensor_Mid_Rear_Right___Type= 15.0*RATE;
    CSI -> bt6.Side_Collision_Sensor_Rear_Right___Type= 15.0*RATE;
    CSI -> bt7.Rear_Collision_Sensor_1___Type= 15.0*RATE;
    CSI -> bt7.Rear_Collision_Sensor_2___Type= 15.0*RATE;
    CSI -> bt8.Rear_Collision_Sensor_3___Type= 15.0*RATE;
    CSI -> bt8.Rear_Collision_Sensor_4___Type= 15.0*RATE;
    CSI -> bt9.Rollover_Sensor___Type= 15.0*RATE;
}
void config_ILI (getILI_t *ILI)
{
    ILI -> Driver_Airbag_Ignitor_Loop_1st_Stage___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Passenger_Airbag_Ignitor_Loop_1st_Stage___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Driver_Airbag_Ignitor_Loop_2nd_Stage___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Passenger_Airbag_Ignitor_Loop_2nd_Stage___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Driver_Belt_Tensioner_Ignitior_Loop___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Passenger_Belt_Tensioner_Ignitor_Loop___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_1___Left___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_2___Left___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_1___Right___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Side_Bag_Ignitor_Loop_2___Right___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_1___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_2___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_3___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_4___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_5___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_6___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_7___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_8___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_9___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_10___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_11___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_12___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_13___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_14___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_15___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_16___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_17___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_18___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_19___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_20___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_21___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_22___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_23___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_24___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_25___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_26___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_27___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_28___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_29___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_30___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_31___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_32___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_33___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_34___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_35___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_36___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_37___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_38___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_39___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_40___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_41___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_42___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_43___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_44___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_45___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_46___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_47___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_48___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_49___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_50___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_51___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_52___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_53___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_54___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_55___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_56___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_57___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_58___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_59___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_60___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_61___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_62___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_63___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_64___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_65___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_66___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_67___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_68___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_69___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_70___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_71___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_72___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_73___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_74___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_75___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_76___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_77___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_78___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_79___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_80___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_81___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_82___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_83___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_84___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_85___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_86___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_87___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_88___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_89___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ILI -> Special_Ignitor_Loop_90___Resistance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AT1WUDOC (getAT1WUDOC_t *AT1WUDOC)
{
    AT1WUDOC -> Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1WUDOC -> Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_DPF2S (getDPF2S_t *DPF2S)
{
    DPF2S -> Diesel_Particulate_Filter_2_Soot_Mass= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Soot_Density= Parameter_Translate(20.0*RATE , 0.08 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Mean_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF2S -> Diesel_Particulate_Filter_2_Median_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF2S -> bt7.Diesel_Particulate_Filter_2_Soot_Sensor_Preliminary_FMI= 31.0*RATE;
    DPF2S -> Diesel_Particulate_Filter_2_Soot_Sensor_ECU_Internal_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_DPF1S (getDPF1S_t *DPF1S)
{
    DPF1S -> Diesel_Particulate_Filter_1_Soot_Mass= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Soot_Density= Parameter_Translate(20.0*RATE , 0.08 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Mean_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF1S -> Diesel_Particulate_Filter_1_Median_Soot_Signal= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    DPF1S -> bt7.Diesel_Particulate_Filter_1_Soot_Sensor_Preliminary_FMI= 31.0*RATE;
    DPF1S -> Diesel_Particulate_Filter_1_Soot_Sensor_ECU_Internal_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_ATDT2 (getATDT2_t *ATDT2)
{
    ATDT2 -> Aftertreatment_1_Three_Way_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ATDT2 -> Aftertreatment_2_Three_Way_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_ATDT1 (getATDT1_t *ATDT1)
{
    ATDT1 -> Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ATDT1 -> Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_A2DOC (getA2DOC_t *A2DOC)
{
    A2DOC -> Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2DOC -> Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2DOC -> Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    A2DOC -> bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A2DOC -> bt7.Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A2DOC -> bt8.Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_A1DOC (getA1DOC_t *A1DOC)
{
    A1DOC -> Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1DOC -> Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1DOC -> Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A1DOC -> bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A1DOC -> bt7.Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A1DOC -> bt8.Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_A2GOC (getA2GOC_t *A2GOC)
{
    A2GOC -> Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2GOC -> Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2GOC -> Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A2GOC -> bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A2GOC -> bt7.Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A2GOC -> bt8.Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_A1GOC (getA1GOC_t *A1GOC)
{
    A1GOC -> Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1GOC -> Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1GOC -> Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A1GOC -> bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A1GOC -> bt7.Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A1GOC -> bt8.Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_EJM10 (getEJM10_t *EJM10)
{
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM10 -> bt1.Joystick_10_Grip_X_Axis_Position= 102.0*RATE;
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM10 -> bt3.Joystick_10_Grip_Y_Axis_Position= 102.0*RATE;
    EJM10 -> bt5.Joystick_10_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM10 -> bt5.Joystick_10_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM10 -> bt5.Joystick_10_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM10 -> bt5.Joystick_10_Theta_Axis_Position= 102.0*RATE;
    EJM10 -> bt7.Joystick_10_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM10 -> bt7.Joystick_10_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM10 -> bt7.Joystick_10_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM10 (getBJM10_t *BJM10)
{
    BJM10 -> bt1.Joystick_10_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM10 -> bt1.Joystick_10_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM10 -> bt1.Joystick_10_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM10 -> bt1.Joystick_10_X_Axis_Position= 102.0*RATE;
    BJM10 -> bt3.Joystick_10_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM10 -> bt3.Joystick_10_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM10 -> bt3.Joystick_10_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM10 -> bt3.Joystick_10_Y_Axis_Position= 102.0*RATE;
    BJM10 -> bt5.Joystick_10_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM10 -> bt5.Joystick_10_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM10 -> bt6.Joystick_10_Button_4_Pressed_Status= 3.0*RATE;
    BJM10 -> bt6.Joystick_10_Button_3_Pressed_Status= 3.0*RATE;
    BJM10 -> bt6.Joystick_10_Button_2_Pressed_Status= 3.0*RATE;
    BJM10 -> bt6.Joystick_10_Button_1_Pressed_Status= 3.0*RATE;
    BJM10 -> bt7.Joystick_10_Button_8_Pressed_Status= 3.0*RATE;
    BJM10 -> bt7.Joystick_10_Button_7_Pressed_Status= 3.0*RATE;
    BJM10 -> bt7.Joystick_10_Button_6_Pressed_Status= 3.0*RATE;
    BJM10 -> bt7.Joystick_10_Button_5_Pressed_Status= 3.0*RATE;
    BJM10 -> bt8.Joystick_10_Button_12_Pressed_Status= 3.0*RATE;
    BJM10 -> bt8.Joystick_10_Button_11_Pressed_Status= 3.0*RATE;
    BJM10 -> bt8.Joystick_10_Button_10_Pressed_Status= 3.0*RATE;
    BJM10 -> bt8.Joystick_10_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM9 (getEJM9_t *EJM9)
{
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM9 -> bt1.Joystick_9_Grip_X_Axis_Position= 102.0*RATE;
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM9 -> bt3.Joystick_9_Grip_Y_Axis_Position= 102.0*RATE;
    EJM9 -> bt5.Joystick_9_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM9 -> bt5.Joystick_9_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM9 -> bt5.Joystick_9_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM9 -> bt5.Joystick_9_Theta_Axis_Position= 102.0*RATE;
    EJM9 -> bt7.Joystick_9_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM9 -> bt7.Joystick_9_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM9 -> bt7.Joystick_9_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM9 (getBJM9_t *BJM9)
{
    BJM9 -> bt1.Joystick_9_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM9 -> bt1.Joystick_9_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM9 -> bt1.Joystick_9_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM9 -> bt1.Joystick_9_X_Axis_Position= 102.0*RATE;
    BJM9 -> bt3.Joystick_9_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM9 -> bt3.Joystick_9_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM9 -> bt3.Joystick_9_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM9 -> bt3.Joystick_9_Y_Axis_Position= 102.0*RATE;
    BJM9 -> bt5.Joystick_9_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM9 -> bt5.Joystick_9_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM9 -> bt6.Joystick_9_Button_4_Pressed_Status= 3.0*RATE;
    BJM9 -> bt6.Joystick_9_Button_3_Pressed_Status= 3.0*RATE;
    BJM9 -> bt6.Joystick_9_Button_2_Pressed_Status= 3.0*RATE;
    BJM9 -> bt6.Joystick_9_Button_1_Pressed_Status= 3.0*RATE;
    BJM9 -> bt7.Joystick_9_Button_8_Pressed_Status= 3.0*RATE;
    BJM9 -> bt7.Joystick_9_Button_7_Pressed_Status= 3.0*RATE;
    BJM9 -> bt7.Joystick_9_Button_6_Pressed_Status= 3.0*RATE;
    BJM9 -> bt7.Joystick_9_Button_5_Pressed_Status= 3.0*RATE;
    BJM9 -> bt8.Joystick_9_Button_12_Pressed_Status= 3.0*RATE;
    BJM9 -> bt8.Joystick_9_Button_11_Pressed_Status= 3.0*RATE;
    BJM9 -> bt8.Joystick_9_Button_10_Pressed_Status= 3.0*RATE;
    BJM9 -> bt8.Joystick_9_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM8 (getEJM8_t *EJM8)
{
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM8 -> bt1.Joystick_8_Grip_X_Axis_Position= 102.0*RATE;
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM8 -> bt3.Joystick_8_Grip_Y_Axis_Position= 102.0*RATE;
    EJM8 -> bt5.Joystick_8_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM8 -> bt5.Joystick_8_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM8 -> bt5.Joystick_8_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM8 -> bt5.Joystick_8_Theta_Axis_Position= 102.0*RATE;
    EJM8 -> bt7.Joystick_8_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM8 -> bt7.Joystick_8_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM8 -> bt7.Joystick_8_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM8 (getBJM8_t *BJM8)
{
    BJM8 -> bt1.Joystick_8_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM8 -> bt1.Joystick_8_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM8 -> bt1.Joystick_8_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM8 -> bt1.Joystick_8_X_Axis_Position= 102.0*RATE;
    BJM8 -> bt3.Joystick_8_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM8 -> bt3.Joystick_8_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM8 -> bt3.Joystick_8_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM8 -> bt3.Joystick_8_Y_Axis_Position= 102.0*RATE;
    BJM8 -> bt5.Joystick_8_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM8 -> bt5.Joystick_8_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM8 -> bt6.Joystick_8_Button_4_Pressed_Status= 3.0*RATE;
    BJM8 -> bt6.Joystick_8_Button_3_Pressed_Status= 3.0*RATE;
    BJM8 -> bt6.Joystick_8_Button_2_Pressed_Status= 3.0*RATE;
    BJM8 -> bt6.Joystick_8_Button_1_Pressed_Status= 3.0*RATE;
    BJM8 -> bt7.Joystick_8_Button_8_Pressed_Status= 3.0*RATE;
    BJM8 -> bt7.Joystick_8_Button_7_Pressed_Status= 3.0*RATE;
    BJM8 -> bt7.Joystick_8_Button_6_Pressed_Status= 3.0*RATE;
    BJM8 -> bt7.Joystick_8_Button_5_Pressed_Status= 3.0*RATE;
    BJM8 -> bt8.Joystick_8_Button_12_Pressed_Status= 3.0*RATE;
    BJM8 -> bt8.Joystick_8_Button_11_Pressed_Status= 3.0*RATE;
    BJM8 -> bt8.Joystick_8_Button_10_Pressed_Status= 3.0*RATE;
    BJM8 -> bt8.Joystick_8_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM7 (getEJM7_t *EJM7)
{
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM7 -> bt1.Joystick_7_Grip_X_Axis_Position= 102.0*RATE;
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM7 -> bt3.Joystick_7_Grip_Y_Axis_Position= 102.0*RATE;
    EJM7 -> bt5.Joystick_7_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM7 -> bt5.Joystick_7_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM7 -> bt5.Joystick_7_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM7 -> bt5.Joystick_7_Theta_Axis_Position= 102.0*RATE;
    EJM7 -> bt7.Joystick_7_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM7 -> bt7.Joystick_7_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM7 -> bt7.Joystick_7_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM7 (getBJM7_t *BJM7)
{
    BJM7 -> bt1.Joystick_7_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM7 -> bt1.Joystick_7_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM7 -> bt1.Joystick_7_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM7 -> bt1.Joystick_7_X_Axis_Position= 102.0*RATE;
    BJM7 -> bt3.Joystick_7_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM7 -> bt3.Joystick_7_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM7 -> bt3.Joystick_7_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM7 -> bt3.Joystick_7_Y_Axis_Position= 102.0*RATE;
    BJM7 -> bt5.Joystick_7_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM7 -> bt5.Joystick_7_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM7 -> bt6.Joystick_7_Button_4_Pressed_Status= 3.0*RATE;
    BJM7 -> bt6.Joystick_7_Button_3_Pressed_Status= 3.0*RATE;
    BJM7 -> bt6.Joystick_7_Button_2_Pressed_Status= 3.0*RATE;
    BJM7 -> bt6.Joystick_7_Button_1_Pressed_Status= 3.0*RATE;
    BJM7 -> bt7.Joystick_7_Button_8_Pressed_Status= 3.0*RATE;
    BJM7 -> bt7.Joystick_7_Button_7_Pressed_Status= 3.0*RATE;
    BJM7 -> bt7.Joystick_7_Button_6_Pressed_Status= 3.0*RATE;
    BJM7 -> bt7.Joystick_7_Button_5_Pressed_Status= 3.0*RATE;
    BJM7 -> bt8.Joystick_7_Button_12_Pressed_Status= 3.0*RATE;
    BJM7 -> bt8.Joystick_7_Button_11_Pressed_Status= 3.0*RATE;
    BJM7 -> bt8.Joystick_7_Button_10_Pressed_Status= 3.0*RATE;
    BJM7 -> bt8.Joystick_7_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM6 (getEJM6_t *EJM6)
{
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM6 -> bt1.Joystick_6_Grip_X_Axis_Position= 102.0*RATE;
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM6 -> bt3.Joystick_6_Grip_Y_Axis_Position= 102.0*RATE;
    EJM6 -> bt5.Joystick_6_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM6 -> bt5.Joystick_6_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM6 -> bt5.Joystick_6_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM6 -> bt5.Joystick_6_Theta_Axis_Position= 102.0*RATE;
    EJM6 -> bt7.Joystick_6_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM6 -> bt7.Joystick_6_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM6 -> bt7.Joystick_6_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM6 (getBJM6_t *BJM6)
{
    BJM6 -> bt1.Joystick_6_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM6 -> bt1.Joystick_6_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM6 -> bt1.Joystick_6_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM6 -> bt1.Joystick_6_X_Axis_Position= 102.0*RATE;
    BJM6 -> bt3.Joystick_6_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM6 -> bt3.Joystick_6_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM6 -> bt3.Joystick_6_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM6 -> bt3.Joystick_6_Y_Axis_Position= 102.0*RATE;
    BJM6 -> bt5.Joystick_6_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM6 -> bt5.Joystick_6_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM6 -> bt6.Joystick_6_Button_4_Pressed_Status= 3.0*RATE;
    BJM6 -> bt6.Joystick_6_Button_3_Pressed_Status= 3.0*RATE;
    BJM6 -> bt6.Joystick_6_Button_2_Pressed_Status= 3.0*RATE;
    BJM6 -> bt6.Joystick_6_Button_1_Pressed_Status= 3.0*RATE;
    BJM6 -> bt7.Joystick_6_Button_8_Pressed_Status= 3.0*RATE;
    BJM6 -> bt7.Joystick_6_Button_7_Pressed_Status= 3.0*RATE;
    BJM6 -> bt7.Joystick_6_Button_6_Pressed_Status= 3.0*RATE;
    BJM6 -> bt7.Joystick_6_Button_5_Pressed_Status= 3.0*RATE;
    BJM6 -> bt8.Joystick_6_Button_12_Pressed_Status= 3.0*RATE;
    BJM6 -> bt8.Joystick_6_Button_11_Pressed_Status= 3.0*RATE;
    BJM6 -> bt8.Joystick_6_Button_10_Pressed_Status= 3.0*RATE;
    BJM6 -> bt8.Joystick_6_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM5 (getEJM5_t *EJM5)
{
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM5 -> bt1.Joystick_5_Grip_X_Axis_Position= 102.0*RATE;
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM5 -> bt3.Joystick_5_Grip_Y_Axis_Position= 102.0*RATE;
    EJM5 -> bt5.Joystick_5_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM5 -> bt5.Joystick_5_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM5 -> bt5.Joystick_5_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM5 -> bt5.Joystick_5_Theta_Axis_Position= 102.0*RATE;
    EJM5 -> bt7.Joystick_5_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM5 -> bt7.Joystick_5_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM5 -> bt7.Joystick_5_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM5 (getBJM5_t *BJM5)
{
    BJM5 -> bt1.Joystick_5_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM5 -> bt1.Joystick_5_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM5 -> bt1.Joystick_5_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM5 -> bt1.Joystick_5_X_Axis_Position= 102.0*RATE;
    BJM5 -> bt3.Joystick_5_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM5 -> bt3.Joystick_5_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM5 -> bt3.Joystick_5_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM5 -> bt3.Joystick_5_Y_Axis_Position= 102.0*RATE;
    BJM5 -> bt5.Joystick_5_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM5 -> bt5.Joystick_5_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM5 -> bt6.Joystick_5_Button_4_Pressed_Status= 3.0*RATE;
    BJM5 -> bt6.Joystick_5_Button_3_Pressed_Status= 3.0*RATE;
    BJM5 -> bt6.Joystick_5_Button_2_Pressed_Status= 3.0*RATE;
    BJM5 -> bt6.Joystick_5_Button_1_Pressed_Status= 3.0*RATE;
    BJM5 -> bt7.Joystick_5_Button_8_Pressed_Status= 3.0*RATE;
    BJM5 -> bt7.Joystick_5_Button_7_Pressed_Status= 3.0*RATE;
    BJM5 -> bt7.Joystick_5_Button_6_Pressed_Status= 3.0*RATE;
    BJM5 -> bt7.Joystick_5_Button_5_Pressed_Status= 3.0*RATE;
    BJM5 -> bt8.Joystick_5_Button_12_Pressed_Status= 3.0*RATE;
    BJM5 -> bt8.Joystick_5_Button_11_Pressed_Status= 3.0*RATE;
    BJM5 -> bt8.Joystick_5_Button_10_Pressed_Status= 3.0*RATE;
    BJM5 -> bt8.Joystick_5_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM4 (getEJM4_t *EJM4)
{
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM4 -> bt1.Joystick_4_Grip_X_Axis_Position= 102.0*RATE;
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM4 -> bt3.Joystick_4_Grip_Y_Axis_Position= 102.0*RATE;
    EJM4 -> bt5.Joystick_4_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM4 -> bt5.Joystick_4_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM4 -> bt5.Joystick_4_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM4 -> bt5.Joystick_4_Theta_Axis_Position= 102.0*RATE;
    EJM4 -> bt7.Joystick_4_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM4 -> bt7.Joystick_4_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM4 -> bt7.Joystick_4_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM4 (getBJM4_t *BJM4)
{
    BJM4 -> bt1.Joystick_4_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM4 -> bt1.Joystick_4_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM4 -> bt1.Joystick_4_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM4 -> bt1.Joystick_4_X_Axis_Position= 102.0*RATE;
    BJM4 -> bt3.Joystick_4_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM4 -> bt3.Joystick_4_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM4 -> bt3.Joystick_4_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM4 -> bt3.Joystick_4_Y_Axis_Position= 102.0*RATE;
    BJM4 -> bt5.Joystick_4_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM4 -> bt5.Joystick_4_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM4 -> bt6.Joystick_4_Button_4_Pressed_Status= 3.0*RATE;
    BJM4 -> bt6.Joystick_4_Button_3_Pressed_Status= 3.0*RATE;
    BJM4 -> bt6.Joystick_4_Button_2_Pressed_Status= 3.0*RATE;
    BJM4 -> bt6.Joystick_4_Button_1_Pressed_Status= 3.0*RATE;
    BJM4 -> bt7.Joystick_4_Button_8_Pressed_Status= 3.0*RATE;
    BJM4 -> bt7.Joystick_4_Button_7_Pressed_Status= 3.0*RATE;
    BJM4 -> bt7.Joystick_4_Button_6_Pressed_Status= 3.0*RATE;
    BJM4 -> bt7.Joystick_4_Button_5_Pressed_Status= 3.0*RATE;
    BJM4 -> bt8.Joystick_4_Button_12_Pressed_Status= 3.0*RATE;
    BJM4 -> bt8.Joystick_4_Button_11_Pressed_Status= 3.0*RATE;
    BJM4 -> bt8.Joystick_4_Button_10_Pressed_Status= 3.0*RATE;
    BJM4 -> bt8.Joystick_4_Button_9_Pressed_Status= 3.0*RATE;
}
void config_FD2 (getFD2_t *FD2)
{
    FD2 -> Estimated_Percent_Fan_2_Speed= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    FD2 -> bt2.Fan_2_Drive_State= 15.0*RATE;
    FD2 -> Fan_2_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    FD2 -> Hydraulic_Fan_2_Motor_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    FD2 -> Fan_2_Drive_Bypass_Command_Status= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A2DEFSI (getA2DEFSI_t *A2DEFSI)
{
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Motor_Speed= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Drive_Percentage= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Return_Valve= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2DEFSI -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_State= 3.0*RATE;
    A2DEFSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A2SCRRT2I (getA2SCRRT2I_t *A2SCRRT2I)
{
    A2SCRRT2I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2SCRRT2I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A2SCRRT2I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A2SCRRT2I -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI= 31.0*RATE;
    A2SCRRT2I -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI= 31.0*RATE;
    A2SCRRT2I -> bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater= 15.0*RATE;
    A2SCRRT2I -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI= 31.0*RATE;
}
void config_A2SCRRT1I (getA2SCRRT1I_t *A2SCRRT1I)
{
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A2SCRRT1I -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI= 31.0*RATE;
    A2SCRRT1I -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI= 31.0*RATE;
    A2SCRRT1I -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2SCRRT1I -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI= 31.0*RATE;
}
void config_A2DEFI (getA2DEFI_t *A2DEFI)
{
    A2DEFI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A2DEFI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Concentration= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    A2DEFI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Conductivity= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    A2DEFI -> bt4.Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI= 31.0*RATE;
    A2DEFI -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI= 31.0*RATE;
    A2DEFI -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Type= 15.0*RATE;
}
void config_A2SCRSI (getA2SCRSI_t *A2SCRSI)
{
    A2SCRSI -> Aftertreatment_2_Diesel_Exhaust_Fluid_Average_Consumption= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    A2SCRSI -> Aftertreatment_2_SCR_Commanded_Catalyst_Diesel_Exhaust_Fluid_Consumption= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    A2SCRSI -> Aftertreatment_2_SCR_Conversion_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A2SCREGT1 (getA2SCREGT1_t *A2SCREGT1)
{
    A2SCREGT1 -> Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2SCREGT1 -> bt3.Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A2SCREGT1 -> Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A2SCREGT1 -> bt6.Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_A2SCREGP (getA2SCREGP_t *A2SCREGP)
{
    A2SCREGP -> Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A2SCREGP -> bt3.Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_A2SCRDSR2 (getA2SCRDSR2_t *A2SCRDSR2)
{
    A2SCRDSR2 -> bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Request= 3.0*RATE;
    A2SCRDSR2 -> bt1.Aftertreatment_2_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request= 7.0*RATE;
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1= 3.0*RATE;
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2= 3.0*RATE;
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3= 3.0*RATE;
    A2SCRDSR2 -> bt2.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4= 3.0*RATE;
    A2SCRDSR2 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2SCRDSR2 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A2SCRDSI2 (getA2SCRDSI2_t *A2SCRDSI2)
{
    A2SCRDSI2 -> Aftertreatment_2_SCR_Dosing_Air_Assist_Absolute_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    A2SCRDSI2 -> Aftertreatment_2_SCR_Dosing_Air_Assist_Valve= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A2SCRDSI2 -> Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A2SCRDSI2 -> bt4.Aftertreatment_2_SCR_Dosing_Valve_Exhaust_Temp__Reduction_Request= 7.0*RATE;
    A2SCRDSI2 -> bt4.Aftertreatment_2_SCR_Feedback_Control_Status= 7.0*RATE;
    A2SCRDSI2 -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_State= 3.0*RATE;
    A2SCRDSI2 -> bt5.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI= 31.0*RATE;
    A2SCRDSI2 -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_State= 3.0*RATE;
    A2SCRDSI2 -> bt6.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI= 31.0*RATE;
    A2SCRDSI2 -> bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_State= 3.0*RATE;
    A2SCRDSI2 -> bt7.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI= 31.0*RATE;
    A2SCRDSI2 -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_State= 3.0*RATE;
    A2SCRDSI2 -> bt8.Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI= 31.0*RATE;
}
void config_A1DEFSI (getA1DEFSI_t *A1DEFSI)
{
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Motor_Speed= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Drive_Percentage= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Return_Valve= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1DEFSI -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_State= 3.0*RATE;
    A1DEFSI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A1SCRRT2I (getA1SCRRT2I_t *A1SCRRT2I)
{
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A1SCRRT2I -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI= 31.0*RATE;
    A1SCRRT2I -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI= 31.0*RATE;
    A1SCRRT2I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1SCRRT2I -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI= 31.0*RATE;
}
void config_A1SCREGT1 (getA1SCREGT1_t *A1SCREGT1)
{
    A1SCREGT1 -> Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1SCREGT1 -> bt3.Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    A1SCREGT1 -> Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    A1SCREGT1 -> bt6.Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_A1SCREGP (getA1SCREGP_t *A1SCREGP)
{
    A1SCREGP -> Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    A1SCREGP -> bt3.Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_A1SCRDSR2 (getA1SCRDSR2_t *A1SCRDSR2)
{
    A1SCRDSR2 -> bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Fault_Suppression_Request= 3.0*RATE;
    A1SCRDSR2 -> bt1.Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request= 7.0*RATE;
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1= 3.0*RATE;
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2= 3.0*RATE;
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3= 3.0*RATE;
    A1SCRDSR2 -> bt2.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4= 3.0*RATE;
    A1SCRDSR2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1SCRDSR2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1SCRDSR2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A1SCRDSI2 (getA1SCRDSI2_t *A1SCRDSI2)
{
    A1SCRDSI2 -> Aftertreatment_1_SCR_Dosing_Air_Assist_Absolute_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    A1SCRDSI2 -> Aftertreatment_1_SCR_Dosing_Air_Assist_Valve= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1SCRDSI2 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A1SCRDSI2 -> bt4.Aftertreatment_1_SCR_Dosing_Valve_Exhaust_Temperature_Reduction_Request= 7.0*RATE;
    A1SCRDSI2 -> bt4.Aftertreatment_1_SCR_Feedback_Control_Status= 7.0*RATE;
    A1SCRDSI2 -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_State= 3.0*RATE;
    A1SCRDSI2 -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI= 31.0*RATE;
    A1SCRDSI2 -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_State= 3.0*RATE;
    A1SCRDSI2 -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI= 31.0*RATE;
    A1SCRDSI2 -> bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_State= 3.0*RATE;
    A1SCRDSI2 -> bt7.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI= 31.0*RATE;
    A1SCRDSI2 -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_State= 3.0*RATE;
    A1SCRDSI2 -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI= 31.0*RATE;
}
void config_AT2FC2 (getAT2FC2_t *AT2FC2)
{
    AT2FC2 -> Aftertreatment_2_Fuel_Pressure_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2FC2 -> bt3.Aftertreatment_2_Fuel_Pump_Relay_Control= 3.0*RATE;
    AT2FC2 -> bt3.Aftertreatment_2_Fuel_Flow_Diverter_Valve_Control= 3.0*RATE;
    AT2FC2 -> Aftertreatment_2_Fuel_Pressure_2_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT2TWCC (getAT2TWCC_t *AT2TWCC)
{
    AT2TWCC -> Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2TWCC -> Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2TWCC -> Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2TWCC -> bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    AT2TWCC -> bt7.Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    AT2TWCC -> bt8.Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_AT1TWCC (getAT1TWCC_t *AT1TWCC)
{
    AT1TWCC -> Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1TWCC -> Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1TWCC -> Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1TWCC -> bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    AT1TWCC -> bt7.Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
    AT1TWCC -> bt8.Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI= 31.0*RATE;
}
void config_O2FT2 (getO2FT2_t *O2FT2)
{
    O2FT2 -> Long_term_Fuel_Trim___Bank_2= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    O2FT2 -> Short_term_Fuel_Trim___Bank_2= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    O2FT2 -> bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_2= 15.0*RATE;
}
void config_O2FT1 (getO2FT1_t *O2FT1)
{
    O2FT1 -> Long_term_Fuel_Trim___Bank_1= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    O2FT1 -> Short_term_Fuel_Trim___Bank_1= Parameter_Translate(100.0*RATE , 0.1 , -100.0);
    O2FT1 -> bt5.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_1= 15.0*RATE;
}
void config_ACCVC (getACCVC_t *ACCVC)
{
    ACCVC -> bt1.Aftercooler_Coolant_Thermostat_Mode= 3.0*RATE;
    ACCVC -> Desired_Aftercooler_Coolant_Intake_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ACCVC -> Desired_Aftercooler_Coolant_Thermostat_Opening= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_ECCVC (getECCVC_t *ECCVC)
{
    ECCVC -> bt1.Engine_Coolant_Thermostat_Mode= 3.0*RATE;
    ECCVC -> Desired_Engine_Coolant_Pump_Outlet_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ECCVC -> Desired_Engine_Coolant_Thermostat_Opening= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ECCVC -> Engine_Auxiliary_Cooler_Supply_Valve_1_Actuator_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ECCVC -> Engine_Auxiliary_Cooler_Supply_Valve_2_Actuator_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EAI (getEAI_t *EAI)
{
    EAI -> Engine_Exhaust_Gas_Temperature_Average= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EAI -> Engine_Exhaust_Gas_Temperature_Average___Bank_1= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EAI -> Engine_Exhaust_Gas_Temperature_Average___Bank_2= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_AT1FC2 (getAT1FC2_t *AT1FC2)
{
    AT1FC2 -> Aftertreatment_1_Fuel_Pressure_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1FC2 -> bt3.Aftertreatment_1_Fuel_Pump_Relay_Control= 3.0*RATE;
    AT1FC2 -> bt3.Aftertreatment_1_Fuel_Flow_Diverter_Valve_Control= 3.0*RATE;
    AT1FC2 -> Aftertreatment_1_Fuel_Pressure_2_Actuator_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1FC2 -> Aftertreatment_1_Hydrocarbon_Doser_Intake_Fuel_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_ET4 (getET4_t *ET4)
{
    ET4 -> Engine_Coolant_Temperature_2= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ET4 -> Engine_Coolant_Pump_Outlet_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ET4 -> Engine_Coolant_Thermostat_Opening= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ET4 -> Engine_Exhaust_Valve_Actuation_System_Oil_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET4 -> Engine_Exhaust_Gas_Recirculation_1_Mixer_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_ZNVW (getZNVW_t *ZNVW)
{
    ZNVW -> bt1.Zero_Net_Vehicle_Weight_Change= 3.0*RATE;
}
void config_GCVW (getGCVW_t *GCVW)
{
    GCVW -> Gross_Combination_Weight= Parameter_Translate(32899070.0*RATE , 2.0 , 0.0);
    GCVW -> Net_Vehicle_Weight_Change= Parameter_Translate(16449535.0*RATE , 2.0 , 535.0);
}
void config_AGCW (getAGCW_t *AGCW)
{
    AGCW -> bt1.Axle_Group_Location= 15.0*RATE;
    AGCW -> Axle_Group_Empty_Weight_Calibration= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
    AGCW -> Axle_Group_Full_Weight_Calibration= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
}
void config_AGW (getAGW_t *AGW)
{
    AGW -> bt1.Axle_Group_Location= 15.0*RATE;
    AGW -> Axle_Group_Weight= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
}
void config_AAGW (getAAGW_t *AAGW)
{
    AAGW -> bt1.Steer_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt1.Lift_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt1.Drive_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt1.Tag_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt2.Additional_Tractor_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt2.Trailer_A_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt2.Trailer_B_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt2.Trailer_C_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt3.Trailer_D_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt3.Trailer_E_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt3.Trailer_F_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt3.Trailer_G_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt4.Trailer_H_Axle_Group_Weight_Available= 3.0*RATE;
    AAGW -> bt4.Additional_Trailer_Axle_Group_Weight_Available= 3.0*RATE;
}
void config_AT2AC2 (getAT2AC2_t *AT2AC2)
{
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Differential_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Mass_Flow= Parameter_Translate(12851.0*RATE , 0.2 , 0.0);
    AT2AC2 -> Aftertreatment_2_Secondary_Air_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AT1AC2 (getAT1AC2_t *AT1AC2)
{
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Differential_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Mass_Flow= Parameter_Translate(12851.0*RATE , 0.2 , 0.0);
    AT1AC2 -> Aftertreatment_1_Secondary_Air_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_SCR1 (getSCR1_t *SCR1)
{
    SCR1 -> Aftertreatment_1_Diesel_Exhaust_Fluid_Average_Consumption= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SCR1 -> Aftertreatment_1_Commanded_Diesel_Exhaust_Fluid_Consumption= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SCR1 -> Aftertreatment_1_SCR_Conversion_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    SCR1 -> Aftertreatment_1_SCR_Operator_Inducement_Active_Traveled_Distance= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_EEC8 (getEEC8_t *EEC8)
{
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_2_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Gas_Absolute_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    EEC8 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Efficiency= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_DRC (getDRC_t *DRC)
{
    DRC -> bt1.Retract_Status_of_ramp_1= 3.0*RATE;
    DRC -> bt1.Enable_status_of_ramp_1= 3.0*RATE;
    DRC -> bt1.Movement_status_of_ramp_1= 3.0*RATE;
    DRC -> bt2.Retract_Status_of_ramp_2= 3.0*RATE;
    DRC -> bt2.Enable_status_of_ramp_2= 3.0*RATE;
    DRC -> bt2.Movement_status_of_ramp_2= 3.0*RATE;
    DRC -> bt3.Retract_Status_of_ramp_3= 3.0*RATE;
    DRC -> bt3.Enable_status_of_ramp_3= 3.0*RATE;
    DRC -> bt3.Movement_status_of_ramp_3= 3.0*RATE;
    DRC -> bt4.Retract_Status_of_ramp_4= 3.0*RATE;
    DRC -> bt4.Enable_status_of_ramp_4= 3.0*RATE;
    DRC -> bt4.Movement_status_of_ramp_4= 3.0*RATE;
    DRC -> bt5.Retract_Status_of_ramp_5= 3.0*RATE;
    DRC -> bt5.Enable_status_of_ramp_5= 3.0*RATE;
    DRC -> bt5.Movement_status_of_ramp_5= 3.0*RATE;
}
void config_BSA (getBSA_t *BSA)
{
    BSA -> bt1.Tractor_Brake_Stroke_Axle_1_Left= 7.0*RATE;
    BSA -> bt1.Tractor_Brake_Stroke_Axle_1_Right= 7.0*RATE;
    BSA -> bt1.Tractor_Brake_Stroke_Axle_2_Left= 7.0*RATE;
    BSA -> bt2.Tractor_Brake_Stroke_Axle_2_Right= 7.0*RATE;
    BSA -> bt2.Tractor_Brake_Stroke_Axle_3_Left= 7.0*RATE;
    BSA -> bt2.Tractor_Brake_Stroke_Axle_3_Right= 7.0*RATE;
    BSA -> bt3.Tractor_Brake_Stroke_Axle_4_Left= 7.0*RATE;
    BSA -> bt3.Tractor_Brake_Stroke_Axle_4_Right= 7.0*RATE;
    BSA -> bt4.Tractor_Brake_Stroke_Axle_5_Left= 7.0*RATE;
    BSA -> bt4.Tractor_Brake_Stroke_Axle_5_Right= 7.0*RATE;
    BSA -> bt4.Trailer_Brake_Stroke_Axle_1_Left= 7.0*RATE;
    BSA -> bt5.Trailer_Brake_Stroke_Axle_1_Right= 7.0*RATE;
    BSA -> bt5.Trailer_Brake_Stroke_Axle_2_Left= 7.0*RATE;
    BSA -> bt5.Trailer_Brake_Stroke_Axle_2_Right= 7.0*RATE;
    BSA -> bt6.Trailer_Brake_Stroke_Axle_3_Left= 7.0*RATE;
    BSA -> bt6.Trailer_Brake_Stroke_Axle_3_Right= 7.0*RATE;
    BSA -> bt7.Trailer_Brake_Stroke_Axle_4_Left= 7.0*RATE;
    BSA -> bt7.Trailer_Brake_Stroke_Axle_4_Right= 7.0*RATE;
    BSA -> bt7.Trailer_Brake_Stroke_Axle_5_Left= 7.0*RATE;
    BSA -> bt8.Trailer_Brake_Stroke_Axle_5_Right= 7.0*RATE;
}
void config_ESV6 (getESV6_t *ESV6)
{
    ESV6 -> Engine_Spark_Plug_21= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV6 -> Engine_Spark_Plug_22= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV6 -> Engine_Spark_Plug_23= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV6 -> Engine_Spark_Plug_24= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ESV5 (getESV5_t *ESV5)
{
    ESV5 -> Engine_Spark_Plug_17= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV5 -> Engine_Spark_Plug_18= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV5 -> Engine_Spark_Plug_19= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV5 -> Engine_Spark_Plug_20= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ESV4 (getESV4_t *ESV4)
{
    ESV4 -> Engine_Spark_Plug_13= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV4 -> Engine_Spark_Plug_14= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV4 -> Engine_Spark_Plug_15= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV4 -> Engine_Spark_Plug_16= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ESV3 (getESV3_t *ESV3)
{
    ESV3 -> Engine_Spark_Plug_9= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV3 -> Engine_Spark_Plug_10= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV3 -> Engine_Spark_Plug_11= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV3 -> Engine_Spark_Plug_12= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ESV2 (getESV2_t *ESV2)
{
    ESV2 -> Engine_Spark_Plug_5= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV2 -> Engine_Spark_Plug_6= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV2 -> Engine_Spark_Plug_7= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV2 -> Engine_Spark_Plug_8= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ESV1 (getESV1_t *ESV1)
{
    ESV1 -> Engine_Spark_Plug_1= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV1 -> Engine_Spark_Plug_2= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV1 -> Engine_Spark_Plug_3= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    ESV1 -> Engine_Spark_Plug_4= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_AT2TI (getAT2TI_t *AT2TI)
{
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2TI -> Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
}
void config_AT1TI (getAT1TI_t *AT1TI)
{
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1TI -> Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
}
void config_AT2S (getAT2S_t *AT2S)
{
    AT2S -> Diesel_Particulate_Filter_2_Soot_Load_Percent= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AT2S -> Diesel_Particulate_Filter_2_Ash_Load_Percent= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AT2S -> Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2S -> Aftertreatment_2_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_AT1S (getAT1S_t *AT1S)
{
    AT1S -> Diesel_Particulate_Filter_1_Soot_Load_Percent= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AT1S -> Diesel_Particulate_Filter_1_Ash_Load_Percent= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AT1S -> Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1S -> Aftertreatment_1_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_DPFC1 (getDPFC1_t *DPFC1)
{
    DPFC1 -> bt1.Diesel_Particulate_Filter_Lamp_Command= 7.0*RATE;
    DPFC1 -> bt2.Diesel_Particulate_Filter_Passive_Regeneration_Status= 3.0*RATE;
    DPFC1 -> bt2.Diesel_Particulate_Filter_Active_Regeneration_Status= 3.0*RATE;
    DPFC1 -> bt2.Diesel_Particulate_Filter_Status= 7.0*RATE;
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Status= 3.0*RATE;
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Inhibit_Switch= 3.0*RATE;
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Clutch_Disengaged= 3.0*RATE;
    DPFC1 -> bt3.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Service_Brake_Active= 3.0*RATE;
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_PTO_Active= 3.0*RATE;
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Accelerator_Pedal_Off_Idle= 3.0*RATE;
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Out_of_Neutral= 3.0*RATE;
    DPFC1 -> bt4.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Above_Allowed_Speed= 3.0*RATE;
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Parking_Brake_Not_Set= 3.0*RATE;
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Temperature= 3.0*RATE;
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Fault_Active= 3.0*RATE;
    DPFC1 -> bt5.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Timeout= 3.0*RATE;
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Temporary_System_Lockout= 3.0*RATE;
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Permanent_System_Lockout= 3.0*RATE;
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Engine_Not_Warmed_Up= 3.0*RATE;
    DPFC1 -> bt6.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Below_Allowed_Speed= 3.0*RATE;
    DPFC1 -> bt7.Diesel_Particulate_Filter_Automatic_Active_Regeneration_Initiation_Configuration= 3.0*RATE;
    DPFC1 -> bt7.Exhaust_System_High_Temperature_Lamp_Command= 7.0*RATE;
    DPFC1 -> bt7.Diesel_Particulate_Filter_Active_Regeneration_Forced_Status= 7.0*RATE;
    DPFC1 -> bt8.Hydrocarbon_Doser_Purging_Enable= 3.0*RATE;
    DPFC1 -> bt8.Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Pressure= 3.0*RATE;
}
void config_AFSS (getAFSS_t *AFSS)
{
    AFSS -> bt1.Left_Headlamp_Dynamic_Bending_Light= 7.0*RATE;
    AFSS -> bt1.Right_Headlamp_Dynamic_Bending_Light= 7.0*RATE;
    AFSS -> bt2.Left_Headlamp_Light_Distribution= 15.0*RATE;
    AFSS -> bt2.Right_Headlamp_Light_Distribution= 15.0*RATE;
}
void config_EC2 (getEC2_t *EC2)
{
    EC2 -> Maximum_Crank_Attempts_per_Start_Attempt= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_EGRBV (getEGRBV_t *EGRBV)
{
    EGRBV -> EGR1_Cooler_Bypass_Actuator_Postion= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_TCI (getTCI_t *TCI)
{
    TCI -> bt1.Transfer_case_status= 7.0*RATE;
}
void config_EFL_P9 (getEFL_P9_t *EFL_P9)
{
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_17= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_18= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_19= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P9 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_20= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EFL_P8 (getEFL_P8_t *EFL_P8)
{
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_13= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_14= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_15= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P8 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_16= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EFL_P7 (getEFL_P7_t *EFL_P7)
{
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_9= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_10= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_11= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P7 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_12= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EFL_P6 (getEFL_P6_t *EFL_P6)
{
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_5= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_6= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_7= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P6 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_8= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EFL_P5 (getEFL_P5_t *EFL_P5)
{
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_3= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    EFL_P5 -> Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_4= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_VDS2 (getVDS2_t *VDS2)
{
    VDS2 -> Vehicle_Roll= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_J2012 (getJ2012_t *J2012)
{
    J2012 -> Number_of_J2012_DTCs= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    J2012 -> J2012_DTC= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    J2012 -> bt7.J2012_DTC_Status= 1.0*RATE;
    J2012 -> bt7.J2012_DTC_Occurrence_Count= 127.0*RATE;
}
void config_AT2GP (getAT2GP_t *AT2GP)
{
    AT2GP -> Diesel_Particulate_Filter_Intake_Pressure_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2GP -> Diesel_Particulate_Filter_Outlet_Pressure_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AT1GP (getAT1GP_t *AT1GP)
{
    AT1GP -> Diesel_Particulate_Filter_Intake_Pressure_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1GP -> Diesel_Particulate_Filter_Outlet_Pressure_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AETC (getAETC_t *AETC)
{
    AETC -> bt1.AETC_Data_Collection_Standard= 15.0*RATE;
    AETC -> bt1.Number_of_AETC_data_points= 15.0*RATE;
}
void config_EOI (getEOI_t *EOI)
{
    EOI -> bt1.Engine_Operating_State= 15.0*RATE;
    EOI -> bt1.Fuel_Pump_Primer_Control= 3.0*RATE;
    EOI -> Time_Remaining_in_Engine_Operating_State= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    EOI -> bt4.Engine_Fuel_Shutoff_Vent_Control= 3.0*RATE;
    EOI -> bt4.Engine_Fuel_Shutoff_1_Control= 3.0*RATE;
    EOI -> bt4.Engine_Fuel_Shutoff_2_Control= 3.0*RATE;
    EOI -> bt4.Engine_Fuel_Shutoff_Valve_Leak_Test_Control= 3.0*RATE;
    EOI -> bt5.Engine_Oil_Priming_Pump_Control= 3.0*RATE;
    EOI -> bt5.Engine_Oil_Pre_heater_Control= 3.0*RATE;
    EOI -> bt5.Engine_Electrical_System_Power_Conservation_Control= 3.0*RATE;
    EOI -> bt5.Engine_Block___Coolant_Pre_heater_Control= 3.0*RATE;
    EOI -> bt6.Engine_Coolant_Circulating_Pump_Control= 3.0*RATE;
    EOI -> bt6.Engine_Controlled_Shutdown_Request= 3.0*RATE;
    EOI -> bt6.Engine_Emergency__Immediate__Shutdown_Indication= 3.0*RATE;
    EOI -> Engine_Derate_Request= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EEC7 (getEEC7_t *EEC7)
{
    EEC7 -> Engine_Exhaust_Gas_Recirculation_1_Valve_Position= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC7 -> Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC7 -> Engine_Crankcase_Breather_Oil_Separator_Speed= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    EEC7 -> Commanded_Engine_Intake_Manifold_Pressure= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
}
void config_TRF2 (getTRF2_t *TRF2)
{
    TRF2 -> bt1.Transmission_Oil_Filter_Restriction_Switch= 3.0*RATE;
    TRF2 -> bt1.Transmission_Oil_Level_Switch= 3.0*RATE;
    TRF2 -> bt1.Transmission_Overheat_Indicator= 3.0*RATE;
    TRF2 -> Transmission_Torque_Converter_Oil_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TRF2 -> Transmission_Oil_Life_Remaining= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TRF2 -> Transmission_Oil_Temperature_2= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TRF2 -> Transmission_Oil_Level_2_High___Low= Parameter_Translate(62.5*RATE , 0.5 , -62.5);
    TRF2 -> bt8.Transmission_Oil_Level_2_Countdown_Timer= 15.0*RATE;
    TRF2 -> bt8.Transmission_Oil_Level_2_Measurement_Status= 15.0*RATE;
}
void config_AT1HI (getAT1HI_t *AT1HI)
{
    AT1HI -> Aftertreatment_1_Total_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    AT1HI -> Aftertreatment_1_Total_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Total_Disabled_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Total_Number_of_Active_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Average_Time_Between_Active_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT1HI -> Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
}
void config_AT2HI (getAT2HI_t *AT2HI)
{
    AT2HI -> Aftertreatment_2_Total_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    AT2HI -> Aftertreatment_2_Total_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Total_Disabled_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Total_Number_of_Active_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Average_Time_Between_Active_Regenerations= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
    AT2HI -> Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
}
void config_A1DEFI (getA1DEFI_t *A1DEFI)
{
    A1DEFI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    A1DEFI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Concentration= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    A1DEFI -> Aftertreatment_1_Diesel_Exhaust_Fluid_Conductivity= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    A1DEFI -> bt4.Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI= 31.0*RATE;
    A1DEFI -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI= 31.0*RATE;
    A1DEFI -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Property= 15.0*RATE;
}
void config_SEP2 (getSEP2_t *SEP2)
{
    SEP2 -> Sensor_supply_voltage_5= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SEP2 -> Sensor_supply_voltage_6= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SEP2 -> Sensor_supply_voltage_7= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SEP2 -> Sensor_supply_voltage_8= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
}
void config_SEP1 (getSEP1_t *SEP1)
{
    SEP1 -> Sensor_supply_voltage_1= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SEP1 -> Sensor_supply_voltage_2= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SEP1 -> Sensor_supply_voltage_3= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    SEP1 -> Sensor_supply_voltage_4= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
}
void config_AT2AC1 (getAT2AC1_t *AT2AC1)
{
    AT2AC1 -> Aftertreatment_2_Supply_Air_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2AC1 -> Aftertreatment_2_Purge_Air_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2AC1 -> Aftertreatment_2_Air_Pressure_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT2AC1 -> Aftertreatment_2_Air_Pressure_Actuator_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AT2AC1 -> bt8.Aftertreatment_2_Air_System_Relay= 3.0*RATE;
    AT2AC1 -> bt8.Aftertreatment_2_Atomization_Air_Actuator= 3.0*RATE;
    AT2AC1 -> bt8.Aftertreatment_2_Purge_Air_Actuator= 3.0*RATE;
    AT2AC1 -> bt8.Aftertreatment_2_Air_Enable_Actuator= 3.0*RATE;
}
void config_AT1AC1 (getAT1AC1_t *AT1AC1)
{
    AT1AC1 -> Aftertreatment_1_Supply_Air_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1AC1 -> Aftertreatment_1_Purge_Air_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1AC1 -> Aftertreatment_1_Air_Pressure_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1AC1 -> Aftertreatment_1_Air_Pressure_Actuator_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AT1AC1 -> bt8.Aftertreatment_1_Air_System_Relay= 3.0*RATE;
    AT1AC1 -> bt8.Aftertreatment_1_Atomization_Air_Actuator= 3.0*RATE;
    AT1AC1 -> bt8.Aftertreatment_1_Purge_Air_Actuator= 3.0*RATE;
    AT1AC1 -> bt8.Aftertreatment_1_Air_Enable_Actuator= 3.0*RATE;
}
void config_AT2FC1 (getAT2FC1_t *AT2FC1)
{
    AT2FC1 -> Aftertreatment_2_Fuel_Pressure_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2FC1 -> Aftertreatment_2_Fuel_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    AT2FC1 -> Aftertreatment_2_Fuel_Pressure_1_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT2FC1 -> bt7.Aftertreatment_2_Fuel_Drain_Actuator= 3.0*RATE;
    AT2FC1 -> bt7.Aftertreatment_2_Ignition= 3.0*RATE;
    AT2FC1 -> bt7.Aftertreatment_2_Regeneration_Status= 3.0*RATE;
    AT2FC1 -> bt7.Aftertreatment_2_Fuel_Enable_Actuator= 3.0*RATE;
    AT2FC1 -> Aftertreatment_2_Fuel_Injector_1_Heater_Control= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_AT1FC1 (getAT1FC1_t *AT1FC1)
{
    AT1FC1 -> Aftertreatment_1_Fuel_Pressure_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1FC1 -> Aftertreatment_1_Fuel_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    AT1FC1 -> Aftertreatment_1_Fuel_Pressure_1_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    AT1FC1 -> bt7.Aftertreatment_1_Fuel_Drain_Actuator= 3.0*RATE;
    AT1FC1 -> bt7.Aftertreatment_1_Ignition= 3.0*RATE;
    AT1FC1 -> bt7.Aftertreatment_1_Regeneration_Status= 3.0*RATE;
    AT1FC1 -> bt7.Aftertreatment_1_Fuel_Enable_Actuator= 3.0*RATE;
    AT1FC1 -> Aftertreatment_1_Fuel_Injector_1_Heater_Control= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_GFI (getGFI_t *GFI)
{
    GFI -> Engine_Fuel_Valve_2_Intake_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    GFI -> Engine_Gas_2_Mass_Flow_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    GFI -> Engine_Fuel_Temperature_2= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    GFI -> Engine_Fuel= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EEC6 (getEEC6_t *EEC6)
{
    EEC6 -> Engine_Turbocharger_Compressor_Bypass_Actuator_1_Command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC6 -> Engine_Variable_Geometry_Turbocharger_Actuator_1= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC6 -> Engine_Turbocharger_Compressor_Bypass_Actuator_1= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC6 -> Engine_Turbocharger_Compressor_Bypass_Actuator_2_command= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC6 -> Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC6 -> bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Preliminary_FMI= 31.0*RATE;
    EEC6 -> bt8.Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature_Status= 7.0*RATE;
}
void config_PTODE (getPTODE_t *PTODE)
{
    PTODE -> bt1.Enable_Switch__Transfer_case_output_shaft_PTO= 3.0*RATE;
    PTODE -> bt1.Enable_Switch__Transmission_output_shaft_PTO= 3.0*RATE;
    PTODE -> bt1.Enable_Switch__Transmission_input_shaft_PTO_2= 3.0*RATE;
    PTODE -> bt1.Enable_Switch__Transmission_input_shaft_PTO_1= 3.0*RATE;
    PTODE -> bt2.Enable_Switch___PTO_Engine_Flywheel= 3.0*RATE;
    PTODE -> bt2.Enable_Switch___PTO_Engine_Accessory_Drive_1= 3.0*RATE;
    PTODE -> bt2.Enable_Switch___PTO_Engine_Accessory_Drive_2= 3.0*RATE;
    PTODE -> bt3.Engagement_Consent__Transfer_case_output_shaft_PTO= 3.0*RATE;
    PTODE -> bt3.Engagement_Consent__Transmission_output_shaft_PTO= 3.0*RATE;
    PTODE -> bt3.Engagement_Consent__Transmission_input_shaft_PTO_2= 3.0*RATE;
    PTODE -> bt3.Engagement_Consent__Transmission_input_shaft_PTO_1= 3.0*RATE;
    PTODE -> bt4.Engagement_Consent___PTO_Engine_Flywheel= 3.0*RATE;
    PTODE -> bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_1= 3.0*RATE;
    PTODE -> bt4.Engagement_Consent___PTO_Engine_Accessory_Drive_2= 3.0*RATE;
    PTODE -> bt5.Engagement_Status__Transfer_case_output_shaft_PTO= 3.0*RATE;
    PTODE -> bt5.Engagement_Status__Transmission_output_shaft_PTO= 3.0*RATE;
    PTODE -> bt5.Engagement_Status__Transmission_input_shaft_PTO_2= 3.0*RATE;
    PTODE -> bt5.Engagement_Status__Transmission_input_shaft_PTO_1= 3.0*RATE;
    PTODE -> bt6.Engagement_Status___PTO_Engine_Flywheel= 3.0*RATE;
    PTODE -> bt6.Engagement_Status___PTO_Engine_Accessory_Drive_1= 3.0*RATE;
    PTODE -> bt6.Engagement_Status___PTO_Engine_Accessory_Drive_2= 3.0*RATE;
    PTODE -> bt7.At_least_one_PTO_engaged= 3.0*RATE;
}
void config_DC2 (getDC2_t *DC2)
{
    DC2 -> bt1.Lock_Status_of_Door_1= 3.0*RATE;
    DC2 -> bt1.Open_Status_of_Door_1= 3.0*RATE;
    DC2 -> bt1.Enable_Status_of_Door_1= 3.0*RATE;
    DC2 -> bt1.Lock_Status_of_Door_2= 3.0*RATE;
    DC2 -> bt2.Open_Status_of_Door_2= 3.0*RATE;
    DC2 -> bt2.Enable_Status_of_Door_2= 3.0*RATE;
    DC2 -> bt2.Lock_Status_of_Door_3= 3.0*RATE;
    DC2 -> bt2.Open_Status_of_Door_3= 3.0*RATE;
    DC2 -> bt3.Enable_Status_of_Door_3= 3.0*RATE;
    DC2 -> bt3.Lock_Status_of_Door_4= 3.0*RATE;
    DC2 -> bt3.Open_Status_of_Door_4= 3.0*RATE;
    DC2 -> bt3.Enable_Status_of_Door_4= 3.0*RATE;
    DC2 -> bt4.Lock_Status_of_Door_5= 3.0*RATE;
    DC2 -> bt4.Open_Status_of_Door_5= 3.0*RATE;
    DC2 -> bt4.Enable_Status_of_Door_5= 3.0*RATE;
    DC2 -> bt4.Lock_Status_of_Door_6= 3.0*RATE;
    DC2 -> bt5.Open_Status_of_Door_6= 3.0*RATE;
    DC2 -> bt5.Enable_Status_of_Door_6= 3.0*RATE;
    DC2 -> bt5.Lock_Status_of_Door_7= 3.0*RATE;
    DC2 -> bt5.Open_Status_of_Door_7= 3.0*RATE;
    DC2 -> bt6.Enable_Status_of_Door_7= 3.0*RATE;
    DC2 -> bt6.Lock_Status_of_Door_8= 3.0*RATE;
    DC2 -> bt6.Open_Status_of_Door_8= 3.0*RATE;
    DC2 -> bt6.Enable_Status_of_Door_8= 3.0*RATE;
    DC2 -> bt7.Lock_Status_of_Door_9= 3.0*RATE;
    DC2 -> bt7.Open_Status_of_Door_9= 3.0*RATE;
    DC2 -> bt7.Enable_Status_of_Door_9= 3.0*RATE;
    DC2 -> bt7.Lock_Status_of_Door_10= 3.0*RATE;
    DC2 -> bt8.Open_Status_of_Door_10= 3.0*RATE;
    DC2 -> bt8.Enable_Status_of_Door_10= 3.0*RATE;
}
void config_WCM2 (getWCM2_t *WCM2)
{
    WCM2 -> bt1.Network_Transceiver_Status_2= 255.0*RATE;
    WCM2 -> bt2.Network_Service_Status_2= 255.0*RATE;
    WCM2 -> bt3.Network_Antenna_Status_2= 255.0*RATE;
    WCM2 -> Network_Signal_Strength_2= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    WCM2 -> bt5.Wireless_Communication_Network_Type_2= 255.0*RATE;
}
void config_WCM1 (getWCM1_t *WCM1)
{
    WCM1 -> bt1.Network_Transceiver_Status_1= 255.0*RATE;
    WCM1 -> bt2.Network_Service_Status_1= 255.0*RATE;
    WCM1 -> bt3.Network_Antenna_Status_1= 255.0*RATE;
    WCM1 -> Network_Signal_Strength_1= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    WCM1 -> bt5.Wireless_Communication_Network_Type_1= 255.0*RATE;
}
void config_EFL_P4 (getEFL_P4_t *EFL_P4)
{
    EFL_P4 -> Engine_Charge_Air_Cooler_1_Intake_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFL_P4 -> Engine_Charge_Air_Cooler_2_Intake_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFL_P4 -> Engine_Coolant_Pump_Differential_Pressure= Parameter_Translate(403.0*RATE , 1.64 , -7.0);
    EFL_P4 -> Engine_Centrifugal_Oil_Filter_speed= Parameter_Translate(257020.0*RATE , 4.0 , 0.0);
    EFL_P4 -> Engine_Intercooler_Coolant_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EFL_P4 -> Engine_Charge_Air_Cooler_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
}
void config_FWSS2 (getFWSS2_t *FWSS2)
{
    FWSS2 -> bt1.Fifth_Wheel_Error_Status= 15.0*RATE;
    FWSS2 -> bt1.Fifth_Wheel_Lock_Ready_to_Couple_Indicator= 3.0*RATE;
    FWSS2 -> bt1.Fifth_Wheel_Lock_Couple_Status_Indicator= 3.0*RATE;
    FWSS2 -> Fifth_Wheel_Slider_Position= Parameter_Translate(2500.0*RATE , 10.0 , 0.0);
    FWSS2 -> bt3.Fifth_Wheel_Slider_Lock_Indicator= 3.0*RATE;
}
void config_AT2IMG (getAT2IMG_t *AT2IMG)
{
    AT2IMG -> Aftertreatment_2_Exhaust_Gas_Temperature_2= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2IMG -> Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2IMG -> Aftertreatment_2_Diesel_Particulate_Filter_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT2IMG -> bt7.Aftertreatment_2_Exhaust_Gas_Temperature_2_Preliminary_FMI= 31.0*RATE;
    AT2IMG -> bt7.Aftertreatment_2_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI= 31.0*RATE;
    AT2IMG -> bt8.Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_AT2OG2 (getAT2OG2_t *AT2OG2)
{
    AT2OG2 -> Aftertreatment_2_Exhaust_Gas_Temperature_3= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2OG2 -> Aftertreatment_2_Diesel_Particulate_Filter_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2OG2 -> bt5.Aftertreatment_2_Exhaust_Gas_Temperature_3_Preliminary_FMI= 31.0*RATE;
    AT2OG2 -> bt6.Aftertreatment_2_Diesel_Particulate_Filter_Exhaust_Gas= 31.0*RATE;
}
void config_AT2IG2 (getAT2IG2_t *AT2IG2)
{
    AT2IG2 -> Aftertreatment_2_Exhaust_Gas_Temperature_1= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2IG2 -> Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT2IG2 -> bt5.Aftertreatment_2_Exhaust_Gas_Temperature_1_Preliminary_FMI= 31.0*RATE;
    AT2IG2 -> bt6.Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_AT1IMG (getAT1IMG_t *AT1IMG)
{
    AT1IMG -> Aftertreatment_1_Exhaust_Gas_Temperature_2= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1IMG -> Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1IMG -> Aftertreatment_1_Diesel_Particulate_Filter_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1IMG -> bt7.Aftertreatment_1_Exhaust_Gas_Temperature_2_Preliminary_FMI= 31.0*RATE;
    AT1IMG -> bt7.Aftertreatment_1_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI= 31.0*RATE;
    AT1IMG -> bt8.Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_AT1OG2 (getAT1OG2_t *AT1OG2)
{
    AT1OG2 -> Aftertreatment_1_Exhaust_Gas_Temperature_3= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1OG2 -> Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1OG2 -> bt5.Aftertreatment_1_Exhaust_Gas_Temperature_3_Preliminary_FMI= 31.0*RATE;
    AT1OG2 -> bt6.Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Exhaust_Gas= 31.0*RATE;
}
void config_AT1IG2 (getAT1IG2_t *AT1IG2)
{
    AT1IG2 -> Aftertreatment_1_Exhaust_Gas_Temperature_1= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1IG2 -> Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AT1IG2 -> bt5.Aftertreatment_1_Exhaust_Gas_Temperature_1_Preliminary_FMI= 31.0*RATE;
    AT1IG2 -> bt6.Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI= 31.0*RATE;
}
void config_TPRI (getTPRI_t *TPRI)
{
    TPRI -> bt1.Tire_Location= 255.0*RATE;
    TPRI -> Reference_Tire_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
}
void config_TR6 (getTR6_t *TR6)
{
    TR6 -> bt1.Farebox_Emergency_Status= 3.0*RATE;
    TR6 -> bt2.Farebox_Alarm_Identifier= 127.0*RATE;
}
void config_TR5 (getTR5_t *TR5)
{
    TR5 -> bt1.Transaction_Type= 15.0*RATE;
    TR5 -> bt1.Passenger_Type= 15.0*RATE;
    TR5 -> bt2.Type_of_Fare= 15.0*RATE;
    TR5 -> bt2.Payment_Details= 15.0*RATE;
    TR5 -> bt3.Fare_Validity= 15.0*RATE;
    TR5 -> bt3.Pass_Category= 15.0*RATE;
    TR5 -> bt4.Initial_Fare_Agency= 31.0*RATE;
    TR5 -> bt5.Type_of_Service= 7.0*RATE;
    TR5 -> bt5.Transfer_Type= 31.0*RATE;
    TR5 -> bt6.Route_Number= 4095.0*RATE;
    TR5 -> Transfer_Sold= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
}
void config_TR3 (getTR3_t *TR3)
{
    TR3 -> bt1.Range_Code_Enable= 3.0*RATE;
    TR3 -> bt1.Transit_Route_ID_Usage= 3.0*RATE;
    TR3 -> bt1.Intersection_Preemption_Request_Response= 3.0*RATE;
    TR3 -> bt2.Priority_of_Response_Sent_by_Emitter= 15.0*RATE;
    TR3 -> bt2.Transit_Door_Enable= 3.0*RATE;
    TR3 -> bt2.Strobe_Activation_Control_Status= 3.0*RATE;
    TR3 -> Vehicle_ID= Parameter_Translate(65535.0*RATE , 1.0 , 0.0);
}
void config_TR1 (getTR1_t *TR1)
{
    TR1 -> Agency= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    TR1 -> Number_of_bytes_in_the_Transit_Assigned_Route_Identity= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TR1 -> Number_of_bytes_in_the_Transit_Assigned_Run_Identity= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TR1 -> Number_of_bytes_in_the_Transit_Assigned_Block_Identity= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_TR2 (getTR2_t *TR2)
{
    TR2 -> Number_of_bytes_in_the_Milepost_Identification= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_TR7 (getTR7_t *TR7)
{
    TR7 -> bt1.Type_of_Passenger_Count= 255.0*RATE;
    TR7 -> Patron_Count= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TR7 -> bt3.Silent_Alarm_Status= 3.0*RATE;
    TR7 -> bt3.Vehicle_Use_Status= 3.0*RATE;
    TR7 -> bt3.Transit_Run_Status= 3.0*RATE;
}
void config_EFL_P3 (getEFL_P3_t *EFL_P3)
{
    EFL_P3 -> Engine_Intake_Valve_Actuation_System_Oil_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EFL_P3 -> Engine_Exhaust_Gas_Recirculation_1_Intake_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFL_P3 -> Engine_Exhaust_Valve_Actuation_System_Oil_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EFL_P3 -> Engine_Exhaust_Gas_Recirculation_1_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFL_P3 -> Engine_Throttle_Valve_1_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_EEC14 (getEEC14_t *EEC14)
{
    EEC14 -> Engine_Exhaust_Gas_Recirculation_1_Valve_1_Position_Error= Parameter_Translate(132.02*RATE , 0.004 , -125.0);
    EEC14 -> Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position_Error= Parameter_Translate(132.02*RATE , 0.004 , -125.0);
    EEC14 -> Engine_Fuel_Mass_Flow_Rate= Parameter_Translate(321.275*RATE , 0.005 , 0.0);
    EEC14 -> bt7.Fuel_Type= 255.0*RATE;
}
void config_EEC15 (getEEC15_t *EEC15)
{
    EEC15 -> Accelerator_Pedal_1_Channel_2= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC15 -> Accelerator_Pedal_1_Channel_3= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC15 -> Accelerator_Pedal_2_Channel_2= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EEC15 -> Accelerator_Pedal_2_Channel_3= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EBC5 (getEBC5_t *EBC5)
{
    EBC5 -> bt1.Brake_Temperature_Warning= 3.0*RATE;
    EBC5 -> bt1.Halt_brake_mode= 7.0*RATE;
    EBC5 -> bt1.Hill_holder_mode= 7.0*RATE;
    EBC5 -> bt2.Foundation_Brake_Use= 3.0*RATE;
    EBC5 -> bt2.XBR_System_State= 3.0*RATE;
    EBC5 -> bt2.XBR_Active_Control_Mode= 15.0*RATE;
    EBC5 -> XBR_Acceleration_Limit= Parameter_Translate(12.5*RATE , 0.1 , -12.5);
    EBC5 -> bt4.Parking_Brake_Actuator_Fully_Activated= 3.0*RATE;
    EBC5 -> bt4.Emergency_Braking_Active= 3.0*RATE;
}
void config_CSA (getCSA_t *CSA)
{
    CSA -> bt1.Engine_Start_Enable_Device_1= 3.0*RATE;
    CSA -> bt1.Engine_Start_Enable_Device_2= 3.0*RATE;
    CSA -> bt2.Engine_Start_Enable_Device_1_Configuration= 15.0*RATE;
    CSA -> bt2.Engine_Start_Enable_Device_2_Configuration= 15.0*RATE;
    CSA -> Engine_Cold_Start_Fuel_Igniter_Command= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    CSA -> bt4.Engine_Cold_Start_Fuel_Igniter_Relay= 3.0*RATE;
    CSA -> bt4.Engine_Cold_Start_Fuel_Igniter_Relay_Feedback= 3.0*RATE;
}
void config_OHCSS (getOHCSS_t *OHCSS)
{
    OHCSS -> bt1.Engine_Auxiliary_Governor_State= 3.0*RATE;
    OHCSS -> bt1.Engine_Multi_Unit_Sync_State= 3.0*RATE;
    OHCSS -> bt1.Engine_Alternate_Low_Idle_Select_State= 3.0*RATE;
    OHCSS -> bt2.Engine_Alternate_Rating_Select_State= 255.0*RATE;
    OHCSS -> bt3.Engine_Alternate_Droop_Accelerator_1_Select_State= 15.0*RATE;
    OHCSS -> bt3.Engine_Alternate_Droop_Accelerator_2_Select_State= 15.0*RATE;
    OHCSS -> bt4.Engine_Alternate_Droop_Remote_Accelerator_Select_State= 15.0*RATE;
    OHCSS -> bt4.Engine_Alternate_Droop_Auxiliary_Input_Select_State= 15.0*RATE;
}
void config_ISCS (getISCS_t *ISCS)
{
    ISCS -> bt1.Engine_Operator_Primary_Intermediate_Speed_Select_State= 15.0*RATE;
}
void config_CMI (getCMI_t *CMI)
{
    CMI -> Total_Count_of_Configuration_Changes_Made= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ISC (getISC_t *ISC)
{
    ISC -> bt1.Engine_Operator_Primary_Intermediate_Speed_Select= 15.0*RATE;
}
void config_OHECS (getOHECS_t *OHECS)
{
    OHECS -> bt1.Engine_Auxiliary_Governor_Switch= 3.0*RATE;
    OHECS -> bt1.Engine_Synchronization_Switch= 3.0*RATE;
    OHECS -> bt1.Engine_Alternate_Low_Idle_Switch= 3.0*RATE;
    OHECS -> Engine_Alternate_Rating_Select= Parameter_Translate(255.0*RATE , 1.0 , 0.0);
    OHECS -> bt3.Engine_Alternate_Droop_Accelerator_1_Select= 15.0*RATE;
    OHECS -> bt3.Engine_Alternate_Droop_Accelerator_2_Select= 15.0*RATE;
    OHECS -> bt4.Engine_Alternate_Droop_Remote_Accelerator_Select= 15.0*RATE;
    OHECS -> bt4.Engine_Alternate_Droop_Auxiliary_Input_Select= 15.0*RATE;
}
void config_OEL (getOEL_t *OEL)
{
    OEL -> bt1.Work_Light_Switch= 15.0*RATE;
    OEL -> bt1.Main_Light_Switch= 15.0*RATE;
    OEL -> bt2.Turn_Signal_Switch= 15.0*RATE;
    OEL -> bt2.Hazard_Light_Switch= 3.0*RATE;
    OEL -> bt2.High_Low_Beam_Switch= 3.0*RATE;
    OEL -> Operators_Desired_Back_light= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    OEL -> Operators_Desired___Delayed_Lamp_Off_Time= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_OWW (getOWW_t *OWW)
{
    OWW -> bt1.Front_Non_operator_Wiper_Switch= 15.0*RATE;
    OWW -> bt1.Front_Operator_Wiper_Switch= 15.0*RATE;
    OWW -> bt2.Rear_Wiper_Switch= 15.0*RATE;
    OWW -> Front_Operator_Wiper_Delay_Control= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    OWW -> Front_Non_operator_Wiper_Delay_Control= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    OWW -> Rear_Wiper_Delay_Control= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    OWW -> bt6.Front_Non_operator_Washer_Switch= 7.0*RATE;
    OWW -> bt6.Front_Operator_Washer_Switch= 7.0*RATE;
    OWW -> bt7.Rear_Washer_Function= 7.0*RATE;
}
void config_IC2 (getIC2_t *IC2)
{
    IC2 -> Engine_Air_Filter_2_Differential_Pressure= Parameter_Translate(12.5*RATE , 0.05 , 0.0);
    IC2 -> Engine_Air_Filter_3_Differential_Pressure= Parameter_Translate(12.5*RATE , 0.05 , 0.0);
    IC2 -> Engine_Air_Filter_4_Differential_Pressure= Parameter_Translate(12.5*RATE , 0.05 , 0.0);
    IC2 -> Engine_Intake_Manifold_2_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    IC2 -> Engine_Intake_Manifold_1_Absolute_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    IC2 -> Engine_Intake_Manifold_1_Absolute_Pressure__High_Resolution_= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    IC2 -> Engine_Intake_Manifold_2_Absolute_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
}
void config_FMS (getFMS_t *FMS)
{
    FMS -> bt1.FMS_standard_Diagnostics_Supported= 3.0*RATE;
    FMS -> bt1.FMS_standard_Requests_Supported= 3.0*RATE;
    FMS -> FMS_standard_SW_version_supported_= Parameter_Translate(255.0*RATE , 4.0 , 0.0);
}
void config_EP (getEP_t *EP)
{
    EP -> Keep_Alive_Battery_Consumption= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    EP -> Data_Memory_Usage= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_TCI6 (getTCI6_t *TCI6)
{
    TCI6 -> Engine_Turbocharger_1_Compressor_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI6 -> Engine_Turbocharger_2_Compressor_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI6 -> Engine_Turbocharger_3_Compressor_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI6 -> Engine_Turbocharger_4_Compressor_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_CM3 (getCM3_t *CM3)
{
    CM3 -> bt1.Transfer_Case_Selector_Switch= 7.0*RATE;
    CM3 -> bt2.Fifth_Wheel_Release_Control= 3.0*RATE;
    CM3 -> bt2.Fifth_Wheel_Release_Control_Security_Lockout= 3.0*RATE;
    CM3 -> bt3.Transmission_Oil_Level_Request= 3.0*RATE;
}
void config_EEC5 (getEEC5_t *EEC5)
{
    EEC5 -> Engine_Turbocharger_1_Calculated_Turbine_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EEC5 -> Engine_Turbocharger_1_Calculated_Turbine_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EEC5 -> Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_Control= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EEC5 -> bt7.Engine_Variable_Geometry_Turbocharger__VGT__Air_Control_Shutoff_Valve= 3.0*RATE;
    EEC5 -> bt7.Engine_Fuel_Control_Control_Mode= 3.0*RATE;
    EEC5 -> bt7.Engine_Variable_Geometry_Turbocharger_1_Control_Mode= 3.0*RATE;
    EEC5 -> Engine_Variable_Geometry_Turbocharger__VGT__1_Actuator_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_BJM1 (getBJM1_t *BJM1)
{
    BJM1 -> bt1.Joystick_1_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM1 -> bt1.Joystick_1_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM1 -> bt1.Joystick_1_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM1 -> bt1.Joystick_1_X_Axis_Position= 102.0*RATE;
    BJM1 -> bt3.Joystick_1_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM1 -> bt3.Joystick_1_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM1 -> bt3.Joystick_1_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM1 -> bt3.Joystick_1_Y_Axis_Position= 102.0*RATE;
    BJM1 -> bt5.Joystick_1_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM1 -> bt5.Joystick_1_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM1 -> bt6.Joystick_1_Button_4_Pressed_Status= 3.0*RATE;
    BJM1 -> bt6.Joystick_1_Button_3_Pressed_Status= 3.0*RATE;
    BJM1 -> bt6.Joystick_1_Button_2_Pressed_Status= 3.0*RATE;
    BJM1 -> bt6.Joystick_1_Button_1_Pressed_Status= 3.0*RATE;
    BJM1 -> bt7.Joystick_1_Button_8_Pressed_Status= 3.0*RATE;
    BJM1 -> bt7.Joystick_1_Button_7_Pressed_Status= 3.0*RATE;
    BJM1 -> bt7.Joystick_1_Button_6_Pressed_Status= 3.0*RATE;
    BJM1 -> bt7.Joystick_1_Button_5_Pressed_Status= 3.0*RATE;
    BJM1 -> bt8.Joystick_1_Button_12_Pressed_Status= 3.0*RATE;
    BJM1 -> bt8.Joystick_1_Button_11_Pressed_Status= 3.0*RATE;
    BJM1 -> bt8.Joystick_1_Button_10_Pressed_Status= 3.0*RATE;
    BJM1 -> bt8.Joystick_1_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM1 (getEJM1_t *EJM1)
{
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM1 -> bt1.Joystick_1_Grip_X_Axis_Position= 102.0*RATE;
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM1 -> bt3.Joystick_1_Grip_Y_Axis_Position= 102.0*RATE;
    EJM1 -> bt5.Joystick_1_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM1 -> bt5.Joystick_1_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM1 -> bt5.Joystick_1_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM1 -> bt5.Joystick_1_Theta_Axis_Position= 102.0*RATE;
    EJM1 -> bt7.Joystick_1_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM1 -> bt7.Joystick_1_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM1 -> bt7.Joystick_1_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM2 (getBJM2_t *BJM2)
{
    BJM2 -> bt1.Joystick_2_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM2 -> bt1.Joystick_2_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM2 -> bt1.Joystick_2_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM2 -> bt1.Joystick_2_X_Axis_Position= 102.0*RATE;
    BJM2 -> bt3.Joystick_2_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM2 -> bt3.Joystick_2_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM2 -> bt3.Joystick_2_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM2 -> bt3.Joystick_2_Y_Axis_Position= 102.0*RATE;
    BJM2 -> bt5.Joystick_2_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM2 -> bt5.Joystick_2_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM2 -> bt6.Joystick_2_Button_4_Pressed_Status= 3.0*RATE;
    BJM2 -> bt6.Joystick_2_Button_3_Pressed_Status= 3.0*RATE;
    BJM2 -> bt6.Joystick_2_Button_2_Pressed_Status= 3.0*RATE;
    BJM2 -> bt6.Joystick_2_Button_1_Pressed_Status= 3.0*RATE;
    BJM2 -> bt7.Joystick_2_Button_8_Pressed_Status= 3.0*RATE;
    BJM2 -> bt7.Joystick_2_Button_7_Pressed_Status= 3.0*RATE;
    BJM2 -> bt7.Joystick_2_Button_6_Pressed_Status= 3.0*RATE;
    BJM2 -> bt7.Joystick_2_Button_5_Pressed_Status= 3.0*RATE;
    BJM2 -> bt8.Joystick_2_Button_12_Pressed_Status= 3.0*RATE;
    BJM2 -> bt8.Joystick_2_Button_11_Pressed_Status= 3.0*RATE;
    BJM2 -> bt8.Joystick_2_Button_10_Pressed_Status= 3.0*RATE;
    BJM2 -> bt8.Joystick_2_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM2 (getEJM2_t *EJM2)
{
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM2 -> bt1.Joystick_2_Grip_X_Axis_Position= 102.0*RATE;
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM2 -> bt3.Joystick_2_Grip_Y_Axis_Position= 102.0*RATE;
    EJM2 -> bt5.Joystick_2_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM2 -> bt5.Joystick_2_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM2 -> bt5.Joystick_2_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM2 -> bt5.Joystick_2_Theta_Axis_Position= 102.0*RATE;
    EJM2 -> bt7.Joystick_2_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM2 -> bt7.Joystick_2_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM2 -> bt7.Joystick_2_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_BJM3 (getBJM3_t *BJM3)
{
    BJM3 -> bt1.Joystick_3_X_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM3 -> bt1.Joystick_3_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    BJM3 -> bt1.Joystick_3_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    BJM3 -> bt1.Joystick_3_X_Axis_Position= 102.0*RATE;
    BJM3 -> bt3.Joystick_3_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    BJM3 -> bt3.Joystick_3_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    BJM3 -> bt3.Joystick_3_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    BJM3 -> bt3.Joystick_3_Y_Axis_Position= 102.0*RATE;
    BJM3 -> bt5.Joystick_3_Y_Axis_Detent_Position_Status= 3.0*RATE;
    BJM3 -> bt5.Joystick_3_X_Axis_Detent_Position_Status= 3.0*RATE;
    BJM3 -> bt6.Joystick_3_Button_4_Pressed_Status= 3.0*RATE;
    BJM3 -> bt6.Joystick_3_Button_3_Pressed_Status= 3.0*RATE;
    BJM3 -> bt6.Joystick_3_Button_2_Pressed_Status= 3.0*RATE;
    BJM3 -> bt6.Joystick_3_Button_1_Pressed_Status= 3.0*RATE;
    BJM3 -> bt7.Joystick_3_Button_8_Pressed_Status= 3.0*RATE;
    BJM3 -> bt7.Joystick_3_Button_7_Pressed_Status= 3.0*RATE;
    BJM3 -> bt7.Joystick_3_Button_6_Pressed_Status= 3.0*RATE;
    BJM3 -> bt7.Joystick_3_Button_5_Pressed_Status= 3.0*RATE;
    BJM3 -> bt8.Joystick_3_Button_12_Pressed_Status= 3.0*RATE;
    BJM3 -> bt8.Joystick_3_Button_11_Pressed_Status= 3.0*RATE;
    BJM3 -> bt8.Joystick_3_Button_10_Pressed_Status= 3.0*RATE;
    BJM3 -> bt8.Joystick_3_Button_9_Pressed_Status= 3.0*RATE;
}
void config_EJM3 (getEJM3_t *EJM3)
{
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Lever_Left_Negative_Position_Status= 3.0*RATE;
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Lever_Right_Positive_Position_Status= 3.0*RATE;
    EJM3 -> bt1.Joystick_3_Grip_X_Axis_Position= 102.0*RATE;
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Lever_Back_Negative_Position_Status= 3.0*RATE;
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Lever_Forward_Positive_Position_Status= 3.0*RATE;
    EJM3 -> bt3.Joystick_3_Grip_Y_Axis_Position= 102.0*RATE;
    EJM3 -> bt5.Joystick_3_Theta_Axis_Neutral_Position_Status= 3.0*RATE;
    EJM3 -> bt5.Joystick_3_Theta_Axis_Counter_Clockwise_Negative_Position_Status= 3.0*RATE;
    EJM3 -> bt5.Joystick_3_Theta_Axis_Clockwise_Positive_Position_Status= 3.0*RATE;
    EJM3 -> bt5.Joystick_3_Theta_Axis_Position= 102.0*RATE;
    EJM3 -> bt7.Joystick_3_Theta_Axis_Detent_Position_Status= 3.0*RATE;
    EJM3 -> bt7.Joystick_3_Grip_Y_Axis_Detent_Position_Status= 3.0*RATE;
    EJM3 -> bt7.Joystick_3_Grip_X_Axis_Detent_Position_Status= 3.0*RATE;
}
void config_MCI (getMCI_t *MCI)
{
    MCI -> bt1.Engine_Throttle_Synchronization_Mode_Status= 15.0*RATE;
    MCI -> bt1.Trolling_Mode_Status= 3.0*RATE;
    MCI -> bt1.Slow_Vessel_Mode_Status= 3.0*RATE;
}
void config_FWD (getFWD_t *FWD)
{
    FWD -> bt1.Front_Wheel_Drive_Actuator_Status= 3.0*RATE;
}
void config_AMB2 (getAMB2_t *AMB2)
{
    AMB2 -> Solar_Intensity_Percent= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AMB2 -> Solar_Sensor_Maximum= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AMB2 -> Specific_Humidity= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    AMB2 -> Calculated_Ambient_Air_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AMB2 -> Barometric_Absolute_Pressure__High_Resolution_= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_CACI (getCACI_t *CACI)
{
    CACI -> Cab_A_C_Refrigerant_Compressor_Outlet_Pressure= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
}
void config_SPR (getSPR_t *SPR)
{
    SPR -> Pneumatic_Supply_Pressure_Request= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    SPR -> Parking_and_or_Trailer_Air_Pressure_Request= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    SPR -> Service_Brake_Air_Pressure_Request_Circuit_1= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    SPR -> Service_Brake_Air_Pressure_Request_Circuit_2= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    SPR -> Auxiliary_Equipment_Supply_Pressure_Request= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    SPR -> Air_Suspension_Supply_Pressure_Request= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
}
void config_EOAC (getEOAC_t *EOAC)
{
    EOAC -> Travel_Velocity_Control_Position= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_EPD (getEPD_t *EPD)
{
    EPD -> Payload_Percentage= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_MVS (getMVS_t *MVS)
{
    MVS -> Maximum_Vehicle_Speed_Limit_1= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_2= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_3= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_4= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_5= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_6= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Maximum_Vehicle_Speed_Limit_7= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    MVS -> Applied_Vehicle_Speed_Limit= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_HBS (getHBS_t *HBS)
{
    HBS -> Hydraulic_Brake_Pressure_Circuit_1= Parameter_Translate(25.0*RATE , 100.0 , 0.0);
    HBS -> Hydraulic_Brake_Pressure_Circuit_2= Parameter_Translate(25.0*RATE , 100.0 , 0.0);
    HBS -> bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_1= 3.0*RATE;
    HBS -> bt3.Hydraulic_Brake_Pressure_Warning_State_Circuit_2= 3.0*RATE;
    HBS -> bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_1= 3.0*RATE;
    HBS -> bt3.Hydraulic_Brake_Pressure_Supply_State_Circuit_2= 3.0*RATE;
    HBS -> bt4.Hydraulic_Brake_System_Audible_Warning_Command= 3.0*RATE;
    HBS -> bt4.Hydraulic_Brake_Fluid_Level_Switch= 3.0*RATE;
}
void config_ET (getET_t *ET)
{
    ET -> Engine_Exhaust_Gas_Temperature___Right_Manifold= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET -> Engine_Exhaust_Gas_Temperature___Left_Manifold= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_LD (getLD_t *LD)
{
    LD -> bt1.Running_Light= 3.0*RATE;
    LD -> bt1.Alternate_Beam_Head_Light_Data= 3.0*RATE;
    LD -> bt1.Low_Beam_Head_Light_Data= 3.0*RATE;
    LD -> bt1.High_Beam_Head_Light_Data= 3.0*RATE;
    LD -> bt2.Tractor_Front_Fog_Lights= 3.0*RATE;
    LD -> bt2.Rotating_Beacon_Light= 3.0*RATE;
    LD -> bt2.Right_Turn_Signal_Lights= 3.0*RATE;
    LD -> bt2.Left_Turn_Signal_Lights= 3.0*RATE;
    LD -> bt3.Back_Up_Light_and_Alarm_Horn= 3.0*RATE;
    LD -> bt3.Center_Stop_Light= 3.0*RATE;
    LD -> bt3.Right_Stop_Light= 3.0*RATE;
    LD -> bt3.Left_Stop_Light= 3.0*RATE;
    LD -> bt4.Implement_Clearance_Light= 3.0*RATE;
    LD -> bt4.Tractor_Clearance_Light= 3.0*RATE;
    LD -> bt4.Implement_Marker_Light= 3.0*RATE;
    LD -> bt4.Tractor_Marker_Light= 3.0*RATE;
    LD -> bt5.Rear_Fog_Lights= 3.0*RATE;
    LD -> bt5.Tractor_Underside_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt5.Tractor_Rear_Low_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt5.Tractor_Rear_High_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt6.Tractor_Side_Low_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt6.Tractor_Side_High_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt6.Tractor_Front_Low_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt6.Tractor_Front_High_Mounted_Work_Lights= 3.0*RATE;
    LD -> bt7.Implement_OEM_Option_2_Light= 3.0*RATE;
    LD -> bt7.Implement_OEM_Option_1_Light= 3.0*RATE;
    LD -> bt7.Implement_Right_Facing_Work_Light= 3.0*RATE;
    LD -> bt7.Implement_Left_Forward_Work_Light= 3.0*RATE;
    LD -> bt8.Implement_Right_Forward_Work_Light= 3.0*RATE;
    LD -> bt8.Implement_Left_Facing_Work_Light= 3.0*RATE;
    LD -> bt8.Implement_Rear_Work_Light= 3.0*RATE;
}
void config_LCMD (getLCMD_t *LCMD)
{
    LCMD -> bt1.Running_Light_Command= 3.0*RATE;
    LCMD -> bt1.Alternate_Beam_Head_Light_Command= 3.0*RATE;
    LCMD -> bt1.Low_Beam_Head_Light_Command= 3.0*RATE;
    LCMD -> bt1.High_Beam_Head_Light_Command= 3.0*RATE;
    LCMD -> bt2.Tractor_Front_Fog_Lights_Command= 3.0*RATE;
    LCMD -> bt2.Rotating_Beacon_Light_Command= 3.0*RATE;
    LCMD -> bt2.Right_Turn_Signal_Lights_Command= 3.0*RATE;
    LCMD -> bt2.Left_Turn_Signal_Lights_Command= 3.0*RATE;
    LCMD -> bt3.Back_Up_Light_and_Alarm_Horn_Command= 3.0*RATE;
    LCMD -> bt3.Center_Stop_Light_Command= 3.0*RATE;
    LCMD -> bt3.Right_Stop_Light_Command= 3.0*RATE;
    LCMD -> bt3.Left_Stop_Light_Command= 3.0*RATE;
    LCMD -> bt4.Implement_Clearance_Light_Command= 3.0*RATE;
    LCMD -> bt4.Tractor_Clearance_Light_Command= 3.0*RATE;
    LCMD -> bt4.Implement_Marker_Light_Command= 3.0*RATE;
    LCMD -> bt4.Tractor_Marker_Light_Command= 3.0*RATE;
    LCMD -> bt5.Rear_Fog_Light_Command= 3.0*RATE;
    LCMD -> bt5.Tractor_Underside_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt5.Tractor_Rear_Low_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt5.Tractor_Rear_High_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt6.Tractor_Side_Low_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt6.Tractor_Side_High_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt6.Tractor_Front_Low_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt6.Tractor_Front_High_Mounted_Work_Lights_Command= 3.0*RATE;
    LCMD -> bt7.Implement_OEM_Option_2_Light_Command= 3.0*RATE;
    LCMD -> bt7.Implement_OEM_Option_1_Light_Command= 3.0*RATE;
    LCMD -> bt7.Implement_Right_Facing_Work_Light_Command= 3.0*RATE;
    LCMD -> bt7.Implement_Left_Forward_Work_Light_Command= 3.0*RATE;
    LCMD -> bt8.Lighting_Data_Request_Command= 3.0*RATE;
    LCMD -> bt8.Implement_Right_Forward_Work_Light_Command= 3.0*RATE;
    LCMD -> bt8.Implement_Left_Facing_Work_Light_Command= 3.0*RATE;
    LCMD -> bt8.Implement_Rear_Work_Light_Command= 3.0*RATE;
}
void config_ETC7 (getETC7_t *ETC7)
{
    ETC7 -> bt1.Transmission_Current_Range_Display_Blank_State= 3.0*RATE;
    ETC7 -> bt1.Transmission_Service_Indicator= 3.0*RATE;
    ETC7 -> bt1.Transmission_Requested_Range_Display_Blank_State= 3.0*RATE;
    ETC7 -> bt1.Transmission_Requested_Range_Display_Flash_State= 3.0*RATE;
    ETC7 -> bt2.Transmission_Ready_for_Brake_Release= 3.0*RATE;
    ETC7 -> bt2.Active_Shift_Console_Indicator= 3.0*RATE;
    ETC7 -> bt2.Transmission_Engine_Crank_Enable= 3.0*RATE;
    ETC7 -> bt2.Transmission_Shift_Inhibit_Indicator= 3.0*RATE;
    ETC7 -> bt3.Transmission_Mode_4_Indicator= 3.0*RATE;
    ETC7 -> bt3.Transmission_Mode_3_Indicator= 3.0*RATE;
    ETC7 -> bt3.Transmission_Mode_2_Indicator= 3.0*RATE;
    ETC7 -> bt3.Transmission_Mode_1_Indicator= 3.0*RATE;
    ETC7 -> Transmission_Requested_Gear_Feedback= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ETC7 -> bt5.Transmission_Mode_5_Indicator= 3.0*RATE;
    ETC7 -> bt5.Transmission_Mode_6_Indicator= 3.0*RATE;
    ETC7 -> bt5.Transmission_Mode_7_Indicator= 3.0*RATE;
    ETC7 -> bt5.Transmission_Mode_8_Indicator= 3.0*RATE;
    ETC7 -> bt6.Transmission_Reverse_Gear_Shift_Inhibit_Status= 3.0*RATE;
    ETC7 -> bt6.Transmission_Warning_Indicator= 3.0*RATE;
}
void config_TCFG2 (getTCFG2_t *TCFG2)
{
    TCFG2 -> Transmission_Torque_Limit= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_ML (getML_t *ML)
{
    ML -> bt1.Rear_Black_Out_Marker_Select= 3.0*RATE;
    ML -> bt1.Front_Black_Out_Marker_Lamp_Select= 3.0*RATE;
    ML -> bt1.Convoy_Lamp_Select= 3.0*RATE;
    ML -> bt1.Convoy_Driving_Lamp_Select= 3.0*RATE;
    ML -> bt3.Black_Out_Brake_Stop_Lamp_Select= 3.0*RATE;
    ML -> bt4.Night_Vision_Illuminator_Select= 3.0*RATE;
    ML -> bt4.Black_Out_Work_Lamp_Select= 3.0*RATE;
    ML -> Operators_Black_Out_Intensity_Selection= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_TAVG (getTAVG_t *TAVG)
{
    TAVG -> Engine_Total_Average_Fuel_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    TAVG -> Engine_Total_Average_Fuel_Economy= Parameter_Translate(125.498046875*RATE , 1.0 , 0.0);
}
void config_DC1 (getDC1_t *DC1)
{
    DC1 -> bt1.Position_of_doors= 15.0*RATE;
    DC1 -> bt1.Ramp___Wheel_Chair_Lift_Position= 3.0*RATE;
    DC1 -> bt1.Status_2_of_doors= 3.0*RATE;
}
void config_VDC1 (getVDC1_t *VDC1)
{
    VDC1 -> bt1.VDC_Information_Signal= 3.0*RATE;
    VDC1 -> bt1.VDC_Fully_Operational= 3.0*RATE;
    VDC1 -> bt1.VDC_brake_light_request= 3.0*RATE;
    VDC1 -> bt2.ROP_Engine_Control_active= 3.0*RATE;
    VDC1 -> bt2.ROP_Brake_Control_active= 3.0*RATE;
    VDC1 -> bt2.YC_Engine_Control_active= 3.0*RATE;
    VDC1 -> bt2.YC_Brake_Control_active= 3.0*RATE;
    VDC1 -> bt3.Trailer_VDC_Active= 3.0*RATE;
}
void config_BT1 (getBT1_t *BT1)
{
    BT1 -> Battery_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    BT1 -> Battery_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_ACC2 (getACC2_t *ACC2)
{
    ACC2 -> bt1.ACC_usage_demand= 3.0*RATE;
    ACC2 -> bt1.Requested_ACC_Distance_Mode= 7.0*RATE;
}
void config_VEP3 (getVEP3_t *VEP3)
{
    VEP3 -> Alternator_Current__High_Range_Resolution_= Parameter_Translate(1612.75*RATE , 0.05 , -1600.0);
    VEP3 -> Net_Battery_Current__High_Range_Resolution_= Parameter_Translate(1612.75*RATE , 0.05 , -1600.0);
}
void config_RTC1 (getRTC1_t *RTC1)
{
    RTC1 -> Low_Limit_Threshold_for_Maximum_RPM_from_Retarder= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    RTC1 -> High_Limit_Threshold_for_Minimum_Continuous_RPM_from_Retarder= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    RTC1 -> Low_Limit_Threshold_for_Maximum_Torque_from_Retarder= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    RTC1 -> High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Retarder= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    RTC1 -> Maximum_Continuous_Retarder_Speed= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    RTC1 -> Minimum_Continuous_Retarder_Speed= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    RTC1 -> Maximum_Continuous_Retarder_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    RTC1 -> Minimum_Continuous_Retarder_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_ECT1 (getECT1_t *ECT1)
{
    ECT1 -> Engine_Low_Limit_Threshold_for_Maximum_RPM_from_Engine= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    ECT1 -> Engine_High_Limit_Threshold_for_Minimum_Continuous_Engine_RPM= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    ECT1 -> Engine_Low_Limit_Threshold_for_Maximum_Torque_from_Engine= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ECT1 -> Engine_High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Engine= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ECT1 -> Engine_Maximum_Continuous_RPM= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    ECT1 -> Engine_Minimum_Continuous_RPM= Parameter_Translate(8000.0*RATE , 32.0 , 0.0);
    ECT1 -> Engine_Maximum_Continuous_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ECT1 -> Engine_Minimum_Continuous_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_GFD (getGFD_t *GFD)
{
    GFD -> Specific_Heat_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
    GFD -> Reference_Engine_Gas_Mass_Flow_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    GFD -> Fuel_energy_content= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
}
void config_AT1T1I (getAT1T1I_t *AT1T1I)
{
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AT1T1I -> bt5.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI= 31.0*RATE;
    AT1T1I -> bt5.Aftertreatment_Selective_Catalytic_Reduction_Operator_Inducement_Active= 7.0*RATE;
    AT1T1I -> bt6.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI= 31.0*RATE;
    AT1T1I -> bt6.Aftertreatment_SCR_Operator_Inducement_Severity= 7.0*RATE;
    AT1T1I -> Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AT1T1I -> bt8.Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI= 31.0*RATE;
}
void config_ASC5 (getASC5_t *ASC5)
{
    ASC5 -> Damper_Stiffness_Front_Axle= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ASC5 -> Damper_Stiffness_Rear_Axle= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ASC5 -> Damper_Stiffness_Lift___Tag_Axle= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ASC5 -> bt4.Electronic_Shock_Absorber_Control_Mode__= 3.0*RATE;
    ASC5 -> bt4.Electronic_Shock_Absorber_Control_Mode___Rear_Axle= 3.0*RATE;
    ASC5 -> bt4.Electronic_Shock_Absorber_Control_Mode___Lift_Tag_Axle= 3.0*RATE;
}
void config_ASC4 (getASC4_t *ASC4)
{
    ASC4 -> Bellow_Pressure_Front_Axle_Left= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ASC4 -> Bellow_Pressure_Front_Axle_Right= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ASC4 -> Bellow_Pressure_Rear_Axle_Left= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ASC4 -> Bellow_Pressure_Rear_Axle_Right= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    ASC4 -> Relative_Level_Front_Axle_Right= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    ASC4 -> Relative_Level_Rear_Axle_Left= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    ASC4 -> Relative_Level_Rear_Axle_Right= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
}
void config_ASC1 (getASC1_t *ASC1)
{
    ASC1 -> bt1.Nominal_Level_Front_Axle= 15.0*RATE;
    ASC1 -> bt1.Nominal_Level_Rear_Axle= 15.0*RATE;
    ASC1 -> bt2.Below_Nominal_Level_Front_Axle= 3.0*RATE;
    ASC1 -> bt2.Below_Nominal_Level_Rear_Axle= 3.0*RATE;
    ASC1 -> bt2.Above_Nominal_Level_Front_Axle= 3.0*RATE;
    ASC1 -> bt2.Above_Nominal_Level_Rear_Axle= 3.0*RATE;
    ASC1 -> bt3.Lowering_Control_Mode_Front_Axle= 3.0*RATE;
    ASC1 -> bt3.Lowering_Control_Mode_Rear_Axle= 3.0*RATE;
    ASC1 -> bt3.Lifting_Control_Mode_Front_Axle= 3.0*RATE;
    ASC1 -> bt3.Lifting_Control_Mode_Rear_Axle= 3.0*RATE;
    ASC1 -> bt4.Kneeling_Information= 15.0*RATE;
    ASC1 -> bt4.Level_Control_Mode= 15.0*RATE;
    ASC1 -> bt5.Security_Device= 3.0*RATE;
    ASC1 -> bt5.Vehicle_Motion_Inhibit= 3.0*RATE;
    ASC1 -> bt5.Door_Release= 3.0*RATE;
    ASC1 -> bt5.Lift_Axle_1_Position= 3.0*RATE;
    ASC1 -> bt6.Front_Axle_in_Bumper_Range= 3.0*RATE;
    ASC1 -> bt6.Rear_Axle_in_Bumper_Range= 3.0*RATE;
    ASC1 -> bt6.Lift_Axle_2_Position= 3.0*RATE;
    ASC1 -> bt7.Suspension_Remote_Control_1= 3.0*RATE;
    ASC1 -> bt7.Suspension_Remote_control_2= 3.0*RATE;
    ASC1 -> bt7.Allow_Level_Control_During_Braking_Status= 3.0*RATE;
    ASC1 -> bt7.Speed_Dependant_Level_Control_Status= 3.0*RATE;
    ASC1 -> bt8.Suspension_Control_Refusal_Information= 15.0*RATE;
    ASC1 -> bt8.Memory_level= 15.0*RATE;
}
void config_FLI2 (getFLI2_t *FLI2)
{
    FLI2 -> bt1.Lane_Tracking_Status_Right_Side= 3.0*RATE;
    FLI2 -> bt1.Lane_Tracking_Status_Left_Side= 3.0*RATE;
    FLI2 -> bt1.Lane_Departure_Indication_Enable_Status= 3.0*RATE;
}
void config_BM (getBM_t *BM)
{
    BM -> bt1.Battery_Main_Switch_Hold_State= 3.0*RATE;
}
void config_CCC (getCCC_t *CCC)
{
    CCC -> Auxiliary_Heater_Maximum_Output_Power= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
}
void config_VF (getVF_t *VF)
{
    VF -> Hydraulic_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    VF -> bt2.Hydraulic_Oil_Filter_Restriction_Switch= 3.0*RATE;
    VF -> bt2.Winch_Oil_Pressure_Switch= 3.0*RATE;
    VF -> Hydraulic_Oil_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_ET3 (getET3_t *ET3)
{
    ET3 -> Engine_Intake_Manifold_1_Air_Temperature__High_Resolution_= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET3 -> Engine_Coolant_Temperature__High_Resolution_= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET3 -> Engine_Intake_Valve_Actuation_System_Oil_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET3 -> Engine_Charge_Air_Cooler_1_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EFS (getEFS_t *EFS)
{
    EFS -> Engine_Oil_Level_Remote_Reservoir= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EFS -> Engine_Fuel_Supply_Pump_Intake_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFS -> Engine_Fuel_Filter__suction_side__Differential_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFS -> Engine_Waste_Oil_Reservoir_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EFS -> Engine_Oil_Filter_Outlet_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EFS -> bt6.Engine_Oil_Priming_Pump_Switch= 3.0*RATE;
    EFS -> bt6.Engine_Oil_Priming_State= 3.0*RATE;
    EFS -> bt6.Engine_Oil_Pre_Heated_State= 3.0*RATE;
    EFS -> bt6.Engine_Coolant_Pre_heated_State= 3.0*RATE;
    EFS -> bt7.Engine_Ventilation_Status= 7.0*RATE;
    EFS -> bt7.Fuel_Pump_Primer_Status= 3.0*RATE;
}
void config_TCO1 (getTCO1_t *TCO1)
{
    TCO1 -> bt1.Driver_1_working_state= 7.0*RATE;
    TCO1 -> bt1.Driver_2_working_state= 7.0*RATE;
    TCO1 -> bt1.Vehicle_motion= 3.0*RATE;
    TCO1 -> bt2.Driver_1_Time_Related_States= 15.0*RATE;
    TCO1 -> bt2.Driver_card_driver_1= 3.0*RATE;
    TCO1 -> bt2.Vehicle_Overspeed= 3.0*RATE;
    TCO1 -> bt3.Driver_2_Time_Related_States= 15.0*RATE;
    TCO1 -> bt3.Driver_card_driver_2= 3.0*RATE;
    TCO1 -> bt4.System_event= 3.0*RATE;
    TCO1 -> bt4.Handling_information= 3.0*RATE;
    TCO1 -> bt4.Tachograph_performance= 3.0*RATE;
    TCO1 -> bt4.Direction_indicator= 3.0*RATE;
    TCO1 -> Tachograph_output_shaft_speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    TCO1 -> Tachograph_vehicle_speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
}
void config_HTR (getHTR_t *HTR)
{
    HTR -> Auxiliary_Heater_Output_Coolant_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    HTR -> Auxiliary_Heater_Input_Air_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    HTR -> Auxiliary_Heater_Output_Power_Percent= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    HTR -> bt4.Auxiliary_Heater_Mode= 15.0*RATE;
    HTR -> bt5.Auxiliary_Heater_Water_Pump_Status= 3.0*RATE;
    HTR -> bt5.Cab_Ventilation= 3.0*RATE;
    HTR -> bt5.Engine_Heating_Zone= 3.0*RATE;
    HTR -> bt5.Cab_Heating_Zone= 3.0*RATE;
}
void config_HRW (getHRW_t *HRW)
{
    HRW -> Front_Axle_Left_Wheel_Speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    HRW -> Front_axle_right_wheel_speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    HRW -> Rear_axle_left_wheel_speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    HRW -> Rear_axle_right_wheel_speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
}
void config_ACC1 (getACC1_t *ACC1)
{
    ACC1 -> Speed_of_forward_vehicle= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    ACC1 -> Distance_to_forward_vehicle= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    ACC1 -> Adaptive_Cruise_Control_Set_Speed= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    ACC1 -> bt4.Adaptive_Cruise_Control_Mode= 7.0*RATE;
    ACC1 -> bt4.Adaptive_cruise_control_set_distance_mode= 7.0*RATE;
    ACC1 -> Road_curvature= Parameter_Translate(251.992*RATE , 1.0 , 1.0);
    ACC1 -> bt7.ACC_Target_Detected= 3.0*RATE;
    ACC1 -> bt7.ACC_System_Shutoff_Warning= 3.0*RATE;
    ACC1 -> bt7.ACC_Distance_Alert_Signal= 3.0*RATE;
    ACC1 -> bt7.Forward_Collision_Warning= 3.0*RATE;
}
void config_CVW (getCVW_t *CVW)
{
    CVW -> Powered_Vehicle_Weight= Parameter_Translate(642550.0*RATE , 10.0 , 0.0);
    CVW -> Gross_Combination_Vehicle_Weight= Parameter_Translate(642550.0*RATE , 10.0 , 0.0);
}
void config_LTP (getLTP_t *LTP)
{
    LTP -> Laser_Tracer_Target_Deviation= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    LTP -> Laser_Tracer_Vertical_Distance= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    LTP -> Laser_Tracer_Horizontal_Deviation= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    LTP -> bt6.LED_Display_Data_2= 255.0*RATE;
    LTP -> bt7.Laser_Tracer_Information= 255.0*RATE;
}
void config_LBC (getLBC_t *LBC)
{
    LBC -> Blade_Duration_and_Direction= Parameter_Translate(3148.7*RATE , 0.1 , 276.8);
    LBC -> bt3.Blade_Control_Mode= 255.0*RATE;
    LBC -> bt4.Blade_Control_Mode___Left= 15.0*RATE;
    LBC -> bt4.Blade_Control_Mode___Right= 15.0*RATE;
    LBC -> bt5.Land_Leveling_System_Enable_Status= 3.0*RATE;
}
void config_LMP (getLMP_t *LMP)
{
    LMP -> Mast_Position= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
}
void config_LSP (getLSP_t *LSP)
{
    LSP -> Modify_Leveling_System_Set_Point= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    LSP -> Blade_Height_Set_Point___High_Resolution= Parameter_Translate(211.3929215*RATE , 100.0 , -209.7152);
}
void config_LVD (getLVD_t *LVD)
{
    LVD -> Laser_Strike_Vertical_Deviation= Parameter_Translate(3225.5*RATE , 0.1 , 200.0);
    LVD -> Laser_Receiver_Type= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    LVD -> Laser_Strike_Data_Latency= Parameter_Translate(3.289856*RATE , 51.2 , 0.0);
    LVD -> Absolute_Laser_Strike_Position= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_LVDD (getLVDD_t *LVDD)
{
    LVDD -> bt1.LED_Display_Data_1= 255.0*RATE;
    LVDD -> bt2.LED_Display_Mode_Control= 15.0*RATE;
    LVDD -> bt2.LED_Display_Deadband_Control= 15.0*RATE;
    LVDD -> bt3.LED_Pattern_Control= 15.0*RATE;
    LVDD -> bt3.Display_Deadbands= 15.0*RATE;
}
void config_AP (getAP_t *AP)
{
    AP -> Auxiliary_Vacuum_Pressure_Reading= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    AP -> Auxiliary_Gage_Pressure_Reading_1= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    AP -> Auxiliary_Absolute_Pressure_Reading= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_TP1 (getTP1_t *TP1)
{
    TP1 -> Tire_Pressure_Check_Interval= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TP1 -> bt2.Steer_Channel_Mode= 15.0*RATE;
    TP1 -> bt3.Trailer_tag_Channel_Mode= 15.0*RATE;
    TP1 -> bt3.Drive_Channel_Mode= 15.0*RATE;
    TP1 -> bt4.PCU_Drive_Solenoid_Status= 3.0*RATE;
    TP1 -> bt4.PCU_Steer_Solenoid_Status= 3.0*RATE;
    TP1 -> bt4.Tire_Pressure_Supply_Switch_Status= 3.0*RATE;
    TP1 -> bt5.PCU_Deflate_Solenoid_Status= 3.0*RATE;
    TP1 -> bt5.PCU_Control_Solenoid_Status= 3.0*RATE;
    TP1 -> bt5.PCU_Supply_Solenoid_Status= 3.0*RATE;
    TP1 -> bt5.PCU_Trailer_Tag_or_Push_Solenoid_Status= 3.0*RATE;
}
void config_TP2 (getTP2_t *TP2)
{
    TP2 -> Trailer_Tag_Or_Push_Channel_Tire_Pressure_Target= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    TP2 -> Drive_Channel_Tire_Pressure_Target= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    TP2 -> Steer_Channel_Tire_Pressure_Target= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_TP3 (getTP3_t *TP3)
{
    TP3 -> Trailer_Tag_Or_Push_Channel_Tire_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    TP3 -> Drive_Channel_Tire_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    TP3 -> Steer_Channel_Tire_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_CT1 (getCT1_t *CT1)
{
    CT1 -> Engine_Cylinder_1_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT1 -> Engine_Cylinder_2_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT1 -> Engine_Cylinder_3_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT1 -> Engine_Cylinder_4_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
}
void config_CT2 (getCT2_t *CT2)
{
    CT2 -> Engine_Cylinder_5_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT2 -> Engine_Cylinder_6_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT2 -> Engine_Cylinder_7_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT2 -> Engine_Cylinder_8_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
}
void config_CT3 (getCT3_t *CT3)
{
    CT3 -> Engine_Cylinder_9_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT3 -> Engine_Cylinder_10_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT3 -> Engine_Cylinder_11_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT3 -> Engine_Cylinder_12_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
}
void config_CT4 (getCT4_t *CT4)
{
    CT4 -> Engine_Cylinder_13_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT4 -> Engine_Cylinder_14_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT4 -> Engine_Cylinder_15_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT4 -> Engine_Cylinder_16_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
}
void config_CT5 (getCT5_t *CT5)
{
    CT5 -> Engine_Cylinder_17_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT5 -> Engine_Cylinder_18_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT5 -> Engine_Cylinder_19_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT5 -> Engine_Cylinder_20_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
}
void config_CT6 (getCT6_t *CT6)
{
    CT6 -> Engine_Desired_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
    CT6 -> Engine_Average_Combustion_Time= Parameter_Translate(642.55*RATE , 0.01 , 0.0);
}
void config_GFI2 (getGFI2_t *GFI2)
{
    GFI2 -> Engine_Fuel_Flow_Rate_1= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    GFI2 -> Engine_Fuel_Flow_Rate_2= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    GFI2 -> Engine_Fuel_Valve_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    GFI2 -> Engine_Fuel_Valve_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    GFI2 -> Engine_Requested_Fuel_Valve_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    GFI2 -> Engine_Requested_Fuel_Valve_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_IT1 (getIT1_t *IT1)
{
    IT1 -> Engine_Cylinder_1_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT1 -> Engine_Cylinder_2_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT1 -> Engine_Cylinder_3_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT1 -> Engine_Cylinder_4_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_IT2 (getIT2_t *IT2)
{
    IT2 -> Engine_Cylinder_5_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT2 -> Engine_Cylinder_6_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT2 -> Engine_Cylinder_7_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT2 -> Engine_Cylinder_8_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_IT3 (getIT3_t *IT3)
{
    IT3 -> Engine_Cylinder_9_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT3 -> Engine_Cylinder_10_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT3 -> Engine_Cylinder_11_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT3 -> Engine_Cylinder_12_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_IT4 (getIT4_t *IT4)
{
    IT4 -> Engine_Cylinder_13_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT4 -> Engine_Cylinder_14_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT4 -> Engine_Cylinder_15_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT4 -> Engine_Cylinder_16_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_IT5 (getIT5_t *IT5)
{
    IT5 -> Engine_Cylinder_17_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT5 -> Engine_Cylinder_18_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT5 -> Engine_Cylinder_19_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT5 -> Engine_Cylinder_20_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_IT6 (getIT6_t *IT6)
{
    IT6 -> Engine_Desired_Ignition_Timing_1= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT6 -> Engine_Desired_Ignition_Timing_2= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT6 -> Engine_Desired_Ignition_Timing_3= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    IT6 -> Engine_Actual_Ignition_Timing= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
}
void config_ISO1 (getISO1_t *ISO1)
{
    ISO1 -> Engine_Cylinder_1_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_2_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_3_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_4_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_5_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_6_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_7_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO1 -> Engine_Cylinder_8_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_ISO2 (getISO2_t *ISO2)
{
    ISO2 -> Engine_Cylinder_9_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_10_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_11_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_12_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_13_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_14_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_15_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO2 -> Engine_Cylinder_16_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_ISO3 (getISO3_t *ISO3)
{
    ISO3 -> Engine_Cylinder_17_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO3 -> Engine_Cylinder_18_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO3 -> Engine_Cylinder_19_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ISO3 -> Engine_Cylinder_20_Ignition_Transformer_Secondary_Output= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_GFP (getGFP_t *GFP)
{
    GFP -> Engine_Fuel_Valve_1_Intake_Absolute_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    GFP -> Engine_Fuel_Valve_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    GFP -> Engine_Air_to_Fuel_Differential_Pressure= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    GFP -> Engine_Fuel= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
}
void config_AAI (getAAI_t *AAI)
{
    AAI -> Auxiliary_Temperature_1= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AAI -> Auxiliary_Temperature_2= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AAI -> Auxiliary_Pressure_1= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
    AAI -> Auxiliary_Pressure_2= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
    AAI -> Auxiliary_Level= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AAI -> Relative_Humidity= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_VEP2 (getVEP2_t *VEP2)
{
    VEP2 -> Battery_Potential___Power_Input_2= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    VEP2 -> ECU_Power_Output_Supply_Voltage_1= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    VEP2 -> ECU_Power_Output_Supply_Voltage_2= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    VEP2 -> ECU_Power_Output_Supply_Voltage_3= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
}
void config_SP2 (getSP2_t *SP2)
{
    SP2 -> Engine_External_Shutdown_Air_Supply_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_FL (getFL_t *FL)
{
    FL -> bt1.Engine_Fuel_Leakage_1= 3.0*RATE;
    FL -> bt1.Engine_Fuel_Leakage_2= 3.0*RATE;
}
void config_EI (getEI_t *EI)
{
    EI -> Engine_Pre_filter_Oil_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EI -> Engine_Exhaust_Gas_Pressure_1= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    EI -> Engine_Fuel_Rack_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EI -> Engine_Gas_Mass_Flow_Rate_1= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    EI -> Instantaneous_Estimated_Brake_Power= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_EES (getEES_t *EES)
{
    EES -> Electrical_Load= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    EES -> bt3.Safety_Wire_Status= 3.0*RATE;
}
void config_EAC (getEAC_t *EAC)
{
    EAC -> Engine_Auxiliary_Coolant_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EAC -> Engine_Auxiliary_Coolant_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    EAC -> Sea_Water_Pump_Outlet_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EAC -> Engine_Extended_Range_Coolant_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
}
void config_RBI (getRBI_t *RBI)
{
    RBI -> Engine_Operation_Time_Since_Rebuild= Parameter_Translate(4211081215.0*RATE , 1.0 , 0.0);
}
void config_TCW (getTCW_t *TCW)
{
    TCW -> Engine_Turbocharger_Wastegate_Actuator_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_3_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_4_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TCW -> Engine_Turbocharger_Wastegate_Actuator_Control_Air_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    TCW -> Engine_Desired_Turbocharger_Wastegate_Actuator_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TCW -> bt7.Engine_Turbocharger_Wastegate_Actuator_1_Preliminary_FMI= 31.0*RATE;
    TCW -> bt7.Engine_Turbocharger_Wastegate_Actuator_1_Temperature_Status= 7.0*RATE;
    TCW -> Engine_Desired_Turbocharger_Wastegate_Actuator_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_TCI5 (getTCI5_t *TCI5)
{
    TCI5 -> Engine_Turbocharger_1_Turbine_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI5 -> Engine_Turbocharger_2_Turbine_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI5 -> Engine_Turbocharger_3_Turbine_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI5 -> Engine_Turbocharger_4_Turbine_Outlet_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_TCI4 (getTCI4_t *TCI4)
{
    TCI4 -> Engine_Turbocharger_1_Turbine_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI4 -> Engine_Turbocharger_2_Turbine_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI4 -> Engine_Turbocharger_3_Turbine_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI4 -> Engine_Turbocharger_4_Turbine_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_TCI3 (getTCI3_t *TCI3)
{
    TCI3 -> Engine_Turbocharger_1_Compressor_Intake_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    TCI3 -> Engine_Turbocharger_2_Compressor_Intake_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    TCI3 -> Engine_Turbocharger_3_Compressor_Intake_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    TCI3 -> Engine_Turbocharger_4_Compressor_Intake_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
}
void config_TCI2 (getTCI2_t *TCI2)
{
    TCI2 -> Engine_Turbocharger_1_Compressor_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI2 -> Engine_Turbocharger_2_Compressor_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI2 -> Engine_Turbocharger_3_Compressor_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TCI2 -> Engine_Turbocharger_4_Compressor_Intake_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_TCI1 (getTCI1_t *TCI1)
{
    TCI1 -> Engine_Turbocharger_Lube_Oil_Pressure_2= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    TCI1 -> Engine_Turbocharger_2_Speed= Parameter_Translate(257020.0*RATE , 4.0 , 0.0);
    TCI1 -> Engine_Turbocharger_3_Speed= Parameter_Translate(257020.0*RATE , 4.0 , 0.0);
    TCI1 -> Engine_Turbocharger_4_Speed= Parameter_Translate(257020.0*RATE , 4.0 , 0.0);
}
void config_MBT3 (getMBT3_t *MBT3)
{
    MBT3 -> Engine_Main_Bearing_9_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT3 -> Engine_Main_Bearing_10_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT3 -> Engine_Main_Bearing_11_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_MBT2 (getMBT2_t *MBT2)
{
    MBT2 -> Engine_Main_Bearing_5_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT2 -> Engine_Main_Bearing_6_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT2 -> Engine_Main_Bearing_7_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT2 -> Engine_Main_Bearing_8_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_MBT1 (getMBT1_t *MBT1)
{
    MBT1 -> Engine_Main_Bearing_1_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT1 -> Engine_Main_Bearing_2_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT1 -> Engine_Main_Bearing_3_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    MBT1 -> Engine_Main_Bearing_4_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EPT5 (getEPT5_t *EPT5)
{
    EPT5 -> Engine_Exhaust_Gas_Port_17_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT5 -> Engine_Exhaust_Gas_Port_18_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT5 -> Engine_Exhaust_Gas_Port_19_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT5 -> Engine_Exhaust_Gas_Port_20_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EPT4 (getEPT4_t *EPT4)
{
    EPT4 -> Engine_Exhaust_Gas_Port_13_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT4 -> Engine_Exhaust_Gas_Port_14_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT4 -> Engine_Exhaust_Gas_Port_15_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT4 -> Engine_Exhaust_Gas_Port_16_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EPT3 (getEPT3_t *EPT3)
{
    EPT3 -> Engine_Exhaust_Gas_Port_9_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT3 -> Engine_Exhaust_Gas_Port_10_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT3 -> Engine_Exhaust_Gas_Port_11_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT3 -> Engine_Exhaust_Gas_Port_12_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EPT2 (getEPT2_t *EPT2)
{
    EPT2 -> Engine_Exhaust_Gas_Port_5_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT2 -> Engine_Exhaust_Gas_Port_6_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT2 -> Engine_Exhaust_Gas_Port_7_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT2 -> Engine_Exhaust_Gas_Port_8_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_EPT1 (getEPT1_t *EPT1)
{
    EPT1 -> Engine_Exhaust_Gas_Port_1_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT1 -> Engine_Exhaust_Gas_Port_2_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT1 -> Engine_Exhaust_Gas_Port_3_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    EPT1 -> Engine_Exhaust_Gas_Port_4_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_ET2 (getET2_t *ET2)
{
    ET2 -> Engine_Oil_Temperature_2= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET2 -> Engine_ECU_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET2 -> Engine_Exhaust_Gas_Recirculation_1_Differential_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    ET2 -> Engine_Exhaust_Gas_Recirculation_1_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_IMT2 (getIMT2_t *IMT2)
{
    IMT2 -> Engine_Intake_Manifold_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_3_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_4_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_5_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    IMT2 -> Engine_Intake_Manifold_6_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_IMT1 (getIMT1_t *IMT1)
{
    IMT1 -> Engine_Turbocharger_1_Boost_Pressure= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    IMT1 -> Engine_Turbocharger_2_Boost_Pressure= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    IMT1 -> Engine_Turbocharger_3_Boost_Pressure= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    IMT1 -> Engine_Turbocharger_4_Boost_Pressure= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
}
void config_AT (getAT_t *AT)
{
    AT -> Engine_Alternator_Bearing_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AT -> Engine_Alternator_Bearing_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AT -> Engine_Alternator_Winding_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AT -> Engine_Alternator_Winding_2_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AT -> Engine_Alternator_Winding_3_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
}
void config_ACTL (getACTL_t *ACTL)
{
    ACTL -> Articulation_Angle= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_EO1 (getEO1_t *EO1)
{
    EO1 -> Engine_Desired_Rated_Exhaust_Oxygen= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EO1 -> Engine_Desired_Exhaust_Oxygen= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EO1 -> Engine_Actual_Exhaust_Oxygen= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
    EO1 -> Engine_Exhaust_Gas_Oxygen_Sensor_Fueling_Correction= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EO1 -> bt8.Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation= 3.0*RATE;
}
void config_AF2 (getAF2_t *AF2)
{
    AF2 -> Engine_Gaseous_Fuel_Correction_Factor= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    AF2 -> Engine_Desired_Absolute_Intake_Manifold_Pressure__Turbo_Boost_Limit_= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    AF2 -> Engine_Turbocharger_Wastegate_Valve_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    AF2 -> Engine_Gas_Mass_Flow_Sensor_Fueling_Correction= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_ETC6 (getETC6_t *ETC6)
{
    ETC6 -> Recommended_Gear= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ETC6 -> Highest_Possible_Gear= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ETC6 -> Lowest_Possible_Gear= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    ETC6 -> Clutch_Life_Remaining= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EBC4 (getEBC4_t *EBC4)
{
    EBC4 -> Brake_Lining_Remaining_Front_Axle_Left_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Front_Axle_Right_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_1_Left_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_1_Right_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_2_Left_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_2_Right_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_3_Left_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EBC4 -> Brake_Lining_Remaining_Rear_Axle_3_Right_Wheel= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EBC3 (getEBC3_t *EBC3)
{
    EBC3 -> Brake_Application_Pressure_High_Range_Front_Axle_Left_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Front_Axle_Right_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_1_Left_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_1_Right_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_2_Left_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_2_Right_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_3_Left_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
    EBC3 -> Brake_Application_Pressure_High_Range_Rear_Axle_3_Right_Wheel= Parameter_Translate(1250.0*RATE , 5.0 , 0.0);
}
void config_AIR1 (getAIR1_t *AIR1)
{
    AIR1 -> Pneumatic_Supply_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    AIR1 -> Parking_and_or_Trailer_Air_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    AIR1 -> Service_Brake_Circuit_1_Air_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    AIR1 -> Service_Brake_Circuit_2_Air_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    AIR1 -> Auxiliary_Equipment_Supply_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    AIR1 -> Air_Suspension_Supply_Pressure= Parameter_Translate(2000.0*RATE , 8.0 , 0.0);
    AIR1 -> bt7.Air_Compressor_Status= 3.0*RATE;
}
void config_GFC (getGFC_t *GFC)
{
    GFC -> Trip_Fuel__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GFC -> Total_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
}
void config_TTI2 (getTTI2_t *TTI2)
{
    TTI2 -> Trip_Cruise_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI2 -> Trip_PTO_Governor_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI2 -> Trip_Engine_Running_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI2 -> Trip_Idle_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI2 -> Trip_Air_Compressor_On_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_EH (getEH_t *EH)
{
    EH -> Total_ECU_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    EH -> Total_ECU_Run_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_GFI1 (getGFI1_t *GFI1)
{
    GFI1 -> Total_Engine_PTO_Governor_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GFI1 -> Trip_Average_Fuel_Rate__Gaseous_= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    GFI1 -> Engine_Fuel_Specific_Gravity= Parameter_Translate(6.4255*RATE , 0.0001 , 0.0);
}
void config_LFI (getLFI_t *LFI)
{
    LFI -> Total_Engine_PTO_Governor_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    LFI -> Trip_Average_Fuel_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    LFI -> Flexible_Fuel_Percentage= Parameter_Translate(160.6375*RATE , 0.0025 , 0.0);
}
void config_TTI1 (getTTI1_t *TTI1)
{
    TTI1 -> Trip_Time_in_VSL= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI1 -> Trip_Time_in_Top_Gear= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI1 -> Trip_Time_in_Gear_Down= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TTI1 -> Trip_Time_in_Derate_by_Engine= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_TSI (getTSI_t *TSI)
{
    TSI -> Trip_Number_of_Hot_Shutdowns= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    TSI -> Trip_Number_of_Idle_Shutdowns= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    TSI -> Trip_Number_of_Idle_Shutdown_Overrides= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    TSI -> Trip_Sudden_Decelerations= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_TVI (getTVI_t *TVI)
{
    TVI -> Trip_Maximum_Vehicle_Speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    TVI -> Trip_Cruise_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
}
void config_LF (getLF_t *LF)
{
    LF -> Trip_Maximum_Engine_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    LF -> Trip_Average_Engine_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    LF -> Trip_Drive_Average_Load_Factor= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    LF -> Total_Drive_Average_Load_Factor= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    LF -> Total_Engine_Cruise_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_GTFI (getGTFI_t *GTFI)
{
    GTFI -> Trip_Drive_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GTFI -> Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GTFI -> Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GTFI -> Trip_Vehicle_Idle_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GTFI -> Trip_Cruise_Fuel_Used__Gaseous_= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    GTFI -> Trip_Drive_Fuel_Economy__Gaseous_= Parameter_Translate(125.498046875*RATE , 1.0 , 0.0);
}
void config_LTFI (getLTFI_t *LTFI)
{
    LTFI -> Trip_Drive_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    LTFI -> Trip_PTO_Governor_Moving_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    LTFI -> Trip_PTO_Governor_Non_moving_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    LTFI -> Trip_Vehicle_Idle_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    LTFI -> Trip_Cruise_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    LTFI -> Trip_Drive_Fuel_Economy= Parameter_Translate(125.498046875*RATE , 1.0 , 0.0);
}
void config_TDI (getTDI_t *TDI)
{
    TDI -> Trip_Distance_on_VSL= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    TDI -> Trip_Gear_Down_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    TDI -> Trip_Distance_in_Top_Gear= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
}
void config_TFI (getTFI_t *TFI)
{
    TFI -> Trip_Fan_On_Time= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TFI -> Trip_Fan_On_Time_Due_to_the_Engine_System= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TFI -> Trip_Fan_On_Time_Due_to_a_Manual_Switch= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    TFI -> Trip_Fan_On_Time_Due_to_the_A_C_System= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_CBI (getCBI_t *CBI)
{
    CBI -> Total_Compression_Brake_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    CBI -> Trip_Compression_Brake_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    CBI -> Trip_Service_Brake_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    CBI -> Trip_Service_Brake_Applications= Parameter_Translate(4227858431.0*RATE , 1.0 , 0.0);
}
void config_FD1 (getFD1_t *FD1)
{
    FD1 -> Estimated_Percent_Fan_Speed= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    FD1 -> bt2.Fan_Drive_State= 15.0*RATE;
    FD1 -> Fan_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    FD1 -> Hydraulic_Fan_Motor_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    FD1 -> Fan_Drive_Bypass_Command_Status= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EEC4 (getEEC4_t *EEC4)
{
    EEC4 -> Engine_Rated_Power= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    EEC4 -> Engine_Rated_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    EEC4 -> bt5.Engine_Rotation_Direction= 3.0*RATE;
    EEC4 -> bt5.Engine_Intake_Manifold_Pressure_Control_Mode= 3.0*RATE;
    EEC4 -> Crank_Attempt_Count_on_Present_Start_Attempt= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_EBC2 (getEBC2_t *EBC2)
{
    EBC2 -> Front_Axle_Speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EBC2 -> Relative_Speed__Front_Axle_Left_Wheel= Parameter_Translate(7.8125*RATE , 1.0 , -7.8125);
    EBC2 -> Relative_Speed__Front_Axle_Right_Wheel= Parameter_Translate(7.8125*RATE , 1.0 , -7.8125);
    EBC2 -> Relative_Speed__Rear_Axle_1_Left_Wheel= Parameter_Translate(7.8125*RATE , 1.0 , -7.8125);
    EBC2 -> Relative_Speed__Rear_Axle_1_Right_Wheel= Parameter_Translate(7.8125*RATE , 1.0 , -7.8125);
    EBC2 -> Relative_Speed__Rear_Axle_2_Left_Wheel= Parameter_Translate(7.8125*RATE , 1.0 , -7.8125);
    EBC2 -> Relative_Speed__Rear_Axle_2_Right_Wheel= Parameter_Translate(7.8125*RATE , 1.0 , -7.8125);
}
void config_VDHR (getVDHR_t *VDHR)
{
    VDHR -> High_Resolution_Total_Vehicle_Distance= Parameter_Translate(21055406.0*RATE , 5.0 , 0.0);
    VDHR -> High_Resolution_Trip_Distance= Parameter_Translate(21055406.0*RATE , 5.0 , 0.0);
}
void config_ERC2 (getERC2_t *ERC2)
{
    ERC2 -> bt1.Transmission_Output_Retarder= 3.0*RATE;
}
void config_ETC5 (getETC5_t *ETC5)
{
    ETC5 -> bt1.Transmission_High_Range_Sense_Switch= 3.0*RATE;
    ETC5 -> bt1.Transmission_Low_Range_Sense_Switch= 3.0*RATE;
    ETC5 -> bt2.Transmission_Reverse_Direction_Switch= 3.0*RATE;
    ETC5 -> bt2.Transmission_Neutral_Switch= 3.0*RATE;
    ETC5 -> bt2.Transmission_Forward_Direction_Switch= 3.0*RATE;
}
void config_ETC4 (getETC4_t *ETC4)
{
    ETC4 -> Transmission_Synchronizer_Clutch_Value= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ETC4 -> Transmission_Synchronizer_Brake_Value= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_ETC3 (getETC3_t *ETC3)
{
    ETC3 -> Transmission_Shift_Finger_Gear_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ETC3 -> Transmission_Shift_Finger_Rail_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    ETC3 -> bt3.Transmission_Shift_Finger_Neutral_Indicator= 3.0*RATE;
    ETC3 -> bt3.Transmission_Shift_Finger_Engagement_Indicator= 3.0*RATE;
    ETC3 -> bt3.Transmission_Shift_Finger_Center_Rail_Indicator= 3.0*RATE;
    ETC3 -> bt4.Transmission_Shift_Finger_Rail_Actuator_1= 3.0*RATE;
    ETC3 -> bt4.Transmission_Shift_Finger_Gear_Actuator_1= 3.0*RATE;
    ETC3 -> bt4.Transmission_Shift_Finger_Rail_Actuator_2= 3.0*RATE;
    ETC3 -> bt4.Transmission_Shift_Finger_Gear_Actuator_2= 3.0*RATE;
    ETC3 -> bt5.Transmission_Range_High_Actuator= 3.0*RATE;
    ETC3 -> bt5.Transmission_Range_Low_Actuator= 3.0*RATE;
    ETC3 -> bt5.Transmission_Splitter_Direct_Actuator= 3.0*RATE;
    ETC3 -> bt5.Transmission_Splitter_Indirect_Actuator= 3.0*RATE;
    ETC3 -> bt6.Transmission_Clutch_Actuator= 3.0*RATE;
    ETC3 -> bt6.Transmission_Lockup_Clutch_Actuator= 3.0*RATE;
    ETC3 -> bt6.Transmission_Defuel_Actuator= 3.0*RATE;
    ETC3 -> bt6.Transmission_Inertia_Brake_Actuator= 3.0*RATE;
}
void config_AS (getAS_t *AS)
{
    AS -> Alternator_Speed= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    AS -> bt3.Alternator_1_Status= 3.0*RATE;
    AS -> bt3.Alternator_2_Status= 3.0*RATE;
    AS -> bt3.Alternator_3_Status= 3.0*RATE;
    AS -> bt3.Alternator_4_Status= 3.0*RATE;
}
void config_AUXIO1 (getAUXIO1_t *AUXIO1)
{
    AUXIO1 -> bt1.Auxiliary_I_O_04= 3.0*RATE;
    AUXIO1 -> bt1.Auxiliary_I_O_03= 3.0*RATE;
    AUXIO1 -> bt1.Auxiliary_I_O_02= 3.0*RATE;
    AUXIO1 -> bt1.Auxiliary_I_O_01= 3.0*RATE;
    AUXIO1 -> bt2.Auxiliary_I_O_08= 3.0*RATE;
    AUXIO1 -> bt2.Auxiliary_I_O_07= 3.0*RATE;
    AUXIO1 -> bt2.Auxiliary_I_O_06= 3.0*RATE;
    AUXIO1 -> bt2.Auxiliary_I_O_05= 3.0*RATE;
    AUXIO1 -> bt3.Auxiliary_I_O_12= 3.0*RATE;
    AUXIO1 -> bt3.Auxiliary_I_O_11= 3.0*RATE;
    AUXIO1 -> bt3.Auxiliary_I_O_10= 3.0*RATE;
    AUXIO1 -> bt3.Auxiliary_I_O_09= 3.0*RATE;
    AUXIO1 -> bt4.Auxiliary_I_O_16= 3.0*RATE;
    AUXIO1 -> bt4.Auxiliary_I_O_15= 3.0*RATE;
    AUXIO1 -> bt4.Auxiliary_I_O_14= 3.0*RATE;
    AUXIO1 -> bt4.Auxiliary_I_O_13= 3.0*RATE;
    AUXIO1 -> Auxiliary_I_O_Channel_1= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
    AUXIO1 -> Auxiliary_I_O_Channel_2= Parameter_Translate(64255.0*RATE , 1.0 , 0.0);
}
void config_SOFT (getSOFT_t *SOFT)
{
    SOFT -> Number_of_Software_Identification_Fields= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_EFL_P2 (getEFL_P2_t *EFL_P2)
{
    EFL_P2 -> Engine_Injection_Control_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EFL_P2 -> Engine_Injector_Metering_Rail_1_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EFL_P2 -> Engine_Injector_Timing_Rail_1_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    EFL_P2 -> Engine_Injector_Metering_Rail_2_Pressure= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
}
void config_IO (getIO_t *IO)
{
    IO -> Engine_Total_Idle_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
    IO -> Engine_Total_Idle_Hours= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_TC (getTC_t *TC)
{
    TC -> Engine_Turbocharger_Lube_Oil_Pressure_1= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    TC -> Engine_Turbocharger_1_Speed= Parameter_Translate(257020.0*RATE , 4.0 , 0.0);
    TC -> bt4.Engine_Turbocharger_Oil_Level_Switch= 3.0*RATE;
}
void config_AIR2 (getAIR2_t *AIR2)
{
    AIR2 -> Engine_Air_Start_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
}
void config_EEC3 (getEEC3_t *EEC3)
{
    EEC3 -> Nominal_Friction___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EEC3 -> Engine_s_Desired_Operating_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    EEC3 -> Engine_s_Desired_Operating_Speed_Asymmetry_Adjustment= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    EEC3 -> Estimated_Engine_Parasitic_Losses___Percent_Torque= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    EEC3 -> Aftertreatment_1_Exhaust_Gas_Mass_Flow= Parameter_Translate(12851.0*RATE , 0.2 , 0.0);
    EEC3 -> bt8.Aftertreatment_1_Intake_Dew_Point= 3.0*RATE;
    EEC3 -> bt8.Aftertreatment_1_Exhaust_Dew_Point= 3.0*RATE;
    EEC3 -> bt8.Aftertreatment_2_Intake_Dew_Point= 3.0*RATE;
    EEC3 -> bt8.Aftertreatment_2_Exhaust_Dew_Point= 3.0*RATE;
}
void config_VD (getVD_t *VD)
{
    VD -> Trip_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
    VD -> Total_Vehicle_Distance= Parameter_Translate(526385151.9*RATE , 0.125 , 0.0);
}
void config_TCFG (getTCFG_t *TCFG)
{
    TCFG -> Number_of_Reverse_Gear_Ratios= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TCFG -> Number_of_Forward_Gear_Ratios= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TCFG -> Transmission_Gear_Ratio= Parameter_Translate(64.255*RATE , 0.001 , 0.0);
}
void config_SHUTDN (getSHUTDN_t *SHUTDN)
{
    SHUTDN -> bt1.Engine_Idle_Shutdown_has_Shutdown_Engine= 3.0*RATE;
    SHUTDN -> bt1.Engine_Idle_Shutdown_Driver_Alert_Mode= 3.0*RATE;
    SHUTDN -> bt1.Engine_Idle_Shutdown_Timer_Override= 3.0*RATE;
    SHUTDN -> bt1.Engine_Idle_Shutdown_Timer_State= 3.0*RATE;
    SHUTDN -> bt2.Engine_Idle_Shutdown_Timer_Function= 3.0*RATE;
    SHUTDN -> bt3.A_C_High_Pressure_Fan_Switch= 3.0*RATE;
    SHUTDN -> bt3.Refrigerant_Low_Pressure_Switch= 3.0*RATE;
    SHUTDN -> bt3.Refrigerant_High_Pressure_Switch= 3.0*RATE;
    SHUTDN -> bt4.Engine_Wait_to_Start_Lamp= 3.0*RATE;
    SHUTDN -> bt5.Engine_Protection_System_has_Shutdown_Engine= 3.0*RATE;
    SHUTDN -> bt5.Engine_Protection_System_Approaching_Shutdown= 3.0*RATE;
    SHUTDN -> bt5.Engine_Protection_System_Timer_Override= 3.0*RATE;
    SHUTDN -> bt5.Engine_Protection_System_Timer_State= 3.0*RATE;
    SHUTDN -> bt6.Engine_Protection_System_Configuration= 3.0*RATE;
    SHUTDN -> bt7.Engine_Alarm_Acknowledge= 3.0*RATE;
    SHUTDN -> bt7.Engine_Alarm_Output_Command_Status= 3.0*RATE;
    SHUTDN -> bt7.Engine_Air_Shutoff_Command_Status= 3.0*RATE;
    SHUTDN -> bt7.Engine_Overspeed_Test= 3.0*RATE;
    SHUTDN -> bt8.Engine_Air_Shutoff_Status= 3.0*RATE;
    SHUTDN -> bt8.PTO_Shutdown_has_Shutdown_Engine= 3.0*RATE;
    SHUTDN -> bt8.Coolant_Level_Engine_Protection_Shutdown_Status= 3.0*RATE;
}
void config_HOURS (getHOURS_t *HOURS)
{
    HOURS -> Engine_Total_Hours_of_Operation= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    HOURS -> Engine_Total_Revolutions= Parameter_Translate(4211081215000.0*RATE , 1000.0 , 0.0);
}
void config_TD (getTD_t *TD)
{
    TD -> Seconds= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    TD -> Minutes= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TD -> Hours= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TD -> Month= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    TD -> Day= Parameter_Translate(62.5*RATE , 0.25 , 0.0);
    TD -> Year= Parameter_Translate(2235.0*RATE , 1.0 , 1985.0);
    TD -> Local_minute_offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    TD -> Local_hour_offset= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
}
void config_VH (getVH_t *VH)
{
    VH -> Total_Vehicle_Hours= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
    VH -> Total_Power_Takeoff_Hours= Parameter_Translate(210554060.75*RATE , 0.05 , 0.0);
}
void config_VDS (getVDS_t *VDS)
{
    VDS -> Compass_Bearing= Parameter_Translate(501.99*RATE , 1.0 , 0.0);
    VDS -> Navigation_Based_Vehicle_Speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    VDS -> Pitch= Parameter_Translate(301.99*RATE , 1.0 , -200.0);
    VDS -> Altitude= Parameter_Translate(5531.875*RATE , 0.125 , -2500.0);
}
void config_LFC (getLFC_t *LFC)
{
    LFC -> Engine_Trip_Fuel= Parameter_Translate(4211081.215*RATE , 0.001 , 0.0);
    LFC -> Engine_Total_Fuel_Used= Parameter_Translate(2105540607.5*RATE , 0.5 , 0.0);
}
void config_VW (getVW_t *VW)
{
    VW -> bt1.Axle_Location= 255.0*RATE;
    VW -> Axle_Weight= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
    VW -> Trailer_Weight= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
    VW -> Cargo_Weight= Parameter_Translate(128510.0*RATE , 2.0 , 0.0);
}
void config_CCSS (getCCSS_t *CCSS)
{
    CCSS -> Maximum_Vehicle_Speed_Limit= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    CCSS -> Cruise_Control_High_Set_Limit_Speed= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    CCSS -> Cruise_Control_Low_Set_Limit_Speed= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
}
void config_ET1 (getET1_t *ET1)
{
    ET1 -> Engine_Coolant_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ET1 -> Engine_Fuel_Temperature_1= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ET1 -> Engine_Oil_Temperature_1= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET1 -> Engine_Turbocharger_Oil_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    ET1 -> Engine_Intercooler_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    ET1 -> Engine_Intercooler_Thermostat_Opening= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_EFL_P1 (getEFL_P1_t *EFL_P1)
{
    EFL_P1 -> Engine_Fuel_Delivery_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EFL_P1 -> Engine_Extended_Crankcase_Blow_by_Pressure= Parameter_Translate(12.5*RATE , 0.05 , 0.0);
    EFL_P1 -> Engine_Oil_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    EFL_P1 -> Engine_Oil_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    EFL_P1 -> Engine_Crankcase_Pressure= Parameter_Translate(251.99*RATE , 1.0 , -250.0);
    EFL_P1 -> Engine_Coolant_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    EFL_P1 -> Engine_Coolant_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_PTO (getPTO_t *PTO)
{
    PTO -> Power_Takeoff_Oil_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    PTO -> Power_Takeoff_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    PTO -> Power_Takeoff_Set_Speed= Parameter_Translate(8031.875*RATE , 0.125 , 0.0);
    PTO -> bt6.Engine_PTO_Governor_Enable_Switch= 3.0*RATE;
    PTO -> bt6.Engine_Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch= 3.0*RATE;
    PTO -> bt6.Engine_Remote_PTO_Governor_Variable_Speed_Control_Switch= 3.0*RATE;
    PTO -> bt7.Engine_PTO_Governor_Set_Switch= 3.0*RATE;
    PTO -> bt7.Engine_PTO_Governor_Coast_Decelerate_Switch= 3.0*RATE;
    PTO -> bt7.Engine_PTO_Governor_Resume_Switch= 3.0*RATE;
    PTO -> bt7.Engine_PTO_Governor_Accelerate_Switch= 3.0*RATE;
    PTO -> bt8.Operator_Engine_PTO_Governor_Memory_Select_Switch= 3.0*RATE;
    PTO -> bt8.Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch_2= 3.0*RATE;
    PTO -> bt8.Auxiliary_Input_Ignore_Switch= 3.0*RATE;
}
void config_CCVS1 (getCCVS1_t *CCVS1)
{
    CCVS1 -> bt1.Two_Speed_Axle_Switch= 3.0*RATE;
    CCVS1 -> bt1.Parking_Brake_Switch= 3.0*RATE;
    CCVS1 -> bt1.Cruise_Control_Pause_Switch= 3.0*RATE;
    CCVS1 -> bt1.Park_Brake_Release_Inhibit_Request= 3.0*RATE;
    CCVS1 -> Wheel_Based_Vehicle_Speed= Parameter_Translate(250.996*RATE , 1.0 , 0.0);
    CCVS1 -> bt4.Cruise_Control_Active= 3.0*RATE;
    CCVS1 -> bt4.Cruise_Control_Enable_Switch= 3.0*RATE;
    CCVS1 -> bt4.Brake_Switch= 3.0*RATE;
    CCVS1 -> bt4.Clutch_Switch= 3.0*RATE;
    CCVS1 -> bt5.Cruise_Control_Set_Switch= 3.0*RATE;
    CCVS1 -> bt5.Cruise_Control_Coast__Decelerate__Switch= 3.0*RATE;
    CCVS1 -> bt5.Cruise_Control_Resume_Switch= 3.0*RATE;
    CCVS1 -> bt5.Cruise_Control_Accelerate_Switch= 3.0*RATE;
    CCVS1 -> Cruise_Control_Set_Speed= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    CCVS1 -> bt7.PTO_Governor_State= 31.0*RATE;
    CCVS1 -> bt7.Cruise_Control_States= 7.0*RATE;
    CCVS1 -> bt8.Engine_Idle_Increment_Switch= 3.0*RATE;
    CCVS1 -> bt8.Engine_Idle_Decrement_Switch= 3.0*RATE;
    CCVS1 -> bt8.Engine_Test_Mode_Switch= 3.0*RATE;
    CCVS1 -> bt8.Engine_Shutdown_Override_Switch= 3.0*RATE;
}
void config_LFE1 (getLFE1_t *LFE1)
{
    LFE1 -> Engine_Fuel_Rate= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    LFE1 -> Engine_Instantaneous_Fuel_Economy= Parameter_Translate(125.498046875*RATE , 1.0 , 0.0);
    LFE1 -> Engine_Average_Fuel_Economy= Parameter_Translate(125.498046875*RATE , 1.0 , 0.0);
    LFE1 -> Engine_Throttle_Valve_1_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    LFE1 -> Engine_Throttle_Valve_2_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_VP (getVP_t *VP)
{
    VP -> Latitude= Parameter_Translate(211.1008122*RATE , 10.0 , -210.0);
    VP -> Longitude= Parameter_Translate(211.1008122*RATE , 10.0 , -210.0);
}
void config_TIRE (getTIRE_t *TIRE)
{
    TIRE -> bt1.Tire_Location= 255.0*RATE;
    TIRE -> Tire_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    TIRE -> Tire_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TIRE -> bt5.CTI_Wheel_Sensor_Status= 3.0*RATE;
    TIRE -> bt5.CTI_Tire_Status= 3.0*RATE;
    TIRE -> bt5.CTI_Wheel_End_Electrical_Fault= 3.0*RATE;
    TIRE -> Tire_Air_Leakage_Rate= Parameter_Translate(6425.5*RATE , 0.1 , 0.0);
    TIRE -> bt8.Tire_Pressure_Threshold_Detection= 7.0*RATE;
}
void config_AMB (getAMB_t *AMB)
{
    AMB -> Barometric_Pressure= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    AMB -> Cab_Interior_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AMB -> Ambient_Air_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    AMB -> Engine_Air_Intake_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AMB -> Road_Surface_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
}
void config_IC1 (getIC1_t *IC1)
{
    IC1 -> Engine_Diesel_Particulate_Filter_Intake_Pressure= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    IC1 -> Engine_Intake_Manifold_1_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    IC1 -> Engine_Intake_Manifold_1_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    IC1 -> Engine_Air_Intake_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    IC1 -> Engine_Air_Filter_1_Differential_Pressure= Parameter_Translate(12.5*RATE , 0.05 , 0.0);
    IC1 -> Engine_Exhaust_Gas_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    IC1 -> Engine_Coolant_Filter_Differential_Pressure= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
}
void config_VEP1 (getVEP1_t *VEP1)
{
    VEP1 -> Net_Battery_Current= Parameter_Translate(125.0*RATE , 1.0 , -125.0);
    VEP1 -> Alternator_Current= Parameter_Translate(250.0*RATE , 1.0 , 0.0);
    VEP1 -> Charging_System_Potential__Voltage_= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    VEP1 -> Battery_Potential___Power_Input_1= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
    VEP1 -> Keyswitch_Battery_Potential= Parameter_Translate(3212.75*RATE , 0.05 , 0.0);
}
void config_TRF1 (getTRF1_t *TRF1)
{
    TRF1 -> Clutch_Pressure= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
    TRF1 -> Transmission_Oil_Level_1= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    TRF1 -> Transmission_Filter_Differential_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    TRF1 -> Transmission_Oil_Pressure= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
    TRF1 -> Transmission_Oil_Temperature_1= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    TRF1 -> Transmission_Oil_Level_1_High___Low= Parameter_Translate(62.5*RATE , 0.5 , -62.5);
    TRF1 -> bt8.Transmission_Oil_Level_1_Countdown_Timer= 15.0*RATE;
    TRF1 -> bt8.Transmission_Oil_Level_1_Measurement_Status= 15.0*RATE;
}
void config_AI (getAI_t *AI)
{
    AI -> Steering_Axle_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AI -> bt2.Drive_Axle_Location= 255.0*RATE;
    AI -> Drive_Axle_Lift_Air_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    AI -> Drive_Axle_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    AI -> Drive_Axle_Lube_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    AI -> Steering_Axle_Lube_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
}
void config_B (getB_t *B)
{
    B -> Brake_Application_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    B -> Brake_Primary_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    B -> Brake_Secondary_Pressure= Parameter_Translate(1000.0*RATE , 4.0 , 0.0);
    B -> bt4.Parking_Brake_Actuator= 3.0*RATE;
    B -> bt4.Parking_Brake_Red_Warning_Signal= 3.0*RATE;
    B -> bt4.Park_Brake_Release_Inhibit_Status= 3.0*RATE;
}
void config_RF (getRF_t *RF)
{
    RF -> Hydraulic_Retarder_Pressure= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
    RF -> Hydraulic_Retarder_Oil_Temperature= Parameter_Translate(210.0*RATE , 1.0 , -40.0);
    RF -> bt3.Driveline_Retarder_Overheat_Indicator= 3.0*RATE;
}
void config_DD (getDD_t *DD)
{
    DD -> Washer_Fluid_Level= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    DD -> Fuel_Level_1= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    DD -> Engine_Fuel_Filter_Differential_Pressure= Parameter_Translate(500.0*RATE , 2.0 , 0.0);
    DD -> Engine_Oil_Filter_Differential_Pressure= Parameter_Translate(125.0*RATE , 0.5 , 0.0);
    DD -> Cargo_Ambient_Temperature= Parameter_Translate(1734.96875*RATE , 0.03125 , -273.0);
    DD -> Fuel_Level_2= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
}
void config_A1 (getA1_t *A1)
{
    A1 -> Engine_Blower_Bypass_Valve_Position= Parameter_Translate(100.0*RATE , 0.4 , 0.0);
    A1 -> Engine_Gas_Supply_Pressure= Parameter_Translate(32127.5*RATE , 0.5 , 0.0);
}
void config_AWPP (getAWPP_t *AWPP)
{
    AWPP -> Auxiliary_Pump_Pressure= Parameter_Translate(4000.0*RATE , 16.0 , 0.0);
}
void config_OI (getOI_t *OI)
{
    OI -> bt1.Water_In_Fuel_Indicator= 3.0*RATE;
    OI -> bt1.Operator_Shift_Prompt= 3.0*RATE;
    OI -> bt2.Driver_Warning_System_Indicator_Status= 7.0*RATE;
