#ifndef MSG_H
#define MSG_H


#include "stm32f10x.h"
#include "J1939.H"  
#include "bsp_ds18b20.h"
#define RATE 1

uint16_t Parameter_Translate(long double measured,float resolutionratio,float offset);
typedef struct getTSC1 {
    struct TSC1_byte1 {
        uint8_t Engine_Override_Control_Mode:2;
        uint8_t Engine_Requested_Speed_Control_Conditions:2;
        uint8_t Override_Control_Mode_Priority:2;
    }TSC1_byte1;
    struct TSC1_byte1 bt1 ;
    uint16_t Engine_Requested_Speed_Speed_Limit;
    uint8_t Engine_Requested_Torque_Torque_Limit;
    struct TSC1_byte5 {
        uint8_t TSC1_Transmission_Rate:3;
        uint8_t TSC1_Control_Purpose:5;
    }TSC1_byte5;
    struct TSC1_byte5 bt5 ;
    struct TSC1_byte6 {
        uint8_t Engine_Requested_Torque__High_Resolution:4;
    }TSC1_byte6;
    struct TSC1_byte6 bt6 ;
    struct TSC1_byte8 {
        uint8_t Message_Counter:4;
        uint8_t Message_Checksum:4;
    }TSC1_byte8;
    struct TSC1_byte8 bt8 ;
} getTSC1_t ;
typedef struct getTC1 {
    struct TC1_byte1 {
        uint8_t Transmission_Gear_Shift_Inhibit_Request:2;
        uint8_t Transmission_Torque_Converter_Lockup_Disable_Request:2;
        uint8_t Disengage_Driveline_Request:2;
    }TC1_byte1;
    struct TC1_byte1 bt1 ;
    uint8_t Requested_Percent_Clutch_Slip;
    uint8_t Transmission_Requested_Gear;
    struct TC1_byte4 {
        uint8_t Disengage_Differential_Lock_Request___Front_Axle_1:2;
        uint8_t Disengage_Differential_Lock_Request___Front_Axle_2:2;
        uint8_t Disengage_Differential_Lock_Request___Rear_Axle_1:2;
        uint8_t Disengage_Differential_Lock_Request___Rear_Axle_2:2;
    }TC1_byte4;
    struct TC1_byte4 bt4 ;
    struct TC1_byte5 {
        uint8_t Disengage_Differential_Lock_Request___Central:2;
        uint8_t Disengage_Differential_Lock_Request___Central_Front:2;
        uint8_t Disengage_Differential_Lock_Request___Central_Rear:2;
        uint8_t Transmission_Load_Reduction_Inhibit_Request:2;
    }TC1_byte5;
    struct TC1_byte5 bt5 ;
    struct TC1_byte6 {
        uint8_t Transmission_Mode_1:2;
        uint8_t Transmission_Mode_2:2;
        uint8_t Transmission_Mode_3:2;
        uint8_t Transmission_Mode_4:2;
    }TC1_byte6;
    struct TC1_byte6 bt6 ;
    struct TC1_byte7 {
        uint8_t Transmission_Requested_Launch_Gear:4;
        uint8_t Transmission_Shift_Selector_Display_Mode_Switch:2;
    }TC1_byte7;
    struct TC1_byte7 bt7 ;
    struct TC1_byte8 {
        uint8_t Transmission_Mode_5:2;
        uint8_t Transmission_Mode_6:2;
        uint8_t Transmission_Mode_7:2;
        uint8_t Transmission_Mode_8:2;
    }TC1_byte8;
    struct TC1_byte8 bt8 ;
} getTC1_t ;
typedef struct getXBR {
    uint16_t External_Acceleration_Demand;
    struct XBR_byte3 {
        uint8_t XBR_EBI_Mode:2;
        uint8_t XBR_Priority:2;
        uint8_t XBR_Control_Mode:2;
    }XBR_byte3;
    struct XBR_byte3 bt3 ;
    uint8_t XBR_urgency;
    struct XBR_byte8 {
        uint8_t XBR_Message_Counter:4;
        uint8_t XBR_Message_Checksum:4;
    }XBR_byte8;
    struct XBR_byte8 bt8 ;
} getXBR_t ;
typedef struct getGPV4 {
    uint16_t Valve_Load_Sense_Pressure;
    uint8_t Valve_Pilot_Pressure;
    uint16_t Valve_Assembly_Load_sense_Pressure;
    uint16_t Valve_Assembly_Supply_Pressure;
} getGPV4_t ;
typedef struct getAUXIO5 {
    uint16_t Auxiliary_I_O_Channel_6;
    uint16_t Auxiliary_I_O_Channel_5;
    uint16_t Auxiliary_I_O_Channel_4;
    uint16_t Auxiliary_I_O_Channel_3;
} getAUXIO5_t ;
typedef struct getSRASI {
    uint8_t Static_Roll_Angle;
    struct SRASI_byte2 {
        uint8_t Static_Roll_Angle_Status:3;
    }SRASI_byte2;
    struct SRASI_byte2 bt2 ;
} getSRASI_t ;
typedef struct getCCVS2 {
    struct CCVS2_byte1 {
        uint8_t Cruise_Control_Disable_Command:2;
        uint8_t Cruise_Control_Resume_Command:2;
        uint8_t Cruise_Control_Pause_Command:2;
    }CCVS2_byte1;
    struct CCVS2_byte1 bt1 ;
} getCCVS2_t ;
typedef struct getAEBS2 {
    struct AEBS2_byte1 {
        uint8_t Driver_activation_demand_for_Advanced_Emergency_Braking_System:2;
    }AEBS2_byte1;
    struct AEBS2_byte1 bt1 ;
    struct AEBS2_byte8 {
        uint8_t AEBS2_message_Counter:4;
        uint8_t AEBS2_message_checksum:4;
    }AEBS2_byte8;
    struct AEBS2_byte8 bt8 ;
} getAEBS2_t ;
typedef struct getESR {
    struct ESR_byte1 {
        uint8_t Desired_Engine_Fueling_State:2;
    }ESR_byte1;
    struct ESR_byte1 bt1 ;
} getESR_t ;
typedef struct getRBR {
    uint16_t Unique_Beacon_Message_Identifier_Number;
    struct RBR_byte3 {
        uint8_t Radio_Beacon_Direction:2;
    }RBR_byte3;
    struct RBR_byte3 bt3 ;
    uint32_t Transmitter_ID_2;
    uint8_t Wireless_Signal_Strength_2;
} getRBR_t ;
typedef struct getECC {
    struct ECC_byte1 {
        uint8_t Coolant_Level_Engine_Protection_Shutdown_Override_Command:2;
    }ECC_byte1;
    struct ECC_byte1 bt1 ;
} getECC_t ;
typedef struct getSFC {
    struct SFC_byte1 {
        uint8_t Supplemental_Fan_Enable_Command:2;
        uint8_t Supplemental_Fan_Direction_Command:2;
    }SFC_byte1;
    struct SFC_byte1 bt1 ;
    uint16_t Supplemental_Fan_Speed_Command;
    struct SFC_byte4 {
        uint8_t Supplemental_Fan_Power_Hold:2;
    }SFC_byte4;
    struct SFC_byte4 bt4 ;
} getSFC_t ;
typedef struct getVLS1 {
    struct VLS1_byte1 {
        uint8_t Lubrication_Cycle_Mode_Lock_Command:2;
        uint8_t Lubrication_Cycle_Set_Command:3;
        uint8_t Lubrication_Operation_Mode_Set_Command:3;
    }VLS1_byte1;
    struct VLS1_byte1 bt1 ;
    struct VLS1_byte2 {
        uint8_t Lubrication_Pump_Enable_Command:2;
        uint8_t Lubrication_Timing_Cycle_Command:2;
    }VLS1_byte2;
    struct VLS1_byte2 bt2 ;
} getVLS1_t ;
typedef struct getHCDI1 {
    uint16_t Requested_Fuel_Mass_Rate;
    struct HCDI1_byte3 {
        uint8_t HC_Doser_Status:3;
        uint8_t HC_Doser_Injecting_Status:2;
        uint8_t Diagnostic_Status_of_HC_Doser:3;
    }HCDI1_byte3;
    struct HCDI1_byte3 bt3 ;
    struct HCDI1_byte4 {
        uint8_t Hydrocarbon_Doser_Purging_Required:2;
    }HCDI1_byte4;
    struct HCDI1_byte4 bt4 ;
} getHCDI1_t ;
typedef struct getAT1DPFSSC {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset;
} getAT1DPFSSC_t ;
typedef struct getAT2DPFSSC {
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Soot_Mean_Calibration_Offset;
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Soot_Standard_Deviation_Calibration_Offset;
} getAT2DPFSSC_t ;
typedef struct getLVDSOM {
    struct LVDSOM_byte1 {
        uint8_t Low_Voltage_Disconnect_Desired_Operating_Mode:4;
    }LVDSOM_byte1;
    struct LVDSOM_byte1 bt1 ;
} getLVDSOM_t ;
typedef struct getNCS {
    struct NCS_byte1 {
        uint8_t Cab_Noise_Control_Status:2;
        uint8_t Cab_Noise_Control_Tuning_Status:4;
    }NCS_byte1;
    struct NCS_byte1 bt1 ;
} getNCS_t ;
typedef struct getNC1 {
    struct NC1_byte1 {
        uint8_t Cab_Noise_Control_Command:2;
        uint8_t Cab_Noise_Control_Tuning_Command:3;
    }NC1_byte1;
    struct NC1_byte1 bt1 ;
} getNC1_t ;
typedef struct getJLCM {
    struct JLCM_byte1 {
        uint8_t Joystick_1_Lamp_1_Command:2;
        uint8_t Joystick_1_Lamp_2_Command:2;
        uint8_t Joystick_1_Lamp_3_Command:2;
        uint8_t Joystick_1_Lamp_4_Command:2;
    }JLCM_byte1;
    struct JLCM_byte1 bt1 ;
    struct JLCM_byte2 {
        uint8_t Joystick_1_Lamp_5_Command:2;
        uint8_t Joystick_1_Lamp_6_Command:2;
        uint8_t Joystick_1_Lamp_7_Command:2;
        uint8_t Joystick_1_Lamp_8_Command:2;
    }JLCM_byte2;
    struct JLCM_byte2 bt2 ;
    struct JLCM_byte3 {
        uint8_t Joystick_1_Lamp_9_Command:2;
        uint8_t Joystick_1_Lamp_10_Command:2;
        uint8_t Joystick_2_Lamp_1_Command:2;
        uint8_t Joystick_2_Lamp_2_Command:2;
    }JLCM_byte3;
    struct JLCM_byte3 bt3 ;
    struct JLCM_byte4 {
        uint8_t Joystick_2_Lamp_3_Command:2;
        uint8_t Joystick_2_Lamp_4_Command:2;
        uint8_t Joystick_2_Lamp_5_Command:2;
        uint8_t Joystick_2_Lamp_6_Command:2;
    }JLCM_byte4;
    struct JLCM_byte4 bt4 ;
    struct JLCM_byte5 {
        uint8_t Joystick_2_Lamp_7_Command:2;
        uint8_t Joystick_2_Lamp_8_Command:2;
        uint8_t Joystick_2_Lamp_9_Command:2;
        uint8_t Joystick_2_Lamp_10_Command:2;
    }JLCM_byte5;
    struct JLCM_byte5 bt5 ;
    struct JLCM_byte6 {
        uint8_t Joystick_3_Lamp_1_Command:2;
        uint8_t Joystick_3_Lamp_2_Command:2;
        uint8_t Joystick_3_Lamp_3_Command:2;
        uint8_t Joystick_3_Lamp_4_Command:2;
    }JLCM_byte6;
    struct JLCM_byte6 bt6 ;
    struct JLCM_byte7 {
        uint8_t Joystick_3_Lamp_5_Command:2;
        uint8_t Joystick_3_Lamp_6_Command:2;
        uint8_t Joystick_3_Lamp_7_Command:2;
        uint8_t Joystick_3_Lamp_8_Command:2;
    }JLCM_byte7;
    struct JLCM_byte7 bt7 ;
    struct JLCM_byte8 {
        uint8_t Joystick_3_Lamp_9_Command:2;
        uint8_t Joystick_3_Lamp_10_Command:2;
    }JLCM_byte8;
    struct JLCM_byte8 bt8 ;
} getJLCM_t ;
typedef struct getAUXIO7 {
    uint8_t Auxiliary_I_O_Channel_18;
    uint8_t Auxiliary_I_O_Channel_17;
    uint8_t Auxiliary_I_O_Channel_16;
    uint8_t Auxiliary_I_O_Channel_15;
    uint8_t Auxiliary_I_O_Channel_22;
    uint8_t Auxiliary_I_O_Channel_21;
    uint8_t Auxiliary_I_O_Channel_20;
    uint8_t Auxiliary_I_O_Channel_19;
} getAUXIO7_t ;
typedef struct getAUXIO6 {
    uint8_t Auxiliary_I_O_Channel_10;
    uint8_t Auxiliary_I_O_Channel_9;
    uint8_t Auxiliary_I_O_Channel_8;
    uint8_t Auxiliary_I_O_Channel_7;
    uint8_t Auxiliary_I_O_Channel_14;
    uint8_t Auxiliary_I_O_Channel_13;
    uint8_t Auxiliary_I_O_Channel_12;
    uint8_t Auxiliary_I_O_Channel_11;
} getAUXIO6_t ;
typedef struct getAUXIO4 {
    struct AUXIO4_byte1 {
        uint8_t Auxiliary_I_O_84:2;
        uint8_t Auxiliary_I_O_83:2;
        uint8_t Auxiliary_I_O_82:2;
        uint8_t Auxiliary_I_O_81:2;
    }AUXIO4_byte1;
    struct AUXIO4_byte1 bt1 ;
    struct AUXIO4_byte2 {
        uint8_t Auxiliary_I_O_88:2;
        uint8_t Auxiliary_I_O_87:2;
        uint8_t Auxiliary_I_O_86:2;
        uint8_t Auxiliary_I_O_85:2;
    }AUXIO4_byte2;
    struct AUXIO4_byte2 bt2 ;
    struct AUXIO4_byte3 {
        uint8_t Auxiliary_I_O_92:2;
        uint8_t Auxiliary_I_O_91:2;
        uint8_t Auxiliary_I_O_90:2;
        uint8_t Auxiliary_I_O_89:2;
    }AUXIO4_byte3;
    struct AUXIO4_byte3 bt3 ;
    struct AUXIO4_byte4 {
        uint8_t Auxiliary_I_O_96:2;
        uint8_t Auxiliary_I_O_95:2;
        uint8_t Auxiliary_I_O_94:2;
        uint8_t Auxiliary_I_O_93:2;
    }AUXIO4_byte4;
    struct AUXIO4_byte4 bt4 ;
    struct AUXIO4_byte5 {
        uint8_t Auxiliary_I_O_100:2;
        uint8_t Auxiliary_I_O_99:2;
        uint8_t Auxiliary_I_O_98:2;
        uint8_t Auxiliary_I_O_97:2;
    }AUXIO4_byte5;
    struct AUXIO4_byte5 bt5 ;
    struct AUXIO4_byte6 {
        uint8_t Auxiliary_I_O_104:2;
        uint8_t Auxiliary_I_O_103:2;
        uint8_t Auxiliary_I_O_102:2;
        uint8_t Auxiliary_I_O_101:2;
    }AUXIO4_byte6;
    struct AUXIO4_byte6 bt6 ;
    struct AUXIO4_byte7 {
        uint8_t Auxiliary_I_O_108:2;
        uint8_t Auxiliary_I_O_107:2;
        uint8_t Auxiliary_I_O_106:2;
        uint8_t Auxiliary_I_O_105:2;
    }AUXIO4_byte7;
    struct AUXIO4_byte7 bt7 ;
    struct AUXIO4_byte8 {
        uint8_t Auxiliary_I_O_112:2;
        uint8_t Auxiliary_I_O_111:2;
        uint8_t Auxiliary_I_O_110:2;
        uint8_t Auxiliary_I_O_109:2;
    }AUXIO4_byte8;
    struct AUXIO4_byte8 bt8 ;
} getAUXIO4_t ;
typedef struct getAUXIO3 {
    struct AUXIO3_byte1 {
        uint8_t Auxiliary_I_O_52:2;
        uint8_t Auxiliary_I_O_51:2;
        uint8_t Auxiliary_I_O_50:2;
        uint8_t Auxiliary_I_O_49:2;
    }AUXIO3_byte1;
    struct AUXIO3_byte1 bt1 ;
    struct AUXIO3_byte2 {
        uint8_t Auxiliary_I_O_56:2;
        uint8_t Auxiliary_I_O_55:2;
        uint8_t Auxiliary_I_O_54:2;
        uint8_t Auxiliary_I_O_53:2;
    }AUXIO3_byte2;
    struct AUXIO3_byte2 bt2 ;
    struct AUXIO3_byte3 {
        uint8_t Auxiliary_I_O_60:2;
        uint8_t Auxiliary_I_O_59:2;
        uint8_t Auxiliary_I_O_58:2;
        uint8_t Auxiliary_I_O_57:2;
    }AUXIO3_byte3;
    struct AUXIO3_byte3 bt3 ;
    struct AUXIO3_byte4 {
        uint8_t Auxiliary_I_O_64:2;
        uint8_t Auxiliary_I_O_63:2;
        uint8_t Auxiliary_I_O_62:2;
        uint8_t Auxiliary_I_O_61:2;
    }AUXIO3_byte4;
    struct AUXIO3_byte4 bt4 ;
    struct AUXIO3_byte5 {
        uint8_t Auxiliary_I_O_68:2;
        uint8_t Auxiliary_I_O_67:2;
        uint8_t Auxiliary_I_O_66:2;
        uint8_t Auxiliary_I_O_65:2;
    }AUXIO3_byte5;
    struct AUXIO3_byte5 bt5 ;
    struct AUXIO3_byte6 {
        uint8_t Auxiliary_I_O_72:2;
        uint8_t Auxiliary_I_O_71:2;
        uint8_t Auxiliary_I_O_70:2;
        uint8_t Auxiliary_I_O_69:2;
    }AUXIO3_byte6;
    struct AUXIO3_byte6 bt6 ;
    struct AUXIO3_byte7 {
        uint8_t Auxiliary_I_O_76:2;
        uint8_t Auxiliary_I_O_75:2;
        uint8_t Auxiliary_I_O_74:2;
        uint8_t Auxiliary_I_O_73:2;
    }AUXIO3_byte7;
    struct AUXIO3_byte7 bt7 ;
    struct AUXIO3_byte8 {
        uint8_t Auxiliary_I_O_80:2;
        uint8_t Auxiliary_I_O_79:2;
        uint8_t Auxiliary_I_O_78:2;
        uint8_t Auxiliary_I_O_77:2;
    }AUXIO3_byte8;
    struct AUXIO3_byte8 bt8 ;
} getAUXIO3_t ;
typedef struct getAUXIO2 {
    struct AUXIO2_byte1 {
        uint8_t Auxiliary_I_O_20:2;
        uint8_t Auxiliary_I_O_19:2;
        uint8_t Auxiliary_I_O_18:2;
        uint8_t Auxiliary_I_O_17:2;
    }AUXIO2_byte1;
    struct AUXIO2_byte1 bt1 ;
    struct AUXIO2_byte2 {
        uint8_t Auxiliary_I_O_24:2;
        uint8_t Auxiliary_I_O_23:2;
        uint8_t Auxiliary_I_O_22:2;
        uint8_t Auxiliary_I_O_21:2;
    }AUXIO2_byte2;
    struct AUXIO2_byte2 bt2 ;
    struct AUXIO2_byte3 {
        uint8_t Auxiliary_I_O_28:2;
        uint8_t Auxiliary_I_O_27:2;
        uint8_t Auxiliary_I_O_26:2;
        uint8_t Auxiliary_I_O_25:2;
    }AUXIO2_byte3;
    struct AUXIO2_byte3 bt3 ;
    struct AUXIO2_byte4 {
        uint8_t Auxiliary_I_O_32:2;
        uint8_t Auxiliary_I_O_31:2;
        uint8_t Auxiliary_I_O_30:2;
        uint8_t Auxiliary_I_O_29:2;
    }AUXIO2_byte4;
    struct AUXIO2_byte4 bt4 ;
    struct AUXIO2_byte5 {
        uint8_t Auxiliary_I_O_36:2;
        uint8_t Auxiliary_I_O_35:2;
        uint8_t Auxiliary_I_O_34:2;
        uint8_t Auxiliary_I_O_33:2;
    }AUXIO2_byte5;
    struct AUXIO2_byte5 bt5 ;
    struct AUXIO2_byte6 {
        uint8_t Auxiliary_I_O_40:2;
        uint8_t Auxiliary_I_O_39:2;
        uint8_t Auxiliary_I_O_38:2;
        uint8_t Auxiliary_I_O_37:2;
    }AUXIO2_byte6;
    struct AUXIO2_byte6 bt6 ;
    struct AUXIO2_byte7 {
        uint8_t Auxiliary_I_O_44:2;
        uint8_t Auxiliary_I_O_43:2;
        uint8_t Auxiliary_I_O_42:2;
        uint8_t Auxiliary_I_O_41:2;
    }AUXIO2_byte7;
    struct AUXIO2_byte7 bt7 ;
    struct AUXIO2_byte8 {
        uint8_t Auxiliary_I_O_48:2;
        uint8_t Auxiliary_I_O_47:2;
        uint8_t Auxiliary_I_O_46:2;
        uint8_t Auxiliary_I_O_45:2;
    }AUXIO2_byte8;
    struct AUXIO2_byte8 bt8 ;
} getAUXIO2_t ;
typedef struct getDISP1 {
    struct DISP1_byte1 {
        uint8_t Text_Display_Instructions:4;
    }DISP1_byte1;
    struct DISP1_byte1 bt1 ;
    uint8_t Text_Display_Index;
} getDISP1_t ;
typedef struct getFLIC {
    struct FLIC_byte1 {
        uint8_t Lane_Departure_Warning_Enable_Command:2;
    }FLIC_byte1;
    struct FLIC_byte1 bt1 ;
} getFLIC_t ;
typedef struct getTPRS {
    struct TPRS_byte1 {
        uint8_t Tire_Location:8;
    }TPRS_byte1;
    struct TPRS_byte1 bt1 ;
    uint8_t Reference_Tire_Pressure_Setting;
} getTPRS_t ;
typedef struct getCTL {
    uint8_t Engine_Speed_Limit_Request___Minimum_Continuous;
    uint8_t Engine_Speed_Limit_Request___Maximum_Continuous;
    uint8_t Engine_Torque_Limit_Request___Minimum_Continuous;
    uint8_t Engine_Torque_Limit_Request___Maximum_Continuous;
    uint8_t Minimum_Continuous_Retarder_Speed_Limit_Request;
    uint8_t Maximum_Continuous_Retarder_Speed_Limit_Request;
    uint8_t Minimum_Continuous_Retarder_Torque_Limit_Request;
    uint8_t Maximum_Continuous_Retarder_Torque_Limit_Request;
} getCTL_t ;
typedef struct getCL {
    uint8_t Illumination_Brightness_Percent;
    uint8_t Switch_Backlight_Illumination_Brightness_Percent;
} getCL_t ;
typedef struct getASC6 {
    uint16_t Level_Preset_Front_Axle_Left;
    uint16_t Level_Preset_Front_Axle_Right;
    uint16_t Level_Preset_Rear_Axle_Left;
    uint16_t Level_Preset_Rear_Axle_Right;
} getASC6_t ;
typedef struct getASC2 {
    struct ASC2_byte1 {
        uint8_t Automatic_traction_help__load_transfer_:2;
        uint8_t Kneeling_Request_Left_Side:2;
        uint8_t Kneeling_Request_Right_Side:2;
        uint8_t Kneeling_Control_Mode_Request:2;
    }ASC2_byte1;
    struct ASC2_byte1 bt1 ;
    struct ASC2_byte2 {
        uint8_t Nominal_Level_Request_Front_Axle:4;
        uint8_t Nominal_Level_Request_Rear_Axle:4;
    }ASC2_byte2;
    struct ASC2_byte2 bt2 ;
    struct ASC2_byte3 {
        uint8_t Level_Control_Mode_Request:4;
        uint8_t Lift_Axle_1_Position_Command:2;
        uint8_t Lift_Axle_2_Position_Command:2;
    }ASC2_byte3;
    struct ASC2_byte3 bt3 ;
    uint8_t Damper_Stiffness_Request_Front_Axle;
    uint8_t Damper_Stiffness_Request_Rear_Axle;
    uint8_t Damper_Stiffness_Request_Lift___Tag_Axle;
    struct ASC2_byte7 {
        uint8_t Kneeling_Command___Front_Axle:2;
        uint8_t Kneeling_Command___Rear_Axle:2;
        uint8_t Prohibit_air_suspension_control:2;
        uint8_t Allow_Level_Control_During_Braking_Command:2;
    }ASC2_byte7;
    struct ASC2_byte7 bt7 ;
    struct ASC2_byte8 {
        uint8_t Speed_Dependent_Level_Control_Request:2;
        uint8_t Prohibit_Automatic_Air_Suspension_Control:2;
        uint8_t Memory_level_request:4;
    }ASC2_byte8;
    struct ASC2_byte8 bt8 ;
} getASC2_t ;
typedef struct getTDA {
    uint8_t Adjust_seconds;
    uint8_t Adjust_minutes;
    uint8_t Adjust_hours;
    uint8_t Adjust_month;
    uint8_t Adjust_day;
    uint8_t Adjust_year;
    uint8_t Adjust_local_minute_offset;
    uint8_t Adjust_local_hour_offset;
} getTDA_t ;
typedef struct getATS {
    struct ATS_byte1 {
        uint8_t Anti_theft_Encryption_Seed_Present_Indicator:2;
        uint8_t Anti_theft_Password_Valid_Indicator:2;
        uint8_t Anti_theft_Component_Status_States:2;
        uint8_t Anti_theft_Modify_Password_States:2;
    }ATS_byte1;
    struct ATS_byte1 bt1 ;
    uint64_t Anti_theft_Random_Number;
} getATS_t ;
typedef struct getATR {
    struct ATR_byte1 {
        uint8_t Anti_theft_Encryption_Indicator_States:2;
        uint8_t Anti_theft_Desired_Exit_Mode_States:2;
        uint8_t Anti_theft_Command_States:3;
    }ATR_byte1;
    struct ATR_byte1 bt1 ;
    uint64_t Anti_theft_Password_Representation;
} getATR_t ;
typedef struct getCM1 {
    uint8_t Requested_Percent_Fan_Speed;
    uint16_t Cab_Interior_Temperature_Command;
    struct CM1_byte4 {
        uint8_t Auxiliary_Heater_Coolant_Pump_Request:2;
        uint8_t Battery_Main_Switch_Hold_Request:2;
        uint8_t Operator_Seat_Direction_Switch:2;
        uint8_t Seat_Belt_Switch:2;
    }CM1_byte4;
    struct CM1_byte4 bt4 ;
    struct CM1_byte5 {
        uint8_t Park_Brake_Command:2;
        uint8_t Vehicle_Limiting_Speed_Governor_Decrement_Switch:2;
        uint8_t Vehicle_Limiting_Speed_Governor_Increment_Switch:2;
        uint8_t Vehicle_Limiting_Speed_Governor_Enable_Switch:2;
    }CM1_byte5;
    struct CM1_byte5 bt5 ;
    struct CM1_byte6 {
        uint8_t Diesel_Particulate_Filter_Regeneration_Force_Switch:2;
        uint8_t Automatic_Gear_Shifting_Enable_Switch:2;
        uint8_t Engine_Automatic_Start_Enable_Switch:2;
    }CM1_byte6;
    struct CM1_byte6 bt6 ;
    struct CM1_byte7 {
        uint8_t Auxiliary_Heater_Mode_Request:4;
        uint8_t Request_Engine_Zone_Heating:2;
        uint8_t Request_Cab_Zone_Heating:2;
    }CM1_byte7;
    struct CM1_byte7 bt7 ;
    uint8_t Selected_Maximum_Vehicle_Speed_Limit;
} getCM1_t ;
typedef struct getERC1 {
    struct ERC1_byte1 {
        uint8_t Retarder_Torque_Mode:4;
        uint8_t Retarder_Enable___Brake_Assist_Switch:2;
        uint8_t Retarder_Enable___Shift_Assist_Switch:2;
    }ERC1_byte1;
    struct ERC1_byte1 bt1 ;
    uint8_t Actual_Retarder___Percent_Torque;
    uint8_t Intended_Retarder_Percent_Torque;
    struct ERC1_byte4 {
        uint8_t Engine_Coolant_Load_Increase:2;
        uint8_t Retarder_Requesting_Brake_Light:2;
        uint8_t Retarder_Road_Speed_Limit_Switch:2;
        uint8_t Retarder_Road_Speed_Exceeded_Status:2;
    }ERC1_byte4;
    struct ERC1_byte4 bt4 ;
    uint8_t Source_Address_of_Controlling_Device_for_Retarder_Control;
    uint8_t Drivers_Demand_Retarder__;
    uint8_t Retarder_Selection_non_engine;
    uint8_t Actual_Maximum_Available_Retarder___Percent_Torque;
} getERC1_t ;
typedef struct getEBC1 {
    struct EBC1_byte1 {
        uint8_t ASR_Engine_Control_Active:2;
        uint8_t ASR_Brake_Control_Active:2;
        uint8_t Anti_Lock_Braking__ABS__Active:2;
        uint8_t EBS_Brake_Switch:2;
    }EBC1_byte1;
    struct EBC1_byte1 bt1 ;
    uint8_t Brake_Pedal_Position;
    struct EBC1_byte3 {
        uint8_t ABS_Off_road_Switch:2;
        uint8_t ASR_Off_road_Switch:2;
        uint8_t ASR__Hill_Holder__Switch:2;
        uint8_t Traction_Control_Override_Switch:2;
    }EBC1_byte3;
    struct EBC1_byte3 bt3 ;
    struct EBC1_byte4 {
        uint8_t Accelerator_Interlock_Switch:2;
        uint8_t Engine_Derate_Switch:2;
        uint8_t Engine_Auxiliary_Shutdown_Switch:2;
        uint8_t Remote_Accelerator_Enable_Switch:2;
    }EBC1_byte4;
    struct EBC1_byte4 bt4 ;
    uint8_t Engine_Retarder_Selection;
    struct EBC1_byte6 {
        uint8_t ABS_Fully_Operational:2;
        uint8_t EBS_Red_Warning_Signal:2;
        uint8_t ABS_EBS_Amber_Warning_Signal__Powered_Vehicle_:2;
        uint8_t ATC_ASR_Information_Signal:2;
    }EBC1_byte6;
    struct EBC1_byte6 bt6 ;
    uint8_t Source_Address_of_Controlling_Device_for_Brake_Control;
    struct EBC1_byte8 {
        uint8_t Halt_brake_switch:2;
        uint8_t Trailer_ABS_Status:2;
        uint8_t Tractor_Mounted_Trailer_ABS_Warning_Signal:2;
    }EBC1_byte8;
    struct EBC1_byte8 bt8 ;
} getEBC1_t ;
typedef struct getETC1 {
    struct ETC1_byte1 {
        uint8_t Transmission_Driveline_Engaged:2;
        uint8_t Transmission_Torque_Converter_Lockup_Engaged:2;
        uint8_t Transmission_Shift_In_Process:2;
        uint8_t Transmission_Torque_Converter_Lockup_Transition_in_Process:2;
    }ETC1_byte1;
    struct ETC1_byte1 bt1 ;
    uint16_t Transmission_Output_Shaft_Speed;
    uint8_t Percent_Clutch_Slip;
    struct ETC1_byte5 {
        uint8_t Engine_Momentary_Overspeed_Enable:2;
        uint8_t Progressive_Shift_Disable:2;
        uint8_t Momentary_Engine_Maximum_Power_Enable:2;
    }ETC1_byte5;
    struct ETC1_byte5 bt5 ;
    uint16_t Transmission_Input_Shaft_Speed;
    uint8_t Source_Address_of_Controlling_Device_for_Transmission_Control;
} getETC1_t ;
typedef struct getEEC2 {
    struct EEC2_byte1 {
        uint8_t Accelerator_Pedal_1_Low_Idle_Switch:2;
        uint8_t Accelerator_Pedal_Kickdown_Switch:2;
        uint8_t Road_Speed_Limit_Status:2;
        uint8_t Accelerator_Pedal_2_Low_Idle_Switch:2;
    }EEC2_byte1;
    struct EEC2_byte1 bt1 ;
    uint8_t Accelerator_Pedal_Position_1;
    uint8_t Engine_Percent_Load_At_Current_Speed;
    uint8_t Remote_Accelerator_Pedal_Position;
    uint8_t Accelerator_Pedal_Position_2;
    struct EEC2_byte6 {
        uint8_t Vehicle_Acceleration_Rate_Limit_Status:2;
        uint8_t Momentary_Engine_Maximum_Power_Enable_Feedback:2;
        uint8_t DPF_Thermal_Management_Active:2;
        uint8_t SCR_Thermal_Management_Active:2;
    }EEC2_byte6;
    struct EEC2_byte6 bt6 ;
    uint8_t Actual_Maximum_Available_Engine___Percent_Torque;
    uint8_t Estimated_Pumping___Percent_Torque;
} getEEC2_t ;
typedef struct getEEC1 {
    struct EEC1_byte1 {
        uint8_t Engine_Torque_Mode:4;
        uint8_t Actual_Engine___Percent_Torque_High_Resolution:4;
    }EEC1_byte1;
    struct EEC1_byte1 bt1 ;
    uint8_t Driver_s_Demand_Engine___Percent_Torque;
    uint8_t Actual_Engine___Percent_Torque;
    uint16_t Engine_Speed;
    uint8_t Source_Address_of_Controlling_Device_for_Engine_Control;
    struct EEC1_byte7 {
        uint8_t Engine_Starter_Mode:4;
    }EEC1_byte7;
    struct EEC1_byte7 bt7 ;
    uint8_t Engine_Demand__Percent_Torque;
} getEEC1_t ;
typedef struct getETC2 {
    uint8_t Transmission_Selected_Gear;
    uint16_t Transmission_Actual_Gear_Ratio;
    uint8_t Transmission_Current_Gear;
    uint16_t Transmission_Requested_Range;
    uint16_t Transmission_Current_Range;
} getETC2_t ;
typedef struct getEAC1 {
    struct EAC1_byte1 {
        uint8_t Location:8;
    }EAC1_byte1;
    struct EAC1_byte1 bt1 ;
    struct EAC1_byte2 {
        uint8_t Differential_Lock_State___Front_Axle_1:2;
        uint8_t Differential_Lock_State___Front_Axle_2:2;
        uint8_t Differential_Lock_State___Rear_Axle_1:2;
        uint8_t Differential_Lock_State___Rear_Axle_2:2;
    }EAC1_byte2;
    struct EAC1_byte2 bt2 ;
    struct EAC1_byte3 {
        uint8_t Differential_Lock_State___Central:2;
        uint8_t Differential_Lock_State___Central_Front:2;
        uint8_t Differential_Lock_State___Central_Rear:2;
    }EAC1_byte3;
    struct EAC1_byte3 bt3 ;
    struct EAC1_byte4 {
        uint8_t Front_axle_group_engagement_status:2;
        uint8_t Rear_axle_group_engagement_status:2;
    }EAC1_byte4;
    struct EAC1_byte4 bt4 ;
} getEAC1_t ;
typedef struct getFLI1 {
    struct FLI1_byte1 {
        uint8_t Lane_Departure_Left:2;
        uint8_t Lane_Departure_Right:2;
        uint8_t Lane_Departure_Imminent_Right_Side:2;
        uint8_t Lane_Departure_Imminent_Left_Side:2;
    }FLI1_byte1;
    struct FLI1_byte1 bt1 ;
} getFLI1_t ;
typedef struct getHPG {
    uint16_t Hydraulic_Pressure;
    struct HPG_byte3 {
        uint8_t Engine_Hydraulic_Pressure_Governor_Mode_Indicator:2;
        uint8_t Engine_Hydraulic_Pressure_Governor_Switch:2;
        uint8_t Fire_Apparatus_Pump_Engagement:2;
    }HPG_byte3;
    struct HPG_byte3 bt3 ;
} getHPG_t ;
typedef struct getVDC2 {
    uint16_t Steering_Wheel_Angle;
    struct VDC2_byte3 {
        uint8_t Steering_Wheel_Turn_Counter:6;
        uint8_t Steering_Wheel_Angle_Sensor_Type:2;
    }VDC2_byte3;
    struct VDC2_byte3 bt3 ;
    uint16_t Yaw_Rate;
    uint16_t Lateral_Acceleration;
    uint8_t Longitudinal_Acceleration;
} getVDC2_t ;
typedef struct getEGF1 {
    uint16_t Engine_Exhaust_Gas_Recirculation_1__EGR1__Mass_Flow_Rate;
    uint16_t Engine_Intake_Air_Mass_Flow_Rate;
    uint16_t Engine_Exhaust_Gas_Recirculation_2__EGR2__Mass_Flow_Rate;
} getEGF1_t ;
typedef struct getESC1 {
    uint16_t Actual_Inner_wheel_steering_angle;
    struct ESC1_byte3 {
        uint8_t Axle_Location:8;
    }ESC1_byte3;
    struct ESC1_byte3 bt3 ;
    struct ESC1_byte4 {
        uint8_t Status_of_Steering_Axle:4;
        uint8_t Steerable_Lift_Axle_Lowering_Inhibit:2;
    }ESC1_byte4;
    struct ESC1_byte4 bt4 ;
    struct ESC1_byte5 {
        uint8_t Steering_Type:4;
        uint8_t Type_of_Steering_Forces:4;
    }ESC1_byte5;
    struct ESC1_byte5 bt5 ;
    struct ESC1_byte6 {
        uint8_t Type_of_Steering_Transmission:4;
    }ESC1_byte6;
    struct ESC1_byte6 bt6 ;
} getESC1_t ;
typedef struct getETC8 {
    uint16_t Transmission_Torque_Converter_Ratio;
    uint16_t Transmission_Clutch_Converter_Input_Speed;
} getETC8_t ;
typedef struct getLOI {
    struct LOI_byte1 {
        uint8_t Blade_Control_Mode_Switch:4;
        uint8_t Desired_Grade_Offset_Switch:4;
    }LOI_byte1;
    struct LOI_byte1 bt1 ;
    struct LOI_byte2 {
        uint8_t Blade_Auto_Mode_Command:4;
        uint8_t Left_Blade_Control_Mode_Operator_Control:4;
    }LOI_byte2;
    struct LOI_byte2 bt2 ;
    struct LOI_byte3 {
        uint8_t Right_Blade_Control_Mode_Operator_Control:4;
        uint8_t Left_Desired_Blade_Offset_Operator_Control:4;
    }LOI_byte3;
    struct LOI_byte3 bt3 ;
    struct LOI_byte4 {
        uint8_t Right_Desired_Blade_Offset_Operator_Control:4;
        uint8_t Side_shift_Blade_Control_Mode_Operator_Control:4;
    }LOI_byte4;
    struct LOI_byte4 bt4 ;
    struct LOI_byte5 {
        uint8_t Side_shift_Desired_Blade_Offset_Operator_Control:4;
        uint8_t Set_Elevation_Sensor_1_Reference_Elevation:2;
        uint8_t Set_Elevation_Sensor_2_Reference_Elevation:2;
    }LOI_byte5;
    struct LOI_byte5 bt5 ;
} getLOI_t ;
typedef struct getAT1IG1 {
    uint16_t Aftertreatment_1_Intake_NOx;
    uint16_t Aftertreatment_1_Intake_O2;
    struct AT1IG1_byte5 {
        uint8_t Aftertreatment_1_Intake_Gas_Sensor_Power_Status:2;
        uint8_t Aftertreatment_1_Intake_Gas_Sensor_at_Temperature:2;
        uint8_t Aftertreatment_1_Intake_NOx_Reading_Stable:2;
        uint8_t Aftertreatment_1_Intake_Wide_Range___O2_Reading_Stable:2;
    }AT1IG1_byte5;
    struct AT1IG1_byte5 bt5 ;
    struct AT1IG1_byte6 {
        uint8_t Aftertreatment_1_Intake_Gas_Sensor_Heater_Preliminary_FMI:5;
        uint8_t Aftertreatment_1_Intake_Gas_Sensor_Heater_Control:2;
    }AT1IG1_byte6;
    struct AT1IG1_byte6 bt6 ;
    struct AT1IG1_byte7 {
        uint8_t Aftertreatment_1_Intake_NOx_Sensor_Preliminary_FMI:5;
        uint8_t NOx_Sensor_ATI1_Self_diagnosis_Status:3;
    }AT1IG1_byte7;
    struct AT1IG1_byte7 bt7 ;
    struct AT1IG1_byte8 {
        uint8_t Aftertreatment_1_Intake_Oxygen_Sensor_Preliminary_FMI:5;
    }AT1IG1_byte8;
    struct AT1IG1_byte8 bt8 ;
} getAT1IG1_t ;
typedef struct getAT1OG1 {
    uint16_t Aftertreatment_1_Outlet_NOx;
    uint16_t Aftertreatment_1_Outlet_O2;
    struct AT1OG1_byte5 {
        uint8_t Aftertreatment_1_Outlet_Gas_Sensor_Power_Status:2;
        uint8_t Aftertreatment_1_Outlet_Gas_Sensor_at_Temperature:2;
        uint8_t Aftertreatment_1_Outlet_NOx_Reading_Stable:2;
        uint8_t Aftertreatment_1_Outlet_Wide_Range__O2_Reading_Stable:2;
    }AT1OG1_byte5;
    struct AT1OG1_byte5 bt5 ;
    struct AT1OG1_byte6 {
        uint8_t Aftertreatment_1_Outlet_Gas_Sensor_Heater_Preliminary_FMI:5;
        uint8_t Aftertreatment_1_Outlet_Gas_Sensor_Heater_Control:2;
    }AT1OG1_byte6;
    struct AT1OG1_byte6 bt6 ;
    struct AT1OG1_byte7 {
        uint8_t Aftertreatment_1_Outlet_NOx_Sensor_Preliminary_FMI:5;
        uint8_t NOx_Sensor_ATO1_Self_diagnosis_Status:3;
    }AT1OG1_byte7;
    struct AT1OG1_byte7 bt7 ;
    struct AT1OG1_byte8 {
        uint8_t Aftertreatment_1_Outlet_Oxygen_Sensor_Preliminary_FMI:5;
    }AT1OG1_byte8;
    struct AT1OG1_byte8 bt8 ;
} getAT1OG1_t ;
typedef struct getAT2IG1 {
    uint16_t Aftertreatment_2_Intake_NOx;
    uint16_t Aftertreatment_2_Intake_O2;
    struct AT2IG1_byte5 {
        uint8_t Aftertreatment_2_Intake_Gas_Sensor_Power_Status:2;
        uint8_t Aftertreatment_2_Intake_Gas_Sensor_at_Temperature:2;
        uint8_t Aftertreatment_2_Intake_NOx_Reading_Stable:2;
        uint8_t Aftertreatment_2_Intake_Wide_Range___O2_Reading_Stable:2;
    }AT2IG1_byte5;
    struct AT2IG1_byte5 bt5 ;
    struct AT2IG1_byte6 {
        uint8_t Aftertreatment_2_Intake_Gas_Sensor_Heater_Preliminary_FMI:5;
        uint8_t Aftertreatment_2_Intake_Gas_Sensor_Heater_Control:2;
    }AT2IG1_byte6;
    struct AT2IG1_byte6 bt6 ;
    struct AT2IG1_byte7 {
        uint8_t Aftertreatment_2_Intake_NOx_Sensor_Preliminary_FMI:5;
        uint8_t NOx_Sensor_ATI2_Self_diagnosis_Status:3;
    }AT2IG1_byte7;
    struct AT2IG1_byte7 bt7 ;
    struct AT2IG1_byte8 {
        uint8_t Aftertreatment_2_Intake_Oxygen_Sensor_Preliminary_FMI:5;
    }AT2IG1_byte8;
    struct AT2IG1_byte8 bt8 ;
} getAT2IG1_t ;
typedef struct getAT2OG1 {
    uint16_t Aftertreatment_2_Outlet_NOx;
    uint16_t Aftertreatment_2_Outlet_O2;
    struct AT2OG1_byte5 {
        uint8_t Aftertreatment_2_Outlet_Gas_Sensor_Power_Status:2;
        uint8_t Aftertreatment_2_Outlet_Gas_Sensor_at_Temperature:2;
        uint8_t Aftertreatment_2_Outlet_NOx_Reading_Stable:2;
        uint8_t Aftertreatment_2_Outlet_Wide_Range___O2_Reading_Stable:2;
    }AT2OG1_byte5;
    struct AT2OG1_byte5 bt5 ;
    struct AT2OG1_byte6 {
        uint8_t Aftertreatment_2_Outlet_Gas_Sensor_Heater_Preliminary_FMI:5;
        uint8_t Aftertreatment_2_Outlet_Gas_Sensor_Heater_Control:2;
    }AT2OG1_byte6;
    struct AT2OG1_byte6 bt6 ;
    struct AT2OG1_byte7 {
        uint8_t Aftertreatment_2_Outlet_NOx_Sensor_Preliminary_FMI:5;
        uint8_t NOx_Sensor_ATO2_Self_diagnosis_Status:3;
    }AT2OG1_byte7;
    struct AT2OG1_byte7 bt7 ;
    struct AT2OG1_byte8 {
        uint8_t Aftertreatment_2_Outlet_Oxygen_Sensor_Preliminary_FMI:5;
    }AT2OG1_byte8;
    struct AT2OG1_byte8 bt8 ;
} getAT2OG1_t ;
typedef struct getFWSS1 {
    uint16_t Fifth_Wheel_Vertical_Force;
    uint16_t Fifth_Wheel_Drawbar_Force;
    uint16_t Fifth_Wheel_Roll_Moment;
    struct FWSS1_byte7 {
        uint8_t Fifth_Wheel_Roll_Warning_Indicator:2;
    }FWSS1_byte7;
    struct FWSS1_byte7 bt7 ;
} getFWSS1_t ;
typedef struct getSSI {
    uint16_t Pitch_Angle;
    uint16_t Roll_Angle;
    uint16_t Pitch_Rate;
    struct SSI_byte7 {
        uint8_t Pitch_Angle_Figure_of_Merit:2;
        uint8_t Roll_Angle_Figure_of_Merit:2;
        uint8_t Pitch_Rate_Figure_of_Merit:2;
        uint8_t Pitch_and_Roll_Compensated:2;
    }SSI_byte7;
    struct SSI_byte7 bt7 ;
    uint8_t Roll_and_Pitch_Measurement_Latency;
} getSSI_t ;
typedef struct getBI {
    uint16_t Relative_Blade_Height;
    uint16_t Blade_Rotation_Angle;
    uint8_t Relative_Blade_Height_and_Blade_Rotation_Angle_Measurement_Latency;
    struct BI_byte6 {
        uint8_t Relative_Blade_Height_Figure_of_Merit:2;
        uint8_t Blade_Rotation_Angle_Figure_of_Merit:2;
    }BI_byte6;
    struct BI_byte6 bt6 ;
} getBI_t ;
typedef struct getCCS {
    struct CCS_byte1 {
        uint8_t Engine_Cylinder_1_Combustion_Status:2;
        uint8_t Engine_Cylinder_2_Combustion_Status:2;
        uint8_t Engine_Cylinder_3_Combustion_Status:2;
        uint8_t Engine_Cylinder_4_Combustion_Status:2;
    }CCS_byte1;
    struct CCS_byte1 bt1 ;
    struct CCS_byte2 {
        uint8_t Engine_Cylinder_5_Combustion_Status:2;
        uint8_t Engine_Cylinder_6_Combustion_Status:2;
        uint8_t Engine_Cylinder_7_Combustion_Status:2;
        uint8_t Engine_Cylinder_8_Combustion_Status:2;
    }CCS_byte2;
    struct CCS_byte2 bt2 ;
    struct CCS_byte3 {
        uint8_t Engine_Cylinder_9_Combustion_Status:2;
        uint8_t Engine_Cylinder_10_Combustion_Status:2;
        uint8_t Engine_Cylinder_11_Combustion_Status:2;
        uint8_t Engine_Cylinder_12_Combustion_Status:2;
    }CCS_byte3;
    struct CCS_byte3 bt3 ;
    struct CCS_byte4 {
        uint8_t Engine_Cylinder_13_Combustion_Status:2;
        uint8_t Engine_Cylinder_14_Combustion_Status:2;
        uint8_t Engine_Cylinder_15_Combustion_Status:2;
        uint8_t Engine_Cylinder_16_Combustion_Status:2;
    }CCS_byte4;
    struct CCS_byte4 bt4 ;
    struct CCS_byte5 {
        uint8_t Engine_Cylinder_17_Combustion_Status:2;
        uint8_t Engine_Cylinder_18_Combustion_Status:2;
        uint8_t Engine_Cylinder_19_Combustion_Status:2;
        uint8_t Engine_Cylinder_20_Combustion_Status:2;
    }CCS_byte5;
    struct CCS_byte5 bt5 ;
    struct CCS_byte6 {
        uint8_t Engine_Cylinder_21_Combustion_Status:2;
        uint8_t Engine_Cylinder_22_Combustion_Status:2;
        uint8_t Engine_Cylinder_23_Combustion_Status:2;
        uint8_t Engine_Cylinder_24_Combustion_Status:2;
    }CCS_byte6;
    struct CCS_byte6 bt6 ;
} getCCS_t ;
typedef struct getKL1 {
    uint8_t Engine_Cylinder_1_Knock_Level;
    uint8_t Engine_Cylinder_2_Knock_Level;
    uint8_t Engine_Cylinder_3_Knock_Level;
    uint8_t Engine_Cylinder_4_Knock_Level;
    uint8_t Engine_Cylinder_5_Knock_Level;
    uint8_t Engine_Cylinder_6_Knock_Level;
    uint8_t Engine_Cylinder_7_Knock_Level;
    uint8_t Engine_Cylinder_8_Knock_Level;
} getKL1_t ;
typedef struct getKL2 {
    uint8_t Engine_Cylinder_9_Knock_Level;
    uint8_t Engine_Cylinder_10_Knock_Level;
    uint8_t Engine_Cylinder_11_Knock_Level;
    uint8_t Engine_Cylinder_12_Knock_Level;
    uint8_t Engine_Cylinder_13_Knock_Level;
    uint8_t Engine_Cylinder_14_Knock_Level;
    uint8_t Engine_Cylinder_15_Knock_Level;
    uint8_t Engine_Cylinder_16_Knock_Level;
} getKL2_t ;
typedef struct getKL3 {
    uint8_t Engine_Cylinder_17_Knock_Level;
    uint8_t Engine_Cylinder_18_Knock_Level;
    uint8_t Engine_Cylinder_19_Knock_Level;
    uint8_t Engine_Cylinder_20_Knock_Level;
    uint8_t Engine_Cylinder_21_Knock_Level;
    uint8_t Engine_Cylinder_22_Knock_Level;
    uint8_t Engine_Cylinder_23_Knock_Level;
    uint8_t Engine_Cylinder_24_Knock_Level;
} getKL3_t ;
typedef struct getTFAC {
    uint16_t Engine_Throttle_Actuator_1_Control_Command;
    uint16_t Engine_Throttle_Actuator_2_Control_Command;
    uint16_t Engine_Fuel_Actuator_1_Control_Command;
    uint16_t Engine_Fuel_Actuator_2_Control_Command;
} getTFAC_t ;
typedef struct getSAS {
    uint16_t Steering_Wheel_Angle;
    struct SAS_byte3 {
        uint8_t Steering_Wheel_Angle_Range_Counter:6;
        uint8_t Steering_Wheel_Angle_Range_Counter_Type:2;
    }SAS_byte3;
    struct SAS_byte3 bt3 ;
    uint16_t Steering_Wheel_Angle_Range;
    struct SAS_byte7 {
        uint8_t Steering_Angle_Sensor_Active_Mode:2;
        uint8_t Steering_Angle_Sensor_Calibrated:2;
    }SAS_byte7;
    struct SAS_byte7 bt7 ;
    struct SAS_byte8 {
        uint8_t Message_Counter:4;
        uint8_t Message_Checksum:4;
    }SAS_byte8;
    struct SAS_byte8 bt8 ;
} getSAS_t ;
typedef struct getESSI {
    uint16_t Engine_Speed_1;
    uint16_t Engine_Speed_2;
    uint16_t Engine_Speed_3;
    struct ESSI_byte7 {
        uint8_t Engine_Speed_Sensor_3_Timing_Pattern_Status:2;
        uint8_t Engine_Speed_Sensor_2_Timing_Pattern_Status:2;
        uint8_t Engine_Speed_Sensor_1_Timing_Pattern_Status:2;
    }ESSI_byte7;
    struct ESSI_byte7 bt7 ;
} getESSI_t ;
typedef struct getA1SCRDSI1 {
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity;
    struct A1SCRDSI1_byte3 {
        uint8_t Aftertreatment_1_SCR_System_State:4;
    }A1SCRDSI1_byte3;
    struct A1SCRDSI1_byte3 bt3 ;
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Absolute_Pressure;
} getA1SCRDSI1_t ;
typedef struct getA1SCRDSR1 {
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity;
    struct A1SCRDSR1_byte3 {
        uint8_t Aftertreatment_1_SCR_System_Requested_State:4;
    }A1SCRDSR1_byte3;
    struct A1SCRDSR1_byte3 bt3 ;
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator;
} getA1SCRDSR1_t ;
typedef struct getA1SCRAI {
    uint16_t Aftertreatment_1_Outlet_NH3;
    struct A1SCRAI_byte3 {
        uint8_t Aftertreatment_1_Outlet_NH3_Sensor_Preliminary_FMI:5;
    }A1SCRAI_byte3;
    struct A1SCRAI_byte3 bt3 ;
    struct A1SCRAI_byte4 {
        uint8_t Aftertreatment_1_Outlet_NH3_Reading_Stable:2;
        uint8_t Aftertreatment_1_Outlet_NH3_Gas_Sensor_Power_In_Range:2;
        uint8_t Aftertreatment_1_Outlet_NH3_Gas_Sensor_at_Temperature:2;
    }A1SCRAI_byte4;
    struct A1SCRAI_byte4 bt4 ;
    struct A1SCRAI_byte5 {
        uint8_t Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI:5;
    }A1SCRAI_byte5;
    struct A1SCRAI_byte5 bt5 ;
    struct A1SCRAI_byte6 {
        uint8_t Aftertreatment_1_Outlet_NH3_Gas_Sensor_Heater_Control:2;
    }A1SCRAI_byte6;
    struct A1SCRAI_byte6 bt6 ;
} getA1SCRAI_t ;
typedef struct getA2SCRDSI1 {
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Dosing_Quantity;
    struct A2SCRDSI1_byte3 {
        uint8_t Aftertreatment_2_SCR_System_State:4;
    }A2SCRDSI1_byte3;
    struct A2SCRDSI1_byte3 bt3 ;
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Actual_Quantity_of_Integrator;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Absolute_Pressure;
} getA2SCRDSI1_t ;
typedef struct getA2SCRDSR1 {
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Requested_Quantity;
    struct A2SCRDSR1_byte3 {
        uint8_t Aftertreatment_2_SCR_System_Requested_State:4;
    }A2SCRDSR1_byte3;
    struct A2SCRDSR1_byte3 bt3 ;
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Requested_Quantity_of_Integrator;
} getA2SCRDSR1_t ;
typedef struct getA2SCRAI {
    uint16_t Aftertreatment_2_Outlet_NH3;
    struct A2SCRAI_byte3 {
        uint8_t Aftertreatment_2_Outlet_NH3_Sensor_Preliminary_FMI:5;
    }A2SCRAI_byte3;
    struct A2SCRAI_byte3 bt3 ;
    struct A2SCRAI_byte4 {
        uint8_t Aftertreatment_2_Outlet_NH3_Reading_Stable:2;
        uint8_t Aftertreatment_2_Outlet_NH3_Gas_Sensor_Power_In_Range:2;
        uint8_t Aftertreatment_2_Outlet_NH3_Gas_Sensor_at_Temperature:2;
    }A2SCRAI_byte4;
    struct A2SCRAI_byte4 bt4 ;
    struct A2SCRAI_byte5 {
        uint8_t Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Preliminary_FMI:5;
    }A2SCRAI_byte5;
    struct A2SCRAI_byte5 bt5 ;
    struct A2SCRAI_byte6 {
        uint8_t Aftertreatment_2_Outlet_NH3_Gas_Sensor_Heater_Control:2;
    }A2SCRAI_byte6;
    struct A2SCRAI_byte6 bt6 ;
} getA2SCRAI_t ;
typedef struct getSSI2 {
    uint32_t Pitch_Angle_Extended_Range;
    uint32_t Roll_Angle_Extended_Range;
    struct SSI2_byte7 {
        uint8_t Pitch_Angle_Extended_Range_Compensation:2;
        uint8_t Pitch_Angle_Extended_Range_Figure_of_Merit:2;
        uint8_t Roll_Angle_Extended_Range_Compensation:2;
        uint8_t Roll_Angle_Extended_Range_Figure_of_Merit:2;
    }SSI2_byte7;
    struct SSI2_byte7 bt7 ;
    uint8_t Roll_and_Pitch_Extended_Range_Measurement_Latency;
} getSSI2_t ;
typedef struct getARI {
    uint16_t Pitch_Rate_Extended_Range;
    uint16_t Roll_Rate_Extended_Range;
    uint16_t Yaw_Rate_Extended_Range;
    struct ARI_byte7 {
        uint8_t Pitch_Rate_Extended_Range_Figure_of_Merit:2;
        uint8_t Roll_Rate_Extended_Range_Figure_of_Merit:2;
        uint8_t Yaw_Rate_Extended_Range_Figure_of_Merit:2;
    }ARI_byte7;
    struct ARI_byte7 bt7 ;
    uint8_t Angular_Rate_Measurement_Latency;
} getARI_t ;
typedef struct getCN {
    struct CN_byte1 {
        uint8_t Crash_Type:5;
    }CN_byte1;
    struct CN_byte1 bt1 ;
    struct CN_byte8 {
        uint8_t Crash_Counter:4;
        uint8_t Crash_Checksum:4;
    }CN_byte8;
    struct CN_byte8 bt8 ;
} getCN_t ;
typedef struct getMSI2 {
    uint16_t Magnet_Forward_Current;
    uint8_t Magnet_Reverse_Current;
    struct MSI2_byte4 {
        uint8_t Material_Lift_Switch:2;
        uint8_t Material_Drop_Switch:2;
        uint8_t Generator_Current_Boost_Active_Status:2;
        uint8_t Material_Lift_Active_Status:2;
    }MSI2_byte4;
    struct MSI2_byte4 bt4 ;
    struct MSI2_byte5 {
        uint8_t Material_Drop_Active_Status:2;
        uint8_t Lift_Relay_Control:2;
        uint8_t Drop_Relay_Control:2;
        uint8_t Magnet_Generator_Control:2;
    }MSI2_byte5;
    struct MSI2_byte5 bt5 ;
} getMSI2_t ;
typedef struct getACCS {
    uint16_t Lateral_Acceleration_Extended_Range;
    uint16_t Longitudinal_Acceleration_Extended_Range;
    uint16_t Vertical_Acceleration_Extended_Range;
    struct ACCS_byte7 {
        uint8_t Lateral_Acceleration_Extended_Range_Figure_of_Merit:2;
        uint8_t Longitudinal_Acceleration_Extended_Range_Figure_of_Merit:2;
        uint8_t Vertical_Acceleration_Extended_Range_Figure_of_Merit:2;
        uint8_t Support_Variable_Transmission_Repetition_Rate_for_Acceleration_Sensor:2;
    }ACCS_byte7;
    struct ACCS_byte7 bt7 ;
} getACCS_t ;
typedef struct getCommand {
    uint16_t Engine_Turbocharger_Wastegate_Actuator_1_Command;
    uint16_t Engine_Turbocharger_Wastegate_Actuator_2_Command;
    uint16_t Engine_Exhaust_Back_Pressure_Regulator_Control_Command;
} getCommand_t ;
typedef struct getAEBS1 {
    struct AEBS1_byte1 {
        uint8_t Advanced_emergency_braking_system_state:4;
        uint8_t Collision_warning_level:4;
    }AEBS1_byte1;
    struct AEBS1_byte1 bt1 ;
    struct AEBS1_byte2 {
        uint8_t Relevant_object_detected_for_advanced_emergency_braking_system:3;
        uint8_t Bend_off_probability_of_relevant_object:3;
    }AEBS1_byte2;
    struct AEBS1_byte2 bt2 ;
    uint8_t Time_to_collision_with_relevant_object;
} getAEBS1_t ;
typedef struct getWS {
    uint16_t Wireless_Rolling_Message_Counter;
    struct WS_byte3 {
        uint8_t Transmitter_Command_State:4;
    }WS_byte3;
    struct WS_byte3 bt3 ;
    uint32_t Transmitter_ID_1;
    uint8_t Wireless_Signal_Strength_1;
} getWS_t ;
typedef struct getWAND {
    uint16_t Wand_Angle;
    struct WAND_byte3 {
        uint8_t Wand_Sensor_Figure_of_Merit:2;
    }WAND_byte3;
    struct WAND_byte3 bt3 ;
} getWAND_t ;
typedef struct getLDISP {
    uint16_t Measured_Linear_Displacement;
    struct LDISP_byte3 {
        uint8_t Linear_Displacement_Sensor_Sensor_Figure_of_Merit:2;
    }LDISP_byte3;
    struct LDISP_byte3 bt3 ;
} getLDISP_t ;
typedef struct getA1SCRAI2 {
    uint16_t Aftertreatment_1_SCR_Intermediate_NH3;
    struct A1SCRAI2_byte3 {
        uint8_t Aftertreatment_1_SCR_Intermediate_NH3_Sensor_Preliminary_FMI:5;
    }A1SCRAI2_byte3;
    struct A1SCRAI2_byte3 bt3 ;
    struct A1SCRAI2_byte4 {
        uint8_t Aftertreatment_1_SCR_Intermediate_NH3_Reading_Stable:2;
        uint8_t Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range:2;
        uint8_t Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature:2;
    }A1SCRAI2_byte4;
    struct A1SCRAI2_byte4 bt4 ;
    struct A1SCRAI2_byte5 {
        uint8_t Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI:5;
    }A1SCRAI2_byte5;
    struct A1SCRAI2_byte5 bt5 ;
    struct A1SCRAI2_byte6 {
        uint8_t Aftertreatment_1_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control:2;
    }A1SCRAI2_byte6;
    struct A1SCRAI2_byte6 bt6 ;
} getA1SCRAI2_t ;
typedef struct getA2SCRAI2 {
    uint16_t Aftertreatment_2_SCR_Intermediate_NH3;
    struct A2SCRAI2_byte3 {
        uint8_t Aftertreatment_2_SCR_Intermediate_NH3_Sensor_Preliminary_FMI:5;
    }A2SCRAI2_byte3;
    struct A2SCRAI2_byte3 bt3 ;
    struct A2SCRAI2_byte4 {
        uint8_t Aftertreatment_2_SCR_Intermediate_NH3_Reading_Stable:2;
        uint8_t Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Power_In_Range:2;
        uint8_t Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_at_Temperature:1;
    }A2SCRAI2_byte4;
    struct A2SCRAI2_byte4 bt4 ;
    struct A2SCRAI2_byte5 {
        uint8_t Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Preliminary_FMI:5;
    }A2SCRAI2_byte5;
    struct A2SCRAI2_byte5 bt5 ;
    struct A2SCRAI2_byte6 {
        uint8_t Aftertreatment_2_SCR_Intermediate_NH3_Gas_Sensor_Heater_Control:2;
    }A2SCRAI2_byte6;
    struct A2SCRAI2_byte6 bt6 ;
} getA2SCRAI2_t ;
typedef struct getHSS {
    struct HSS_byte1 {
        uint8_t Hybrid_System_Warning_Indicator:2;
        uint8_t Hybrid_System_Overheat_Indicator:2;
        uint8_t Hybrid_System_Stop_Indicator:2;
    }HSS_byte1;
    struct HSS_byte1 bt1 ;
} getHSS_t ;
typedef struct getGFI4 {
    uint16_t Supply_Gas_Methane_Percentage;
} getGFI4_t ;
typedef struct getA2SCREGT2 {
    uint16_t Aftertreatment_2_SCR_Intermediate_Gas_Temperature;
    struct A2SCREGT2_byte3 {
        uint8_t Aftertreatment_2_SCR_Intermediate_Gas_Temperature_Preliminary_FMI:5;
    }A2SCREGT2_byte3;
    struct A2SCREGT2_byte3 bt3 ;
} getA2SCREGT2_t ;
typedef struct getA1SCREGT2 {
    uint16_t Aftertreatment_1_SCR_Intermediate_Gas_Temperature;
    struct A1SCREGT2_byte3 {
        uint8_t Aftertreatment_1_SCR_Intermediate_Gas_Temperature_Preliminary_FMI:5;
    }A1SCREGT2_byte3;
    struct A1SCREGT2_byte3 bt3 ;
} getA1SCREGT2_t ;
typedef struct getEEC13 {
    struct EEC13_byte1 {
        uint8_t Feedback_Engine_Fueling_State:2;
        uint8_t Engine_Fueling_Inhibit_Allowed:2;
        uint8_t Engine_Fueling_Inhibit_Prevented_Reason:4;
    }EEC13_byte1;
    struct EEC13_byte1 bt1 ;
} getEEC13_t ;
typedef struct getEF_TVI2 {
    uint8_t Engine_Throttle_Valve_1_Temperature;
    uint8_t Engine_Throttle_Valve_2_Temperature;
    uint8_t Engine_Fuel_Valve_1_Temperature;
    uint8_t Engine_Fuel_Valve_2_Temperature;
    uint8_t Engine_Turbocharger_Wastegate_Actuator_2_Temperature;
} getEF_TVI2_t ;
typedef struct getEEGR1A {
    struct EEGR1A_byte1 {
        uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Preliminary_FMI:5;
        uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature_Status:3;
    }EEGR1A_byte1;
    struct EEGR1A_byte1 bt1 ;
    uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Temperature;
    uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Desired_Position;
    struct EEGR1A_byte4 {
        uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Preliminary_FMI:5;
        uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature_Status:3;
    }EEGR1A_byte4;
    struct EEGR1A_byte4 bt4 ;
    uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Temperature;
    uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Desired_Position;
    struct EEGR1A_byte7 {
        uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_1_Operation_Status:4;
        uint8_t Engine_Exhaust_Gas_Recirculation_2_Actuator_2_Operation_Status:4;
    }EEGR1A_byte7;
    struct EEGR1A_byte7 bt7 ;
} getEEGR1A_t ;
typedef struct getEEGR1B {
    struct EEGR1B_byte1 {
        uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Preliminary_FMI:5;
        uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature_Status:3;
    }EEGR1B_byte1;
    struct EEGR1B_byte1 bt1 ;
    uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Temperature;
    uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Desired_Position;
    struct EEGR1B_byte4 {
        uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Preliminary_FMI:5;
        uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature_Status:3;
    }EEGR1B_byte4;
    struct EEGR1B_byte4 bt4 ;
    uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Temperature;
    uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Desired_Position;
    struct EEGR1B_byte7 {
        uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_1_Operation_Status:4;
        uint8_t Engine_Exhaust_Gas_Recirculation_1_Actuator_2_Operation_Status:4;
    }EEGR1B_byte7;
    struct EEGR1B_byte7 bt7 ;
} getEEGR1B_t ;
typedef struct getEEC12 {
    struct EEC12_byte1 {
        uint8_t Aftertreatment_1_Intake_Gas_Sensor_Power_Supply:2;
        uint8_t Aftertreatment_1_Outlet_Gas_Sensor_Power_Supply:2;
        uint8_t Aftertreatment_2_Intake_Gas_Sensor_Power_Supply:2;
        uint8_t Aftertreatment_2_Outlet_Gas_Sensor_Power_Supply:2;
    }EEC12_byte1;
    struct EEC12_byte1 bt1 ;
} getEEC12_t ;
typedef struct getNSSR {
    struct NSSR_byte1 {
        uint8_t NOx_Sensor_ATO1_Self_diagnosis_Trigger:4;
        uint8_t NOx_Sensor_ATI1_Self_diagnosis_Trigger:4;
    }NSSR_byte1;
    struct NSSR_byte1 bt1 ;
    struct NSSR_byte2 {
        uint8_t NOx_Sensor_ATO2_Self_diagnosis_Trigger:4;
        uint8_t NOx_Sensor_ATI2_Self_diagnosis_Trigger:4;
    }NSSR_byte2;
    struct NSSR_byte2 bt2 ;
} getNSSR_t ;
typedef struct getEPSI {
    uint16_t Aftertreatment_1_Particulate_Sensor;
    uint16_t Aftertreatment_2_Particulate_Sensor;
} getEPSI_t ;
typedef struct getAT1P1I {
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater;
} getAT1P1I_t ;
typedef struct getAT1DPF2S5 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_3;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_3_Soot_Signal;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_4;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_4_Soot_Signal;
} getAT1DPF2S5_t ;
typedef struct getAT1DPF2S4 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_1;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_1_Soot_Signal;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Frequency_2;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Frequency_2_Soot_Signal;
} getAT1DPF2S4_t ;
typedef struct getAT1DPF2S3 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_1;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_2;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_3;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_2_Soot_Sensor_Analysis_Request_Frequency_4;
} getAT1DPF2S3_t ;
typedef struct getAT1DPF1S5 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_3;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_3_Soot_Signal;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_4;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_4_Soot_Signal;
} getAT1DPF1S5_t ;
typedef struct getAT1DPF1S4 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_1;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_1_Soot_Signal;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Frequency_2;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Frequency_2_Soot_Signal;
} getAT1DPF1S4_t ;
typedef struct getAT1DPF1S3 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_1;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_2;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_3;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_1_Soot_Sensor_Analysis_Request_Frequency_4;
} getAT1DPF1S3_t ;
typedef struct getCCVS3 {
    struct CCVS3_byte1 {
        uint8_t Adaptive_Cruise_Control_Readiness_Status:2;
        uint8_t Cruise_Control_System_Command_State:3;
    }CCVS3_byte1;
    struct CCVS3_byte1 bt1 ;
    uint8_t Source_Address_of_Controlling_Device_for_Disabling_Cruise_Control;
    uint8_t Source_Address_of_Controlling_Device_for_Pausing_Cruise_Control;
} getCCVS3_t ;
typedef struct getAT2AC3 {
    uint16_t Aftertreatment_2_Secondary_Air_Absolute_Pressure;
} getAT2AC3_t ;
typedef struct getAT1AC3 {
    uint16_t Aftertreatment_1_Secondary_Air_Absolute_Pressure;
} getAT1AC3_t ;
typedef struct getEFL_P12 {
    uint8_t Engine_Fuel_Delivery_Absolute_Pressure;
    uint8_t Engine_Filtered_Fuel_Delivery_Pressure;
    uint8_t Engine_Filtered_Fuel_Delivery_Absolute_Pressure;
    uint8_t Engine_Fuel_Filter_Degradation;
} getEFL_P12_t ;
typedef struct getDPFC2 {
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Intake_Temperature_Set_Point;
    uint16_t Relative_Unburned_Fuel_Mass_from_Engine;
    uint16_t Aftertreatment_1_Fuel_Mass_Rate;
    uint16_t Aftertreatment_2_Fuel_Mass_Rate;
} getDPFC2_t ;
typedef struct getLFE2 {
    uint32_t High_Resolution_Engine_Fuel_Rate;
} getLFE2_t ;
typedef struct getSFS {
    struct SFS_byte1 {
        uint8_t Supplemental_Fan_Enable_Status:2;
        uint8_t Supplemental_Fan_Direction_Status:2;
        uint8_t Supplemental_Fan_Velocity_Status:4;
    }SFS_byte1;
    struct SFS_byte1 bt1 ;
    struct SFS_byte2 {
        uint8_t Supplemental_Fan_Controller_Temperature_Status:3;
        uint8_t Supplemental_Fan_Drive_Status:4;
    }SFS_byte2;
    struct SFS_byte2 bt2 ;
    uint8_t Supplemental_Fan_Controller_ECU_Temperature;
    uint16_t Supplemental_Fan_Speed;
    uint8_t Supplemental_Fan_Current;
    uint16_t Supplemental_Fan_Power;
} getSFS_t ;
typedef struct getEBCC {
    uint8_t Engine_Turbocharger_1_Turbine_Outlet_Pressure;
    uint8_t Desired_Engine_Turbocharger_1_Turbine_Outlet_Pressure;
    uint8_t Engine_Exhaust_Brake_Actuator_Command;
    uint8_t Engine_Turbocharger_2_Turbine_Outlet_Pressure;
    uint8_t Desired_Engine_Turbocharger_2_Turbine_Outlet_Pressure;
} getEBCC_t ;
typedef struct getEFP {
    uint16_t Engine_Fuel_Dynamic_Viscosity;
    uint16_t Engine_Fuel_Density;
    uint16_t Engine_Fuel_Dielectricity__high_resolution_;
    uint16_t Engine_Fuel_Temperature__High_Resolution_;
} getEFP_t ;
typedef struct getHOP {
    uint16_t Hydraulic_Oil_Dynamic_Viscosity;
    uint16_t Hydraulic_Oil_Density;
    uint16_t Hydraulic_Oil_Relative_Dielectricity__high_resolution_;
    uint16_t Hydraulic_Oil_Temperature__High_Resolution_;
} getHOP_t ;
typedef struct getVLS2 {
    struct VLS2_byte1 {
        uint8_t Lubrication_Cycle_Mode_Lock_Status:2;
        uint8_t Lubrication_Cycle_Mode_Status:3;
        uint8_t Lubrication_Operation_Mode_Status:3;
    }VLS2_byte1;
    struct VLS2_byte1 bt1 ;
    struct VLS2_byte2 {
        uint8_t Lubrication_Pump_Enable_Status:2;
        uint8_t Lubrication_Reservoir_Level:2;
        uint8_t Lubrication_Timing_Cycle_Status:2;
    }VLS2_byte2;
    struct VLS2_byte2 bt2 ;
} getVLS2_t ;
typedef struct getEC3 {
    uint8_t Engine_Friction_Percent_Torque_At_Idle_Point_1;
    uint8_t Engine_Friction_Percent_Torque_Point_2;
    uint8_t Engine_Friction_Percent_Torque_Point_3;
    uint8_t Engine_Friction_Percent_Torque_Point_4;
    uint8_t Engine_Friction_Percent_Torque_Point_5;
    uint8_t Engine_Friction_Percent_Torque_Point_6;
    uint8_t Engine_Friction_Percent_Torque_Point_7;
} getEC3_t ;
typedef struct getIVAC {
    struct IVAC_byte1 {
        uint8_t Intake_Valve_Actuation_System_Oil_Pressure_1_Solenoid_Control:2;
        uint8_t Intake_Valve_Actuation_System_Oil_Pressure_2_Solenoid_Control:2;
    }IVAC_byte1;
    struct IVAC_byte1 bt1 ;
} getIVAC_t ;
typedef struct getARMSWIMC {
    struct ARMSWIMC_byte1 {
        uint8_t Armrest_1_Switch_1:2;
        uint8_t Armrest_1_Switch_2:2;
        uint8_t Armrest_2_Switch_1:2;
        uint8_t Armrest_2_Switch_2:2;
    }ARMSWIMC_byte1;
    struct ARMSWIMC_byte1 bt1 ;
} getARMSWIMC_t ;
typedef struct getVEP4 {
    uint16_t Hybrid_Battery_Pack_Remaining_Charge;
} getVEP4_t ;
typedef struct getAFT2NAI {
    struct AFT2NAI_byte1 {
        uint8_t Aftertreatment_2_NOx_Adsorber_deNOx_Regeneration_Status:2;
        uint8_t Aftertreatment_2_NOx_Adsorber_deSOx_Regeneration_Status:2;
    }AFT2NAI_byte1;
    struct AFT2NAI_byte1 bt1 ;
} getAFT2NAI_t ;
typedef struct getAFT1NAI {
    struct AFT1NAI_byte1 {
        uint8_t Aftertreatment_1_NOx_Adsorber_deNOx_Regeneration_Status:2;
        uint8_t Aftertreatment_1_NOx_Adsorber_deSOx_Regeneration_Status:2;
    }AFT1NAI_byte1;
    struct AFT1NAI_byte1 bt1 ;
} getAFT1NAI_t ;
typedef struct getAT2WUDOC {
    uint16_t Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature;
    uint16_t Aftertreatment_2_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature;
} getAT2WUDOC_t ;
typedef struct getLLRE {
    uint16_t Blade_Elevation_Deviation___Left;
    uint16_t Blade_Elevation_Deviation___Right;
    uint16_t Blade_Reference_Elevation_Offset___Left;
    uint16_t Blade_Reference_Elevation_Offset___Right;
} getLLRE_t ;
typedef struct getEFL_P11 {
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Intake_Absolute_Pressure;
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Outlet_Absolute_Pressure__High_Resolution_;
} getEFL_P11_t ;
typedef struct getEFS2 {
    uint8_t Engine_Fuel_Filter__Suction_Side__Intake_Absolute_Pressure;
} getEFS2_t ;
typedef struct getInformation {
    struct Information_byte1 {
        uint8_t Engine_Turbocharger_Wastegate_Actuator_2_Preliminary_FMI:5;
        uint8_t Engine_Turbocharger_Wastegate_Actuator_2_Temperature_Status:3;
    }Information_byte1;
    struct Information_byte1 bt1 ;
    struct Information_byte2 {
        uint8_t Engine_Turbocharger_Wastegate_Actuator_1_Operation_Status:4;
        uint8_t Engine_Turbocharger_Wastegate_Actuator_2_Operation_Status:4;
    }Information_byte2;
    struct Information_byte2 bt2 ;
    uint8_t Engine_Exhaust_Back_Pressure_Regulator_Position;
    struct Information_byte4 {
        uint8_t Engine_Exhaust_Back_Pressure_Regulator_Preliminary_FMI:5;
        uint8_t Engine_Exhaust_Back_Pressure_Regulator_Temperature_Status:3;
    }Information_byte4;
    struct Information_byte4 bt4 ;
    struct Information_byte5 {
        uint8_t Engine_Exhaust_Back_Pressure_Regulator_Control_Operation_Status:4;
    }Information_byte5;
    struct Information_byte5 bt5 ;
    uint8_t Engine_Turbocharger_Wastegate_Actuator_1_Temperature;
    uint8_t Engine_Exhaust_Back_Pressure_Actuator_1_Desired_Position;
    uint8_t Engine_Exhaust_Back_Pressure_Actuator_1_Temperature;
} getInformation_t ;
typedef struct getEFTVI1 {
    uint8_t Engine_Desired_Throttle_Valve_1_Position;
    struct EFTVI1_byte2 {
        uint8_t Engine_Throttle_Valve_1_Preliminary_FMI:5;
        uint8_t Engine_Throttle_Valve_1_Temperature_Status:3;
    }EFTVI1_byte2;
    struct EFTVI1_byte2 bt2 ;
    uint8_t Engine_Desired_Throttle_Valve_2_Position;
    struct EFTVI1_byte4 {
        uint8_t Engine_Throttle_Valve_2_Preliminary_FMI:5;
        uint8_t Engine_Throttle_Valve_2_Temperature_status:3;
    }EFTVI1_byte4;
    struct EFTVI1_byte4 bt4 ;
    struct EFTVI1_byte5 {
        uint8_t Engine_Fuel_Valve_1_Preliminary_FMI:5;
        uint8_t Engine_Fuel_Valve_1_Temperature_Status:3;
    }EFTVI1_byte5;
    struct EFTVI1_byte5 bt5 ;
    struct EFTVI1_byte6 {
        uint8_t Engine_Fuel_Valve_2_Preliminary_FMI:5;
        uint8_t Engine_Fuel_Valve_2_Temperature_Status:3;
    }EFTVI1_byte6;
    struct EFTVI1_byte6 bt6 ;
    struct EFTVI1_byte7 {
        uint8_t Engine_Throttle_Valve_1_Operation_Status:4;
        uint8_t Engine_Throttle_Valve_2_Operation_Status:4;
    }EFTVI1_byte7;
    struct EFTVI1_byte7 bt7 ;
    struct EFTVI1_byte8 {
        uint8_t Engine_Fuel_Valve_1_Operation_Status:4;
        uint8_t Engine_Fuel_Valve_2_Operation_Status:4;
    }EFTVI1_byte8;
    struct EFTVI1_byte8 bt8 ;
} getEFTVI1_t ;
typedef struct getETCBI {
    uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_2_Position;
    uint8_t Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_2_Position;
    struct ETCBI_byte3 {
        uint8_t Engine_Turbocharger_compressor_Bypass_Actuator_2_Preliminary_FMI:5;
        uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature_Status:3;
    }ETCBI_byte3;
    struct ETCBI_byte3 bt3 ;
    struct ETCBI_byte4 {
        uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_1_Operation_Status:4;
        uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_2_Operation_Status:4;
    }ETCBI_byte4;
    struct ETCBI_byte4 bt4 ;
    uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature;
    uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_2_Temperature;
} getETCBI_t ;
typedef struct getCAC2 {
    uint16_t Engine_Charge_Air_Cooler_2_Intake_Temperature;
    uint16_t Engine_Charge_Air_Cooler_2_Outlet_Temperature;
    uint16_t Engine_Charge_Air_Cooler_2_Ambient_Air_Temperature;
    uint8_t Engine_Charge_Air_Cooler_2_Efficiency;
} getCAC2_t ;
typedef struct getCAC2P {
    uint16_t Engine_Charge_Air_Cooler_2_Precooler_Intake_Temperature;
    uint16_t Engine_Charge_Air_Cooler_2_Precooler_Outlet_Temperature;
    uint8_t Engine_Charge_Air_Cooler_2_Precooler_Efficiency;
} getCAC2P_t ;
typedef struct getCAC1 {
    uint16_t Engine_Charge_Air_Cooler_1_Intake_Temperature;
    uint16_t Engine_Charge_Air_Cooler_1_Ambient_Air_Temperature;
    uint8_t Engine_Charge_Air_Cooler_1_Efficiency;
} getCAC1_t ;
typedef struct getCAC1P {
    uint16_t Engine_Charge_Air_Cooler_1_Precooler_Intake_Temperature;
    uint16_t Engine_Charge_Air_Cooler_1_Precooler_Outlet_Temperature;
    uint8_t Engine_Charge_Air_Cooler_1_Precooler_Efficiency;
} getCAC1P_t ;
typedef struct getDPF2S2 {
    uint16_t Diesel_Particulate_Filter_2_Soot_Signal_Standard_Deviation;
    uint16_t Diesel_Particulate_Filter_2_Soot_Signal_Maximum;
    uint16_t Diesel_Particulate_Filter_2_Soot_Signal_Minimum;
} getDPF2S2_t ;
typedef struct getDPF1S2 {
    uint16_t Diesel_Particulate_Filter_1_Soot_Signal_Standard_Deviation;
    uint16_t Diesel_Particulate_Filter_1_Soot_Signal_Maximum;
    uint16_t Diesel_Particulate_Filter_1_Soot_Signal_Minimum;
} getDPF1S2_t ;
typedef struct getEEC11 {
    uint16_t Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_Control;
    uint16_t Engine_Exhaust_Gas_Recirculation_2__EGR2__Valve_2_Control;
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Valve_1_Position_Error;
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position_Error;
} getEEC11_t ;
typedef struct getEMAP {
    uint16_t Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Position;
    uint16_t Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Position;
} getEMAP_t ;
typedef struct getEMAC {
    uint16_t Engine_Exhaust_Manifold_Bank_1_Flow_Balance_Valve_Actuator_Control;
    uint16_t Engine_Exhaust_Manifold_Bank_2_Flow_Balance_Valve_Actuator_Control;
} getEMAC_t ;
typedef struct getEEC9 {
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Valve_Position;
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Valve_2_Position;
    uint16_t Commanded_Engine_Fuel_Rail_Pressure;
    uint16_t Commanded_Engine_Fuel_Injection_Control_Pressure;
} getEEC9_t ;
typedef struct getEEC10 {
    uint16_t Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Temperature;
    uint16_t Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler_Gas_Absolute_Pressure;
    uint8_t Engine_Exhaust_Gas_Recirculation_2__EGR2__Cooler;
    uint8_t EGR_2_Cooler_Bypass_Actuator_Position;
} getEEC10_t ;
typedef struct getET5 {
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Temperature;
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Mixer_Intake_Temperature;
} getET5_t ;
typedef struct getEFL_P10 {
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Differential_Pressure;
    uint8_t Engine_Exhaust_Gas_Recirculation_2_Intake_Pressure;
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Outlet_Absolute_Pressure;
    uint16_t Engine_Exhaust_Gas_Recirculation_2_Intake_Absolute_Pressure;
    uint8_t Engine_Coolant_Pressure_2;
} getEFL_P10_t ;
typedef struct getLVDS {
    struct LVDS_byte1 {
        uint8_t Low_Voltage_Disconnect_Manual_Disconnect_State:2;
        uint8_t Low_Voltage_Disconnect_Manual_Connect_State:2;
        uint8_t Low_Voltage_Disconnect_Current_Operating_Mode:4;
    }LVDS_byte1;
    struct LVDS_byte1 bt1 ;
    struct LVDS_byte2 {
        uint8_t Low_Voltage_Disconnect_Output_3_State:4;
        uint8_t Low_Voltage_Disconnect_Output_2_State:4;
    }LVDS_byte2;
    struct LVDS_byte2 bt2 ;
    struct LVDS_byte3 {
        uint8_t Low_Voltage_Disconnect_Output_1_State:4;
        uint8_t Low_Voltage_Disconnect_Vout_Output_State:4;
    }LVDS_byte3;
    struct LVDS_byte3 bt3 ;
    uint8_t Low_Voltage_Disconnect_Temperature;
} getLVDS_t ;
typedef struct getDLCD2 {
    struct DLCD2_byte1 {
        uint8_t Vehicle_Battery_Voltage_Low_Lamp_Data:2;
        uint8_t Vehicle_Fuel_Level_Low_Lamp_Data:2;
        uint8_t Vehicle_Air_Pressure_Low_Lamp_Data:2;
        uint8_t Vehicle_HVAC_Recirculation_Lamp_Data:2;
    }DLCD2_byte1;
    struct DLCD2_byte1 bt1 ;
    struct DLCD2_byte2 {
        uint8_t Vehicle_Battery_Charging_Lamp_Data:2;
    }DLCD2_byte2;
    struct DLCD2_byte2 bt2 ;
} getDLCD2_t ;
typedef struct getDLCD1 {
    struct DLCD1_byte1 {
        uint8_t Engine_Protect_Lamp_Data:2;
        uint8_t Engine_Amber_Warning_Lamp_Data:2;
        uint8_t Engine_Red_Stop_Lamp_Data:2;
        uint8_t OBD_Malfunction_Indicator_Lamp_Data:2;
    }DLCD1_byte1;
    struct DLCD1_byte1 bt1 ;
    struct DLCD1_byte2 {
        uint8_t Engine_Brake_Active_Lamp_Data:2;
        uint8_t Compression_Brake_Enable_Switch_Indicator_Lamp_Data:2;
        uint8_t Engine_Oil_Pressure_Low_Lamp_Data:2;
        uint8_t Engine_Coolant_Temperature_High_Lamp_Data:2;
    }DLCD1_byte2;
    struct DLCD1_byte2 bt2 ;
    struct DLCD1_byte3 {
        uint8_t Engine_Coolant_Level_Low_Lamp_Data:2;
        uint8_t Engine_Idle_Management_Active_Lamp_Data:2;
        uint8_t Engine_Air_Filter_Restriction_Lamp_Data:2;
        uint8_t Engine_Fuel_Filter_Restricted_Lamp_Data:2;
    }DLCD1_byte3;
    struct DLCD1_byte3 bt3 ;
    struct DLCD1_byte8 {
        uint8_t Engine_Wait_To_Start_Lamp_Data:2;
    }DLCD1_byte8;
    struct DLCD1_byte8 bt8 ;
} getDLCD1_t ;
typedef struct getDLCC2 {
    struct DLCC2_byte1 {
        uint8_t Vehicle_Battery_Voltage_Low_Lamp_Command:2;
        uint8_t Vehicle_Fuel_Level_Low_Lamp_Command:2;
        uint8_t Vehicle_Air_Pressure_Low_Lamp_Command:2;
        uint8_t Vehicle_HVAC_Recirculation_Lamp_Command:2;
    }DLCC2_byte1;
    struct DLCC2_byte1 bt1 ;
    struct DLCC2_byte2 {
        uint8_t Vehicle_Battery_Charging_Lamp_Command:2;
    }DLCC2_byte2;
    struct DLCC2_byte2 bt2 ;
} getDLCC2_t ;
typedef struct getDLCC1 {
    struct DLCC1_byte1 {
        uint8_t Engine_Protect_Lamp_Command:2;
        uint8_t Engine_Amber_Warning_Lamp_Command:2;
        uint8_t Engine_Red_Stop_Lamp_Command:2;
        uint8_t OBD_Malfunction_Indicator_Lamp_Command:2;
    }DLCC1_byte1;
    struct DLCC1_byte1 bt1 ;
    struct DLCC1_byte2 {
        uint8_t Engine_Brake_Active_Lamp_Command:2;
        uint8_t Compression_Brake_Enable_Switch_Indicator_Lamp_Command:2;
        uint8_t Engine_Oil_Pressure_Low_Lamp_Command:2;
        uint8_t Engine_Coolant_Temperature_High_Lamp_Command:2;
    }DLCC1_byte2;
    struct DLCC1_byte2 bt2 ;
    struct DLCC1_byte3 {
        uint8_t Engine_Coolant_Level_Low_Lamp_Command:2;
        uint8_t Engine_Idle_Management_Active_Lamp_Command:2;
        uint8_t Engine_Air_Filter_Restriction_Lamp_Command:2;
        uint8_t Engine_Fuel_Filter_Restricted_Lamp_Command:2;
    }DLCC1_byte3;
    struct DLCC1_byte3 bt3 ;
} getDLCC1_t ;
typedef struct getEOM {
    uint16_t Engine_Oil_Viscosity;
    uint16_t Engine_Oil_Density;
    uint16_t Engine_Oil_Relative_Dielectricity__high_resolution_;
    uint32_t High_Resolution_Engine_Total_Fuel_Used;
} getEOM_t ;
typedef struct getAT2OGC2 {
    uint8_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Lambda;
    uint8_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_Correction_of_pressure_Nox;
    uint8_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_NO2_Correction;
    uint8_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_NH3_Correction;
    uint8_t NOx_Sensor_ATO2_Self_diagnosis_Final_Result;
} getAT2OGC2_t ;
typedef struct getAT2OGC1 {
    uint16_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_Heater_Ratio;
    uint16_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Gain;
    uint8_t Aftertreatment_2_Outlet_Gas_NOx_Sensor_New_part_deviation_NOx_Offset;
    uint16_t NOx_Sensor_ATO2_Operation_Hours_Counter;
} getAT2OGC1_t ;
typedef struct getAT2IGC2 {
    uint8_t Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Lambda;
    uint8_t Aftertreatment_2_Intake_Gas_NOx_Sensor_Correction_of_pressure_Nox;
    uint8_t Aftertreatment_2_Intake_Gas_NOx_Sensor_NO2_Correction;
    uint8_t Aftertreatment_2_Intake_Gas_NOx_Sensor_NH3_Correction;
    uint8_t NOx_Sensor_ATI2_Self_diagnosis_Final_Result;
} getAT2IGC2_t ;
typedef struct getAT2IGC1 {
    uint16_t Aftertreatment_2_Intake_Gas_NOx_Sensor_Heater_Ratio;
    uint16_t Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain;
    uint8_t Aftertreatment_2_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset;
    uint16_t NOx_Sensor_ATI2_Operation_Hours_Counter;
} getAT2IGC1_t ;
typedef struct getAT1OGC2 {
    uint8_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_Lambda;
    uint8_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_Correction_of_Pressure_NOx;
    uint8_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_NO2_Correction;
    uint8_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_NH3_Correction;
    uint8_t NOx_Sensor_ATO1_Self_diagnosis_Final_Result;
} getAT1OGC2_t ;
typedef struct getAT1OGC1 {
    uint16_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_Heater_Ratio;
    uint16_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Gain;
    uint8_t Aftertreatment_1_Outlet_Gas_NOx_Sensor_New_Part_Deviation_NOx_Offset;
    uint16_t NOx_Sensor_ATO1_Operation_Hours_Counter;
} getAT1OGC1_t ;
typedef struct getAT1IGC2 {
    uint8_t Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_Lambda;
    uint8_t Aftertreatment_1_Intake_Gas_NOx_Sensor_Correction_of_Pressure_NOx;
    uint8_t Aftertreatment_1_Intake_Gas_NOx_Sensor_NO2_Correction;
    uint8_t Aftertreatment_1_Intake_Gas_NOx_Sensor_NH3_Correction;
    uint8_t NOx_Sensor_ATI1_Self_diagnosis_Final_Result;
} getAT1IGC2_t ;
typedef struct getAT1IGC1 {
    uint16_t Aftertreatment_1_Intake_Gas_NOx_Sensor_Heater_Ratio;
    uint16_t Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Gain;
    uint8_t Aftertreatment_1_Intake_Gas_NOx_Sensor_New_part_deviation_NOx_Offset;
    uint16_t NOx_Sensor_ATI1_Operation_Hours_Counter;
} getAT1IGC1_t ;
typedef struct getMSI1 {
    struct MSI1_byte1 {
        uint8_t Generator_Overheat_Status:2;
        uint8_t Genset_System_Output_Voltage_Range_Status:2;
        uint8_t Grapple_Magnet_Selection_Switch:2;
        uint8_t Genset_Softstart_Active_Status:2;
    }MSI1_byte1;
    struct MSI1_byte1 bt1 ;
    struct MSI1_byte2 {
        uint8_t Reverse_Current_Range_Setting:5;
    }MSI1_byte2;
    struct MSI1_byte2 bt2 ;
    struct MSI1_byte3 {
        uint8_t Genset_Enable_Active_Status:2;
        uint8_t Voltage_Monitor_Active_Status:2;
        uint8_t Generator_Duty_Cycle_Exceeded_Status:2;
    }MSI1_byte3;
    struct MSI1_byte3 bt3 ;
} getMSI1_t ;
typedef struct getMSCI {
    uint8_t Magnet_Boost_Time;
    uint16_t Magnet_Rated_Power;
} getMSCI_t ;
typedef struct getBCH2 {
    struct BCH2_byte1 {
        uint8_t Battery_Charger_2_State:4;
        uint8_t Battery_Charger_2_Power_Line_State:2;
    }BCH2_byte1;
    struct BCH2_byte1 bt1 ;
    uint16_t Battery_Charger_2_Output_Voltage;
    uint16_t Battery_Charger_2_Output_Current;
} getBCH2_t ;
typedef struct getBCH1 {
    struct BCH1_byte1 {
        uint8_t Battery_Charger_1_State:4;
        uint8_t Battery_Charger_1_Power_Line_State:2;
    }BCH1_byte1;
    struct BCH1_byte1 bt1 ;
    uint16_t Battery_Charger_1_Output_Voltage;
    uint16_t Battery_Charger_1_Output_Current;
} getBCH1_t ;
typedef struct getOCSI {
    struct OCSI_byte1 {
        uint8_t Driver_Occupant_Classification_System_Status:3;
        uint8_t Passenger_Occupant_Classification_System_Status:3;
    }OCSI_byte1;
    struct OCSI_byte1 bt1 ;
    struct OCSI_byte2 {
        uint8_t Occupant_Classification_System_3_Status:2;
        uint8_t Occupant_Classification_System_4_Status:2;
        uint8_t Occupant_Classification_System_5_Status:2;
        uint8_t Occupant_Classification_System_6_Status:2;
    }OCSI_byte2;
    struct OCSI_byte2 bt2 ;
    struct OCSI_byte3 {
        uint8_t Occupant_Classification_System_7_Status:2;
        uint8_t Occupant_Classification_System_8_Status:2;
        uint8_t Occupant_Classification_System_9_Status:2;
        uint8_t Occupant_Classification_System_10_Status:2;
    }OCSI_byte3;
    struct OCSI_byte3 bt3 ;
} getOCSI_t ;
typedef struct getBDS {
    struct BDS_byte1 {
        uint8_t Driver_Beltlock_Status:2;
        uint8_t Passenger_Beltlock_Status:2;
        uint8_t Beltlock_3_Status:2;
        uint8_t Beltlock_4_Status:2;
    }BDS_byte1;
    struct BDS_byte1 bt1 ;
    struct BDS_byte2 {
        uint8_t Beltlock_5_Status:2;
        uint8_t Beltlock_6_Status:2;
        uint8_t Beltlock_7_Status:2;
        uint8_t Beltlock_8_Status:2;
    }BDS_byte2;
    struct BDS_byte2 bt2 ;
    struct BDS_byte3 {
        uint8_t Beltlock_9_Status:2;
        uint8_t Beltlock_10_Status:2;
        uint8_t Passenger_Airbag_Deactivation_Switch_Status:2;
    }BDS_byte3;
    struct BDS_byte3 bt3 ;
} getBDS_t ;
typedef struct getCSI {
    struct CSI_byte1 {
        uint8_t Frontal_Collision_Sensor_1___Type:4;
        uint8_t Frontal_Collision_Sensor_2___Type:4;
    }CSI_byte1;
    struct CSI_byte1 bt1 ;
    struct CSI_byte2 {
        uint8_t Frontal_Collision_Sensor_3___Type:4;
        uint8_t Frontal_Collision_Sensor_4___Type:4;
    }CSI_byte2;
    struct CSI_byte2 bt2 ;
    struct CSI_byte3 {
        uint8_t Side_Collision_Sensor_Front_Left___Type:4;
        uint8_t Side_Collision_Sensor_Mid_Front_Left___Type:4;
    }CSI_byte3;
    struct CSI_byte3 bt3 ;
    struct CSI_byte4 {
        uint8_t Side_Collision_Sensor_Mid_Rear_Left___Type:4;
        uint8_t Side_Collision_Sensor_Rear_Left___Type:4;
    }CSI_byte4;
    struct CSI_byte4 bt4 ;
    struct CSI_byte5 {
        uint8_t Side_Collision_Sensor_Front_Right___Type:4;
        uint8_t Side_Collision_Sensor_Mid_Front_Right___Type:4;
    }CSI_byte5;
    struct CSI_byte5 bt5 ;
    struct CSI_byte6 {
        uint8_t Side_Collision_Sensor_Mid_Rear_Right___Type:4;
        uint8_t Side_Collision_Sensor_Rear_Right___Type:4;
    }CSI_byte6;
    struct CSI_byte6 bt6 ;
    struct CSI_byte7 {
        uint8_t Rear_Collision_Sensor_1___Type:4;
        uint8_t Rear_Collision_Sensor_2___Type:4;
    }CSI_byte7;
    struct CSI_byte7 bt7 ;
    struct CSI_byte8 {
        uint8_t Rear_Collision_Sensor_3___Type:4;
        uint8_t Rear_Collision_Sensor_4___Type:4;
    }CSI_byte8;
    struct CSI_byte8 bt8 ;
    struct CSI_byte9 {
        uint8_t Rollover_Sensor___Type:4;
    }CSI_byte9;
    struct CSI_byte9 bt9 ;
} getCSI_t ;
typedef struct getILI {
    uint16_t Driver_Airbag_Ignitor_Loop_1st_Stage___Resistance;
    uint16_t Passenger_Airbag_Ignitor_Loop_1st_Stage___Resistance;
    uint16_t Driver_Airbag_Ignitor_Loop_2nd_Stage___Resistance;
    uint16_t Passenger_Airbag_Ignitor_Loop_2nd_Stage___Resistance;
    uint16_t Driver_Belt_Tensioner_Ignitior_Loop___Resistance;
    uint16_t Passenger_Belt_Tensioner_Ignitor_Loop___Resistance;
    uint16_t Side_Bag_Ignitor_Loop_1___Left___Resistance;
    uint16_t Side_Bag_Ignitor_Loop_2___Left___Resistance;
    uint16_t Side_Bag_Ignitor_Loop_1___Right___Resistance;
    uint16_t Side_Bag_Ignitor_Loop_2___Right___Resistance;
    uint16_t Special_Ignitor_Loop_1___Resistance;
    uint16_t Special_Ignitor_Loop_2___Resistance;
    uint16_t Special_Ignitor_Loop_3___Resistance;
    uint16_t Special_Ignitor_Loop_4___Resistance;
    uint16_t Special_Ignitor_Loop_5___Resistance;
    uint16_t Special_Ignitor_Loop_6___Resistance;
    uint16_t Special_Ignitor_Loop_7___Resistance;
    uint16_t Special_Ignitor_Loop_8___Resistance;
    uint16_t Special_Ignitor_Loop_9___Resistance;
    uint16_t Special_Ignitor_Loop_10___Resistance;
    uint16_t Special_Ignitor_Loop_11___Resistance;
    uint16_t Special_Ignitor_Loop_12___Resistance;
    uint16_t Special_Ignitor_Loop_13___Resistance;
    uint16_t Special_Ignitor_Loop_14___Resistance;
    uint16_t Special_Ignitor_Loop_15___Resistance;
    uint16_t Special_Ignitor_Loop_16___Resistance;
    uint16_t Special_Ignitor_Loop_17___Resistance;
    uint16_t Special_Ignitor_Loop_18___Resistance;
    uint16_t Special_Ignitor_Loop_19___Resistance;
    uint16_t Special_Ignitor_Loop_20___Resistance;
    uint16_t Special_Ignitor_Loop_21___Resistance;
    uint16_t Special_Ignitor_Loop_22___Resistance;
    uint16_t Special_Ignitor_Loop_23___Resistance;
    uint16_t Special_Ignitor_Loop_24___Resistance;
    uint16_t Special_Ignitor_Loop_25___Resistance;
    uint16_t Special_Ignitor_Loop_26___Resistance;
    uint16_t Special_Ignitor_Loop_27___Resistance;
    uint16_t Special_Ignitor_Loop_28___Resistance;
    uint16_t Special_Ignitor_Loop_29___Resistance;
    uint16_t Special_Ignitor_Loop_30___Resistance;
    uint16_t Special_Ignitor_Loop_31___Resistance;
    uint16_t Special_Ignitor_Loop_32___Resistance;
    uint16_t Special_Ignitor_Loop_33___Resistance;
    uint16_t Special_Ignitor_Loop_34___Resistance;
    uint16_t Special_Ignitor_Loop_35___Resistance;
    uint16_t Special_Ignitor_Loop_36___Resistance;
    uint16_t Special_Ignitor_Loop_37___Resistance;
    uint16_t Special_Ignitor_Loop_38___Resistance;
    uint16_t Special_Ignitor_Loop_39___Resistance;
    uint16_t Special_Ignitor_Loop_40___Resistance;
    uint16_t Special_Ignitor_Loop_41___Resistance;
    uint16_t Special_Ignitor_Loop_42___Resistance;
    uint16_t Special_Ignitor_Loop_43___Resistance;
    uint16_t Special_Ignitor_Loop_44___Resistance;
    uint16_t Special_Ignitor_Loop_45___Resistance;
    uint16_t Special_Ignitor_Loop_46___Resistance;
    uint16_t Special_Ignitor_Loop_47___Resistance;
    uint16_t Special_Ignitor_Loop_48___Resistance;
    uint16_t Special_Ignitor_Loop_49___Resistance;
    uint16_t Special_Ignitor_Loop_50___Resistance;
    uint16_t Special_Ignitor_Loop_51___Resistance;
    uint16_t Special_Ignitor_Loop_52___Resistance;
    uint16_t Special_Ignitor_Loop_53___Resistance;
    uint16_t Special_Ignitor_Loop_54___Resistance;
    uint16_t Special_Ignitor_Loop_55___Resistance;
    uint16_t Special_Ignitor_Loop_56___Resistance;
    uint16_t Special_Ignitor_Loop_57___Resistance;
    uint16_t Special_Ignitor_Loop_58___Resistance;
    uint16_t Special_Ignitor_Loop_59___Resistance;
    uint16_t Special_Ignitor_Loop_60___Resistance;
    uint16_t Special_Ignitor_Loop_61___Resistance;
    uint16_t Special_Ignitor_Loop_62___Resistance;
    uint16_t Special_Ignitor_Loop_63___Resistance;
    uint16_t Special_Ignitor_Loop_64___Resistance;
    uint16_t Special_Ignitor_Loop_65___Resistance;
    uint16_t Special_Ignitor_Loop_66___Resistance;
    uint16_t Special_Ignitor_Loop_67___Resistance;
    uint16_t Special_Ignitor_Loop_68___Resistance;
    uint16_t Special_Ignitor_Loop_69___Resistance;
    uint16_t Special_Ignitor_Loop_70___Resistance;
    uint16_t Special_Ignitor_Loop_71___Resistance;
    uint16_t Special_Ignitor_Loop_72___Resistance;
    uint16_t Special_Ignitor_Loop_73___Resistance;
    uint16_t Special_Ignitor_Loop_74___Resistance;
    uint16_t Special_Ignitor_Loop_75___Resistance;
    uint16_t Special_Ignitor_Loop_76___Resistance;
    uint16_t Special_Ignitor_Loop_77___Resistance;
    uint16_t Special_Ignitor_Loop_78___Resistance;
    uint16_t Special_Ignitor_Loop_79___Resistance;
    uint16_t Special_Ignitor_Loop_80___Resistance;
    uint16_t Special_Ignitor_Loop_81___Resistance;
    uint16_t Special_Ignitor_Loop_82___Resistance;
    uint16_t Special_Ignitor_Loop_83___Resistance;
    uint16_t Special_Ignitor_Loop_84___Resistance;
    uint16_t Special_Ignitor_Loop_85___Resistance;
    uint16_t Special_Ignitor_Loop_86___Resistance;
    uint16_t Special_Ignitor_Loop_87___Resistance;
    uint16_t Special_Ignitor_Loop_88___Resistance;
    uint16_t Special_Ignitor_Loop_89___Resistance;
    uint16_t Special_Ignitor_Loop_90___Resistance;
} getILI_t ;
typedef struct getAT1WUDOC {
    uint16_t Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Intake_Temperature;
    uint16_t Aftertreatment_1_Warm_Up_Diesel_Oxidation_Catalyst_Outlet_Temperature;
} getAT1WUDOC_t ;
typedef struct getDPF2S {
    uint8_t Diesel_Particulate_Filter_2_Soot_Mass;
    uint8_t Diesel_Particulate_Filter_2_Soot_Density;
    uint16_t Diesel_Particulate_Filter_2_Mean_Soot_Signal;
    uint16_t Diesel_Particulate_Filter_2_Median_Soot_Signal;
    struct DPF2S_byte7 {
        uint8_t Diesel_Particulate_Filter_2_Soot_Sensor_Preliminary_FMI:5;
    }DPF2S_byte7;
    struct DPF2S_byte7 bt7 ;
    uint8_t Diesel_Particulate_Filter_2_Soot_Sensor_ECU_Internal_Temperature;
} getDPF2S_t ;
typedef struct getDPF1S {
    uint8_t Diesel_Particulate_Filter_1_Soot_Mass;
    uint8_t Diesel_Particulate_Filter_1_Soot_Density;
    uint16_t Diesel_Particulate_Filter_1_Mean_Soot_Signal;
    uint16_t Diesel_Particulate_Filter_1_Median_Soot_Signal;
    struct DPF1S_byte7 {
        uint8_t Diesel_Particulate_Filter_1_Soot_Sensor_Preliminary_FMI:5;
    }DPF1S_byte7;
    struct DPF1S_byte7 bt7 ;
    uint8_t Diesel_Particulate_Filter_1_Soot_Sensor_ECU_Internal_Temperature;
} getDPF1S_t ;
typedef struct getATDT2 {
    uint16_t Aftertreatment_1_Three_Way_Catalyst_Differential_Gas_Temperature;
    uint16_t Aftertreatment_2_Three_Way_Catalyst_Differential_Gas_Temperature;
} getATDT2_t ;
typedef struct getATDT1 {
    uint16_t Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Gas_Temperature;
    uint16_t Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Gas_Temperature;
} getATDT1_t ;
typedef struct getA2DOC {
    uint16_t Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature;
    uint16_t Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature;
    uint16_t Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure;
    struct A2DOC_byte7 {
        uint8_t Aftertreatment_2_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_2_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }A2DOC_byte7;
    struct A2DOC_byte7 bt7 ;
    struct A2DOC_byte8 {
        uint8_t Aftertreatment_2_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI:5;
    }A2DOC_byte8;
    struct A2DOC_byte8 bt8 ;
} getA2DOC_t ;
typedef struct getA1DOC {
    uint16_t Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature;
    uint16_t Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature;
    uint16_t Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure;
    struct A1DOC_byte7 {
        uint8_t Aftertreatment_1_Diesel_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_1_Diesel_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }A1DOC_byte7;
    struct A1DOC_byte7 bt7 ;
    struct A1DOC_byte8 {
        uint8_t Aftertreatment_1_Diesel_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI:5;
    }A1DOC_byte8;
    struct A1DOC_byte8 bt8 ;
} getA1DOC_t ;
typedef struct getA2GOC {
    uint16_t Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature;
    uint16_t Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature;
    uint16_t Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure;
    struct A2GOC_byte7 {
        uint8_t Aftertreatment_2_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_2_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }A2GOC_byte7;
    struct A2GOC_byte7 bt7 ;
    struct A2GOC_byte8 {
        uint8_t Aftertreatment_2_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI:5;
    }A2GOC_byte8;
    struct A2GOC_byte8 bt8 ;
} getA2GOC_t ;
typedef struct getA1GOC {
    uint16_t Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature;
    uint16_t Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature;
    uint16_t Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure;
    struct A1GOC_byte7 {
        uint8_t Aftertreatment_1_Gas_Oxidation_Catalyst_Intake_Gas_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_1_Gas_Oxidation_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }A1GOC_byte7;
    struct A1GOC_byte7 bt7 ;
    struct A1GOC_byte8 {
        uint8_t Aftertreatment_1_Gas_Oxidation_Catalyst_Differential_Pressure_Preliminary_FMI:5;
    }A1GOC_byte8;
    struct A1GOC_byte8 bt8 ;
} getA1GOC_t ;
typedef struct getEJM10 {
    struct EJM10_byte1 {
        uint8_t Joystick_10_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_10_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_10_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_10_Grip_X_Axis_Position:1;
    }EJM10_byte1;
    struct EJM10_byte1 bt1 ;
    struct EJM10_byte3 {
        uint8_t Joystick_10_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_10_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_10_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_10_Grip_Y_Axis_Position:1;
    }EJM10_byte3;
    struct EJM10_byte3 bt3 ;
    struct EJM10_byte5 {
        uint8_t Joystick_10_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_10_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_10_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_10_Theta_Axis_Position:1;
    }EJM10_byte5;
    struct EJM10_byte5 bt5 ;
    struct EJM10_byte7 {
        uint8_t Joystick_10_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_10_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_10_Grip_X_Axis_Detent_Position_Status:2;
    }EJM10_byte7;
    struct EJM10_byte7 bt7 ;
} getEJM10_t ;
typedef struct getBJM10 {
    struct BJM10_byte1 {
        uint8_t Joystick_10_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_10_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_10_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_10_X_Axis_Position:1;
    }BJM10_byte1;
    struct BJM10_byte1 bt1 ;
    struct BJM10_byte3 {
        uint8_t Joystick_10_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_10_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_10_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_10_Y_Axis_Position:1;
    }BJM10_byte3;
    struct BJM10_byte3 bt3 ;
    struct BJM10_byte5 {
        uint8_t Joystick_10_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_10_X_Axis_Detent_Position_Status:2;
    }BJM10_byte5;
    struct BJM10_byte5 bt5 ;
    struct BJM10_byte6 {
        uint8_t Joystick_10_Button_4_Pressed_Status:2;
        uint8_t Joystick_10_Button_3_Pressed_Status:2;
        uint8_t Joystick_10_Button_2_Pressed_Status:2;
        uint8_t Joystick_10_Button_1_Pressed_Status:2;
    }BJM10_byte6;
    struct BJM10_byte6 bt6 ;
    struct BJM10_byte7 {
        uint8_t Joystick_10_Button_8_Pressed_Status:2;
        uint8_t Joystick_10_Button_7_Pressed_Status:2;
        uint8_t Joystick_10_Button_6_Pressed_Status:2;
        uint8_t Joystick_10_Button_5_Pressed_Status:2;
    }BJM10_byte7;
    struct BJM10_byte7 bt7 ;
    struct BJM10_byte8 {
        uint8_t Joystick_10_Button_12_Pressed_Status:2;
        uint8_t Joystick_10_Button_11_Pressed_Status:2;
        uint8_t Joystick_10_Button_10_Pressed_Status:2;
        uint8_t Joystick_10_Button_9_Pressed_Status:2;
    }BJM10_byte8;
    struct BJM10_byte8 bt8 ;
} getBJM10_t ;
typedef struct getEJM9 {
    struct EJM9_byte1 {
        uint8_t Joystick_9_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_9_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_9_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_9_Grip_X_Axis_Position:1;
    }EJM9_byte1;
    struct EJM9_byte1 bt1 ;
    struct EJM9_byte3 {
        uint8_t Joystick_9_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_9_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_9_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_9_Grip_Y_Axis_Position:1;
    }EJM9_byte3;
    struct EJM9_byte3 bt3 ;
    struct EJM9_byte5 {
        uint8_t Joystick_9_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_9_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_9_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_9_Theta_Axis_Position:1;
    }EJM9_byte5;
    struct EJM9_byte5 bt5 ;
    struct EJM9_byte7 {
        uint8_t Joystick_9_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_9_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_9_Grip_X_Axis_Detent_Position_Status:2;
    }EJM9_byte7;
    struct EJM9_byte7 bt7 ;
} getEJM9_t ;
typedef struct getBJM9 {
    struct BJM9_byte1 {
        uint8_t Joystick_9_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_9_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_9_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_9_X_Axis_Position:1;
    }BJM9_byte1;
    struct BJM9_byte1 bt1 ;
    struct BJM9_byte3 {
        uint8_t Joystick_9_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_9_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_9_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_9_Y_Axis_Position:1;
    }BJM9_byte3;
    struct BJM9_byte3 bt3 ;
    struct BJM9_byte5 {
        uint8_t Joystick_9_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_9_X_Axis_Detent_Position_Status:2;
    }BJM9_byte5;
    struct BJM9_byte5 bt5 ;
    struct BJM9_byte6 {
        uint8_t Joystick_9_Button_4_Pressed_Status:2;
        uint8_t Joystick_9_Button_3_Pressed_Status:2;
        uint8_t Joystick_9_Button_2_Pressed_Status:2;
        uint8_t Joystick_9_Button_1_Pressed_Status:2;
    }BJM9_byte6;
    struct BJM9_byte6 bt6 ;
    struct BJM9_byte7 {
        uint8_t Joystick_9_Button_8_Pressed_Status:2;
        uint8_t Joystick_9_Button_7_Pressed_Status:2;
        uint8_t Joystick_9_Button_6_Pressed_Status:2;
        uint8_t Joystick_9_Button_5_Pressed_Status:2;
    }BJM9_byte7;
    struct BJM9_byte7 bt7 ;
    struct BJM9_byte8 {
        uint8_t Joystick_9_Button_12_Pressed_Status:2;
        uint8_t Joystick_9_Button_11_Pressed_Status:2;
        uint8_t Joystick_9_Button_10_Pressed_Status:2;
        uint8_t Joystick_9_Button_9_Pressed_Status:2;
    }BJM9_byte8;
    struct BJM9_byte8 bt8 ;
} getBJM9_t ;
typedef struct getEJM8 {
    struct EJM8_byte1 {
        uint8_t Joystick_8_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_8_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_8_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_8_Grip_X_Axis_Position:1;
    }EJM8_byte1;
    struct EJM8_byte1 bt1 ;
    struct EJM8_byte3 {
        uint8_t Joystick_8_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_8_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_8_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_8_Grip_Y_Axis_Position:1;
    }EJM8_byte3;
    struct EJM8_byte3 bt3 ;
    struct EJM8_byte5 {
        uint8_t Joystick_8_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_8_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_8_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_8_Theta_Axis_Position:1;
    }EJM8_byte5;
    struct EJM8_byte5 bt5 ;
    struct EJM8_byte7 {
        uint8_t Joystick_8_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_8_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_8_Grip_X_Axis_Detent_Position_Status:2;
    }EJM8_byte7;
    struct EJM8_byte7 bt7 ;
} getEJM8_t ;
typedef struct getBJM8 {
    struct BJM8_byte1 {
        uint8_t Joystick_8_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_8_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_8_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_8_X_Axis_Position:1;
    }BJM8_byte1;
    struct BJM8_byte1 bt1 ;
    struct BJM8_byte3 {
        uint8_t Joystick_8_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_8_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_8_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_8_Y_Axis_Position:1;
    }BJM8_byte3;
    struct BJM8_byte3 bt3 ;
    struct BJM8_byte5 {
        uint8_t Joystick_8_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_8_X_Axis_Detent_Position_Status:2;
    }BJM8_byte5;
    struct BJM8_byte5 bt5 ;
    struct BJM8_byte6 {
        uint8_t Joystick_8_Button_4_Pressed_Status:2;
        uint8_t Joystick_8_Button_3_Pressed_Status:2;
        uint8_t Joystick_8_Button_2_Pressed_Status:2;
        uint8_t Joystick_8_Button_1_Pressed_Status:2;
    }BJM8_byte6;
    struct BJM8_byte6 bt6 ;
    struct BJM8_byte7 {
        uint8_t Joystick_8_Button_8_Pressed_Status:2;
        uint8_t Joystick_8_Button_7_Pressed_Status:2;
        uint8_t Joystick_8_Button_6_Pressed_Status:2;
        uint8_t Joystick_8_Button_5_Pressed_Status:2;
    }BJM8_byte7;
    struct BJM8_byte7 bt7 ;
    struct BJM8_byte8 {
        uint8_t Joystick_8_Button_12_Pressed_Status:2;
        uint8_t Joystick_8_Button_11_Pressed_Status:2;
        uint8_t Joystick_8_Button_10_Pressed_Status:2;
        uint8_t Joystick_8_Button_9_Pressed_Status:2;
    }BJM8_byte8;
    struct BJM8_byte8 bt8 ;
} getBJM8_t ;
typedef struct getEJM7 {
    struct EJM7_byte1 {
        uint8_t Joystick_7_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_7_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_7_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_7_Grip_X_Axis_Position:1;
    }EJM7_byte1;
    struct EJM7_byte1 bt1 ;
    struct EJM7_byte3 {
        uint8_t Joystick_7_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_7_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_7_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_7_Grip_Y_Axis_Position:1;
    }EJM7_byte3;
    struct EJM7_byte3 bt3 ;
    struct EJM7_byte5 {
        uint8_t Joystick_7_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_7_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_7_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_7_Theta_Axis_Position:1;
    }EJM7_byte5;
    struct EJM7_byte5 bt5 ;
    struct EJM7_byte7 {
        uint8_t Joystick_7_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_7_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_7_Grip_X_Axis_Detent_Position_Status:2;
    }EJM7_byte7;
    struct EJM7_byte7 bt7 ;
} getEJM7_t ;
typedef struct getBJM7 {
    struct BJM7_byte1 {
        uint8_t Joystick_7_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_7_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_7_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_7_X_Axis_Position:1;
    }BJM7_byte1;
    struct BJM7_byte1 bt1 ;
    struct BJM7_byte3 {
        uint8_t Joystick_7_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_7_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_7_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_7_Y_Axis_Position:1;
    }BJM7_byte3;
    struct BJM7_byte3 bt3 ;
    struct BJM7_byte5 {
        uint8_t Joystick_7_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_7_X_Axis_Detent_Position_Status:2;
    }BJM7_byte5;
    struct BJM7_byte5 bt5 ;
    struct BJM7_byte6 {
        uint8_t Joystick_7_Button_4_Pressed_Status:2;
        uint8_t Joystick_7_Button_3_Pressed_Status:2;
        uint8_t Joystick_7_Button_2_Pressed_Status:2;
        uint8_t Joystick_7_Button_1_Pressed_Status:2;
    }BJM7_byte6;
    struct BJM7_byte6 bt6 ;
    struct BJM7_byte7 {
        uint8_t Joystick_7_Button_8_Pressed_Status:2;
        uint8_t Joystick_7_Button_7_Pressed_Status:2;
        uint8_t Joystick_7_Button_6_Pressed_Status:2;
        uint8_t Joystick_7_Button_5_Pressed_Status:2;
    }BJM7_byte7;
    struct BJM7_byte7 bt7 ;
    struct BJM7_byte8 {
        uint8_t Joystick_7_Button_12_Pressed_Status:2;
        uint8_t Joystick_7_Button_11_Pressed_Status:2;
        uint8_t Joystick_7_Button_10_Pressed_Status:2;
        uint8_t Joystick_7_Button_9_Pressed_Status:2;
    }BJM7_byte8;
    struct BJM7_byte8 bt8 ;
} getBJM7_t ;
typedef struct getEJM6 {
    struct EJM6_byte1 {
        uint8_t Joystick_6_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_6_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_6_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_6_Grip_X_Axis_Position:1;
    }EJM6_byte1;
    struct EJM6_byte1 bt1 ;
    struct EJM6_byte3 {
        uint8_t Joystick_6_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_6_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_6_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_6_Grip_Y_Axis_Position:1;
    }EJM6_byte3;
    struct EJM6_byte3 bt3 ;
    struct EJM6_byte5 {
        uint8_t Joystick_6_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_6_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_6_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_6_Theta_Axis_Position:1;
    }EJM6_byte5;
    struct EJM6_byte5 bt5 ;
    struct EJM6_byte7 {
        uint8_t Joystick_6_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_6_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_6_Grip_X_Axis_Detent_Position_Status:2;
    }EJM6_byte7;
    struct EJM6_byte7 bt7 ;
} getEJM6_t ;
typedef struct getBJM6 {
    struct BJM6_byte1 {
        uint8_t Joystick_6_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_6_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_6_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_6_X_Axis_Position:1;
    }BJM6_byte1;
    struct BJM6_byte1 bt1 ;
    struct BJM6_byte3 {
        uint8_t Joystick_6_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_6_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_6_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_6_Y_Axis_Position:1;
    }BJM6_byte3;
    struct BJM6_byte3 bt3 ;
    struct BJM6_byte5 {
        uint8_t Joystick_6_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_6_X_Axis_Detent_Position_Status:2;
    }BJM6_byte5;
    struct BJM6_byte5 bt5 ;
    struct BJM6_byte6 {
        uint8_t Joystick_6_Button_4_Pressed_Status:2;
        uint8_t Joystick_6_Button_3_Pressed_Status:2;
        uint8_t Joystick_6_Button_2_Pressed_Status:2;
        uint8_t Joystick_6_Button_1_Pressed_Status:2;
    }BJM6_byte6;
    struct BJM6_byte6 bt6 ;
    struct BJM6_byte7 {
        uint8_t Joystick_6_Button_8_Pressed_Status:2;
        uint8_t Joystick_6_Button_7_Pressed_Status:2;
        uint8_t Joystick_6_Button_6_Pressed_Status:2;
        uint8_t Joystick_6_Button_5_Pressed_Status:2;
    }BJM6_byte7;
    struct BJM6_byte7 bt7 ;
    struct BJM6_byte8 {
        uint8_t Joystick_6_Button_12_Pressed_Status:2;
        uint8_t Joystick_6_Button_11_Pressed_Status:2;
        uint8_t Joystick_6_Button_10_Pressed_Status:2;
        uint8_t Joystick_6_Button_9_Pressed_Status:2;
    }BJM6_byte8;
    struct BJM6_byte8 bt8 ;
} getBJM6_t ;
typedef struct getEJM5 {
    struct EJM5_byte1 {
        uint8_t Joystick_5_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_5_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_5_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_5_Grip_X_Axis_Position:1;
    }EJM5_byte1;
    struct EJM5_byte1 bt1 ;
    struct EJM5_byte3 {
        uint8_t Joystick_5_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_5_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_5_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_5_Grip_Y_Axis_Position:1;
    }EJM5_byte3;
    struct EJM5_byte3 bt3 ;
    struct EJM5_byte5 {
        uint8_t Joystick_5_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_5_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_5_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_5_Theta_Axis_Position:1;
    }EJM5_byte5;
    struct EJM5_byte5 bt5 ;
    struct EJM5_byte7 {
        uint8_t Joystick_5_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_5_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_5_Grip_X_Axis_Detent_Position_Status:2;
    }EJM5_byte7;
    struct EJM5_byte7 bt7 ;
} getEJM5_t ;
typedef struct getBJM5 {
    struct BJM5_byte1 {
        uint8_t Joystick_5_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_5_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_5_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_5_X_Axis_Position:1;
    }BJM5_byte1;
    struct BJM5_byte1 bt1 ;
    struct BJM5_byte3 {
        uint8_t Joystick_5_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_5_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_5_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_5_Y_Axis_Position:1;
    }BJM5_byte3;
    struct BJM5_byte3 bt3 ;
    struct BJM5_byte5 {
        uint8_t Joystick_5_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_5_X_Axis_Detent_Position_Status:2;
    }BJM5_byte5;
    struct BJM5_byte5 bt5 ;
    struct BJM5_byte6 {
        uint8_t Joystick_5_Button_4_Pressed_Status:2;
        uint8_t Joystick_5_Button_3_Pressed_Status:2;
        uint8_t Joystick_5_Button_2_Pressed_Status:2;
        uint8_t Joystick_5_Button_1_Pressed_Status:2;
    }BJM5_byte6;
    struct BJM5_byte6 bt6 ;
    struct BJM5_byte7 {
        uint8_t Joystick_5_Button_8_Pressed_Status:2;
        uint8_t Joystick_5_Button_7_Pressed_Status:2;
        uint8_t Joystick_5_Button_6_Pressed_Status:2;
        uint8_t Joystick_5_Button_5_Pressed_Status:2;
    }BJM5_byte7;
    struct BJM5_byte7 bt7 ;
    struct BJM5_byte8 {
        uint8_t Joystick_5_Button_12_Pressed_Status:2;
        uint8_t Joystick_5_Button_11_Pressed_Status:2;
        uint8_t Joystick_5_Button_10_Pressed_Status:2;
        uint8_t Joystick_5_Button_9_Pressed_Status:2;
    }BJM5_byte8;
    struct BJM5_byte8 bt8 ;
} getBJM5_t ;
typedef struct getEJM4 {
    struct EJM4_byte1 {
        uint8_t Joystick_4_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_4_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_4_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_4_Grip_X_Axis_Position:1;
    }EJM4_byte1;
    struct EJM4_byte1 bt1 ;
    struct EJM4_byte3 {
        uint8_t Joystick_4_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_4_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_4_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_4_Grip_Y_Axis_Position:1;
    }EJM4_byte3;
    struct EJM4_byte3 bt3 ;
    struct EJM4_byte5 {
        uint8_t Joystick_4_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_4_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_4_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_4_Theta_Axis_Position:1;
    }EJM4_byte5;
    struct EJM4_byte5 bt5 ;
    struct EJM4_byte7 {
        uint8_t Joystick_4_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_4_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_4_Grip_X_Axis_Detent_Position_Status:2;
    }EJM4_byte7;
    struct EJM4_byte7 bt7 ;
} getEJM4_t ;
typedef struct getBJM4 {
    struct BJM4_byte1 {
        uint8_t Joystick_4_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_4_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_4_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_4_X_Axis_Position:1;
    }BJM4_byte1;
    struct BJM4_byte1 bt1 ;
    struct BJM4_byte3 {
        uint8_t Joystick_4_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_4_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_4_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_4_Y_Axis_Position:1;
    }BJM4_byte3;
    struct BJM4_byte3 bt3 ;
    struct BJM4_byte5 {
        uint8_t Joystick_4_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_4_X_Axis_Detent_Position_Status:2;
    }BJM4_byte5;
    struct BJM4_byte5 bt5 ;
    struct BJM4_byte6 {
        uint8_t Joystick_4_Button_4_Pressed_Status:2;
        uint8_t Joystick_4_Button_3_Pressed_Status:2;
        uint8_t Joystick_4_Button_2_Pressed_Status:2;
        uint8_t Joystick_4_Button_1_Pressed_Status:2;
    }BJM4_byte6;
    struct BJM4_byte6 bt6 ;
    struct BJM4_byte7 {
        uint8_t Joystick_4_Button_8_Pressed_Status:2;
        uint8_t Joystick_4_Button_7_Pressed_Status:2;
        uint8_t Joystick_4_Button_6_Pressed_Status:2;
        uint8_t Joystick_4_Button_5_Pressed_Status:2;
    }BJM4_byte7;
    struct BJM4_byte7 bt7 ;
    struct BJM4_byte8 {
        uint8_t Joystick_4_Button_12_Pressed_Status:2;
        uint8_t Joystick_4_Button_11_Pressed_Status:2;
        uint8_t Joystick_4_Button_10_Pressed_Status:2;
        uint8_t Joystick_4_Button_9_Pressed_Status:2;
    }BJM4_byte8;
    struct BJM4_byte8 bt8 ;
} getBJM4_t ;
typedef struct getFD2 {
    uint8_t Estimated_Percent_Fan_2_Speed;
    struct FD2_byte2 {
        uint8_t Fan_2_Drive_State:4;
    }FD2_byte2;
    struct FD2_byte2 bt2 ;
    uint16_t Fan_2_Speed;
    uint16_t Hydraulic_Fan_2_Motor_Pressure;
    uint8_t Fan_2_Drive_Bypass_Command_Status;
} getFD2_t ;
typedef struct getA2DEFSI {
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Motor_Speed;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_Drive_Percentage;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Return_Valve;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command;
    struct A2DEFSI_byte6 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Pump_State:2;
    }A2DEFSI_byte6;
    struct A2DEFSI_byte6 bt6 ;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command;
} getA2DEFSI_t ;
typedef struct getA2SCRRT2I {
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature;
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_2;
    struct A2SCRRT2I_byte5 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI:5;
    }A2SCRRT2I_byte5;
    struct A2SCRRT2I_byte5 bt5 ;
    struct A2SCRRT2I_byte6 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI:5;
    }A2SCRRT2I_byte6;
    struct A2SCRRT2I_byte6 bt6 ;
    struct A2SCRRT2I_byte7 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater:4;
    }A2SCRRT2I_byte7;
    struct A2SCRRT2I_byte7 bt7 ;
    struct A2SCRRT2I_byte8 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI:5;
    }A2SCRRT2I_byte8;
    struct A2SCRRT2I_byte8 bt8 ;
} getA2SCRRT2I_t ;
typedef struct getA2SCRRT1I {
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Temperature;
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_2;
    struct A2SCRRT1I_byte5 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI:5;
    }A2SCRRT1I_byte5;
    struct A2SCRRT1I_byte5 bt5 ;
    struct A2SCRRT1I_byte6 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI:5;
    }A2SCRRT1I_byte6;
    struct A2SCRRT1I_byte6 bt6 ;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater;
    struct A2SCRRT1I_byte8 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI:5;
    }A2SCRRT1I_byte8;
    struct A2SCRRT1I_byte8 bt8 ;
} getA2SCRRT1I_t ;
typedef struct getA2DEFI {
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Concentration;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Conductivity;
    struct A2DEFI_byte4 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI:5;
    }A2DEFI_byte4;
    struct A2DEFI_byte4 bt4 ;
    struct A2DEFI_byte5 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI:5;
    }A2DEFI_byte5;
    struct A2DEFI_byte5 bt5 ;
    struct A2DEFI_byte6 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Type:4;
    }A2DEFI_byte6;
    struct A2DEFI_byte6 bt6 ;
} getA2DEFI_t ;
typedef struct getA2SCRSI {
    uint16_t Aftertreatment_2_Diesel_Exhaust_Fluid_Average_Consumption;
    uint16_t Aftertreatment_2_SCR_Commanded_Catalyst_Diesel_Exhaust_Fluid_Consumption;
    uint8_t Aftertreatment_2_SCR_Conversion_Efficiency;
} getA2SCRSI_t ;
typedef struct getA2SCREGT1 {
    uint16_t Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature;
    struct A2SCREGT1_byte3 {
        uint8_t Aftertreatment_2_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI:5;
    }A2SCREGT1_byte3;
    struct A2SCREGT1_byte3 bt3 ;
    uint16_t Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature;
    struct A2SCREGT1_byte6 {
        uint8_t Aftertreatment_2_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }A2SCREGT1_byte6;
    struct A2SCREGT1_byte6 bt6 ;
} getA2SCREGT1_t ;
typedef struct getA2SCREGP {
    uint16_t Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure;
    struct A2SCREGP_byte3 {
        uint8_t Aftertreatment_2_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI:5;
    }A2SCREGP_byte3;
    struct A2SCREGP_byte3 bt3 ;
} getA2SCREGP_t ;
typedef struct getA2SCRDSR2 {
    struct A2SCRDSR2_byte1 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Request:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request:3;
    }A2SCRDSR2_byte1;
    struct A2SCRDSR2_byte1 bt1 ;
    struct A2SCRDSR2_byte2 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4:2;
    }A2SCRDSR2_byte2;
    struct A2SCRDSR2_byte2 bt2 ;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_Heater_Command;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Tank_2_Heater_Command;
} getA2SCRDSR2_t ;
typedef struct getA2SCRDSI2 {
    uint8_t Aftertreatment_2_SCR_Dosing_Air_Assist_Absolute_Pressure;
    uint8_t Aftertreatment_2_SCR_Dosing_Air_Assist_Valve;
    uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Dosing_Temperature;
    struct A2SCRDSI2_byte4 {
        uint8_t Aftertreatment_2_SCR_Dosing_Valve_Exhaust_Temp__Reduction_Request:3;
        uint8_t Aftertreatment_2_SCR_Feedback_Control_Status:3;
    }A2SCRDSI2_byte4;
    struct A2SCRDSI2_byte4 bt4 ;
    struct A2SCRDSI2_byte5 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_State:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI:5;
    }A2SCRDSI2_byte5;
    struct A2SCRDSI2_byte5 bt5 ;
    struct A2SCRDSI2_byte6 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_State:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI:5;
    }A2SCRDSI2_byte6;
    struct A2SCRDSI2_byte6 bt6 ;
    struct A2SCRDSI2_byte7 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_State:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI:5;
    }A2SCRDSI2_byte7;
    struct A2SCRDSI2_byte7 bt7 ;
    struct A2SCRDSI2_byte8 {
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_State:2;
        uint8_t Aftertreatment_2_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI:5;
    }A2SCRDSI2_byte8;
    struct A2SCRDSI2_byte8 bt8 ;
} getA2SCRDSI2_t ;
typedef struct getA1DEFSI {
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Motor_Speed;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Drive_Percentage;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Return_Valve;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Fill_Valve_Command;
    struct A1DEFSI_byte6 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_State:2;
    }A1DEFSI_byte6;
    struct A1DEFSI_byte6 bt6 ;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Drain_Valve_Command;
} getA1DEFSI_t ;
typedef struct getA1SCRRT2I {
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature;
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_2;
    struct A1SCRRT2I_byte5 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Level_Preliminary_FMI:5;
    }A1SCRRT2I_byte5;
    struct A1SCRRT2I_byte5 bt5 ;
    struct A1SCRRT2I_byte6 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Temperature_Prelminary_FMI:5;
    }A1SCRRT2I_byte6;
    struct A1SCRRT2I_byte6 bt6 ;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater;
    struct A1SCRRT2I_byte8 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Prelminary_FMI:5;
    }A1SCRRT2I_byte8;
    struct A1SCRRT2I_byte8 bt8 ;
} getA1SCRRT2I_t ;
typedef struct getA1SCREGT1 {
    uint16_t Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature;
    struct A1SCREGT1_byte3 {
        uint8_t Aftertreatment_1_SCR_Catalyst_Intake_Gas_Temperature_Preliminary_FMI:5;
    }A1SCREGT1_byte3;
    struct A1SCREGT1_byte3 bt3 ;
    uint16_t Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature;
    struct A1SCREGT1_byte6 {
        uint8_t Aftertreatment_1_SCR_Catalyst_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }A1SCREGT1_byte6;
    struct A1SCREGT1_byte6 bt6 ;
} getA1SCREGT1_t ;
typedef struct getA1SCREGP {
    uint16_t Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure;
    struct A1SCREGP_byte3 {
        uint8_t Aftertreatment_1_SCR_Exhaust_Gas_Differential_Pressure_Preliminary_FMI:5;
    }A1SCREGP_byte3;
    struct A1SCREGP_byte3 bt3 ;
} getA1SCREGP_t ;
typedef struct getA1SCRDSR2 {
    struct A1SCRDSR2_byte1 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Fault_Suppression_Request:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Doser_Heating_Mode_Request:3;
    }A1SCRDSR2_byte1;
    struct A1SCRDSR2_byte1 bt1 ;
    struct A1SCRDSR2_byte2 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4:2;
    }A1SCRDSR2_byte2;
    struct A1SCRDSR2_byte2 bt2 ;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater_Command;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_2_Heater_Command;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Pump_Heater_Command;
} getA1SCRDSR2_t ;
typedef struct getA1SCRDSI2 {
    uint8_t Aftertreatment_1_SCR_Dosing_Air_Assist_Absolute_Pressure;
    uint8_t Aftertreatment_1_SCR_Dosing_Air_Assist_Valve;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Dosing_Temperature;
    struct A1SCRDSI2_byte4 {
        uint8_t Aftertreatment_1_SCR_Dosing_Valve_Exhaust_Temperature_Reduction_Request:3;
        uint8_t Aftertreatment_1_SCR_Feedback_Control_Status:3;
    }A1SCRDSI2_byte4;
    struct A1SCRDSI2_byte4 bt4 ;
    struct A1SCRDSI2_byte5 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_State:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_1_Preliminary_FMI:5;
    }A1SCRDSI2_byte5;
    struct A1SCRDSI2_byte5 bt5 ;
    struct A1SCRDSI2_byte6 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_State:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_2_Preliminary_FMI:5;
    }A1SCRDSI2_byte6;
    struct A1SCRDSI2_byte6 bt6 ;
    struct A1SCRDSI2_byte7 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_State:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_3_Preliminary_FMI:5;
    }A1SCRDSI2_byte7;
    struct A1SCRDSI2_byte7 bt7 ;
    struct A1SCRDSI2_byte8 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_State:2;
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Line_Heater_4_Preliminary_FMI:5;
    }A1SCRDSI2_byte8;
    struct A1SCRDSI2_byte8 bt8 ;
} getA1SCRDSI2_t ;
typedef struct getAT2FC2 {
    uint16_t Aftertreatment_2_Fuel_Pressure_2;
    struct AT2FC2_byte3 {
        uint8_t Aftertreatment_2_Fuel_Pump_Relay_Control:2;
        uint8_t Aftertreatment_2_Fuel_Flow_Diverter_Valve_Control:2;
    }AT2FC2_byte3;
    struct AT2FC2_byte3 bt3 ;
    uint16_t Aftertreatment_2_Fuel_Pressure_2_Control;
} getAT2FC2_t ;
typedef struct getAT2TWCC {
    uint16_t Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature;
    uint16_t Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature;
    uint16_t Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure;
    struct AT2TWCC_byte7 {
        uint8_t Aftertreatment_2_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_2_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }AT2TWCC_byte7;
    struct AT2TWCC_byte7 bt7 ;
    struct AT2TWCC_byte8 {
        uint8_t Aftertreatment_2_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI:5;
    }AT2TWCC_byte8;
    struct AT2TWCC_byte8 bt8 ;
} getAT2TWCC_t ;
typedef struct getAT1TWCC {
    uint16_t Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature;
    uint16_t Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature;
    uint16_t Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure;
    struct AT1TWCC_byte7 {
        uint8_t Aftertreatment_1_Three_Way_Catalytic_Converter_Intake_Gas_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_1_Three_Way_Catalytic_Converter_Outlet_Gas_Temperature_Preliminary_FMI:5;
    }AT1TWCC_byte7;
    struct AT1TWCC_byte7 bt7 ;
    struct AT1TWCC_byte8 {
        uint8_t Aftertreatment_1_Three_Way_Catalytic_Converter_Differential_Pressure_Preliminary_FMI:5;
    }AT1TWCC_byte8;
    struct AT1TWCC_byte8 bt8 ;
} getAT1TWCC_t ;
typedef struct getO2FT2 {
    uint16_t Long_term_Fuel_Trim___Bank_2;
    uint16_t Short_term_Fuel_Trim___Bank_2;
    struct O2FT2_byte5 {
        uint8_t Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_2:4;
    }O2FT2_byte5;
    struct O2FT2_byte5 bt5 ;
} getO2FT2_t ;
typedef struct getO2FT1 {
    uint16_t Long_term_Fuel_Trim___Bank_1;
    uint16_t Short_term_Fuel_Trim___Bank_1;
    struct O2FT1_byte5 {
        uint8_t Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation_Bank_1:4;
    }O2FT1_byte5;
    struct O2FT1_byte5 bt5 ;
} getO2FT1_t ;
typedef struct getACCVC {
    struct ACCVC_byte1 {
        uint8_t Aftercooler_Coolant_Thermostat_Mode:2;
    }ACCVC_byte1;
    struct ACCVC_byte1 bt1 ;
    uint8_t Desired_Aftercooler_Coolant_Intake_Temperature;
    uint8_t Desired_Aftercooler_Coolant_Thermostat_Opening;
} getACCVC_t ;
typedef struct getECCVC {
    struct ECCVC_byte1 {
        uint8_t Engine_Coolant_Thermostat_Mode:2;
    }ECCVC_byte1;
    struct ECCVC_byte1 bt1 ;
    uint8_t Desired_Engine_Coolant_Pump_Outlet_Temperature;
    uint8_t Desired_Engine_Coolant_Thermostat_Opening;
    uint8_t Engine_Auxiliary_Cooler_Supply_Valve_1_Actuator_Command;
    uint8_t Engine_Auxiliary_Cooler_Supply_Valve_2_Actuator_Command;
} getECCVC_t ;
typedef struct getEAI {
    uint16_t Engine_Exhaust_Gas_Temperature_Average;
    uint16_t Engine_Exhaust_Gas_Temperature_Average___Bank_1;
    uint16_t Engine_Exhaust_Gas_Temperature_Average___Bank_2;
} getEAI_t ;
typedef struct getAT1FC2 {
    uint16_t Aftertreatment_1_Fuel_Pressure_2;
    struct AT1FC2_byte3 {
        uint8_t Aftertreatment_1_Fuel_Pump_Relay_Control:2;
        uint8_t Aftertreatment_1_Fuel_Flow_Diverter_Valve_Control:2;
    }AT1FC2_byte3;
    struct AT1FC2_byte3 bt3 ;
    uint16_t Aftertreatment_1_Fuel_Pressure_2_Actuator_Control;
    uint8_t Aftertreatment_1_Hydrocarbon_Doser_Intake_Fuel_Temperature;
} getAT1FC2_t ;
typedef struct getET4 {
    uint8_t Engine_Coolant_Temperature_2;
    uint8_t Engine_Coolant_Pump_Outlet_Temperature;
    uint8_t Engine_Coolant_Thermostat_Opening;
    uint16_t Engine_Exhaust_Valve_Actuation_System_Oil_Temperature;
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Mixer_Intake_Temperature;
} getET4_t ;
typedef struct getZNVW {
    struct ZNVW_byte1 {
        uint8_t Zero_Net_Vehicle_Weight_Change:2;
    }ZNVW_byte1;
    struct ZNVW_byte1 bt1 ;
} getZNVW_t ;
typedef struct getGCVW {
    uint32_t Gross_Combination_Weight;
    uint32_t Net_Vehicle_Weight_Change;
} getGCVW_t ;
typedef struct getAGCW {
    struct AGCW_byte1 {
        uint8_t Axle_Group_Location:4;
    }AGCW_byte1;
    struct AGCW_byte1 bt1 ;
    uint16_t Axle_Group_Empty_Weight_Calibration;
    uint16_t Axle_Group_Full_Weight_Calibration;
} getAGCW_t ;
typedef struct getAGW {
    struct AGW_byte1 {
        uint8_t Axle_Group_Location:4;
    }AGW_byte1;
    struct AGW_byte1 bt1 ;
    uint16_t Axle_Group_Weight;
} getAGW_t ;
typedef struct getAAGW {
    struct AAGW_byte1 {
        uint8_t Steer_Axle_Group_Weight_Available:2;
        uint8_t Lift_Axle_Group_Weight_Available:2;
        uint8_t Drive_Axle_Group_Weight_Available:2;
        uint8_t Tag_Axle_Group_Weight_Available:2;
    }AAGW_byte1;
    struct AAGW_byte1 bt1 ;
    struct AAGW_byte2 {
        uint8_t Additional_Tractor_Axle_Group_Weight_Available:2;
        uint8_t Trailer_A_Axle_Group_Weight_Available:2;
        uint8_t Trailer_B_Axle_Group_Weight_Available:2;
        uint8_t Trailer_C_Axle_Group_Weight_Available:2;
    }AAGW_byte2;
    struct AAGW_byte2 bt2 ;
    struct AAGW_byte3 {
        uint8_t Trailer_D_Axle_Group_Weight_Available:2;
        uint8_t Trailer_E_Axle_Group_Weight_Available:2;
        uint8_t Trailer_F_Axle_Group_Weight_Available:2;
        uint8_t Trailer_G_Axle_Group_Weight_Available:2;
    }AAGW_byte3;
    struct AAGW_byte3 bt3 ;
    struct AAGW_byte4 {
        uint8_t Trailer_H_Axle_Group_Weight_Available:2;
        uint8_t Additional_Trailer_Axle_Group_Weight_Available:2;
    }AAGW_byte4;
    struct AAGW_byte4 bt4 ;
} getAAGW_t ;
typedef struct getAT2AC2 {
    uint16_t Aftertreatment_2_Secondary_Air_Differential_Pressure;
    uint16_t Aftertreatment_2_Secondary_Air_Temperature;
    uint16_t Aftertreatment_2_Secondary_Air_Mass_Flow;
    uint16_t Aftertreatment_2_Secondary_Air_Pressure;
} getAT2AC2_t ;
typedef struct getAT1AC2 {
    uint16_t Aftertreatment_1_Secondary_Air_Differential_Pressure;
    uint16_t Aftertreatment_1_Secondary_Air_Temperature;
    uint16_t Aftertreatment_1_Secondary_Air_Mass_Flow;
    uint16_t Aftertreatment_1_Secondary_Air_Pressure;
} getAT1AC2_t ;
typedef struct getSCR1 {
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Average_Consumption;
    uint16_t Aftertreatment_1_Commanded_Diesel_Exhaust_Fluid_Consumption;
    uint8_t Aftertreatment_1_SCR_Conversion_Efficiency;
    uint16_t Aftertreatment_1_SCR_Operator_Inducement_Active_Traveled_Distance;
} getSCR1_t ;
typedef struct getEEC8 {
    uint16_t Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_2_Control;
    uint16_t Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Temperature;
    uint16_t Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Intake_Gas_Absolute_Pressure;
    uint8_t Engine_Exhaust_Gas_Recirculation_1__EGR1__Cooler_Efficiency;
} getEEC8_t ;
typedef struct getDRC {
    struct DRC_byte1 {
        uint8_t Retract_Status_of_ramp_1:2;
        uint8_t Enable_status_of_ramp_1:2;
        uint8_t Movement_status_of_ramp_1:2;
    }DRC_byte1;
    struct DRC_byte1 bt1 ;
    struct DRC_byte2 {
        uint8_t Retract_Status_of_ramp_2:2;
        uint8_t Enable_status_of_ramp_2:2;
        uint8_t Movement_status_of_ramp_2:2;
    }DRC_byte2;
    struct DRC_byte2 bt2 ;
    struct DRC_byte3 {
        uint8_t Retract_Status_of_ramp_3:2;
        uint8_t Enable_status_of_ramp_3:2;
        uint8_t Movement_status_of_ramp_3:2;
    }DRC_byte3;
    struct DRC_byte3 bt3 ;
    struct DRC_byte4 {
        uint8_t Retract_Status_of_ramp_4:2;
        uint8_t Enable_status_of_ramp_4:2;
        uint8_t Movement_status_of_ramp_4:2;
    }DRC_byte4;
    struct DRC_byte4 bt4 ;
    struct DRC_byte5 {
        uint8_t Retract_Status_of_ramp_5:2;
        uint8_t Enable_status_of_ramp_5:2;
        uint8_t Movement_status_of_ramp_5:2;
    }DRC_byte5;
    struct DRC_byte5 bt5 ;
} getDRC_t ;
typedef struct getBSA {
    struct BSA_byte1 {
        uint8_t Tractor_Brake_Stroke_Axle_1_Left:3;
        uint8_t Tractor_Brake_Stroke_Axle_1_Right:3;
        uint8_t Tractor_Brake_Stroke_Axle_2_Left:3;
    }BSA_byte1;
    struct BSA_byte1 bt1 ;
    struct BSA_byte2 {
        uint8_t Tractor_Brake_Stroke_Axle_2_Right:3;
        uint8_t Tractor_Brake_Stroke_Axle_3_Left:3;
        uint8_t Tractor_Brake_Stroke_Axle_3_Right:3;
    }BSA_byte2;
    struct BSA_byte2 bt2 ;
    struct BSA_byte3 {
        uint8_t Tractor_Brake_Stroke_Axle_4_Left:3;
        uint8_t Tractor_Brake_Stroke_Axle_4_Right:3;
    }BSA_byte3;
    struct BSA_byte3 bt3 ;
    struct BSA_byte4 {
        uint8_t Tractor_Brake_Stroke_Axle_5_Left:3;
        uint8_t Tractor_Brake_Stroke_Axle_5_Right:3;
        uint8_t Trailer_Brake_Stroke_Axle_1_Left:3;
    }BSA_byte4;
    struct BSA_byte4 bt4 ;
    struct BSA_byte5 {
        uint8_t Trailer_Brake_Stroke_Axle_1_Right:3;
        uint8_t Trailer_Brake_Stroke_Axle_2_Left:3;
        uint8_t Trailer_Brake_Stroke_Axle_2_Right:3;
    }BSA_byte5;
    struct BSA_byte5 bt5 ;
    struct BSA_byte6 {
        uint8_t Trailer_Brake_Stroke_Axle_3_Left:3;
        uint8_t Trailer_Brake_Stroke_Axle_3_Right:3;
    }BSA_byte6;
    struct BSA_byte6 bt6 ;
    struct BSA_byte7 {
        uint8_t Trailer_Brake_Stroke_Axle_4_Left:3;
        uint8_t Trailer_Brake_Stroke_Axle_4_Right:3;
        uint8_t Trailer_Brake_Stroke_Axle_5_Left:3;
    }BSA_byte7;
    struct BSA_byte7 bt7 ;
    struct BSA_byte8 {
        uint8_t Trailer_Brake_Stroke_Axle_5_Right:3;
    }BSA_byte8;
    struct BSA_byte8 bt8 ;
} getBSA_t ;
typedef struct getESV6 {
    uint16_t Engine_Spark_Plug_21;
    uint16_t Engine_Spark_Plug_22;
    uint16_t Engine_Spark_Plug_23;
    uint16_t Engine_Spark_Plug_24;
} getESV6_t ;
typedef struct getESV5 {
    uint16_t Engine_Spark_Plug_17;
    uint16_t Engine_Spark_Plug_18;
    uint16_t Engine_Spark_Plug_19;
    uint16_t Engine_Spark_Plug_20;
} getESV5_t ;
typedef struct getESV4 {
    uint16_t Engine_Spark_Plug_13;
    uint16_t Engine_Spark_Plug_14;
    uint16_t Engine_Spark_Plug_15;
    uint16_t Engine_Spark_Plug_16;
} getESV4_t ;
typedef struct getESV3 {
    uint16_t Engine_Spark_Plug_9;
    uint16_t Engine_Spark_Plug_10;
    uint16_t Engine_Spark_Plug_11;
    uint16_t Engine_Spark_Plug_12;
} getESV3_t ;
typedef struct getESV2 {
    uint16_t Engine_Spark_Plug_5;
    uint16_t Engine_Spark_Plug_6;
    uint16_t Engine_Spark_Plug_7;
    uint16_t Engine_Spark_Plug_8;
} getESV2_t ;
typedef struct getESV1 {
    uint16_t Engine_Spark_Plug_1;
    uint16_t Engine_Spark_Plug_2;
    uint16_t Engine_Spark_Plug_3;
    uint16_t Engine_Spark_Plug_4;
} getESV1_t ;
typedef struct getAT2TI {
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Fuel_Used;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Disabled_Time;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests;
} getAT2TI_t ;
typedef struct getAT1TI {
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Fuel_Used;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Active_Regeneration_Time;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Disabled_Time;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regenerations;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Passive_Regeneration_Time;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Passive_Regenerations;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Inhibit_Requests;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Trip_Number_of_Active_Regeneration_Manual_Requests;
} getAT1TI_t ;
typedef struct getAT2S {
    uint8_t Diesel_Particulate_Filter_2_Soot_Load_Percent;
    uint8_t Diesel_Particulate_Filter_2_Ash_Load_Percent;
    uint32_t Diesel_Particulate_Filter_2_Time_Since_Last_Active_Regeneration;
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold;
} getAT2S_t ;
typedef struct getAT1S {
    uint8_t Diesel_Particulate_Filter_1_Soot_Load_Percent;
    uint8_t Diesel_Particulate_Filter_1_Ash_Load_Percent;
    uint32_t Diesel_Particulate_Filter_1_Time_Since_Last_Active_Regeneration;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Soot_Load_Regeneration_Threshold;
} getAT1S_t ;
typedef struct getDPFC1 {
    struct DPFC1_byte1 {
        uint8_t Diesel_Particulate_Filter_Lamp_Command:3;
    }DPFC1_byte1;
    struct DPFC1_byte1 bt1 ;
    struct DPFC1_byte2 {
        uint8_t Diesel_Particulate_Filter_Passive_Regeneration_Status:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Status:2;
        uint8_t Diesel_Particulate_Filter_Status:3;
    }DPFC1_byte2;
    struct DPFC1_byte2 bt2 ;
    struct DPFC1_byte3 {
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Status:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Inhibit_Switch:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Clutch_Disengaged:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Service_Brake_Active:2;
    }DPFC1_byte3;
    struct DPFC1_byte3 bt3 ;
    struct DPFC1_byte4 {
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_PTO_Active:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Accelerator_Pedal_Off_Idle:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Out_of_Neutral:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Above_Allowed_Speed:2;
    }DPFC1_byte4;
    struct DPFC1_byte4 bt4 ;
    struct DPFC1_byte5 {
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Parking_Brake_Not_Set:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Temperature:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Fault_Active:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_System_Timeout:2;
    }DPFC1_byte5;
    struct DPFC1_byte5 bt5 ;
    struct DPFC1_byte6 {
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Temporary_System_Lockout:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Permanent_System_Lockout:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Engine_Not_Warmed_Up:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Vehicle_Speed_Below_Allowed_Speed:2;
    }DPFC1_byte6;
    struct DPFC1_byte6 bt6 ;
    struct DPFC1_byte7 {
        uint8_t Diesel_Particulate_Filter_Automatic_Active_Regeneration_Initiation_Configuration:2;
        uint8_t Exhaust_System_High_Temperature_Lamp_Command:3;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Forced_Status:3;
    }DPFC1_byte7;
    struct DPFC1_byte7 bt7 ;
    struct DPFC1_byte8 {
        uint8_t Hydrocarbon_Doser_Purging_Enable:2;
        uint8_t Diesel_Particulate_Filter_Active_Regeneration_Inhibited_Due_to_Low_Exhaust_Gas_Pressure:2;
    }DPFC1_byte8;
    struct DPFC1_byte8 bt8 ;
} getDPFC1_t ;
typedef struct getAFSS {
    struct AFSS_byte1 {
        uint8_t Left_Headlamp_Dynamic_Bending_Light:3;
        uint8_t Right_Headlamp_Dynamic_Bending_Light:3;
    }AFSS_byte1;
    struct AFSS_byte1 bt1 ;
    struct AFSS_byte2 {
        uint8_t Left_Headlamp_Light_Distribution:4;
        uint8_t Right_Headlamp_Light_Distribution:4;
    }AFSS_byte2;
    struct AFSS_byte2 bt2 ;
} getAFSS_t ;
typedef struct getEC2 {
    uint8_t Maximum_Crank_Attempts_per_Start_Attempt;
} getEC2_t ;
typedef struct getEGRBV {
    uint8_t EGR1_Cooler_Bypass_Actuator_Postion;
} getEGRBV_t ;
typedef struct getTCI {
    struct TCI_byte1 {
        uint8_t Transfer_case_status:3;
    }TCI_byte1;
    struct TCI_byte1 bt1 ;
} getTCI_t ;
typedef struct getEFL_P9 {
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_17;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_18;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_19;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_20;
} getEFL_P9_t ;
typedef struct getEFL_P8 {
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_13;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_14;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_15;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_16;
} getEFL_P8_t ;
typedef struct getEFL_P7 {
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_9;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_10;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_11;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_12;
} getEFL_P7_t ;
typedef struct getEFL_P6 {
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_5;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_6;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_7;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_8;
} getEFL_P6_t ;
typedef struct getEFL_P5 {
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_1;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_2;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_3;
    uint16_t Engine_Intake_Valve_Actuation_Oil_Pressure_for_Cylinder_4;
} getEFL_P5_t ;
typedef struct getVDS2 {
    uint16_t Vehicle_Roll;
} getVDS2_t ;
typedef struct getJ2012 {
    uint8_t Number_of_J2012_DTCs;
    uint64_t J2012_DTC;
    struct J2012_byte7 {
        uint8_t J2012_DTC_Status:1;
        uint8_t J2012_DTC_Occurrence_Count:7;
    }J2012_byte7;
    struct J2012_byte7 bt7 ;
} getJ2012_t ;
typedef struct getAT2GP {
    uint16_t Diesel_Particulate_Filter_Intake_Pressure_2;
    uint16_t Diesel_Particulate_Filter_Outlet_Pressure_2;
} getAT2GP_t ;
typedef struct getAT1GP {
    uint16_t Diesel_Particulate_Filter_Intake_Pressure_1;
    uint16_t Diesel_Particulate_Filter_Outlet_Pressure_1;
} getAT1GP_t ;
typedef struct getAETC {
    struct AETC_byte1 {
        uint8_t AETC_Data_Collection_Standard:4;
        uint8_t Number_of_AETC_data_points:4;
    }AETC_byte1;
    struct AETC_byte1 bt1 ;
} getAETC_t ;
typedef struct getEOI {
    struct EOI_byte1 {
        uint8_t Engine_Operating_State:4;
        uint8_t Fuel_Pump_Primer_Control:2;
    }EOI_byte1;
    struct EOI_byte1 bt1 ;
    uint16_t Time_Remaining_in_Engine_Operating_State;
    struct EOI_byte4 {
        uint8_t Engine_Fuel_Shutoff_Vent_Control:2;
        uint8_t Engine_Fuel_Shutoff_1_Control:2;
        uint8_t Engine_Fuel_Shutoff_2_Control:2;
        uint8_t Engine_Fuel_Shutoff_Valve_Leak_Test_Control:2;
    }EOI_byte4;
    struct EOI_byte4 bt4 ;
    struct EOI_byte5 {
        uint8_t Engine_Oil_Priming_Pump_Control:2;
        uint8_t Engine_Oil_Pre_heater_Control:2;
        uint8_t Engine_Electrical_System_Power_Conservation_Control:2;
        uint8_t Engine_Block___Coolant_Pre_heater_Control:2;
    }EOI_byte5;
    struct EOI_byte5 bt5 ;
    struct EOI_byte6 {
        uint8_t Engine_Coolant_Circulating_Pump_Control:2;
        uint8_t Engine_Controlled_Shutdown_Request:2;
        uint8_t Engine_Emergency__Immediate__Shutdown_Indication:2;
    }EOI_byte6;
    struct EOI_byte6 bt6 ;
    uint8_t Engine_Derate_Request;
} getEOI_t ;
typedef struct getEEC7 {
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Valve_Position;
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position;
    uint16_t Engine_Crankcase_Breather_Oil_Separator_Speed;
    uint16_t Commanded_Engine_Intake_Manifold_Pressure;
} getEEC7_t ;
typedef struct getTRF2 {
    struct TRF2_byte1 {
        uint8_t Transmission_Oil_Filter_Restriction_Switch:2;
        uint8_t Transmission_Oil_Level_Switch:2;
        uint8_t Transmission_Overheat_Indicator:2;
    }TRF2_byte1;
    struct TRF2_byte1 bt1 ;
    uint16_t Transmission_Torque_Converter_Oil_Outlet_Temperature;
    uint8_t Transmission_Oil_Life_Remaining;
    uint16_t Transmission_Oil_Temperature_2;
    uint8_t Transmission_Oil_Level_2_High___Low;
    struct TRF2_byte8 {
        uint8_t Transmission_Oil_Level_2_Countdown_Timer:4;
        uint8_t Transmission_Oil_Level_2_Measurement_Status:4;
    }TRF2_byte8;
    struct TRF2_byte8 bt8 ;
} getTRF2_t ;
typedef struct getAT1HI {
    uint32_t Aftertreatment_1_Total_Fuel_Used;
    uint32_t Aftertreatment_1_Total_Regeneration_Time;
    uint32_t Aftertreatment_1_Total_Disabled_Time;
    uint32_t Aftertreatment_1_Total_Number_of_Active_Regenerations;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests;
    uint32_t Aftertreatment_1_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests;
    uint32_t Aftertreatment_1_Average_Time_Between_Active_Regenerations;
    uint32_t Aftertreatment_1_Average_Distance_Between_Active_DPF_Regenerations;
} getAT1HI_t ;
typedef struct getAT2HI {
    uint32_t Aftertreatment_2_Total_Fuel_Used;
    uint32_t Aftertreatment_2_Total_Regeneration_Time;
    uint32_t Aftertreatment_2_Total_Disabled_Time;
    uint32_t Aftertreatment_2_Total_Number_of_Active_Regenerations;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Total_Passive_Regeneration_Time;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Passive_Regenerations;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Inhibit_Requests;
    uint32_t Aftertreatment_2_Diesel_Particulate_Filter_Total_Number_of_Active_Regeneration_Manual_Requests;
    uint32_t Aftertreatment_2_Average_Time_Between_Active_Regenerations;
    uint32_t Aftertreatment_2_Average_Distance_Between_Active_DPF_Regenerations;
} getAT2HI_t ;
typedef struct getA1DEFI {
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Concentration;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Conductivity;
    struct A1DEFI_byte4 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Temperature_2_Preliminary_FMI:5;
    }A1DEFI_byte4;
    struct A1DEFI_byte4 bt4 ;
    struct A1DEFI_byte5 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Properties_Preliminary_FMI:5;
    }A1DEFI_byte5;
    struct A1DEFI_byte5 bt5 ;
    struct A1DEFI_byte6 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Property:4;
    }A1DEFI_byte6;
    struct A1DEFI_byte6 bt6 ;
} getA1DEFI_t ;
typedef struct getSEP2 {
    uint16_t Sensor_supply_voltage_5;
    uint16_t Sensor_supply_voltage_6;
    uint16_t Sensor_supply_voltage_7;
    uint16_t Sensor_supply_voltage_8;
} getSEP2_t ;
typedef struct getSEP1 {
    uint16_t Sensor_supply_voltage_1;
    uint16_t Sensor_supply_voltage_2;
    uint16_t Sensor_supply_voltage_3;
    uint16_t Sensor_supply_voltage_4;
} getSEP1_t ;
typedef struct getAT2AC1 {
    uint16_t Aftertreatment_2_Supply_Air_Pressure;
    uint16_t Aftertreatment_2_Purge_Air_Pressure;
    uint16_t Aftertreatment_2_Air_Pressure_Control;
    uint8_t Aftertreatment_2_Air_Pressure_Actuator_Position;
    struct AT2AC1_byte7 {
        uint8_t Aftertreatment_2_Air_Pressure_Actuator_Position:1;
    }AT2AC1_byte7;
    struct AT2AC1_byte7 bt7 ;
    struct AT2AC1_byte8 {
        uint8_t Aftertreatment_2_Air_System_Relay:2;
        uint8_t Aftertreatment_2_Atomization_Air_Actuator:2;
        uint8_t Aftertreatment_2_Purge_Air_Actuator:2;
        uint8_t Aftertreatment_2_Air_Enable_Actuator:2;
    }AT2AC1_byte8;
    struct AT2AC1_byte8 bt8 ;
} getAT2AC1_t ;
typedef struct getAT1AC1 {
    uint16_t Aftertreatment_1_Supply_Air_Pressure;
    uint16_t Aftertreatment_1_Purge_Air_Pressure;
    uint16_t Aftertreatment_1_Air_Pressure_Control;
    uint8_t Aftertreatment_1_Air_Pressure_Actuator_Position;
    struct AT1AC1_byte7 {
        uint8_t Aftertreatment_1_Air_Pressure_Actuator_Position:1;
    }AT1AC1_byte7;
    struct AT1AC1_byte7 bt7 ;
    struct AT1AC1_byte8 {
        uint8_t Aftertreatment_1_Air_System_Relay:2;
        uint8_t Aftertreatment_1_Atomization_Air_Actuator:2;
        uint8_t Aftertreatment_1_Purge_Air_Actuator:2;
        uint8_t Aftertreatment_1_Air_Enable_Actuator:2;
    }AT1AC1_byte8;
    struct AT1AC1_byte8 bt8 ;
} getAT1AC1_t ;
typedef struct getAT2FC1 {
    uint16_t Aftertreatment_2_Fuel_Pressure_1;
    uint16_t Aftertreatment_2_Fuel_Rate;
    uint16_t Aftertreatment_2_Fuel_Pressure_1_Control;
    struct AT2FC1_byte7 {
        uint8_t Aftertreatment_2_Fuel_Drain_Actuator:2;
        uint8_t Aftertreatment_2_Ignition:2;
        uint8_t Aftertreatment_2_Regeneration_Status:2;
        uint8_t Aftertreatment_2_Fuel_Enable_Actuator:2;
    }AT2FC1_byte7;
    struct AT2FC1_byte7 bt7 ;
    uint8_t Aftertreatment_2_Fuel_Injector_1_Heater_Control;
} getAT2FC1_t ;
typedef struct getAT1FC1 {
    uint16_t Aftertreatment_1_Fuel_Pressure_1;
    uint16_t Aftertreatment_1_Fuel_Rate;
    uint16_t Aftertreatment_1_Fuel_Pressure_1_Control;
    struct AT1FC1_byte7 {
        uint8_t Aftertreatment_1_Fuel_Drain_Actuator:2;
        uint8_t Aftertreatment_1_Ignition:2;
        uint8_t Aftertreatment_1_Regeneration_Status:2;
        uint8_t Aftertreatment_1_Fuel_Enable_Actuator:2;
    }AT1FC1_byte7;
    struct AT1FC1_byte7 bt7 ;
    uint8_t Aftertreatment_1_Fuel_Injector_1_Heater_Control;
} getAT1FC1_t ;
typedef struct getGFI {
    uint16_t Engine_Fuel_Valve_2_Intake_Absolute_Pressure;
    uint16_t Engine_Gas_2_Mass_Flow_Rate;
    uint8_t Engine_Fuel_Temperature_2;
    uint16_t Engine_Fuel;
} getGFI_t ;
typedef struct getEEC6 {
    uint16_t Engine_Turbocharger_Compressor_Bypass_Actuator_1_Command;
    uint8_t Engine_Variable_Geometry_Turbocharger_Actuator_1;
    uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_1;
    uint16_t Engine_Turbocharger_Compressor_Bypass_Actuator_2_command;
    uint8_t Engine_Desired_Turbocharger_Compressor_Bypass_Actuator_1_Position;
    struct EEC6_byte8 {
        uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_1_Preliminary_FMI:5;
        uint8_t Engine_Turbocharger_Compressor_Bypass_Actuator_1_Temperature_Status:3;
    }EEC6_byte8;
    struct EEC6_byte8 bt8 ;
} getEEC6_t ;
typedef struct getPTODE {
    struct PTODE_byte1 {
        uint8_t Enable_Switch__Transfer_case_output_shaft_PTO:2;
        uint8_t Enable_Switch__Transmission_output_shaft_PTO:2;
        uint8_t Enable_Switch__Transmission_input_shaft_PTO_2:2;
        uint8_t Enable_Switch__Transmission_input_shaft_PTO_1:2;
    }PTODE_byte1;
    struct PTODE_byte1 bt1 ;
    struct PTODE_byte2 {
        uint8_t Enable_Switch___PTO_Engine_Flywheel:2;
        uint8_t Enable_Switch___PTO_Engine_Accessory_Drive_1:2;
        uint8_t Enable_Switch___PTO_Engine_Accessory_Drive_2:2;
    }PTODE_byte2;
    struct PTODE_byte2 bt2 ;
    struct PTODE_byte3 {
        uint8_t Engagement_Consent__Transfer_case_output_shaft_PTO:2;
        uint8_t Engagement_Consent__Transmission_output_shaft_PTO:2;
        uint8_t Engagement_Consent__Transmission_input_shaft_PTO_2:2;
        uint8_t Engagement_Consent__Transmission_input_shaft_PTO_1:2;
    }PTODE_byte3;
    struct PTODE_byte3 bt3 ;
    struct PTODE_byte4 {
        uint8_t Engagement_Consent___PTO_Engine_Flywheel:2;
        uint8_t Engagement_Consent___PTO_Engine_Accessory_Drive_1:2;
        uint8_t Engagement_Consent___PTO_Engine_Accessory_Drive_2:2;
    }PTODE_byte4;
    struct PTODE_byte4 bt4 ;
    struct PTODE_byte5 {
        uint8_t Engagement_Status__Transfer_case_output_shaft_PTO:2;
        uint8_t Engagement_Status__Transmission_output_shaft_PTO:2;
        uint8_t Engagement_Status__Transmission_input_shaft_PTO_2:2;
        uint8_t Engagement_Status__Transmission_input_shaft_PTO_1:2;
    }PTODE_byte5;
    struct PTODE_byte5 bt5 ;
    struct PTODE_byte6 {
        uint8_t Engagement_Status___PTO_Engine_Flywheel:2;
        uint8_t Engagement_Status___PTO_Engine_Accessory_Drive_1:2;
        uint8_t Engagement_Status___PTO_Engine_Accessory_Drive_2:2;
    }PTODE_byte6;
    struct PTODE_byte6 bt6 ;
    struct PTODE_byte7 {
        uint8_t At_least_one_PTO_engaged:2;
    }PTODE_byte7;
    struct PTODE_byte7 bt7 ;
} getPTODE_t ;
typedef struct getDC2 {
    struct DC2_byte1 {
        uint8_t Lock_Status_of_Door_1:2;
        uint8_t Open_Status_of_Door_1:2;
        uint8_t Enable_Status_of_Door_1:2;
        uint8_t Lock_Status_of_Door_2:2;
    }DC2_byte1;
    struct DC2_byte1 bt1 ;
    struct DC2_byte2 {
        uint8_t Open_Status_of_Door_2:2;
        uint8_t Enable_Status_of_Door_2:2;
        uint8_t Lock_Status_of_Door_3:2;
        uint8_t Open_Status_of_Door_3:2;
    }DC2_byte2;
    struct DC2_byte2 bt2 ;
    struct DC2_byte3 {
        uint8_t Enable_Status_of_Door_3:2;
        uint8_t Lock_Status_of_Door_4:2;
        uint8_t Open_Status_of_Door_4:2;
        uint8_t Enable_Status_of_Door_4:2;
    }DC2_byte3;
    struct DC2_byte3 bt3 ;
    struct DC2_byte4 {
        uint8_t Lock_Status_of_Door_5:2;
        uint8_t Open_Status_of_Door_5:2;
        uint8_t Enable_Status_of_Door_5:2;
        uint8_t Lock_Status_of_Door_6:2;
    }DC2_byte4;
    struct DC2_byte4 bt4 ;
    struct DC2_byte5 {
        uint8_t Open_Status_of_Door_6:2;
        uint8_t Enable_Status_of_Door_6:2;
        uint8_t Lock_Status_of_Door_7:2;
        uint8_t Open_Status_of_Door_7:2;
    }DC2_byte5;
    struct DC2_byte5 bt5 ;
    struct DC2_byte6 {
        uint8_t Enable_Status_of_Door_7:2;
        uint8_t Lock_Status_of_Door_8:2;
        uint8_t Open_Status_of_Door_8:2;
        uint8_t Enable_Status_of_Door_8:2;
    }DC2_byte6;
    struct DC2_byte6 bt6 ;
    struct DC2_byte7 {
        uint8_t Lock_Status_of_Door_9:2;
        uint8_t Open_Status_of_Door_9:2;
        uint8_t Enable_Status_of_Door_9:2;
        uint8_t Lock_Status_of_Door_10:2;
    }DC2_byte7;
    struct DC2_byte7 bt7 ;
    struct DC2_byte8 {
        uint8_t Open_Status_of_Door_10:2;
        uint8_t Enable_Status_of_Door_10:2;
    }DC2_byte8;
    struct DC2_byte8 bt8 ;
} getDC2_t ;
typedef struct getWCM2 {
    struct WCM2_byte1 {
        uint8_t Network_Transceiver_Status_2:8;
    }WCM2_byte1;
    struct WCM2_byte1 bt1 ;
    struct WCM2_byte2 {
        uint8_t Network_Service_Status_2:8;
    }WCM2_byte2;
    struct WCM2_byte2 bt2 ;
    struct WCM2_byte3 {
        uint8_t Network_Antenna_Status_2:8;
    }WCM2_byte3;
    struct WCM2_byte3 bt3 ;
    uint8_t Network_Signal_Strength_2;
    struct WCM2_byte5 {
        uint8_t Wireless_Communication_Network_Type_2:8;
    }WCM2_byte5;
    struct WCM2_byte5 bt5 ;
} getWCM2_t ;
typedef struct getWCM1 {
    struct WCM1_byte1 {
        uint8_t Network_Transceiver_Status_1:8;
    }WCM1_byte1;
    struct WCM1_byte1 bt1 ;
    struct WCM1_byte2 {
        uint8_t Network_Service_Status_1:8;
    }WCM1_byte2;
    struct WCM1_byte2 bt2 ;
    struct WCM1_byte3 {
        uint8_t Network_Antenna_Status_1:8;
    }WCM1_byte3;
    struct WCM1_byte3 bt3 ;
    uint8_t Network_Signal_Strength_1;
    struct WCM1_byte5 {
        uint8_t Wireless_Communication_Network_Type_1:8;
    }WCM1_byte5;
    struct WCM1_byte5 bt5 ;
} getWCM1_t ;
typedef struct getEFL_P4 {
    uint8_t Engine_Charge_Air_Cooler_1_Intake_Pressure;
    uint8_t Engine_Charge_Air_Cooler_2_Intake_Pressure;
    uint8_t Engine_Coolant_Pump_Differential_Pressure;
    uint16_t Engine_Centrifugal_Oil_Filter_speed;
    uint8_t Engine_Intercooler_Coolant_Level;
    uint8_t Engine_Charge_Air_Cooler_Outlet_Pressure;
} getEFL_P4_t ;
typedef struct getFWSS2 {
    struct FWSS2_byte1 {
        uint8_t Fifth_Wheel_Error_Status:4;
        uint8_t Fifth_Wheel_Lock_Ready_to_Couple_Indicator:2;
        uint8_t Fifth_Wheel_Lock_Couple_Status_Indicator:2;
    }FWSS2_byte1;
    struct FWSS2_byte1 bt1 ;
    uint8_t Fifth_Wheel_Slider_Position;
    struct FWSS2_byte3 {
        uint8_t Fifth_Wheel_Slider_Lock_Indicator:2;
    }FWSS2_byte3;
    struct FWSS2_byte3 bt3 ;
} getFWSS2_t ;
typedef struct getAT2IMG {
    uint16_t Aftertreatment_2_Exhaust_Gas_Temperature_2;
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature;
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Differential_Pressure;
    struct AT2IMG_byte7 {
        uint8_t Aftertreatment_2_Exhaust_Gas_Temperature_2_Preliminary_FMI:5;
        uint8_t Aftertreatment_2_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI:5;
    }AT2IMG_byte7;
    struct AT2IMG_byte7 bt7 ;
    struct AT2IMG_byte8 {
        uint8_t Aftertreatment_2_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI:5;
    }AT2IMG_byte8;
    struct AT2IMG_byte8 bt8 ;
} getAT2IMG_t ;
typedef struct getAT2OG2 {
    uint16_t Aftertreatment_2_Exhaust_Gas_Temperature_3;
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Outlet_Gas_Temperature;
    struct AT2OG2_byte5 {
        uint8_t Aftertreatment_2_Exhaust_Gas_Temperature_3_Preliminary_FMI:5;
    }AT2OG2_byte5;
    struct AT2OG2_byte5 bt5 ;
    struct AT2OG2_byte6 {
        uint8_t Aftertreatment_2_Diesel_Particulate_Filter_Exhaust_Gas:5;
    }AT2OG2_byte6;
    struct AT2OG2_byte6 bt6 ;
} getAT2OG2_t ;
typedef struct getAT2IG2 {
    uint16_t Aftertreatment_2_Exhaust_Gas_Temperature_1;
    uint16_t Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature;
    struct AT2IG2_byte5 {
        uint8_t Aftertreatment_2_Exhaust_Gas_Temperature_1_Preliminary_FMI:5;
    }AT2IG2_byte5;
    struct AT2IG2_byte5 bt5 ;
    struct AT2IG2_byte6 {
        uint8_t Aftertreatment_2_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI:5;
    }AT2IG2_byte6;
    struct AT2IG2_byte6 bt6 ;
} getAT2IG2_t ;
typedef struct getAT1IMG {
    uint16_t Aftertreatment_1_Exhaust_Gas_Temperature_2;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Differential_Pressure;
    struct AT1IMG_byte7 {
        uint8_t Aftertreatment_1_Exhaust_Gas_Temperature_2_Preliminary_FMI:5;
        uint8_t Aftertreatment_1_Diesel_Particulate_Filter_Delta_Pressure_Preliminary_FMI:5;
    }AT1IMG_byte7;
    struct AT1IMG_byte7 bt7 ;
    struct AT1IMG_byte8 {
        uint8_t Aftertreatment_1_Diesel_Particulate_Filter_Intermediate_Gas_Temperature_Preliminary_FMI:5;
    }AT1IMG_byte8;
    struct AT1IMG_byte8 bt8 ;
} getAT1IMG_t ;
typedef struct getAT1OG2 {
    uint16_t Aftertreatment_1_Exhaust_Gas_Temperature_3;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Gas_Temperature;
    struct AT1OG2_byte5 {
        uint8_t Aftertreatment_1_Exhaust_Gas_Temperature_3_Preliminary_FMI:5;
    }AT1OG2_byte5;
    struct AT1OG2_byte5 bt5 ;
    struct AT1OG2_byte6 {
        uint8_t Aftertreatment_1_Diesel_Particulate_Filter_Outlet_Exhaust_Gas:5;
    }AT1OG2_byte6;
    struct AT1OG2_byte6 bt6 ;
} getAT1OG2_t ;
typedef struct getAT1IG2 {
    uint16_t Aftertreatment_1_Exhaust_Gas_Temperature_1;
    uint16_t Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature;
    struct AT1IG2_byte5 {
        uint8_t Aftertreatment_1_Exhaust_Gas_Temperature_1_Preliminary_FMI:5;
    }AT1IG2_byte5;
    struct AT1IG2_byte5 bt5 ;
    struct AT1IG2_byte6 {
        uint8_t Aftertreatment_1_Diesel_Particulate_Filter_Intake_Gas_Temperature_Preliminary_FMI:5;
    }AT1IG2_byte6;
    struct AT1IG2_byte6 bt6 ;
} getAT1IG2_t ;
typedef struct getTPRI {
    struct TPRI_byte1 {
        uint8_t Tire_Location:8;
    }TPRI_byte1;
    struct TPRI_byte1 bt1 ;
    uint8_t Reference_Tire_Pressure;
} getTPRI_t ;
typedef struct getTR6 {
    struct TR6_byte1 {
        uint8_t Farebox_Emergency_Status:2;
    }TR6_byte1;
    struct TR6_byte1 bt1 ;
    struct TR6_byte2 {
        uint8_t Farebox_Alarm_Identifier:7;
    }TR6_byte2;
    struct TR6_byte2 bt2 ;
} getTR6_t ;
typedef struct getTR5 {
    struct TR5_byte1 {
        uint8_t Transaction_Type:4;
        uint8_t Passenger_Type:4;
    }TR5_byte1;
    struct TR5_byte1 bt1 ;
    struct TR5_byte2 {
        uint8_t Type_of_Fare:4;
        uint8_t Payment_Details:4;
    }TR5_byte2;
    struct TR5_byte2 bt2 ;
    struct TR5_byte3 {
        uint8_t Fare_Validity:4;
        uint8_t Pass_Category:4;
    }TR5_byte3;
    struct TR5_byte3 bt3 ;
    struct TR5_byte4 {
        uint8_t Initial_Fare_Agency:5;
    }TR5_byte4;
    struct TR5_byte4 bt4 ;
    struct TR5_byte5 {
        uint8_t Type_of_Service:3;
        uint8_t Transfer_Type:5;
    }TR5_byte5;
    struct TR5_byte5 bt5 ;
    struct TR5_byte6 {
        uint8_t Route_Number:1;
    }TR5_byte6;
    struct TR5_byte6 bt6 ;
    uint8_t Transfer_Sold;
} getTR5_t ;
typedef struct getTR3 {
    struct TR3_byte1 {
        uint8_t Range_Code_Enable:2;
        uint8_t Transit_Route_ID_Usage:2;
        uint8_t Intersection_Preemption_Request_Response:2;
    }TR3_byte1;
    struct TR3_byte1 bt1 ;
    struct TR3_byte2 {
        uint8_t Priority_of_Response_Sent_by_Emitter:4;
        uint8_t Transit_Door_Enable:2;
        uint8_t Strobe_Activation_Control_Status:2;
    }TR3_byte2;
    struct TR3_byte2 bt2 ;
    uint16_t Vehicle_ID;
} getTR3_t ;
typedef struct getTR1 {
    uint8_t Agency;
    uint8_t Number_of_bytes_in_the_Transit_Assigned_Route_Identity;
    uint8_t Number_of_bytes_in_the_Transit_Assigned_Run_Identity;
    uint8_t Number_of_bytes_in_the_Transit_Assigned_Block_Identity;
} getTR1_t ;
typedef struct getTR2 {
    uint8_t Number_of_bytes_in_the_Milepost_Identification;
} getTR2_t ;
typedef struct getTR7 {
    struct TR7_byte1 {
        uint8_t Type_of_Passenger_Count:8;
    }TR7_byte1;
    struct TR7_byte1 bt1 ;
    uint8_t Patron_Count;
    struct TR7_byte3 {
        uint8_t Silent_Alarm_Status:2;
        uint8_t Vehicle_Use_Status:2;
        uint8_t Transit_Run_Status:2;
    }TR7_byte3;
    struct TR7_byte3 bt3 ;
} getTR7_t ;
typedef struct getEFL_P3 {
    uint16_t Engine_Intake_Valve_Actuation_System_Oil_Pressure;
    uint8_t Engine_Exhaust_Gas_Recirculation_1_Intake_Pressure;
    uint16_t Engine_Exhaust_Valve_Actuation_System_Oil_Pressure;
    uint8_t Engine_Exhaust_Gas_Recirculation_1_Outlet_Pressure;
    uint16_t Engine_Throttle_Valve_1_Differential_Pressure;
} getEFL_P3_t ;
typedef struct getEEC14 {
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Valve_1_Position_Error;
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Valve_2_Position_Error;
    uint16_t Engine_Fuel_Mass_Flow_Rate;
    struct EEC14_byte7 {
        uint8_t Fuel_Type:8;
    }EEC14_byte7;
    struct EEC14_byte7 bt7 ;
} getEEC14_t ;
typedef struct getEEC15 {
    uint8_t Accelerator_Pedal_1_Channel_2;
    uint8_t Accelerator_Pedal_1_Channel_3;
    uint8_t Accelerator_Pedal_2_Channel_2;
    uint8_t Accelerator_Pedal_2_Channel_3;
} getEEC15_t ;
typedef struct getEBC5 {
    struct EBC5_byte1 {
        uint8_t Brake_Temperature_Warning:2;
        uint8_t Halt_brake_mode:3;
        uint8_t Hill_holder_mode:3;
    }EBC5_byte1;
    struct EBC5_byte1 bt1 ;
    struct EBC5_byte2 {
        uint8_t Foundation_Brake_Use:2;
        uint8_t XBR_System_State:2;
        uint8_t XBR_Active_Control_Mode:4;
    }EBC5_byte2;
    struct EBC5_byte2 bt2 ;
    uint8_t XBR_Acceleration_Limit;
    struct EBC5_byte4 {
        uint8_t Parking_Brake_Actuator_Fully_Activated:2;
        uint8_t Emergency_Braking_Active:2;
    }EBC5_byte4;
    struct EBC5_byte4 bt4 ;
} getEBC5_t ;
typedef struct getCSA {
    struct CSA_byte1 {
        uint8_t Engine_Start_Enable_Device_1:2;
        uint8_t Engine_Start_Enable_Device_2:2;
    }CSA_byte1;
    struct CSA_byte1 bt1 ;
    struct CSA_byte2 {
        uint8_t Engine_Start_Enable_Device_1_Configuration:4;
        uint8_t Engine_Start_Enable_Device_2_Configuration:4;
    }CSA_byte2;
    struct CSA_byte2 bt2 ;
    uint8_t Engine_Cold_Start_Fuel_Igniter_Command;
    struct CSA_byte4 {
        uint8_t Engine_Cold_Start_Fuel_Igniter_Relay:2;
        uint8_t Engine_Cold_Start_Fuel_Igniter_Relay_Feedback:2;
    }CSA_byte4;
    struct CSA_byte4 bt4 ;
} getCSA_t ;
typedef struct getOHCSS {
    struct OHCSS_byte1 {
        uint8_t Engine_Auxiliary_Governor_State:2;
        uint8_t Engine_Multi_Unit_Sync_State:2;
        uint8_t Engine_Alternate_Low_Idle_Select_State:2;
    }OHCSS_byte1;
    struct OHCSS_byte1 bt1 ;
    struct OHCSS_byte2 {
        uint8_t Engine_Alternate_Rating_Select_State:8;
    }OHCSS_byte2;
    struct OHCSS_byte2 bt2 ;
    struct OHCSS_byte3 {
        uint8_t Engine_Alternate_Droop_Accelerator_1_Select_State:4;
        uint8_t Engine_Alternate_Droop_Accelerator_2_Select_State:4;
    }OHCSS_byte3;
    struct OHCSS_byte3 bt3 ;
    struct OHCSS_byte4 {
        uint8_t Engine_Alternate_Droop_Remote_Accelerator_Select_State:4;
        uint8_t Engine_Alternate_Droop_Auxiliary_Input_Select_State:4;
    }OHCSS_byte4;
    struct OHCSS_byte4 bt4 ;
} getOHCSS_t ;
typedef struct getISCS {
    struct ISCS_byte1 {
        uint8_t Engine_Operator_Primary_Intermediate_Speed_Select_State:4;
    }ISCS_byte1;
    struct ISCS_byte1 bt1 ;
} getISCS_t ;
typedef struct getCMI {
    uint16_t Total_Count_of_Configuration_Changes_Made;
} getCMI_t ;
typedef struct getISC {
    struct ISC_byte1 {
        uint8_t Engine_Operator_Primary_Intermediate_Speed_Select:4;
    }ISC_byte1;
    struct ISC_byte1 bt1 ;
} getISC_t ;
typedef struct getOHECS {
    struct OHECS_byte1 {
        uint8_t Engine_Auxiliary_Governor_Switch:2;
        uint8_t Engine_Synchronization_Switch:2;
        uint8_t Engine_Alternate_Low_Idle_Switch:2;
    }OHECS_byte1;
    struct OHECS_byte1 bt1 ;
    uint8_t Engine_Alternate_Rating_Select;
    struct OHECS_byte3 {
        uint8_t Engine_Alternate_Droop_Accelerator_1_Select:4;
        uint8_t Engine_Alternate_Droop_Accelerator_2_Select:4;
    }OHECS_byte3;
    struct OHECS_byte3 bt3 ;
    struct OHECS_byte4 {
        uint8_t Engine_Alternate_Droop_Remote_Accelerator_Select:4;
        uint8_t Engine_Alternate_Droop_Auxiliary_Input_Select:4;
    }OHECS_byte4;
    struct OHECS_byte4 bt4 ;
} getOHECS_t ;
typedef struct getOEL {
    struct OEL_byte1 {
        uint8_t Work_Light_Switch:4;
        uint8_t Main_Light_Switch:4;
    }OEL_byte1;
    struct OEL_byte1 bt1 ;
    struct OEL_byte2 {
        uint8_t Turn_Signal_Switch:4;
        uint8_t Hazard_Light_Switch:2;
        uint8_t High_Low_Beam_Switch:2;
    }OEL_byte2;
    struct OEL_byte2 bt2 ;
    uint8_t Operators_Desired_Back_light;
    uint16_t Operators_Desired___Delayed_Lamp_Off_Time;
} getOEL_t ;
typedef struct getOWW {
    struct OWW_byte1 {
        uint8_t Front_Non_operator_Wiper_Switch:4;
        uint8_t Front_Operator_Wiper_Switch:4;
    }OWW_byte1;
    struct OWW_byte1 bt1 ;
    struct OWW_byte2 {
        uint8_t Rear_Wiper_Switch:4;
    }OWW_byte2;
    struct OWW_byte2 bt2 ;
    uint8_t Front_Operator_Wiper_Delay_Control;
    uint8_t Front_Non_operator_Wiper_Delay_Control;
    uint8_t Rear_Wiper_Delay_Control;
    struct OWW_byte6 {
        uint8_t Front_Non_operator_Washer_Switch:3;
        uint8_t Front_Operator_Washer_Switch:3;
    }OWW_byte6;
    struct OWW_byte6 bt6 ;
    struct OWW_byte7 {
        uint8_t Rear_Washer_Function:3;
    }OWW_byte7;
    struct OWW_byte7 bt7 ;
} getOWW_t ;
typedef struct getIC2 {
    uint8_t Engine_Air_Filter_2_Differential_Pressure;
    uint8_t Engine_Air_Filter_3_Differential_Pressure;
    uint8_t Engine_Air_Filter_4_Differential_Pressure;
    uint8_t Engine_Intake_Manifold_2_Pressure;
    uint8_t Engine_Intake_Manifold_1_Absolute_Pressure;
    uint16_t Engine_Intake_Manifold_1_Absolute_Pressure__High_Resolution_;
    uint8_t Engine_Intake_Manifold_2_Absolute_Pressure;
} getIC2_t ;
typedef struct getFMS {
    struct FMS_byte1 {
        uint8_t FMS_standard_Diagnostics_Supported:2;
        uint8_t FMS_standard_Requests_Supported:2;
    }FMS_byte1;
    struct FMS_byte1 bt1 ;
    uint32_t FMS_standard_SW_version_supported_;
} getFMS_t ;
typedef struct getEP {
    uint16_t Keep_Alive_Battery_Consumption;
    uint8_t Data_Memory_Usage;
} getEP_t ;
typedef struct getTCI6 {
    uint16_t Engine_Turbocharger_1_Compressor_Outlet_Temperature;
    uint16_t Engine_Turbocharger_2_Compressor_Outlet_Temperature;
    uint16_t Engine_Turbocharger_3_Compressor_Outlet_Temperature;
    uint16_t Engine_Turbocharger_4_Compressor_Outlet_Temperature;
} getTCI6_t ;
typedef struct getCM3 {
    struct CM3_byte1 {
        uint8_t Transfer_Case_Selector_Switch:3;
    }CM3_byte1;
    struct CM3_byte1 bt1 ;
    struct CM3_byte2 {
        uint8_t Fifth_Wheel_Release_Control:2;
        uint8_t Fifth_Wheel_Release_Control_Security_Lockout:2;
    }CM3_byte2;
    struct CM3_byte2 bt2 ;
    struct CM3_byte3 {
        uint8_t Transmission_Oil_Level_Request:2;
    }CM3_byte3;
    struct CM3_byte3 bt3 ;
} getCM3_t ;
typedef struct getEEC5 {
    uint16_t Engine_Turbocharger_1_Calculated_Turbine_Intake_Temperature;
    uint16_t Engine_Turbocharger_1_Calculated_Turbine_Outlet_Temperature;
    uint16_t Engine_Exhaust_Gas_Recirculation_1__EGR1__Valve_Control;
    struct EEC5_byte7 {
        uint8_t Engine_Variable_Geometry_Turbocharger__VGT__Air_Control_Shutoff_Valve:2;
        uint8_t Engine_Fuel_Control_Control_Mode:2;
        uint8_t Engine_Variable_Geometry_Turbocharger_1_Control_Mode:2;
    }EEC5_byte7;
    struct EEC5_byte7 bt7 ;
    uint8_t Engine_Variable_Geometry_Turbocharger__VGT__1_Actuator_Position;
} getEEC5_t ;
typedef struct getBJM1 {
    struct BJM1_byte1 {
        uint8_t Joystick_1_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_1_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_1_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_1_X_Axis_Position:1;
    }BJM1_byte1;
    struct BJM1_byte1 bt1 ;
    struct BJM1_byte3 {
        uint8_t Joystick_1_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_1_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_1_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_1_Y_Axis_Position:1;
    }BJM1_byte3;
    struct BJM1_byte3 bt3 ;
    struct BJM1_byte5 {
        uint8_t Joystick_1_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_1_X_Axis_Detent_Position_Status:2;
    }BJM1_byte5;
    struct BJM1_byte5 bt5 ;
    struct BJM1_byte6 {
        uint8_t Joystick_1_Button_4_Pressed_Status:2;
        uint8_t Joystick_1_Button_3_Pressed_Status:2;
        uint8_t Joystick_1_Button_2_Pressed_Status:2;
        uint8_t Joystick_1_Button_1_Pressed_Status:2;
    }BJM1_byte6;
    struct BJM1_byte6 bt6 ;
    struct BJM1_byte7 {
        uint8_t Joystick_1_Button_8_Pressed_Status:2;
        uint8_t Joystick_1_Button_7_Pressed_Status:2;
        uint8_t Joystick_1_Button_6_Pressed_Status:2;
        uint8_t Joystick_1_Button_5_Pressed_Status:2;
    }BJM1_byte7;
    struct BJM1_byte7 bt7 ;
    struct BJM1_byte8 {
        uint8_t Joystick_1_Button_12_Pressed_Status:2;
        uint8_t Joystick_1_Button_11_Pressed_Status:2;
        uint8_t Joystick_1_Button_10_Pressed_Status:2;
        uint8_t Joystick_1_Button_9_Pressed_Status:2;
    }BJM1_byte8;
    struct BJM1_byte8 bt8 ;
} getBJM1_t ;
typedef struct getEJM1 {
    struct EJM1_byte1 {
        uint8_t Joystick_1_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_1_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_1_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_1_Grip_X_Axis_Position:1;
    }EJM1_byte1;
    struct EJM1_byte1 bt1 ;
    struct EJM1_byte3 {
        uint8_t Joystick_1_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_1_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_1_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_1_Grip_Y_Axis_Position:1;
    }EJM1_byte3;
    struct EJM1_byte3 bt3 ;
    struct EJM1_byte5 {
        uint8_t Joystick_1_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_1_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_1_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_1_Theta_Axis_Position:1;
    }EJM1_byte5;
    struct EJM1_byte5 bt5 ;
    struct EJM1_byte7 {
        uint8_t Joystick_1_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_1_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_1_Grip_X_Axis_Detent_Position_Status:2;
    }EJM1_byte7;
    struct EJM1_byte7 bt7 ;
} getEJM1_t ;
typedef struct getBJM2 {
    struct BJM2_byte1 {
        uint8_t Joystick_2_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_2_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_2_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_2_X_Axis_Position:1;
    }BJM2_byte1;
    struct BJM2_byte1 bt1 ;
    struct BJM2_byte3 {
        uint8_t Joystick_2_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_2_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_2_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_2_Y_Axis_Position:1;
    }BJM2_byte3;
    struct BJM2_byte3 bt3 ;
    struct BJM2_byte5 {
        uint8_t Joystick_2_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_2_X_Axis_Detent_Position_Status:2;
    }BJM2_byte5;
    struct BJM2_byte5 bt5 ;
    struct BJM2_byte6 {
        uint8_t Joystick_2_Button_4_Pressed_Status:2;
        uint8_t Joystick_2_Button_3_Pressed_Status:2;
        uint8_t Joystick_2_Button_2_Pressed_Status:2;
        uint8_t Joystick_2_Button_1_Pressed_Status:2;
    }BJM2_byte6;
    struct BJM2_byte6 bt6 ;
    struct BJM2_byte7 {
        uint8_t Joystick_2_Button_8_Pressed_Status:2;
        uint8_t Joystick_2_Button_7_Pressed_Status:2;
        uint8_t Joystick_2_Button_6_Pressed_Status:2;
        uint8_t Joystick_2_Button_5_Pressed_Status:2;
    }BJM2_byte7;
    struct BJM2_byte7 bt7 ;
    struct BJM2_byte8 {
        uint8_t Joystick_2_Button_12_Pressed_Status:2;
        uint8_t Joystick_2_Button_11_Pressed_Status:2;
        uint8_t Joystick_2_Button_10_Pressed_Status:2;
        uint8_t Joystick_2_Button_9_Pressed_Status:2;
    }BJM2_byte8;
    struct BJM2_byte8 bt8 ;
} getBJM2_t ;
typedef struct getEJM2 {
    struct EJM2_byte1 {
        uint8_t Joystick_2_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_2_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_2_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_2_Grip_X_Axis_Position:1;
    }EJM2_byte1;
    struct EJM2_byte1 bt1 ;
    struct EJM2_byte3 {
        uint8_t Joystick_2_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_2_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_2_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_2_Grip_Y_Axis_Position:1;
    }EJM2_byte3;
    struct EJM2_byte3 bt3 ;
    struct EJM2_byte5 {
        uint8_t Joystick_2_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_2_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_2_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_2_Theta_Axis_Position:1;
    }EJM2_byte5;
    struct EJM2_byte5 bt5 ;
    struct EJM2_byte7 {
        uint8_t Joystick_2_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_2_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_2_Grip_X_Axis_Detent_Position_Status:2;
    }EJM2_byte7;
    struct EJM2_byte7 bt7 ;
} getEJM2_t ;
typedef struct getBJM3 {
    struct BJM3_byte1 {
        uint8_t Joystick_3_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_3_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_3_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_3_X_Axis_Position:1;
    }BJM3_byte1;
    struct BJM3_byte1 bt1 ;
    struct BJM3_byte3 {
        uint8_t Joystick_3_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_3_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_3_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_3_Y_Axis_Position:1;
    }BJM3_byte3;
    struct BJM3_byte3 bt3 ;
    struct BJM3_byte5 {
        uint8_t Joystick_3_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_3_X_Axis_Detent_Position_Status:2;
    }BJM3_byte5;
    struct BJM3_byte5 bt5 ;
    struct BJM3_byte6 {
        uint8_t Joystick_3_Button_4_Pressed_Status:2;
        uint8_t Joystick_3_Button_3_Pressed_Status:2;
        uint8_t Joystick_3_Button_2_Pressed_Status:2;
        uint8_t Joystick_3_Button_1_Pressed_Status:2;
    }BJM3_byte6;
    struct BJM3_byte6 bt6 ;
    struct BJM3_byte7 {
        uint8_t Joystick_3_Button_8_Pressed_Status:2;
        uint8_t Joystick_3_Button_7_Pressed_Status:2;
        uint8_t Joystick_3_Button_6_Pressed_Status:2;
        uint8_t Joystick_3_Button_5_Pressed_Status:2;
    }BJM3_byte7;
    struct BJM3_byte7 bt7 ;
    struct BJM3_byte8 {
        uint8_t Joystick_3_Button_12_Pressed_Status:2;
        uint8_t Joystick_3_Button_11_Pressed_Status:2;
        uint8_t Joystick_3_Button_10_Pressed_Status:2;
        uint8_t Joystick_3_Button_9_Pressed_Status:2;
    }BJM3_byte8;
    struct BJM3_byte8 bt8 ;
} getBJM3_t ;
typedef struct getEJM3 {
    struct EJM3_byte1 {
        uint8_t Joystick_3_Grip_X_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_3_Grip_X_Axis_Lever_Left_Negative_Position_Status:2;
        uint8_t Joystick_3_Grip_X_Axis_Lever_Right_Positive_Position_Status:2;
        uint8_t Joystick_3_Grip_X_Axis_Position:1;
    }EJM3_byte1;
    struct EJM3_byte1 bt1 ;
    struct EJM3_byte3 {
        uint8_t Joystick_3_Grip_Y_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_3_Grip_Y_Axis_Lever_Back_Negative_Position_Status:2;
        uint8_t Joystick_3_Grip_Y_Axis_Lever_Forward_Positive_Position_Status:2;
        uint8_t Joystick_3_Grip_Y_Axis_Position:1;
    }EJM3_byte3;
    struct EJM3_byte3 bt3 ;
    struct EJM3_byte5 {
        uint8_t Joystick_3_Theta_Axis_Neutral_Position_Status:2;
        uint8_t Joystick_3_Theta_Axis_Counter_Clockwise_Negative_Position_Status:2;
        uint8_t Joystick_3_Theta_Axis_Clockwise_Positive_Position_Status:2;
        uint8_t Joystick_3_Theta_Axis_Position:1;
    }EJM3_byte5;
    struct EJM3_byte5 bt5 ;
    struct EJM3_byte7 {
        uint8_t Joystick_3_Theta_Axis_Detent_Position_Status:2;
        uint8_t Joystick_3_Grip_Y_Axis_Detent_Position_Status:2;
        uint8_t Joystick_3_Grip_X_Axis_Detent_Position_Status:2;
    }EJM3_byte7;
    struct EJM3_byte7 bt7 ;
} getEJM3_t ;
typedef struct getMCI {
    struct MCI_byte1 {
        uint8_t Engine_Throttle_Synchronization_Mode_Status:4;
        uint8_t Trolling_Mode_Status:2;
        uint8_t Slow_Vessel_Mode_Status:2;
    }MCI_byte1;
    struct MCI_byte1 bt1 ;
} getMCI_t ;
typedef struct getFWD {
    struct FWD_byte1 {
        uint8_t Front_Wheel_Drive_Actuator_Status:2;
    }FWD_byte1;
    struct FWD_byte1 bt1 ;
} getFWD_t ;
typedef struct getAMB2 {
    uint8_t Solar_Intensity_Percent;
    uint8_t Solar_Sensor_Maximum;
    uint16_t Specific_Humidity;
    uint16_t Calculated_Ambient_Air_Temperature;
    uint16_t Barometric_Absolute_Pressure__High_Resolution_;
} getAMB2_t ;
typedef struct getCACI {
    uint8_t Cab_A_C_Refrigerant_Compressor_Outlet_Pressure;
} getCACI_t ;
typedef struct getSPR {
    uint8_t Pneumatic_Supply_Pressure_Request;
    uint8_t Parking_and_or_Trailer_Air_Pressure_Request;
    uint8_t Service_Brake_Air_Pressure_Request_Circuit_1;
    uint8_t Service_Brake_Air_Pressure_Request_Circuit_2;
    uint8_t Auxiliary_Equipment_Supply_Pressure_Request;
    uint8_t Air_Suspension_Supply_Pressure_Request;
} getSPR_t ;
typedef struct getEOAC {
    uint8_t Travel_Velocity_Control_Position;
} getEOAC_t ;
typedef struct getEPD {
    uint8_t Payload_Percentage;
} getEPD_t ;
typedef struct getMVS {
    uint8_t Maximum_Vehicle_Speed_Limit_1;
    uint8_t Maximum_Vehicle_Speed_Limit_2;
    uint8_t Maximum_Vehicle_Speed_Limit_3;
    uint8_t Maximum_Vehicle_Speed_Limit_4;
    uint8_t Maximum_Vehicle_Speed_Limit_5;
    uint8_t Maximum_Vehicle_Speed_Limit_6;
    uint8_t Maximum_Vehicle_Speed_Limit_7;
    uint8_t Applied_Vehicle_Speed_Limit;
} getMVS_t ;
typedef struct getHBS {
    uint8_t Hydraulic_Brake_Pressure_Circuit_1;
    uint8_t Hydraulic_Brake_Pressure_Circuit_2;
    struct HBS_byte3 {
        uint8_t Hydraulic_Brake_Pressure_Warning_State_Circuit_1:2;
        uint8_t Hydraulic_Brake_Pressure_Warning_State_Circuit_2:2;
        uint8_t Hydraulic_Brake_Pressure_Supply_State_Circuit_1:2;
        uint8_t Hydraulic_Brake_Pressure_Supply_State_Circuit_2:2;
    }HBS_byte3;
    struct HBS_byte3 bt3 ;
    struct HBS_byte4 {
        uint8_t Hydraulic_Brake_System_Audible_Warning_Command:2;
        uint8_t Hydraulic_Brake_Fluid_Level_Switch:2;
    }HBS_byte4;
    struct HBS_byte4 bt4 ;
} getHBS_t ;
typedef struct getET {
    uint16_t Engine_Exhaust_Gas_Temperature___Right_Manifold;
    uint16_t Engine_Exhaust_Gas_Temperature___Left_Manifold;
} getET_t ;
typedef struct getLD {
    struct LD_byte1 {
        uint8_t Running_Light:2;
        uint8_t Alternate_Beam_Head_Light_Data:2;
        uint8_t Low_Beam_Head_Light_Data:2;
        uint8_t High_Beam_Head_Light_Data:2;
    }LD_byte1;
    struct LD_byte1 bt1 ;
    struct LD_byte2 {
        uint8_t Tractor_Front_Fog_Lights:2;
        uint8_t Rotating_Beacon_Light:2;
        uint8_t Right_Turn_Signal_Lights:2;
        uint8_t Left_Turn_Signal_Lights:2;
    }LD_byte2;
    struct LD_byte2 bt2 ;
    struct LD_byte3 {
        uint8_t Back_Up_Light_and_Alarm_Horn:2;
        uint8_t Center_Stop_Light:2;
        uint8_t Right_Stop_Light:2;
        uint8_t Left_Stop_Light:2;
    }LD_byte3;
    struct LD_byte3 bt3 ;
    struct LD_byte4 {
        uint8_t Implement_Clearance_Light:2;
        uint8_t Tractor_Clearance_Light:2;
        uint8_t Implement_Marker_Light:2;
        uint8_t Tractor_Marker_Light:2;
    }LD_byte4;
    struct LD_byte4 bt4 ;
    struct LD_byte5 {
        uint8_t Rear_Fog_Lights:2;
        uint8_t Tractor_Underside_Mounted_Work_Lights:2;
        uint8_t Tractor_Rear_Low_Mounted_Work_Lights:2;
        uint8_t Tractor_Rear_High_Mounted_Work_Lights:2;
    }LD_byte5;
    struct LD_byte5 bt5 ;
    struct LD_byte6 {
        uint8_t Tractor_Side_Low_Mounted_Work_Lights:2;
        uint8_t Tractor_Side_High_Mounted_Work_Lights:2;
        uint8_t Tractor_Front_Low_Mounted_Work_Lights:2;
        uint8_t Tractor_Front_High_Mounted_Work_Lights:2;
    }LD_byte6;
    struct LD_byte6 bt6 ;
    struct LD_byte7 {
        uint8_t Implement_OEM_Option_2_Light:2;
        uint8_t Implement_OEM_Option_1_Light:2;
        uint8_t Implement_Right_Facing_Work_Light:2;
        uint8_t Implement_Left_Forward_Work_Light:2;
    }LD_byte7;
    struct LD_byte7 bt7 ;
    struct LD_byte8 {
        uint8_t Implement_Right_Forward_Work_Light:2;
        uint8_t Implement_Left_Facing_Work_Light:2;
        uint8_t Implement_Rear_Work_Light:2;
    }LD_byte8;
    struct LD_byte8 bt8 ;
} getLD_t ;
typedef struct getLCMD {
    struct LCMD_byte1 {
        uint8_t Running_Light_Command:2;
        uint8_t Alternate_Beam_Head_Light_Command:2;
        uint8_t Low_Beam_Head_Light_Command:2;
        uint8_t High_Beam_Head_Light_Command:2;
    }LCMD_byte1;
    struct LCMD_byte1 bt1 ;
    struct LCMD_byte2 {
        uint8_t Tractor_Front_Fog_Lights_Command:2;
        uint8_t Rotating_Beacon_Light_Command:2;
        uint8_t Right_Turn_Signal_Lights_Command:2;
        uint8_t Left_Turn_Signal_Lights_Command:2;
    }LCMD_byte2;
    struct LCMD_byte2 bt2 ;
    struct LCMD_byte3 {
        uint8_t Back_Up_Light_and_Alarm_Horn_Command:2;
        uint8_t Center_Stop_Light_Command:2;
        uint8_t Right_Stop_Light_Command:2;
        uint8_t Left_Stop_Light_Command:2;
    }LCMD_byte3;
    struct LCMD_byte3 bt3 ;
    struct LCMD_byte4 {
        uint8_t Implement_Clearance_Light_Command:2;
        uint8_t Tractor_Clearance_Light_Command:2;
        uint8_t Implement_Marker_Light_Command:2;
        uint8_t Tractor_Marker_Light_Command:2;
    }LCMD_byte4;
    struct LCMD_byte4 bt4 ;
    struct LCMD_byte5 {
        uint8_t Rear_Fog_Light_Command:2;
        uint8_t Tractor_Underside_Mounted_Work_Lights_Command:2;
        uint8_t Tractor_Rear_Low_Mounted_Work_Lights_Command:2;
        uint8_t Tractor_Rear_High_Mounted_Work_Lights_Command:2;
    }LCMD_byte5;
    struct LCMD_byte5 bt5 ;
    struct LCMD_byte6 {
        uint8_t Tractor_Side_Low_Mounted_Work_Lights_Command:2;
        uint8_t Tractor_Side_High_Mounted_Work_Lights_Command:2;
        uint8_t Tractor_Front_Low_Mounted_Work_Lights_Command:2;
        uint8_t Tractor_Front_High_Mounted_Work_Lights_Command:2;
    }LCMD_byte6;
    struct LCMD_byte6 bt6 ;
    struct LCMD_byte7 {
        uint8_t Implement_OEM_Option_2_Light_Command:2;
        uint8_t Implement_OEM_Option_1_Light_Command:2;
        uint8_t Implement_Right_Facing_Work_Light_Command:2;
        uint8_t Implement_Left_Forward_Work_Light_Command:2;
    }LCMD_byte7;
    struct LCMD_byte7 bt7 ;
    struct LCMD_byte8 {
        uint8_t Lighting_Data_Request_Command:2;
        uint8_t Implement_Right_Forward_Work_Light_Command:2;
        uint8_t Implement_Left_Facing_Work_Light_Command:2;
        uint8_t Implement_Rear_Work_Light_Command:2;
    }LCMD_byte8;
    struct LCMD_byte8 bt8 ;
} getLCMD_t ;
typedef struct getETC7 {
    struct ETC7_byte1 {
        uint8_t Transmission_Current_Range_Display_Blank_State:2;
        uint8_t Transmission_Service_Indicator:2;
        uint8_t Transmission_Requested_Range_Display_Blank_State:2;
        uint8_t Transmission_Requested_Range_Display_Flash_State:2;
    }ETC7_byte1;
    struct ETC7_byte1 bt1 ;
    struct ETC7_byte2 {
        uint8_t Transmission_Ready_for_Brake_Release:2;
        uint8_t Active_Shift_Console_Indicator:2;
        uint8_t Transmission_Engine_Crank_Enable:2;
        uint8_t Transmission_Shift_Inhibit_Indicator:2;
    }ETC7_byte2;
    struct ETC7_byte2 bt2 ;
    struct ETC7_byte3 {
        uint8_t Transmission_Mode_4_Indicator:2;
        uint8_t Transmission_Mode_3_Indicator:2;
        uint8_t Transmission_Mode_2_Indicator:2;
        uint8_t Transmission_Mode_1_Indicator:2;
    }ETC7_byte3;
    struct ETC7_byte3 bt3 ;
    uint8_t Transmission_Requested_Gear_Feedback;
    struct ETC7_byte5 {
        uint8_t Transmission_Mode_5_Indicator:2;
        uint8_t Transmission_Mode_6_Indicator:2;
        uint8_t Transmission_Mode_7_Indicator:2;
        uint8_t Transmission_Mode_8_Indicator:2;
    }ETC7_byte5;
    struct ETC7_byte5 bt5 ;
    struct ETC7_byte6 {
        uint8_t Transmission_Reverse_Gear_Shift_Inhibit_Status:2;
        uint8_t Transmission_Warning_Indicator:2;
    }ETC7_byte6;
    struct ETC7_byte6 bt6 ;
} getETC7_t ;
typedef struct getTCFG2 {
    uint16_t Transmission_Torque_Limit;
} getTCFG2_t ;
typedef struct getML {
    struct ML_byte1 {
        uint8_t Rear_Black_Out_Marker_Select:2;
        uint8_t Front_Black_Out_Marker_Lamp_Select:2;
        uint8_t Convoy_Lamp_Select:2;
        uint8_t Convoy_Driving_Lamp_Select:2;
    }ML_byte1;
    struct ML_byte1 bt1 ;
    struct ML_byte3 {
        uint8_t Black_Out_Brake_Stop_Lamp_Select:2;
    }ML_byte3;
    struct ML_byte3 bt3 ;
    struct ML_byte4 {
        uint8_t Night_Vision_Illuminator_Select:2;
        uint8_t Black_Out_Work_Lamp_Select:2;
    }ML_byte4;
    struct ML_byte4 bt4 ;
    uint8_t Operators_Black_Out_Intensity_Selection;
} getML_t ;
typedef struct getTAVG {
    uint16_t Engine_Total_Average_Fuel_Rate;
    uint16_t Engine_Total_Average_Fuel_Economy;
} getTAVG_t ;
typedef struct getDC1 {
    struct DC1_byte1 {
        uint8_t Position_of_doors:4;
        uint8_t Ramp___Wheel_Chair_Lift_Position:2;
        uint8_t Status_2_of_doors:2;
    }DC1_byte1;
    struct DC1_byte1 bt1 ;
} getDC1_t ;
typedef struct getVDC1 {
    struct VDC1_byte1 {
        uint8_t VDC_Information_Signal:2;
        uint8_t VDC_Fully_Operational:2;
        uint8_t VDC_brake_light_request:2;
    }VDC1_byte1;
    struct VDC1_byte1 bt1 ;
    struct VDC1_byte2 {
        uint8_t ROP_Engine_Control_active:2;
        uint8_t ROP_Brake_Control_active:2;
        uint8_t YC_Engine_Control_active:2;
        uint8_t YC_Brake_Control_active:2;
    }VDC1_byte2;
    struct VDC1_byte2 bt2 ;
    struct VDC1_byte3 {
        uint8_t Trailer_VDC_Active:2;
    }VDC1_byte3;
    struct VDC1_byte3 bt3 ;
} getVDC1_t ;
typedef struct getBT1 {
    uint8_t Battery_1_Temperature;
    uint8_t Battery_2_Temperature;
} getBT1_t ;
typedef struct getACC2 {
    struct ACC2_byte1 {
        uint8_t ACC_usage_demand:2;
        uint8_t Requested_ACC_Distance_Mode:3;
    }ACC2_byte1;
    struct ACC2_byte1 bt1 ;
} getACC2_t ;
typedef struct getVEP3 {
    uint16_t Alternator_Current__High_Range_Resolution_;
    uint16_t Net_Battery_Current__High_Range_Resolution_;
} getVEP3_t ;
typedef struct getRTC1 {
    uint8_t Low_Limit_Threshold_for_Maximum_RPM_from_Retarder;
    uint8_t High_Limit_Threshold_for_Minimum_Continuous_RPM_from_Retarder;
    uint8_t Low_Limit_Threshold_for_Maximum_Torque_from_Retarder;
    uint8_t High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Retarder;
    uint8_t Maximum_Continuous_Retarder_Speed;
    uint8_t Minimum_Continuous_Retarder_Speed;
    uint8_t Maximum_Continuous_Retarder_Torque;
    uint8_t Minimum_Continuous_Retarder_Torque;
} getRTC1_t ;
typedef struct getECT1 {
    uint8_t Engine_Low_Limit_Threshold_for_Maximum_RPM_from_Engine;
    uint8_t Engine_High_Limit_Threshold_for_Minimum_Continuous_Engine_RPM;
    uint8_t Engine_Low_Limit_Threshold_for_Maximum_Torque_from_Engine;
    uint8_t Engine_High_Limit_Threshold_for_Minimum_Continuous_Torque_from_Engine;
    uint8_t Engine_Maximum_Continuous_RPM;
    uint8_t Engine_Minimum_Continuous_RPM;
    uint8_t Engine_Maximum_Continuous_Torque;
    uint8_t Engine_Minimum_Continuous_Torque;
} getECT1_t ;
typedef struct getGFD {
    uint16_t Specific_Heat_Ratio;
    uint16_t Reference_Engine_Gas_Mass_Flow_Rate;
    uint16_t Fuel_energy_content;
} getGFD_t ;
typedef struct getAT1T1I {
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Temperature;
    uint16_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_2;
    struct AT1T1I_byte5 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Level_Preliminary_FMI:5;
        uint8_t Aftertreatment_Selective_Catalytic_Reduction_Operator_Inducement_Active:3;
    }AT1T1I_byte5;
    struct AT1T1I_byte5 bt5 ;
    struct AT1T1I_byte6 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Temperature_Preliminary_FMI:5;
        uint8_t Aftertreatment_SCR_Operator_Inducement_Severity:3;
    }AT1T1I_byte6;
    struct AT1T1I_byte6 bt6 ;
    uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_Heater;
    struct AT1T1I_byte8 {
        uint8_t Aftertreatment_1_Diesel_Exhaust_Fluid_Tank_1_Heater_Preliminary_FMI:5;
    }AT1T1I_byte8;
    struct AT1T1I_byte8 bt8 ;
} getAT1T1I_t ;
typedef struct getASC5 {
    uint8_t Damper_Stiffness_Front_Axle;
    uint8_t Damper_Stiffness_Rear_Axle;
    uint8_t Damper_Stiffness_Lift___Tag_Axle;
    struct ASC5_byte4 {
        uint8_t Electronic_Shock_Absorber_Control_Mode__:2;
        uint8_t Electronic_Shock_Absorber_Control_Mode___Rear_Axle:2;
        uint8_t Electronic_Shock_Absorber_Control_Mode___Lift_Tag_Axle:2;
    }ASC5_byte4;
    struct ASC5_byte4 bt4 ;
} getASC5_t ;
typedef struct getASC4 {
    uint16_t Bellow_Pressure_Front_Axle_Left;
    uint16_t Bellow_Pressure_Front_Axle_Right;
    uint16_t Bellow_Pressure_Rear_Axle_Left;
    uint16_t Bellow_Pressure_Rear_Axle_Right;
    uint16_t Relative_Level_Front_Axle_Right;
    uint16_t Relative_Level_Rear_Axle_Left;
    uint16_t Relative_Level_Rear_Axle_Right;
} getASC4_t ;
typedef struct getASC1 {
    struct ASC1_byte1 {
        uint8_t Nominal_Level_Front_Axle:4;
        uint8_t Nominal_Level_Rear_Axle:4;
    }ASC1_byte1;
    struct ASC1_byte1 bt1 ;
    struct ASC1_byte2 {
        uint8_t Below_Nominal_Level_Front_Axle:2;
        uint8_t Below_Nominal_Level_Rear_Axle:2;
        uint8_t Above_Nominal_Level_Front_Axle:2;
        uint8_t Above_Nominal_Level_Rear_Axle:2;
    }ASC1_byte2;
    struct ASC1_byte2 bt2 ;
    struct ASC1_byte3 {
        uint8_t Lowering_Control_Mode_Front_Axle:2;
        uint8_t Lowering_Control_Mode_Rear_Axle:2;
        uint8_t Lifting_Control_Mode_Front_Axle:2;
        uint8_t Lifting_Control_Mode_Rear_Axle:2;
    }ASC1_byte3;
    struct ASC1_byte3 bt3 ;
    struct ASC1_byte4 {
        uint8_t Kneeling_Information:4;
        uint8_t Level_Control_Mode:4;
    }ASC1_byte4;
    struct ASC1_byte4 bt4 ;
    struct ASC1_byte5 {
        uint8_t Security_Device:2;
        uint8_t Vehicle_Motion_Inhibit:2;
        uint8_t Door_Release:2;
        uint8_t Lift_Axle_1_Position:2;
    }ASC1_byte5;
    struct ASC1_byte5 bt5 ;
    struct ASC1_byte6 {
        uint8_t Front_Axle_in_Bumper_Range:2;
        uint8_t Rear_Axle_in_Bumper_Range:2;
        uint8_t Lift_Axle_2_Position:2;
    }ASC1_byte6;
    struct ASC1_byte6 bt6 ;
    struct ASC1_byte7 {
        uint8_t Suspension_Remote_Control_1:2;
        uint8_t Suspension_Remote_control_2:2;
        uint8_t Allow_Level_Control_During_Braking_Status:2;
        uint8_t Speed_Dependant_Level_Control_Status:2;
    }ASC1_byte7;
    struct ASC1_byte7 bt7 ;
    struct ASC1_byte8 {
        uint8_t Suspension_Control_Refusal_Information:4;
        uint8_t Memory_level:4;
    }ASC1_byte8;
    struct ASC1_byte8 bt8 ;
} getASC1_t ;
typedef struct getFLI2 {
    struct FLI2_byte1 {
        uint8_t Lane_Tracking_Status_Right_Side:2;
        uint8_t Lane_Tracking_Status_Left_Side:2;
        uint8_t Lane_Departure_Indication_Enable_Status:2;
    }FLI2_byte1;
    struct FLI2_byte1 bt1 ;
} getFLI2_t ;
typedef struct getBM {
    struct BM_byte1 {
        uint8_t Battery_Main_Switch_Hold_State:2;
    }BM_byte1;
    struct BM_byte1 bt1 ;
} getBM_t ;
typedef struct getCCC {
    uint16_t Auxiliary_Heater_Maximum_Output_Power;
} getCCC_t ;
typedef struct getVF {
    uint8_t Hydraulic_Temperature;
    struct VF_byte2 {
        uint8_t Hydraulic_Oil_Filter_Restriction_Switch:2;
        uint8_t Winch_Oil_Pressure_Switch:2;
    }VF_byte2;
    struct VF_byte2 bt2 ;
    uint8_t Hydraulic_Oil_Level;
} getVF_t ;
typedef struct getET3 {
    uint16_t Engine_Intake_Manifold_1_Air_Temperature__High_Resolution_;
    uint16_t Engine_Coolant_Temperature__High_Resolution_;
    uint16_t Engine_Intake_Valve_Actuation_System_Oil_Temperature;
    uint16_t Engine_Charge_Air_Cooler_1_Outlet_Temperature;
} getET3_t ;
typedef struct getEFS {
    uint8_t Engine_Oil_Level_Remote_Reservoir;
    uint8_t Engine_Fuel_Supply_Pump_Intake_Pressure;
    uint8_t Engine_Fuel_Filter__suction_side__Differential_Pressure;
    uint8_t Engine_Waste_Oil_Reservoir_Level;
    uint8_t Engine_Oil_Filter_Outlet_Pressure;
    struct EFS_byte6 {
        uint8_t Engine_Oil_Priming_Pump_Switch:2;
        uint8_t Engine_Oil_Priming_State:2;
        uint8_t Engine_Oil_Pre_Heated_State:2;
        uint8_t Engine_Coolant_Pre_heated_State:2;
    }EFS_byte6;
    struct EFS_byte6 bt6 ;
    struct EFS_byte7 {
        uint8_t Engine_Ventilation_Status:3;
        uint8_t Fuel_Pump_Primer_Status:2;
    }EFS_byte7;
    struct EFS_byte7 bt7 ;
} getEFS_t ;
typedef struct getTCO1 {
    struct TCO1_byte1 {
        uint8_t Driver_1_working_state:3;
        uint8_t Driver_2_working_state:3;
        uint8_t Vehicle_motion:2;
    }TCO1_byte1;
    struct TCO1_byte1 bt1 ;
    struct TCO1_byte2 {
        uint8_t Driver_1_Time_Related_States:4;
        uint8_t Driver_card_driver_1:2;
        uint8_t Vehicle_Overspeed:2;
    }TCO1_byte2;
    struct TCO1_byte2 bt2 ;
    struct TCO1_byte3 {
        uint8_t Driver_2_Time_Related_States:4;
        uint8_t Driver_card_driver_2:2;
    }TCO1_byte3;
    struct TCO1_byte3 bt3 ;
    struct TCO1_byte4 {
        uint8_t System_event:2;
        uint8_t Handling_information:2;
        uint8_t Tachograph_performance:2;
        uint8_t Direction_indicator:2;
    }TCO1_byte4;
    struct TCO1_byte4 bt4 ;
    uint16_t Tachograph_output_shaft_speed;
    uint16_t Tachograph_vehicle_speed;
} getTCO1_t ;
typedef struct getHTR {
    uint8_t Auxiliary_Heater_Output_Coolant_Temperature;
    uint8_t Auxiliary_Heater_Input_Air_Temperature;
    uint8_t Auxiliary_Heater_Output_Power_Percent;
    struct HTR_byte4 {
        uint8_t Auxiliary_Heater_Mode:4;
    }HTR_byte4;
    struct HTR_byte4 bt4 ;
    struct HTR_byte5 {
        uint8_t Auxiliary_Heater_Water_Pump_Status:2;
        uint8_t Cab_Ventilation:2;
        uint8_t Engine_Heating_Zone:2;
        uint8_t Cab_Heating_Zone:2;
    }HTR_byte5;
    struct HTR_byte5 bt5 ;
} getHTR_t ;
typedef struct getHRW {
    uint16_t Front_Axle_Left_Wheel_Speed;
    uint16_t Front_axle_right_wheel_speed;
    uint16_t Rear_axle_left_wheel_speed;
    uint16_t Rear_axle_right_wheel_speed;
} getHRW_t ;
typedef struct getACC1 {
    uint8_t Speed_of_forward_vehicle;
    uint8_t Distance_to_forward_vehicle;
    uint8_t Adaptive_Cruise_Control_Set_Speed;
    struct ACC1_byte4 {
        uint8_t Adaptive_Cruise_Control_Mode:3;
        uint8_t Adaptive_cruise_control_set_distance_mode:3;
    }ACC1_byte4;
    struct ACC1_byte4 bt4 ;
    uint16_t Road_curvature;
    struct ACC1_byte7 {
        uint8_t ACC_Target_Detected:2;
        uint8_t ACC_System_Shutoff_Warning:2;
        uint8_t ACC_Distance_Alert_Signal:2;
        uint8_t Forward_Collision_Warning:2;
    }ACC1_byte7;
    struct ACC1_byte7 bt7 ;
} getACC1_t ;
typedef struct getCVW {
    uint16_t Powered_Vehicle_Weight;
    uint16_t Gross_Combination_Vehicle_Weight;
} getCVW_t ;
typedef struct getLTP {
    uint16_t Laser_Tracer_Target_Deviation;
    uint16_t Laser_Tracer_Vertical_Distance;
    uint8_t Laser_Tracer_Horizontal_Deviation;
    struct LTP_byte6 {
        uint8_t LED_Display_Data_2:8;
    }LTP_byte6;
    struct LTP_byte6 bt6 ;
    struct LTP_byte7 {
        uint8_t Laser_Tracer_Information:8;
    }LTP_byte7;
    struct LTP_byte7 bt7 ;
} getLTP_t ;
typedef struct getLBC {
    uint16_t Blade_Duration_and_Direction;
    struct LBC_byte3 {
        uint8_t Blade_Control_Mode:8;
    }LBC_byte3;
    struct LBC_byte3 bt3 ;
    struct LBC_byte4 {
        uint8_t Blade_Control_Mode___Left:4;
        uint8_t Blade_Control_Mode___Right:4;
    }LBC_byte4;
    struct LBC_byte4 bt4 ;
    struct LBC_byte5 {
        uint8_t Land_Leveling_System_Enable_Status:2;
    }LBC_byte5;
    struct LBC_byte5 bt5 ;
} getLBC_t ;
typedef struct getLMP {
    uint16_t Mast_Position;
} getLMP_t ;
typedef struct getLSP {
    uint16_t Modify_Leveling_System_Set_Point;
    uint32_t Blade_Height_Set_Point___High_Resolution;
} getLSP_t ;
typedef struct getLVD {
    uint16_t Laser_Strike_Vertical_Deviation;
    uint8_t Laser_Receiver_Type;
    uint16_t Laser_Strike_Data_Latency;
    uint16_t Absolute_Laser_Strike_Position;
} getLVD_t ;
typedef struct getLVDD {
    struct LVDD_byte1 {
        uint8_t LED_Display_Data_1:8;
    }LVDD_byte1;
    struct LVDD_byte1 bt1 ;
    struct LVDD_byte2 {
        uint8_t LED_Display_Mode_Control:4;
        uint8_t LED_Display_Deadband_Control:4;
    }LVDD_byte2;
    struct LVDD_byte2 bt2 ;
    struct LVDD_byte3 {
        uint8_t LED_Pattern_Control:4;
        uint8_t Display_Deadbands:4;
    }LVDD_byte3;
    struct LVDD_byte3 bt3 ;
} getLVDD_t ;
typedef struct getAP {
    uint16_t Auxiliary_Vacuum_Pressure_Reading;
    uint16_t Auxiliary_Gage_Pressure_Reading_1;
    uint16_t Auxiliary_Absolute_Pressure_Reading;
} getAP_t ;
typedef struct getTP1 {
    uint8_t Tire_Pressure_Check_Interval;
    struct TP1_byte2 {
        uint8_t Steer_Channel_Mode:4;
    }TP1_byte2;
    struct TP1_byte2 bt2 ;
    struct TP1_byte3 {
        uint8_t Trailer_tag_Channel_Mode:4;
        uint8_t Drive_Channel_Mode:4;
    }TP1_byte3;
    struct TP1_byte3 bt3 ;
    struct TP1_byte4 {
        uint8_t PCU_Drive_Solenoid_Status:2;
        uint8_t PCU_Steer_Solenoid_Status:2;
        uint8_t Tire_Pressure_Supply_Switch_Status:2;
    }TP1_byte4;
    struct TP1_byte4 bt4 ;
    struct TP1_byte5 {
        uint8_t PCU_Deflate_Solenoid_Status:2;
        uint8_t PCU_Control_Solenoid_Status:2;
        uint8_t PCU_Supply_Solenoid_Status:2;
        uint8_t PCU_Trailer_Tag_or_Push_Solenoid_Status:2;
    }TP1_byte5;
    struct TP1_byte5 bt5 ;
} getTP1_t ;
typedef struct getTP2 {
    uint16_t Trailer_Tag_Or_Push_Channel_Tire_Pressure_Target;
    uint16_t Drive_Channel_Tire_Pressure_Target;
    uint16_t Steer_Channel_Tire_Pressure_Target;
} getTP2_t ;
typedef struct getTP3 {
    uint16_t Trailer_Tag_Or_Push_Channel_Tire_Pressure;
    uint16_t Drive_Channel_Tire_Pressure;
    uint16_t Steer_Channel_Tire_Pressure;
} getTP3_t ;
typedef struct getCT1 {
    uint16_t Engine_Cylinder_1_Combustion_Time;
    uint16_t Engine_Cylinder_2_Combustion_Time;
    uint16_t Engine_Cylinder_3_Combustion_Time;
    uint16_t Engine_Cylinder_4_Combustion_Time;
} getCT1_t ;
typedef struct getCT2 {
    uint16_t Engine_Cylinder_5_Combustion_Time;
    uint16_t Engine_Cylinder_6_Combustion_Time;
    uint16_t Engine_Cylinder_7_Combustion_Time;
    uint16_t Engine_Cylinder_8_Combustion_Time;
} getCT2_t ;
typedef struct getCT3 {
    uint16_t Engine_Cylinder_9_Combustion_Time;
    uint16_t Engine_Cylinder_10_Combustion_Time;
    uint16_t Engine_Cylinder_11_Combustion_Time;
    uint16_t Engine_Cylinder_12_Combustion_Time;
} getCT3_t ;
typedef struct getCT4 {
    uint16_t Engine_Cylinder_13_Combustion_Time;
    uint16_t Engine_Cylinder_14_Combustion_Time;
    uint16_t Engine_Cylinder_15_Combustion_Time;
    uint16_t Engine_Cylinder_16_Combustion_Time;
} getCT4_t ;
typedef struct getCT5 {
    uint16_t Engine_Cylinder_17_Combustion_Time;
    uint16_t Engine_Cylinder_18_Combustion_Time;
    uint16_t Engine_Cylinder_19_Combustion_Time;
    uint16_t Engine_Cylinder_20_Combustion_Time;
} getCT5_t ;
typedef struct getCT6 {
    uint16_t Engine_Desired_Combustion_Time;
    uint16_t Engine_Average_Combustion_Time;
} getCT6_t ;
typedef struct getGFI2 {
    uint16_t Engine_Fuel_Flow_Rate_1;
    uint16_t Engine_Fuel_Flow_Rate_2;
    uint8_t Engine_Fuel_Valve_1_Position;
    uint8_t Engine_Fuel_Valve_2_Position;
    uint8_t Engine_Requested_Fuel_Valve_1_Position;
    uint8_t Engine_Requested_Fuel_Valve_2_Position;
} getGFI2_t ;
typedef struct getIT1 {
    uint16_t Engine_Cylinder_1_Ignition_Timing;
    uint16_t Engine_Cylinder_2_Ignition_Timing;
    uint16_t Engine_Cylinder_3_Ignition_Timing;
    uint16_t Engine_Cylinder_4_Ignition_Timing;
} getIT1_t ;
typedef struct getIT2 {
    uint16_t Engine_Cylinder_5_Ignition_Timing;
    uint16_t Engine_Cylinder_6_Ignition_Timing;
    uint16_t Engine_Cylinder_7_Ignition_Timing;
    uint16_t Engine_Cylinder_8_Ignition_Timing;
} getIT2_t ;
typedef struct getIT3 {
    uint16_t Engine_Cylinder_9_Ignition_Timing;
    uint16_t Engine_Cylinder_10_Ignition_Timing;
    uint16_t Engine_Cylinder_11_Ignition_Timing;
    uint16_t Engine_Cylinder_12_Ignition_Timing;
} getIT3_t ;
typedef struct getIT4 {
    uint16_t Engine_Cylinder_13_Ignition_Timing;
    uint16_t Engine_Cylinder_14_Ignition_Timing;
    uint16_t Engine_Cylinder_15_Ignition_Timing;
    uint16_t Engine_Cylinder_16_Ignition_Timing;
} getIT4_t ;
typedef struct getIT5 {
    uint16_t Engine_Cylinder_17_Ignition_Timing;
    uint16_t Engine_Cylinder_18_Ignition_Timing;
    uint16_t Engine_Cylinder_19_Ignition_Timing;
    uint16_t Engine_Cylinder_20_Ignition_Timing;
} getIT5_t ;
typedef struct getIT6 {
    uint16_t Engine_Desired_Ignition_Timing_1;
    uint16_t Engine_Desired_Ignition_Timing_2;
    uint16_t Engine_Desired_Ignition_Timing_3;
    uint16_t Engine_Actual_Ignition_Timing;
} getIT6_t ;
typedef struct getISO1 {
    uint8_t Engine_Cylinder_1_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_2_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_3_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_4_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_5_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_6_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_7_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_8_Ignition_Transformer_Secondary_Output;
} getISO1_t ;
typedef struct getISO2 {
    uint8_t Engine_Cylinder_9_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_10_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_11_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_12_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_13_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_14_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_15_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_16_Ignition_Transformer_Secondary_Output;
} getISO2_t ;
typedef struct getISO3 {
    uint8_t Engine_Cylinder_17_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_18_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_19_Ignition_Transformer_Secondary_Output;
    uint8_t Engine_Cylinder_20_Ignition_Transformer_Secondary_Output;
} getISO3_t ;
typedef struct getGFP {
    uint16_t Engine_Fuel_Valve_1_Intake_Absolute_Pressure;
    uint16_t Engine_Fuel_Valve_Differential_Pressure;
    uint16_t Engine_Air_to_Fuel_Differential_Pressure;
    uint16_t Engine_Fuel;
} getGFP_t ;
typedef struct getAAI {
    uint8_t Auxiliary_Temperature_1;
    uint8_t Auxiliary_Temperature_2;
    uint8_t Auxiliary_Pressure_1;
    uint8_t Auxiliary_Pressure_2;
    uint16_t Auxiliary_Level;
    uint8_t Relative_Humidity;
} getAAI_t ;
typedef struct getVEP2 {
    uint16_t Battery_Potential___Power_Input_2;
    uint16_t ECU_Power_Output_Supply_Voltage_1;
    uint16_t ECU_Power_Output_Supply_Voltage_2;
    uint16_t ECU_Power_Output_Supply_Voltage_3;
} getVEP2_t ;
typedef struct getSP2 {
    uint16_t Engine_External_Shutdown_Air_Supply_Pressure;
} getSP2_t ;
typedef struct getFL {
    struct FL_byte1 {
        uint8_t Engine_Fuel_Leakage_1:2;
        uint8_t Engine_Fuel_Leakage_2:2;
    }FL_byte1;
    struct FL_byte1 bt1 ;
} getFL_t ;
typedef struct getEI {
    uint8_t Engine_Pre_filter_Oil_Pressure;
    uint16_t Engine_Exhaust_Gas_Pressure_1;
    uint8_t Engine_Fuel_Rack_Position;
    uint16_t Engine_Gas_Mass_Flow_Rate_1;
    uint16_t Instantaneous_Estimated_Brake_Power;
} getEI_t ;
typedef struct getEES {
    uint16_t Electrical_Load;
    struct EES_byte3 {
        uint8_t Safety_Wire_Status:2;
    }EES_byte3;
    struct EES_byte3 bt3 ;
} getEES_t ;
typedef struct getEAC {
    uint8_t Engine_Auxiliary_Coolant_Pressure;
    uint8_t Engine_Auxiliary_Coolant_Temperature;
    uint8_t Sea_Water_Pump_Outlet_Pressure;
    uint8_t Engine_Extended_Range_Coolant_Pressure;
} getEAC_t ;
typedef struct getRBI {
    uint32_t Engine_Operation_Time_Since_Rebuild;
} getRBI_t ;
typedef struct getTCW {
    uint8_t Engine_Turbocharger_Wastegate_Actuator_1_Position;
    uint8_t Engine_Turbocharger_Wastegate_Actuator_2_Position;
    uint8_t Engine_Turbocharger_Wastegate_Actuator_3_Position;
    uint8_t Engine_Turbocharger_Wastegate_Actuator_4_Position;
    uint8_t Engine_Turbocharger_Wastegate_Actuator_Control_Air_Pressure;
    uint8_t Engine_Desired_Turbocharger_Wastegate_Actuator_1_Position;
    struct TCW_byte7 {
        uint8_t Engine_Turbocharger_Wastegate_Actuator_1_Preliminary_FMI:5;
        uint8_t Engine_Turbocharger_Wastegate_Actuator_1_Temperature_Status:3;
    }TCW_byte7;
    struct TCW_byte7 bt7 ;
    uint8_t Engine_Desired_Turbocharger_Wastegate_Actuator_2_Position;
} getTCW_t ;
typedef struct getTCI5 {
    uint16_t Engine_Turbocharger_1_Turbine_Outlet_Temperature;
    uint16_t Engine_Turbocharger_2_Turbine_Outlet_Temperature;
    uint16_t Engine_Turbocharger_3_Turbine_Outlet_Temperature;
    uint16_t Engine_Turbocharger_4_Turbine_Outlet_Temperature;
} getTCI5_t ;
typedef struct getTCI4 {
    uint16_t Engine_Turbocharger_1_Turbine_Intake_Temperature;
    uint16_t Engine_Turbocharger_2_Turbine_Intake_Temperature;
    uint16_t Engine_Turbocharger_3_Turbine_Intake_Temperature;
    uint16_t Engine_Turbocharger_4_Turbine_Intake_Temperature;
} getTCI4_t ;
typedef struct getTCI3 {
    uint16_t Engine_Turbocharger_1_Compressor_Intake_Pressure;
    uint16_t Engine_Turbocharger_2_Compressor_Intake_Pressure;
    uint16_t Engine_Turbocharger_3_Compressor_Intake_Pressure;
    uint16_t Engine_Turbocharger_4_Compressor_Intake_Pressure;
} getTCI3_t ;
typedef struct getTCI2 {
    uint16_t Engine_Turbocharger_1_Compressor_Intake_Temperature;
    uint16_t Engine_Turbocharger_2_Compressor_Intake_Temperature;
    uint16_t Engine_Turbocharger_3_Compressor_Intake_Temperature;
    uint16_t Engine_Turbocharger_4_Compressor_Intake_Temperature;
} getTCI2_t ;
typedef struct getTCI1 {
    uint8_t Engine_Turbocharger_Lube_Oil_Pressure_2;
    uint16_t Engine_Turbocharger_2_Speed;
    uint16_t Engine_Turbocharger_3_Speed;
    uint16_t Engine_Turbocharger_4_Speed;
} getTCI1_t ;
typedef struct getMBT3 {
    uint16_t Engine_Main_Bearing_9_Temperature;
    uint16_t Engine_Main_Bearing_10_Temperature;
    uint16_t Engine_Main_Bearing_11_Temperature;
} getMBT3_t ;
typedef struct getMBT2 {
    uint16_t Engine_Main_Bearing_5_Temperature;
    uint16_t Engine_Main_Bearing_6_Temperature;
    uint16_t Engine_Main_Bearing_7_Temperature;
    uint16_t Engine_Main_Bearing_8_Temperature;
} getMBT2_t ;
typedef struct getMBT1 {
    uint16_t Engine_Main_Bearing_1_Temperature;
    uint16_t Engine_Main_Bearing_2_Temperature;
    uint16_t Engine_Main_Bearing_3_Temperature;
    uint16_t Engine_Main_Bearing_4_Temperature;
} getMBT1_t ;
typedef struct getEPT5 {
    uint16_t Engine_Exhaust_Gas_Port_17_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_18_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_19_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_20_Temperature;
} getEPT5_t ;
typedef struct getEPT4 {
    uint16_t Engine_Exhaust_Gas_Port_13_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_14_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_15_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_16_Temperature;
} getEPT4_t ;
typedef struct getEPT3 {
    uint16_t Engine_Exhaust_Gas_Port_9_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_10_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_11_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_12_Temperature;
} getEPT3_t ;
typedef struct getEPT2 {
    uint16_t Engine_Exhaust_Gas_Port_5_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_6_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_7_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_8_Temperature;
} getEPT2_t ;
typedef struct getEPT1 {
    uint16_t Engine_Exhaust_Gas_Port_1_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_2_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_3_Temperature;
    uint16_t Engine_Exhaust_Gas_Port_4_Temperature;
} getEPT1_t ;
typedef struct getET2 {
    uint16_t Engine_Oil_Temperature_2;
    uint16_t Engine_ECU_Temperature;
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Differential_Pressure;
    uint16_t Engine_Exhaust_Gas_Recirculation_1_Temperature;
} getET2_t ;
typedef struct getIMT2 {
    uint8_t Engine_Intake_Manifold_2_Temperature;
    uint8_t Engine_Intake_Manifold_3_Temperature;
    uint8_t Engine_Intake_Manifold_4_Temperature;
    uint8_t Engine_Intake_Manifold_5_Temperature;
    uint8_t Engine_Intake_Manifold_6_Temperature;
} getIMT2_t ;
typedef struct getIMT1 {
    uint16_t Engine_Turbocharger_1_Boost_Pressure;
    uint16_t Engine_Turbocharger_2_Boost_Pressure;
    uint16_t Engine_Turbocharger_3_Boost_Pressure;
    uint16_t Engine_Turbocharger_4_Boost_Pressure;
} getIMT1_t ;
typedef struct getAT {
    uint8_t Engine_Alternator_Bearing_1_Temperature;
    uint8_t Engine_Alternator_Bearing_2_Temperature;
    uint8_t Engine_Alternator_Winding_1_Temperature;
    uint8_t Engine_Alternator_Winding_2_Temperature;
    uint8_t Engine_Alternator_Winding_3_Temperature;
} getAT_t ;
typedef struct getACTL {
    uint8_t Articulation_Angle;
} getACTL_t ;
typedef struct getEO1 {
    uint16_t Engine_Desired_Rated_Exhaust_Oxygen;
    uint16_t Engine_Desired_Exhaust_Oxygen;
    uint16_t Engine_Actual_Exhaust_Oxygen;
    uint8_t Engine_Exhaust_Gas_Oxygen_Sensor_Fueling_Correction;
    struct EO1_byte8 {
        uint8_t Engine_Exhaust_Gas_Oxygen_Sensor_Closed_Loop_Operation:2;
    }EO1_byte8;
    struct EO1_byte8 bt8 ;
} getEO1_t ;
typedef struct getAF2 {
    uint8_t Engine_Gaseous_Fuel_Correction_Factor;
    uint16_t Engine_Desired_Absolute_Intake_Manifold_Pressure__Turbo_Boost_Limit_;
    uint8_t Engine_Turbocharger_Wastegate_Valve_Position;
    uint8_t Engine_Gas_Mass_Flow_Sensor_Fueling_Correction;
} getAF2_t ;
typedef struct getETC6 {
    uint8_t Recommended_Gear;
    uint8_t Highest_Possible_Gear;
    uint8_t Lowest_Possible_Gear;
    uint8_t Clutch_Life_Remaining;
} getETC6_t ;
typedef struct getEBC4 {
    uint8_t Brake_Lining_Remaining_Front_Axle_Left_Wheel;
    uint8_t Brake_Lining_Remaining_Front_Axle_Right_Wheel;
    uint8_t Brake_Lining_Remaining_Rear_Axle_1_Left_Wheel;
    uint8_t Brake_Lining_Remaining_Rear_Axle_1_Right_Wheel;
    uint8_t Brake_Lining_Remaining_Rear_Axle_2_Left_Wheel;
    uint8_t Brake_Lining_Remaining_Rear_Axle_2_Right_Wheel;
    uint8_t Brake_Lining_Remaining_Rear_Axle_3_Left_Wheel;
    uint8_t Brake_Lining_Remaining_Rear_Axle_3_Right_Wheel;
} getEBC4_t ;
typedef struct getEBC3 {
    uint8_t Brake_Application_Pressure_High_Range_Front_Axle_Left_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Front_Axle_Right_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Rear_Axle_1_Left_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Rear_Axle_1_Right_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Rear_Axle_2_Left_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Rear_Axle_2_Right_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Rear_Axle_3_Left_Wheel;
    uint8_t Brake_Application_Pressure_High_Range_Rear_Axle_3_Right_Wheel;
} getEBC3_t ;
typedef struct getAIR1 {
    uint8_t Pneumatic_Supply_Pressure;
    uint8_t Parking_and_or_Trailer_Air_Pressure;
    uint8_t Service_Brake_Circuit_1_Air_Pressure;
    uint8_t Service_Brake_Circuit_2_Air_Pressure;
    uint8_t Auxiliary_Equipment_Supply_Pressure;
    uint8_t Air_Suspension_Supply_Pressure;
    struct AIR1_byte7 {
        uint8_t Air_Compressor_Status:2;
    }AIR1_byte7;
    struct AIR1_byte7 bt7 ;
} getAIR1_t ;
typedef struct getGFC {
    uint32_t Trip_Fuel__Gaseous_;
    uint32_t Total_Fuel_Used__Gaseous_;
} getGFC_t ;
typedef struct getTTI2 {
    uint32_t Trip_Cruise_Time;
    uint32_t Trip_PTO_Governor_Time;
    uint32_t Trip_Engine_Running_Time;
    uint32_t Trip_Idle_Time;
    uint32_t Trip_Air_Compressor_On_Time;
} getTTI2_t ;
typedef struct getEH {
    uint32_t Total_ECU_Distance;
    uint32_t Total_ECU_Run_Time;
} getEH_t ;
typedef struct getGFI1 {
    uint32_t Total_Engine_PTO_Governor_Fuel_Used__Gaseous_;
    uint16_t Trip_Average_Fuel_Rate__Gaseous_;
    uint16_t Engine_Fuel_Specific_Gravity;
} getGFI1_t ;
typedef struct getLFI {
    uint32_t Total_Engine_PTO_Governor_Fuel_Used;
    uint16_t Trip_Average_Fuel_Rate;
    uint16_t Flexible_Fuel_Percentage;
} getLFI_t ;
typedef struct getTTI1 {
    uint32_t Trip_Time_in_VSL;
    uint32_t Trip_Time_in_Top_Gear;
    uint32_t Trip_Time_in_Gear_Down;
    uint32_t Trip_Time_in_Derate_by_Engine;
} getTTI1_t ;
typedef struct getTSI {
    uint16_t Trip_Number_of_Hot_Shutdowns;
    uint16_t Trip_Number_of_Idle_Shutdowns;
    uint16_t Trip_Number_of_Idle_Shutdown_Overrides;
    uint16_t Trip_Sudden_Decelerations;
} getTSI_t ;
typedef struct getTVI {
    uint16_t Trip_Maximum_Vehicle_Speed;
    uint32_t Trip_Cruise_Distance;
} getTVI_t ;
typedef struct getLF {
    uint16_t Trip_Maximum_Engine_Speed;
    uint16_t Trip_Average_Engine_Speed;
    uint8_t Trip_Drive_Average_Load_Factor;
    uint8_t Total_Drive_Average_Load_Factor;
    uint32_t Total_Engine_Cruise_Time;
} getLF_t ;
typedef struct getGTFI {
    uint32_t Trip_Drive_Fuel_Used__Gaseous_;
    uint32_t Trip_PTO_Governor_Moving_Fuel_Used__Gaseous_;
    uint32_t Trip_PTO_Governor_Non_moving_Fuel_Used__Gaseous_;
    uint32_t Trip_Vehicle_Idle_Fuel_Used__Gaseous_;
    uint32_t Trip_Cruise_Fuel_Used__Gaseous_;
    uint16_t Trip_Drive_Fuel_Economy__Gaseous_;
} getGTFI_t ;
typedef struct getLTFI {
    uint32_t Trip_Drive_Fuel_Used;
    uint32_t Trip_PTO_Governor_Moving_Fuel_Used;
    uint32_t Trip_PTO_Governor_Non_moving_Fuel_Used;
    uint32_t Trip_Vehicle_Idle_Fuel_Used;
    uint32_t Trip_Cruise_Fuel_Used;
    uint16_t Trip_Drive_Fuel_Economy;
} getLTFI_t ;
typedef struct getTDI {
    uint32_t Trip_Distance_on_VSL;
    uint32_t Trip_Gear_Down_Distance;
    uint32_t Trip_Distance_in_Top_Gear;
} getTDI_t ;
typedef struct getTFI {
    uint32_t Trip_Fan_On_Time;
    uint32_t Trip_Fan_On_Time_Due_to_the_Engine_System;
    uint32_t Trip_Fan_On_Time_Due_to_a_Manual_Switch;
    uint32_t Trip_Fan_On_Time_Due_to_the_A_C_System;
} getTFI_t ;
typedef struct getCBI {
    uint32_t Total_Compression_Brake_Distance;
    uint32_t Trip_Compression_Brake_Distance;
    uint32_t Trip_Service_Brake_Distance;
    uint32_t Trip_Service_Brake_Applications;
} getCBI_t ;
typedef struct getFD1 {
    uint8_t Estimated_Percent_Fan_Speed;
    struct FD1_byte2 {
        uint8_t Fan_Drive_State:4;
    }FD1_byte2;
    struct FD1_byte2 bt2 ;
    uint16_t Fan_Speed;
    uint16_t Hydraulic_Fan_Motor_Pressure;
    uint8_t Fan_Drive_Bypass_Command_Status;
} getFD1_t ;
typedef struct getEEC4 {
    uint16_t Engine_Rated_Power;
    uint16_t Engine_Rated_Speed;
    struct EEC4_byte5 {
        uint8_t Engine_Rotation_Direction:2;
        uint8_t Engine_Intake_Manifold_Pressure_Control_Mode:2;
    }EEC4_byte5;
    struct EEC4_byte5 bt5 ;
    uint8_t Crank_Attempt_Count_on_Present_Start_Attempt;
} getEEC4_t ;
typedef struct getEBC2 {
    uint16_t Front_Axle_Speed;
    uint8_t Relative_Speed__Front_Axle_Left_Wheel;
    uint8_t Relative_Speed__Front_Axle_Right_Wheel;
    uint8_t Relative_Speed__Rear_Axle_1_Left_Wheel;
    uint8_t Relative_Speed__Rear_Axle_1_Right_Wheel;
    uint8_t Relative_Speed__Rear_Axle_2_Left_Wheel;
    uint8_t Relative_Speed__Rear_Axle_2_Right_Wheel;
} getEBC2_t ;
typedef struct getVDHR {
    uint32_t High_Resolution_Total_Vehicle_Distance;
    uint32_t High_Resolution_Trip_Distance;
} getVDHR_t ;
typedef struct getERC2 {
    struct ERC2_byte1 {
        uint8_t Transmission_Output_Retarder:2;
    }ERC2_byte1;
    struct ERC2_byte1 bt1 ;
} getERC2_t ;
typedef struct getETC5 {
    struct ETC5_byte1 {
        uint8_t Transmission_High_Range_Sense_Switch:2;
        uint8_t Transmission_Low_Range_Sense_Switch:2;
    }ETC5_byte1;
    struct ETC5_byte1 bt1 ;
    struct ETC5_byte2 {
        uint8_t Transmission_Reverse_Direction_Switch:2;
        uint8_t Transmission_Neutral_Switch:2;
        uint8_t Transmission_Forward_Direction_Switch:2;
    }ETC5_byte2;
    struct ETC5_byte2 bt2 ;
} getETC5_t ;
typedef struct getETC4 {
    uint8_t Transmission_Synchronizer_Clutch_Value;
    uint8_t Transmission_Synchronizer_Brake_Value;
} getETC4_t ;
typedef struct getETC3 {
    uint8_t Transmission_Shift_Finger_Gear_Position;
    uint8_t Transmission_Shift_Finger_Rail_Position;
    struct ETC3_byte3 {
        uint8_t Transmission_Shift_Finger_Neutral_Indicator:2;
        uint8_t Transmission_Shift_Finger_Engagement_Indicator:2;
        uint8_t Transmission_Shift_Finger_Center_Rail_Indicator:2;
    }ETC3_byte3;
    struct ETC3_byte3 bt3 ;
    struct ETC3_byte4 {
        uint8_t Transmission_Shift_Finger_Rail_Actuator_1:2;
        uint8_t Transmission_Shift_Finger_Gear_Actuator_1:2;
        uint8_t Transmission_Shift_Finger_Rail_Actuator_2:2;
        uint8_t Transmission_Shift_Finger_Gear_Actuator_2:2;
    }ETC3_byte4;
    struct ETC3_byte4 bt4 ;
    struct ETC3_byte5 {
        uint8_t Transmission_Range_High_Actuator:2;
        uint8_t Transmission_Range_Low_Actuator:2;
        uint8_t Transmission_Splitter_Direct_Actuator:2;
        uint8_t Transmission_Splitter_Indirect_Actuator:2;
    }ETC3_byte5;
    struct ETC3_byte5 bt5 ;
    struct ETC3_byte6 {
        uint8_t Transmission_Clutch_Actuator:2;
        uint8_t Transmission_Lockup_Clutch_Actuator:2;
        uint8_t Transmission_Defuel_Actuator:2;
        uint8_t Transmission_Inertia_Brake_Actuator:2;
    }ETC3_byte6;
    struct ETC3_byte6 bt6 ;
} getETC3_t ;
typedef struct getAS {
    uint16_t Alternator_Speed;
    struct AS_byte3 {
        uint8_t Alternator_1_Status:2;
        uint8_t Alternator_2_Status:2;
        uint8_t Alternator_3_Status:2;
        uint8_t Alternator_4_Status:2;
    }AS_byte3;
    struct AS_byte3 bt3 ;
} getAS_t ;
typedef struct getAUXIO1 {
    struct AUXIO1_byte1 {
        uint8_t Auxiliary_I_O_04:2;
        uint8_t Auxiliary_I_O_03:2;
        uint8_t Auxiliary_I_O_02:2;
        uint8_t Auxiliary_I_O_01:2;
    }AUXIO1_byte1;
    struct AUXIO1_byte1 bt1 ;
    struct AUXIO1_byte2 {
        uint8_t Auxiliary_I_O_08:2;
        uint8_t Auxiliary_I_O_07:2;
        uint8_t Auxiliary_I_O_06:2;
        uint8_t Auxiliary_I_O_05:2;
    }AUXIO1_byte2;
    struct AUXIO1_byte2 bt2 ;
    struct AUXIO1_byte3 {
        uint8_t Auxiliary_I_O_12:2;
        uint8_t Auxiliary_I_O_11:2;
        uint8_t Auxiliary_I_O_10:2;
        uint8_t Auxiliary_I_O_09:2;
    }AUXIO1_byte3;
    struct AUXIO1_byte3 bt3 ;
    struct AUXIO1_byte4 {
        uint8_t Auxiliary_I_O_16:2;
        uint8_t Auxiliary_I_O_15:2;
        uint8_t Auxiliary_I_O_14:2;
        uint8_t Auxiliary_I_O_13:2;
    }AUXIO1_byte4;
    struct AUXIO1_byte4 bt4 ;
    uint16_t Auxiliary_I_O_Channel_1;
    uint16_t Auxiliary_I_O_Channel_2;
} getAUXIO1_t ;
typedef struct getSOFT {
    uint8_t Number_of_Software_Identification_Fields;
} getSOFT_t ;
typedef struct getEFL_P2 {
    uint16_t Engine_Injection_Control_Pressure;
    uint16_t Engine_Injector_Metering_Rail_1_Pressure;
    uint16_t Engine_Injector_Timing_Rail_1_Pressure;
    uint16_t Engine_Injector_Metering_Rail_2_Pressure;
} getEFL_P2_t ;
typedef struct getIO {
    uint32_t Engine_Total_Idle_Fuel_Used;
    uint32_t Engine_Total_Idle_Hours;
} getIO_t ;
typedef struct getTC {
    uint8_t Engine_Turbocharger_Lube_Oil_Pressure_1;
    uint16_t Engine_Turbocharger_1_Speed;
    struct TC_byte4 {
        uint8_t Engine_Turbocharger_Oil_Level_Switch:2;
    }TC_byte4;
    struct TC_byte4 bt4 ;
} getTC_t ;
typedef struct getAIR2 {
    uint8_t Engine_Air_Start_Pressure;
} getAIR2_t ;
typedef struct getEEC3 {
    uint8_t Nominal_Friction___Percent_Torque;
    uint16_t Engine_s_Desired_Operating_Speed;
    uint8_t Engine_s_Desired_Operating_Speed_Asymmetry_Adjustment;
    uint8_t Estimated_Engine_Parasitic_Losses___Percent_Torque;
    uint16_t Aftertreatment_1_Exhaust_Gas_Mass_Flow;
    struct EEC3_byte8 {
        uint8_t Aftertreatment_1_Intake_Dew_Point:2;
        uint8_t Aftertreatment_1_Exhaust_Dew_Point:2;
        uint8_t Aftertreatment_2_Intake_Dew_Point:2;
        uint8_t Aftertreatment_2_Exhaust_Dew_Point:2;
    }EEC3_byte8;
    struct EEC3_byte8 bt8 ;
} getEEC3_t ;
typedef struct getVD {
    uint32_t Trip_Distance;
    uint32_t Total_Vehicle_Distance;
} getVD_t ;
typedef struct getTCFG {
    uint8_t Number_of_Reverse_Gear_Ratios;
    uint8_t Number_of_Forward_Gear_Ratios;
    uint16_t Transmission_Gear_Ratio;
} getTCFG_t ;
typedef struct getSHUTDN {
    struct SHUTDN_byte1 {
        uint8_t Engine_Idle_Shutdown_has_Shutdown_Engine:2;
        uint8_t Engine_Idle_Shutdown_Driver_Alert_Mode:2;
        uint8_t Engine_Idle_Shutdown_Timer_Override:2;
        uint8_t Engine_Idle_Shutdown_Timer_State:2;
    }SHUTDN_byte1;
    struct SHUTDN_byte1 bt1 ;
    struct SHUTDN_byte2 {
        uint8_t Engine_Idle_Shutdown_Timer_Function:2;
    }SHUTDN_byte2;
    struct SHUTDN_byte2 bt2 ;
    struct SHUTDN_byte3 {
        uint8_t A_C_High_Pressure_Fan_Switch:2;
        uint8_t Refrigerant_Low_Pressure_Switch:2;
        uint8_t Refrigerant_High_Pressure_Switch:2;
    }SHUTDN_byte3;
    struct SHUTDN_byte3 bt3 ;
    struct SHUTDN_byte4 {
        uint8_t Engine_Wait_to_Start_Lamp:2;
    }SHUTDN_byte4;
    struct SHUTDN_byte4 bt4 ;
    struct SHUTDN_byte5 {
        uint8_t Engine_Protection_System_has_Shutdown_Engine:2;
        uint8_t Engine_Protection_System_Approaching_Shutdown:2;
        uint8_t Engine_Protection_System_Timer_Override:2;
        uint8_t Engine_Protection_System_Timer_State:2;
    }SHUTDN_byte5;
    struct SHUTDN_byte5 bt5 ;
    struct SHUTDN_byte6 {
        uint8_t Engine_Protection_System_Configuration:2;
    }SHUTDN_byte6;
    struct SHUTDN_byte6 bt6 ;
    struct SHUTDN_byte7 {
        uint8_t Engine_Alarm_Acknowledge:2;
        uint8_t Engine_Alarm_Output_Command_Status:2;
        uint8_t Engine_Air_Shutoff_Command_Status:2;
        uint8_t Engine_Overspeed_Test:2;
    }SHUTDN_byte7;
    struct SHUTDN_byte7 bt7 ;
    struct SHUTDN_byte8 {
        uint8_t Engine_Air_Shutoff_Status:2;
        uint8_t PTO_Shutdown_has_Shutdown_Engine:2;
        uint8_t Coolant_Level_Engine_Protection_Shutdown_Status:2;
    }SHUTDN_byte8;
    struct SHUTDN_byte8 bt8 ;
} getSHUTDN_t ;
typedef struct getHOURS {
    uint32_t Engine_Total_Hours_of_Operation;
    uint32_t Engine_Total_Revolutions;
} getHOURS_t ;
typedef struct getTD {
    uint8_t Seconds;
    uint8_t Minutes;
    uint8_t Hours;
    uint8_t Month;
    uint8_t Day;
    uint8_t Year;
    uint8_t Local_minute_offset;
    uint8_t Local_hour_offset;
} getTD_t ;
typedef struct getVH {
    uint32_t Total_Vehicle_Hours;
    uint32_t Total_Power_Takeoff_Hours;
} getVH_t ;
typedef struct getVDS {
    uint16_t Compass_Bearing;
    uint16_t Navigation_Based_Vehicle_Speed;
    uint16_t Pitch;
    uint16_t Altitude;
} getVDS_t ;
typedef struct getLFC {
    uint32_t Engine_Trip_Fuel;
    uint32_t Engine_Total_Fuel_Used;
} getLFC_t ;
typedef struct getVW {
    struct VW_byte1 {
        uint8_t Axle_Location:8;
    }VW_byte1;
    struct VW_byte1 bt1 ;
    uint16_t Axle_Weight;
    uint16_t Trailer_Weight;
    uint16_t Cargo_Weight;
} getVW_t ;
typedef struct getCCSS {
    uint8_t Maximum_Vehicle_Speed_Limit;
    uint8_t Cruise_Control_High_Set_Limit_Speed;
    uint8_t Cruise_Control_Low_Set_Limit_Speed;
} getCCSS_t ;
typedef struct getET1 {
    uint8_t Engine_Coolant_Temperature;
    uint8_t Engine_Fuel_Temperature_1;
    uint16_t Engine_Oil_Temperature_1;
    uint16_t Engine_Turbocharger_Oil_Temperature;
    uint8_t Engine_Intercooler_Temperature;
    uint8_t Engine_Intercooler_Thermostat_Opening;
} getET1_t ;
typedef struct getEFL_P1 {
    uint8_t Engine_Fuel_Delivery_Pressure;
    uint8_t Engine_Extended_Crankcase_Blow_by_Pressure;
    uint8_t Engine_Oil_Level;
    uint8_t Engine_Oil_Pressure;
    uint16_t Engine_Crankcase_Pressure;
    uint8_t Engine_Coolant_Pressure;
    uint8_t Engine_Coolant_Level;
} getEFL_P1_t ;
typedef struct getPTO {
    uint8_t Power_Takeoff_Oil_Temperature;
    uint16_t Power_Takeoff_Speed;
    uint16_t Power_Takeoff_Set_Speed;
    struct PTO_byte6 {
        uint8_t Engine_PTO_Governor_Enable_Switch:2;
        uint8_t Engine_Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch:2;
        uint8_t Engine_Remote_PTO_Governor_Variable_Speed_Control_Switch:2;
    }PTO_byte6;
    struct PTO_byte6 bt6 ;
    struct PTO_byte7 {
        uint8_t Engine_PTO_Governor_Set_Switch:2;
        uint8_t Engine_PTO_Governor_Coast_Decelerate_Switch:2;
        uint8_t Engine_PTO_Governor_Resume_Switch:2;
        uint8_t Engine_PTO_Governor_Accelerate_Switch:2;
    }PTO_byte7;
    struct PTO_byte7 bt7 ;
    struct PTO_byte8 {
        uint8_t Operator_Engine_PTO_Governor_Memory_Select_Switch:2;
        uint8_t Remote_PTO_Governor_Preprogrammed_Speed_Control_Switch_2:2;
        uint8_t Auxiliary_Input_Ignore_Switch:2;
    }PTO_byte8;
    struct PTO_byte8 bt8 ;
} getPTO_t ;
typedef struct getCCVS1 {
    struct CCVS1_byte1 {
        uint8_t Two_Speed_Axle_Switch:2;
        uint8_t Parking_Brake_Switch:2;
        uint8_t Cruise_Control_Pause_Switch:2;
        uint8_t Park_Brake_Release_Inhibit_Request:2;
    }CCVS1_byte1;
    struct CCVS1_byte1 bt1 ;
    uint16_t Wheel_Based_Vehicle_Speed;
    struct CCVS1_byte4 {
        uint8_t Cruise_Control_Active:2;
        uint8_t Cruise_Control_Enable_Switch:2;
        uint8_t Brake_Switch:2;
        uint8_t Clutch_Switch:2;
    }CCVS1_byte4;
    struct CCVS1_byte4 bt4 ;
    struct CCVS1_byte5 {
        uint8_t Cruise_Control_Set_Switch:2;
        uint8_t Cruise_Control_Coast__Decelerate__Switch:2;
        uint8_t Cruise_Control_Resume_Switch:2;
        uint8_t Cruise_Control_Accelerate_Switch:2;
    }CCVS1_byte5;
    struct CCVS1_byte5 bt5 ;
    uint8_t Cruise_Control_Set_Speed;
    struct CCVS1_byte7 {
        uint8_t PTO_Governor_State:5;
        uint8_t Cruise_Control_States:3;
    }CCVS1_byte7;
    struct CCVS1_byte7 bt7 ;
    struct CCVS1_byte8 {
        uint8_t Engine_Idle_Increment_Switch:2;
        uint8_t Engine_Idle_Decrement_Switch:2;
        uint8_t Engine_Test_Mode_Switch:2;
        uint8_t Engine_Shutdown_Override_Switch:2;
    }CCVS1_byte8;
    struct CCVS1_byte8 bt8 ;
} getCCVS1_t ;
typedef struct getLFE1 {
    uint16_t Engine_Fuel_Rate;
    uint16_t Engine_Instantaneous_Fuel_Economy;
    uint16_t Engine_Average_Fuel_Economy;
    uint8_t Engine_Throttle_Valve_1_Position;
    uint8_t Engine_Throttle_Valve_2_Position;
} getLFE1_t ;
typedef struct getVP {
    uint32_t Latitude;
    uint32_t Longitude;
} getVP_t ;
typedef struct getTIRE {
    struct TIRE_byte1 {
        uint8_t Tire_Location:8;
    }TIRE_byte1;
    struct TIRE_byte1 bt1 ;
    uint8_t Tire_Pressure;
    uint16_t Tire_Temperature;
    struct TIRE_byte5 {
        uint8_t CTI_Wheel_Sensor_Status:2;
        uint8_t CTI_Tire_Status:2;
        uint8_t CTI_Wheel_End_Electrical_Fault:2;
    }TIRE_byte5;
    struct TIRE_byte5 bt5 ;
    uint16_t Tire_Air_Leakage_Rate;
    struct TIRE_byte8 {
        uint8_t Tire_Pressure_Threshold_Detection:3;
    }TIRE_byte8;
    struct TIRE_byte8 bt8 ;
} getTIRE_t ;
typedef struct getAMB {
    uint8_t Barometric_Pressure;
    uint16_t Cab_Interior_Temperature;
    uint16_t Ambient_Air_Temperature;
    uint8_t Engine_Air_Intake_Temperature;
    uint16_t Road_Surface_Temperature;
} getAMB_t ;
typedef struct getIC1 {
    uint8_t Engine_Diesel_Particulate_Filter_Intake_Pressure;
    uint8_t Engine_Intake_Manifold_1_Pressure;
    uint8_t Engine_Intake_Manifold_1_Temperature;
    uint8_t Engine_Air_Intake_Pressure;
    uint8_t Engine_Air_Filter_1_Differential_Pressure;
    uint16_t Engine_Exhaust_Gas_Temperature;
    uint8_t Engine_Coolant_Filter_Differential_Pressure;
} getIC1_t ;
typedef struct getVEP1 {
    uint8_t Net_Battery_Current;
    uint8_t Alternator_Current;
    uint16_t Charging_System_Potential__Voltage_;
    uint16_t Battery_Potential___Power_Input_1;
    uint16_t Keyswitch_Battery_Potential;
} getVEP1_t ;
typedef struct getTRF1 {
    uint8_t Clutch_Pressure;
    uint8_t Transmission_Oil_Level_1;
    uint8_t Transmission_Filter_Differential_Pressure;
    uint8_t Transmission_Oil_Pressure;
    uint16_t Transmission_Oil_Temperature_1;
    uint8_t Transmission_Oil_Level_1_High___Low;
    struct TRF1_byte8 {
        uint8_t Transmission_Oil_Level_1_Countdown_Timer:4;
        uint8_t Transmission_Oil_Level_1_Measurement_Status:4;
    }TRF1_byte8;
    struct TRF1_byte8 bt8 ;
} getTRF1_t ;
typedef struct getAI {
    uint8_t Steering_Axle_Temperature;
    struct AI_byte2 {
        uint8_t Drive_Axle_Location:8;
    }AI_byte2;
    struct AI_byte2 bt2 ;
    uint8_t Drive_Axle_Lift_Air_Pressure;
    uint8_t Drive_Axle_Temperature;
    uint8_t Drive_Axle_Lube_Pressure;
    uint8_t Steering_Axle_Lube_Pressure;
} getAI_t ;
typedef struct getB {
    uint8_t Brake_Application_Pressure;
    uint8_t Brake_Primary_Pressure;
    uint8_t Brake_Secondary_Pressure;
    struct B_byte4 {
        uint8_t Parking_Brake_Actuator:2;
        uint8_t Parking_Brake_Red_Warning_Signal:2;
        uint8_t Park_Brake_Release_Inhibit_Status:2;
    }B_byte4;
    struct B_byte4 bt4 ;
} getB_t ;
typedef struct getRF {
    uint8_t Hydraulic_Retarder_Pressure;
    uint8_t Hydraulic_Retarder_Oil_Temperature;
    struct RF_byte3 {
        uint8_t Driveline_Retarder_Overheat_Indicator:2;
    }RF_byte3;
    struct RF_byte3 bt3 ;
} getRF_t ;
typedef struct getDD {
    uint8_t Washer_Fluid_Level;
    uint8_t Fuel_Level_1;
    uint8_t Engine_Fuel_Filter_Differential_Pressure;
    uint8_t Engine_Oil_Filter_Differential_Pressure;
    uint16_t Cargo_Ambient_Temperature;
    uint8_t Fuel_Level_2;
} getDD_t ;
typedef struct getA1 {
    uint8_t Engine_Blower_Bypass_Valve_Position;
    uint16_t Engine_Gas_Supply_Pressure;
} getA1_t ;
typedef struct getAWPP {
    uint8_t Auxiliary_Pump_Pressure;
} getAWPP_t ;
typedef struct getOI {
    struct OI_byte1 {
        uint8_t Water_In_Fuel_Indicator:2;
        uint8_t Operator_Shift_Prompt:2;
    }OI_byte1;
    struct OI_byte1 bt1 ;
    struct OI_byte2 {
        uint8_t Driver_Warning_System_Indicator_Status:3;
    }OI_byte2;
    struct OI_byte2 bt2 ;
} getOI_t ;

