#ifndef MSG_H
#define MSG_H


#include "stm32f10x.h"
#include "J1939.H"  

void transmit_USART_STR(J1939_MESSAGE *J1939_MESSAGE);
double Parameter_Translate(uint64_t result,float resolutionratio,float offset);
typedef struct getLLRE {
    double Blade_Elevation_Deviation___Left;
    double Blade_Elevation_Deviation___Right;
    double Blade_Reference_Elevation_Offset___Left;
    double Blade_Reference_Elevation_Offset___Right;
} getLLRE_t ;
void CheckLLRE ( J1939_MESSAGE *J1939_MESSAGE1,getLLRE_t *LLRE);
typedef struct getCCVS1 {
    struct CCVS1_byte1 {
        uint8_t Two_Speed_Axle_Switch:2;
        uint8_t Parking_Brake_Switch:2;
        uint8_t Cruise_Control_Pause_Switch:2;
        uint8_t Park_Brake_Release_Inhibit_Request:2;
    }CCVS1_byte1;
    struct CCVS1_byte1 bt1 ;
    double Wheel_Based_Vehicle_Speed;
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
    float Cruise_Control_Set_Speed;
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
void CheckCCVS1 ( J1939_MESSAGE *J1939_MESSAGE,getCCVS1_t *CCVS1);
typedef struct getET1 {
    float Engine_Coolant_Temperature;
    float Engine_Fuel_Temperature_1;
    double Engine_Oil_Temperature_1;
    double Engine_Turbocharger_Oil_Temperature;
    float Engine_Intercooler_Temperature;
    float Engine_Intercooler_Thermostat_Opening;
} getET1_t ;
void CheckET1 ( J1939_MESSAGE *J1939_MESSAGE,getET1_t *ET1);
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
void CheckLD ( J1939_MESSAGE *J1939_MESSAGE,getLD_t *LD);
void transmit_USART_STR(J1939_MESSAGE *J1939_MESSAGE);
#endif