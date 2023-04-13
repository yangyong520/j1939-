#ifndef SENDMSG_H
#define SENDMSG_H
#include "msg.h"
#define RATE 1

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
void config_LCMD (getLCMD_t *LCMD);
void LCMD ( J1939_MESSAGE_T *J1939_MESSAGE,getLCMD_t *LCMD);
void sendLCMD();
void send_massage_LCMD(J1939_MESSAGE_T *msg);
void send_massage(J1939_MESSAGE_T *msg);
extern uint8_t LCMDneed[6];
#endif