void config_TSC1 (getTSC1_t *TSC1);
void config_TC1 (getTC1_t *TC1);
void config_XBR (getXBR_t *XBR);
void config_GPV4 (getGPV4_t *GPV4);
void config_AUXIO5 (getAUXIO5_t *AUXIO5);
void config_SRASI (getSRASI_t *SRASI);
void config_CCVS2 (getCCVS2_t *CCVS2);
void config_AEBS2 (getAEBS2_t *AEBS2);
void config_ESR (getESR_t *ESR);
void config_RBR (getRBR_t *RBR);
void config_ECC (getECC_t *ECC);
void config_SFC (getSFC_t *SFC);
void config_VLS1 (getVLS1_t *VLS1);
void config_HCDI1 (getHCDI1_t *HCDI1);
void config_AT1DPFSSC (getAT1DPFSSC_t *AT1DPFSSC);
void config_AT2DPFSSC (getAT2DPFSSC_t *AT2DPFSSC);
void config_LVDSOM (getLVDSOM_t *LVDSOM);
void config_NCS (getNCS_t *NCS);
void config_NC1 (getNC1_t *NC1);
void config_JLCM (getJLCM_t *JLCM);
void config_AUXIO7 (getAUXIO7_t *AUXIO7);
void config_AUXIO6 (getAUXIO6_t *AUXIO6);
void config_AUXIO4 (getAUXIO4_t *AUXIO4);
void config_AUXIO3 (getAUXIO3_t *AUXIO3);
void config_AUXIO2 (getAUXIO2_t *AUXIO2);
void config_DISP1 (getDISP1_t *DISP1);
void config_FLIC (getFLIC_t *FLIC);
void config_TPRS (getTPRS_t *TPRS);
void config_CTL (getCTL_t *CTL);
void config_CL (getCL_t *CL);
void config_ASC6 (getASC6_t *ASC6);
void config_ASC2 (getASC2_t *ASC2);
void config_TDA (getTDA_t *TDA);
void config_ATS (getATS_t *ATS);
void config_ATR (getATR_t *ATR);
void config_CM1 (getCM1_t *CM1);
void config_ERC1 (getERC1_t *ERC1);
void config_EBC1 (getEBC1_t *EBC1);
void config_ETC1 (getETC1_t *ETC1);
void config_EEC2 (getEEC2_t *EEC2);
void config_EEC1 (getEEC1_t *EEC1);
void config_ETC2 (getETC2_t *ETC2);
void config_EAC1 (getEAC1_t *EAC1);
void config_FLI1 (getFLI1_t *FLI1);
void config_HPG (getHPG_t *HPG);
void config_VDC2 (getVDC2_t *VDC2);
void config_EGF1 (getEGF1_t *EGF1);
void config_ESC1 (getESC1_t *ESC1);
void config_ETC8 (getETC8_t *ETC8);
void config_LOI (getLOI_t *LOI);
void config_AT1IG1 (getAT1IG1_t *AT1IG1);
void config_AT1OG1 (getAT1OG1_t *AT1OG1);
void config_AT2IG1 (getAT2IG1_t *AT2IG1);
void config_AT2OG1 (getAT2OG1_t *AT2OG1);
void config_FWSS1 (getFWSS1_t *FWSS1);
void config_SSI (getSSI_t *SSI);
void config_BI (getBI_t *BI);
void config_CCS (getCCS_t *CCS);
void config_KL1 (getKL1_t *KL1);
void config_KL2 (getKL2_t *KL2);
void config_KL3 (getKL3_t *KL3);
void config_TFAC (getTFAC_t *TFAC);
void config_SAS (getSAS_t *SAS);
void config_ESSI (getESSI_t *ESSI);
void config_A1SCRDSI1 (getA1SCRDSI1_t *A1SCRDSI1);
void config_A1SCRDSR1 (getA1SCRDSR1_t *A1SCRDSR1);
void config_A1SCRAI (getA1SCRAI_t *A1SCRAI);
void config_A2SCRDSI1 (getA2SCRDSI1_t *A2SCRDSI1);
void config_A2SCRDSR1 (getA2SCRDSR1_t *A2SCRDSR1);
void config_A2SCRAI (getA2SCRAI_t *A2SCRAI);
void config_SSI2 (getSSI2_t *SSI2);
void config_ARI (getARI_t *ARI);
void config_CN (getCN_t *CN);
void config_MSI2 (getMSI2_t *MSI2);
void config_ACCS (getACCS_t *ACCS);
void config_Command (getCommand_t *Command);
void config_AEBS1 (getAEBS1_t *AEBS1);
void config_WS (getWS_t *WS);
void config_WAND (getWAND_t *WAND);
void config_LDISP (getLDISP_t *LDISP);
void config_A1SCRAI2 (getA1SCRAI2_t *A1SCRAI2);
void config_A2SCRAI2 (getA2SCRAI2_t *A2SCRAI2);
void config_HSS (getHSS_t *HSS);
void config_GFI4 (getGFI4_t *GFI4);
void config_A2SCREGT2 (getA2SCREGT2_t *A2SCREGT2);
void config_A1SCREGT2 (getA1SCREGT2_t *A1SCREGT2);
void config_EEC13 (getEEC13_t *EEC13);
void config_EF_TVI2 (getEF_TVI2_t *EF_TVI2);
void config_EEGR1A (getEEGR1A_t *EEGR1A);
void config_EEGR1B (getEEGR1B_t *EEGR1B);
void config_EEC12 (getEEC12_t *EEC12);
void config_NSSR (getNSSR_t *NSSR);
void config_EPSI (getEPSI_t *EPSI);
void config_AT1P1I (getAT1P1I_t *AT1P1I);
void config_AT1DPF2S5 (getAT1DPF2S5_t *AT1DPF2S5);
void config_AT1DPF2S4 (getAT1DPF2S4_t *AT1DPF2S4);
void config_AT1DPF2S3 (getAT1DPF2S3_t *AT1DPF2S3);
void config_AT1DPF1S5 (getAT1DPF1S5_t *AT1DPF1S5);
void config_AT1DPF1S4 (getAT1DPF1S4_t *AT1DPF1S4);
void config_AT1DPF1S3 (getAT1DPF1S3_t *AT1DPF1S3);
void config_CCVS3 (getCCVS3_t *CCVS3);
void config_AT2AC3 (getAT2AC3_t *AT2AC3);
void config_AT1AC3 (getAT1AC3_t *AT1AC3);
void config_EFL_P12 (getEFL_P12_t *EFL_P12);
void config_DPFC2 (getDPFC2_t *DPFC2);
void config_LFE2 (getLFE2_t *LFE2);
void config_SFS (getSFS_t *SFS);
void config_EBCC (getEBCC_t *EBCC);
void config_EFP (getEFP_t *EFP);
void config_HOP (getHOP_t *HOP);
void config_VLS2 (getVLS2_t *VLS2);
void config_EC3 (getEC3_t *EC3);
void config_IVAC (getIVAC_t *IVAC);
void config_ARMSWIMC (getARMSWIMC_t *ARMSWIMC);
void config_VEP4 (getVEP4_t *VEP4);
void config_AFT2NAI (getAFT2NAI_t *AFT2NAI);
void config_AFT1NAI (getAFT1NAI_t *AFT1NAI);
void config_AT2WUDOC (getAT2WUDOC_t *AT2WUDOC);
void config_LLRE (getLLRE_t *LLRE);
void config_EFL_P11 (getEFL_P11_t *EFL_P11);
void config_EFS2 (getEFS2_t *EFS2);
void config_Information (getInformation_t *Information);
void config_EFTVI1 (getEFTVI1_t *EFTVI1);
void config_ETCBI (getETCBI_t *ETCBI);
void config_CAC2 (getCAC2_t *CAC2);
void config_CAC2P (getCAC2P_t *CAC2P);
void config_CAC1 (getCAC1_t *CAC1);
void config_CAC1P (getCAC1P_t *CAC1P);
void config_DPF2S2 (getDPF2S2_t *DPF2S2);
void config_DPF1S2 (getDPF1S2_t *DPF1S2);
void config_EEC11 (getEEC11_t *EEC11);
void config_EMAP (getEMAP_t *EMAP);
void config_EMAC (getEMAC_t *EMAC);
void config_EEC9 (getEEC9_t *EEC9);
void config_EEC10 (getEEC10_t *EEC10);
void config_ET5 (getET5_t *ET5);
void config_EFL_P10 (getEFL_P10_t *EFL_P10);
void config_LVDS (getLVDS_t *LVDS);
void config_DLCD2 (getDLCD2_t *DLCD2);
void config_DLCD1 (getDLCD1_t *DLCD1);
void config_DLCC2 (getDLCC2_t *DLCC2);
void config_DLCC1 (getDLCC1_t *DLCC1);
void config_EOM (getEOM_t *EOM);
void config_AT2OGC2 (getAT2OGC2_t *AT2OGC2);
void config_AT2OGC1 (getAT2OGC1_t *AT2OGC1);
void config_AT2IGC2 (getAT2IGC2_t *AT2IGC2);
void config_AT2IGC1 (getAT2IGC1_t *AT2IGC1);
void config_AT1OGC2 (getAT1OGC2_t *AT1OGC2);
void config_AT1OGC1 (getAT1OGC1_t *AT1OGC1);
void config_AT1IGC2 (getAT1IGC2_t *AT1IGC2);
void config_AT1IGC1 (getAT1IGC1_t *AT1IGC1);
void config_MSI1 (getMSI1_t *MSI1);
void config_MSCI (getMSCI_t *MSCI);
void config_BCH2 (getBCH2_t *BCH2);
void config_BCH1 (getBCH1_t *BCH1);
void config_OCSI (getOCSI_t *OCSI);
void config_BDS (getBDS_t *BDS);
void config_CSI (getCSI_t *CSI);
void config_ILI (getILI_t *ILI);
void config_AT1WUDOC (getAT1WUDOC_t *AT1WUDOC);
void config_DPF2S (getDPF2S_t *DPF2S);
void config_DPF1S (getDPF1S_t *DPF1S);
void config_ATDT2 (getATDT2_t *ATDT2);
void config_ATDT1 (getATDT1_t *ATDT1);
void config_A2DOC (getA2DOC_t *A2DOC);
void config_A1DOC (getA1DOC_t *A1DOC);
void config_A2GOC (getA2GOC_t *A2GOC);
void config_A1GOC (getA1GOC_t *A1GOC);
void config_EJM10 (getEJM10_t *EJM10);
void config_BJM10 (getBJM10_t *BJM10);
void config_EJM9 (getEJM9_t *EJM9);
void config_BJM9 (getBJM9_t *BJM9);
void config_EJM8 (getEJM8_t *EJM8);
void config_BJM8 (getBJM8_t *BJM8);
void config_EJM7 (getEJM7_t *EJM7);
void config_BJM7 (getBJM7_t *BJM7);
void config_EJM6 (getEJM6_t *EJM6);
void config_BJM6 (getBJM6_t *BJM6);
void config_EJM5 (getEJM5_t *EJM5);
void config_BJM5 (getBJM5_t *BJM5);
void config_EJM4 (getEJM4_t *EJM4);
void config_BJM4 (getBJM4_t *BJM4);
void config_FD2 (getFD2_t *FD2);
void config_A2DEFSI (getA2DEFSI_t *A2DEFSI);
void config_A2SCRRT2I (getA2SCRRT2I_t *A2SCRRT2I);
void config_A2SCRRT1I (getA2SCRRT1I_t *A2SCRRT1I);
void config_A2DEFI (getA2DEFI_t *A2DEFI);
void config_A2SCRSI (getA2SCRSI_t *A2SCRSI);
void config_A2SCREGT1 (getA2SCREGT1_t *A2SCREGT1);
void config_A2SCREGP (getA2SCREGP_t *A2SCREGP);
void config_A2SCRDSR2 (getA2SCRDSR2_t *A2SCRDSR2);
void config_A2SCRDSI2 (getA2SCRDSI2_t *A2SCRDSI2);
void config_A1DEFSI (getA1DEFSI_t *A1DEFSI);
void config_A1SCRRT2I (getA1SCRRT2I_t *A1SCRRT2I);
void config_A1SCREGT1 (getA1SCREGT1_t *A1SCREGT1);
void config_A1SCREGP (getA1SCREGP_t *A1SCREGP);
void config_A1SCRDSR2 (getA1SCRDSR2_t *A1SCRDSR2);
void config_A1SCRDSI2 (getA1SCRDSI2_t *A1SCRDSI2);
void config_AT2FC2 (getAT2FC2_t *AT2FC2);
void config_AT2TWCC (getAT2TWCC_t *AT2TWCC);
void config_AT1TWCC (getAT1TWCC_t *AT1TWCC);
void config_O2FT2 (getO2FT2_t *O2FT2);
void config_O2FT1 (getO2FT1_t *O2FT1);
void config_ACCVC (getACCVC_t *ACCVC);
void config_ECCVC (getECCVC_t *ECCVC);
void config_EAI (getEAI_t *EAI);
void config_AT1FC2 (getAT1FC2_t *AT1FC2);
void config_ET4 (getET4_t *ET4);
void config_ZNVW (getZNVW_t *ZNVW);
void config_GCVW (getGCVW_t *GCVW);
void config_AGCW (getAGCW_t *AGCW);
void config_AGW (getAGW_t *AGW);
void config_AAGW (getAAGW_t *AAGW);
void config_AT2AC2 (getAT2AC2_t *AT2AC2);
void config_AT1AC2 (getAT1AC2_t *AT1AC2);
void config_SCR1 (getSCR1_t *SCR1);
void config_EEC8 (getEEC8_t *EEC8);
void config_DRC (getDRC_t *DRC);
void config_BSA (getBSA_t *BSA);
void config_ESV6 (getESV6_t *ESV6);
void config_ESV5 (getESV5_t *ESV5);
void config_ESV4 (getESV4_t *ESV4);
void config_ESV3 (getESV3_t *ESV3);
void config_ESV2 (getESV2_t *ESV2);
void config_ESV1 (getESV1_t *ESV1);
void config_AT2TI (getAT2TI_t *AT2TI);
void config_AT1TI (getAT1TI_t *AT1TI);
void config_AT2S (getAT2S_t *AT2S);
void config_AT1S (getAT1S_t *AT1S);
void config_DPFC1 (getDPFC1_t *DPFC1);
void config_AFSS (getAFSS_t *AFSS);
void config_EC2 (getEC2_t *EC2);
void config_EGRBV (getEGRBV_t *EGRBV);
void config_TCI (getTCI_t *TCI);
void config_EFL_P9 (getEFL_P9_t *EFL_P9);
void config_EFL_P8 (getEFL_P8_t *EFL_P8);
void config_EFL_P7 (getEFL_P7_t *EFL_P7);
void config_EFL_P6 (getEFL_P6_t *EFL_P6);
void config_EFL_P5 (getEFL_P5_t *EFL_P5);
void config_VDS2 (getVDS2_t *VDS2);
void config_J2012 (getJ2012_t *J2012);
void config_AT2GP (getAT2GP_t *AT2GP);
void config_AT1GP (getAT1GP_t *AT1GP);
void config_AETC (getAETC_t *AETC);
void config_EOI (getEOI_t *EOI);
void config_EEC7 (getEEC7_t *EEC7);
void config_TRF2 (getTRF2_t *TRF2);
void config_AT1HI (getAT1HI_t *AT1HI);
void config_AT2HI (getAT2HI_t *AT2HI);
void config_A1DEFI (getA1DEFI_t *A1DEFI);
void config_SEP2 (getSEP2_t *SEP2);
void config_SEP1 (getSEP1_t *SEP1);
void config_AT2AC1 (getAT2AC1_t *AT2AC1);
void config_AT1AC1 (getAT1AC1_t *AT1AC1);
void config_AT2FC1 (getAT2FC1_t *AT2FC1);
void config_AT1FC1 (getAT1FC1_t *AT1FC1);
void config_GFI (getGFI_t *GFI);
void config_EEC6 (getEEC6_t *EEC6);
void config_PTODE (getPTODE_t *PTODE);
void config_DC2 (getDC2_t *DC2);
void config_WCM2 (getWCM2_t *WCM2);
void config_WCM1 (getWCM1_t *WCM1);
void config_EFL_P4 (getEFL_P4_t *EFL_P4);
void config_FWSS2 (getFWSS2_t *FWSS2);
void config_AT2IMG (getAT2IMG_t *AT2IMG);
void config_AT2OG2 (getAT2OG2_t *AT2OG2);
void config_AT2IG2 (getAT2IG2_t *AT2IG2);
void config_AT1IMG (getAT1IMG_t *AT1IMG);
void config_AT1OG2 (getAT1OG2_t *AT1OG2);
void config_AT1IG2 (getAT1IG2_t *AT1IG2);
void config_TPRI (getTPRI_t *TPRI);
void config_TR6 (getTR6_t *TR6);
void config_TR5 (getTR5_t *TR5);
void config_TR3 (getTR3_t *TR3);
void config_TR1 (getTR1_t *TR1);
void config_TR2 (getTR2_t *TR2);
void config_TR7 (getTR7_t *TR7);
void config_EFL_P3 (getEFL_P3_t *EFL_P3);
void config_EEC14 (getEEC14_t *EEC14);
void config_EEC15 (getEEC15_t *EEC15);
void config_EBC5 (getEBC5_t *EBC5);
void config_CSA (getCSA_t *CSA);
void config_OHCSS (getOHCSS_t *OHCSS);
void config_ISCS (getISCS_t *ISCS);
void config_CMI (getCMI_t *CMI);
void config_ISC (getISC_t *ISC);
void config_OHECS (getOHECS_t *OHECS);
void config_OEL (getOEL_t *OEL);
void config_OWW (getOWW_t *OWW);
void config_IC2 (getIC2_t *IC2);
void config_FMS (getFMS_t *FMS);
void config_EP (getEP_t *EP);
void config_TCI6 (getTCI6_t *TCI6);
void config_CM3 (getCM3_t *CM3);
void config_EEC5 (getEEC5_t *EEC5);
void config_BJM1 (getBJM1_t *BJM1);
void config_EJM1 (getEJM1_t *EJM1);
void config_BJM2 (getBJM2_t *BJM2);
void config_EJM2 (getEJM2_t *EJM2);
void config_BJM3 (getBJM3_t *BJM3);
void config_EJM3 (getEJM3_t *EJM3);
void config_MCI (getMCI_t *MCI);
void config_FWD (getFWD_t *FWD);
void config_AMB2 (getAMB2_t *AMB2);
void config_CACI (getCACI_t *CACI);
void config_SPR (getSPR_t *SPR);
void config_EOAC (getEOAC_t *EOAC);
void config_EPD (getEPD_t *EPD);
void config_MVS (getMVS_t *MVS);
void config_HBS (getHBS_t *HBS);
void config_ET (getET_t *ET);
void config_LD (getLD_t *LD);
void config_LCMD (getLCMD_t *LCMD);
void config_ETC7 (getETC7_t *ETC7);
void config_TCFG2 (getTCFG2_t *TCFG2);
void config_ML (getML_t *ML);
void config_TAVG (getTAVG_t *TAVG);
void config_DC1 (getDC1_t *DC1);
void config_VDC1 (getVDC1_t *VDC1);
void config_BT1 (getBT1_t *BT1);
void config_ACC2 (getACC2_t *ACC2);
void config_VEP3 (getVEP3_t *VEP3);
void config_RTC1 (getRTC1_t *RTC1);
void config_ECT1 (getECT1_t *ECT1);
void config_GFD (getGFD_t *GFD);
void config_AT1T1I (getAT1T1I_t *AT1T1I);
void config_ASC5 (getASC5_t *ASC5);
void config_ASC4 (getASC4_t *ASC4);
void config_ASC1 (getASC1_t *ASC1);
void config_FLI2 (getFLI2_t *FLI2);
void config_BM (getBM_t *BM);
void config_CCC (getCCC_t *CCC);
void config_VF (getVF_t *VF);
void config_ET3 (getET3_t *ET3);
void config_EFS (getEFS_t *EFS);
void config_TCO1 (getTCO1_t *TCO1);
void config_HTR (getHTR_t *HTR);
void config_HRW (getHRW_t *HRW);
void config_ACC1 (getACC1_t *ACC1);
void config_CVW (getCVW_t *CVW);
void config_LTP (getLTP_t *LTP);
void config_LBC (getLBC_t *LBC);
void config_LMP (getLMP_t *LMP);
void config_LSP (getLSP_t *LSP);
void config_LVD (getLVD_t *LVD);
void config_LVDD (getLVDD_t *LVDD);
void config_AP (getAP_t *AP);
void config_TP1 (getTP1_t *TP1);
void config_TP2 (getTP2_t *TP2);
void config_TP3 (getTP3_t *TP3);
void config_CT1 (getCT1_t *CT1);
void config_CT2 (getCT2_t *CT2);
void config_CT3 (getCT3_t *CT3);
void config_CT4 (getCT4_t *CT4);
void config_CT5 (getCT5_t *CT5);
void config_CT6 (getCT6_t *CT6);
void config_GFI2 (getGFI2_t *GFI2);
void config_IT1 (getIT1_t *IT1);
void config_IT2 (getIT2_t *IT2);
void config_IT3 (getIT3_t *IT3);
void config_IT4 (getIT4_t *IT4);
void config_IT5 (getIT5_t *IT5);
void config_IT6 (getIT6_t *IT6);
void config_ISO1 (getISO1_t *ISO1);
void config_ISO2 (getISO2_t *ISO2);
void config_ISO3 (getISO3_t *ISO3);
void config_GFP (getGFP_t *GFP);
void config_AAI (getAAI_t *AAI);
void config_VEP2 (getVEP2_t *VEP2);
void config_SP2 (getSP2_t *SP2);
void config_FL (getFL_t *FL);
void config_EI (getEI_t *EI);
void config_EES (getEES_t *EES);
void config_EAC (getEAC_t *EAC);
void config_RBI (getRBI_t *RBI);
void config_TCW (getTCW_t *TCW);
void config_TCI5 (getTCI5_t *TCI5);
void config_TCI4 (getTCI4_t *TCI4);
void config_TCI3 (getTCI3_t *TCI3);
void config_TCI2 (getTCI2_t *TCI2);
void config_TCI1 (getTCI1_t *TCI1);
void config_MBT3 (getMBT3_t *MBT3);
void config_MBT2 (getMBT2_t *MBT2);
void config_MBT1 (getMBT1_t *MBT1);
void config_EPT5 (getEPT5_t *EPT5);
void config_EPT4 (getEPT4_t *EPT4);
void config_EPT3 (getEPT3_t *EPT3);
void config_EPT2 (getEPT2_t *EPT2);
void config_EPT1 (getEPT1_t *EPT1);
void config_ET2 (getET2_t *ET2);
void config_IMT2 (getIMT2_t *IMT2);
void config_IMT1 (getIMT1_t *IMT1);
void config_AT (getAT_t *AT);
void config_ACTL (getACTL_t *ACTL);
void config_EO1 (getEO1_t *EO1);
void config_AF2 (getAF2_t *AF2);
void config_ETC6 (getETC6_t *ETC6);
void config_EBC4 (getEBC4_t *EBC4);
void config_EBC3 (getEBC3_t *EBC3);
void config_AIR1 (getAIR1_t *AIR1);
void config_GFC (getGFC_t *GFC);
void config_TTI2 (getTTI2_t *TTI2);
void config_EH (getEH_t *EH);
void config_GFI1 (getGFI1_t *GFI1);
void config_LFI (getLFI_t *LFI);
void config_TTI1 (getTTI1_t *TTI1);
void config_TSI (getTSI_t *TSI);
void config_TVI (getTVI_t *TVI);
void config_LF (getLF_t *LF);
void config_GTFI (getGTFI_t *GTFI);
void config_LTFI (getLTFI_t *LTFI);
void config_TDI (getTDI_t *TDI);
void config_TFI (getTFI_t *TFI);
void config_CBI (getCBI_t *CBI);
void config_FD1 (getFD1_t *FD1);
void config_EEC4 (getEEC4_t *EEC4);
void config_EBC2 (getEBC2_t *EBC2);
void config_VDHR (getVDHR_t *VDHR);
void config_ERC2 (getERC2_t *ERC2);
void config_ETC5 (getETC5_t *ETC5);
void config_ETC4 (getETC4_t *ETC4);
void config_ETC3 (getETC3_t *ETC3);
void config_AS (getAS_t *AS);
void config_AUXIO1 (getAUXIO1_t *AUXIO1);
void config_SOFT (getSOFT_t *SOFT);
void config_EFL_P2 (getEFL_P2_t *EFL_P2);
void config_IO (getIO_t *IO);
void config_TC (getTC_t *TC);
void config_AIR2 (getAIR2_t *AIR2);
void config_EEC3 (getEEC3_t *EEC3);
void config_VD (getVD_t *VD);
void config_TCFG (getTCFG_t *TCFG);
void config_SHUTDN (getSHUTDN_t *SHUTDN);
void config_HOURS (getHOURS_t *HOURS);
void config_TD (getTD_t *TD);
void config_VH (getVH_t *VH);
void config_VDS (getVDS_t *VDS);
void config_LFC (getLFC_t *LFC);
void config_VW (getVW_t *VW);
void config_CCSS (getCCSS_t *CCSS);
void config_ET1 (getET1_t *ET1);
void config_EFL_P1 (getEFL_P1_t *EFL_P1);
void config_PTO (getPTO_t *PTO);
void config_CCVS1 (getCCVS1_t *CCVS1);
void config_LFE1 (getLFE1_t *LFE1);
void config_VP (getVP_t *VP);
void config_TIRE (getTIRE_t *TIRE);
void config_AMB (getAMB_t *AMB);
void config_IC1 (getIC1_t *IC1);
void config_VEP1 (getVEP1_t *VEP1);
void config_TRF1 (getTRF1_t *TRF1);
void config_AI (getAI_t *AI);
void config_B (getB_t *B);
void config_RF (getRF_t *RF);
void config_DD (getDD_t *DD);
void config_A1 (getA1_t *A1);
void config_AWPP (getAWPP_t *AWPP);
void config_OI (getOI_t *OI);
#endif