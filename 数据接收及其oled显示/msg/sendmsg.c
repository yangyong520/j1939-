#include "sendmsg.h"

uint8_t LCMDneed[6] = {0, 0, 0, 0, 0, 0};

void config_LCMD (getLCMD_t *LCMD)
{
    LCMD -> bt1.Running_Light_Command= LCMDneed[0];
    LCMD -> bt1.Alternate_Beam_Head_Light_Command= 3.0*RATE;
    LCMD -> bt1.Low_Beam_Head_Light_Command= LCMDneed[1];
    LCMD -> bt1.High_Beam_Head_Light_Command= LCMDneed[2];
    LCMD -> bt2.Tractor_Front_Fog_Lights_Command= 3.0*RATE;
    LCMD -> bt2.Rotating_Beacon_Light_Command= 3.0*RATE;
    LCMD -> bt2.Right_Turn_Signal_Lights_Command= LCMDneed[3];
    LCMD -> bt2.Left_Turn_Signal_Lights_Command= LCMDneed[4];
    LCMD -> bt3.Back_Up_Light_and_Alarm_Horn_Command= LCMDneed[5];
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
void LCMD ( J1939_MESSAGE_T *J1939_MESSAGE,getLCMD_t *LCMD)
{
	int i;
    J1939_MESSAGE->PGN = 0x00FE41 ;
    J1939_MESSAGE->byte_count = 8;
	for (i=0;i<8;i++)
	{
		J1939_MESSAGE->data[i]=0;	
	}
	
    J1939_MESSAGE->data[0] |= (uint8_t)(LCMD->bt1.Running_Light_Command)<<0;
    J1939_MESSAGE->data[0] |= (uint8_t)(LCMD->bt1.Alternate_Beam_Head_Light_Command)<<2;
    J1939_MESSAGE->data[0] |= (uint8_t)(LCMD->bt1.Low_Beam_Head_Light_Command)<<4;
    J1939_MESSAGE->data[0] |= (uint8_t)(LCMD->bt1.High_Beam_Head_Light_Command)<<6;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt2.Tractor_Front_Fog_Lights_Command)<<0;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt2.Rotating_Beacon_Light_Command)<<2;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt2.Right_Turn_Signal_Lights_Command)<<4;
    J1939_MESSAGE->data[1] |= (uint8_t)(LCMD->bt2.Left_Turn_Signal_Lights_Command)<<6;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt3.Back_Up_Light_and_Alarm_Horn_Command)<<0;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt3.Center_Stop_Light_Command)<<2;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt3.Right_Stop_Light_Command)<<4;
    J1939_MESSAGE->data[2] |= (uint8_t)(LCMD->bt3.Left_Stop_Light_Command)<<6;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt4.Implement_Clearance_Light_Command)<<0;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt4.Tractor_Clearance_Light_Command)<<2;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt4.Implement_Marker_Light_Command)<<4;
    J1939_MESSAGE->data[3] |= (uint8_t)(LCMD->bt4.Tractor_Marker_Light_Command)<<6;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt5.Rear_Fog_Light_Command)<<0;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt5.Tractor_Underside_Mounted_Work_Lights_Command)<<2;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt5.Tractor_Rear_Low_Mounted_Work_Lights_Command)<<4;
    J1939_MESSAGE->data[4] |= (uint8_t)(LCMD->bt5.Tractor_Rear_High_Mounted_Work_Lights_Command)<<6;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt6.Tractor_Side_Low_Mounted_Work_Lights_Command)<<0;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt6.Tractor_Side_High_Mounted_Work_Lights_Command)<<2;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt6.Tractor_Front_Low_Mounted_Work_Lights_Command)<<4;
    J1939_MESSAGE->data[5] |= (uint8_t)(LCMD->bt6.Tractor_Front_High_Mounted_Work_Lights_Command)<<6;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt7.Implement_OEM_Option_2_Light_Command)<<0;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt7.Implement_OEM_Option_1_Light_Command)<<2;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt7.Implement_Right_Facing_Work_Light_Command)<<4;
    J1939_MESSAGE->data[6] |= (uint8_t)(LCMD->bt7.Implement_Left_Forward_Work_Light_Command)<<6;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt8.Lighting_Data_Request_Command)<<0;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt8.Implement_Right_Forward_Work_Light_Command)<<2;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt8.Implement_Left_Facing_Work_Light_Command)<<4;
    J1939_MESSAGE->data[7] |= (uint8_t)(LCMD->bt8.Implement_Rear_Work_Light_Command)<<6;
}
void sendLCMD()
{
	J1939_MESSAGE_T msg;
			 //灯光控制


        getLCMD_t lcmd;

       config_LCMD(&lcmd);
       LCMD(&msg,&lcmd);
       send_massage_LCMD(&msg);

}
void send_massage_LCMD(J1939_MESSAGE_T *msg)
{			
	J1939_MESSAGE Msg;
	
				char buff[1024];
				Msg.Mxe.PDUSpecific							= msg->PGN<<24>>24;
        Msg.Mxe.DataPage                = 0;//dp
        Msg.Mxe.Priority                = J1939_CONTROL_PRIORITY;
        //Msg.Mxe.DestinationAddress      = 0x40;
        Msg.Mxe.DataLength              = msg->byte_count;
        Msg.Mxe.PDUFormat               = msg->PGN<<16>>24;//pf
				
				//Msg.Mxe.PGN =msg->PGN;
				

        Msg.Mxe.Data[0]         = msg->data[0];
        Msg.Mxe.Data[1]         = msg->data[1];
        Msg.Mxe.Data[2]         = msg->data[2];
        Msg.Mxe.Data[3]         = msg->data[3];
        Msg.Mxe.Data[4]         = msg->data[4];
        Msg.Mxe.Data[5]         = msg->data[5];
        Msg.Mxe.Data[6]         = msg->data[6];
        Msg.Mxe.Data[7]         = msg->data[7];
				sprintf(buff,"PGN:%X-byte_count:%d-data-%d-%d-%d-%d-%d-%d-%d-%d-\t\0",
				msg->PGN,msg->byte_count,msg->data[0],msg->data[1],msg->data[2],msg->data[3],
				msg->data[4],msg->data[5],msg->data[6],msg->data[7]);

				//把数据写入发送缓存区中，然后触发CAN中断在J1939_ISR()中进行数据发送
        while (J1939_EnqueueMessage(&Msg,Select_CAN_NODE_1) != RC_SUCCESS){ 
            J1939_Poll();//只有查询方式才需要
				}	
}