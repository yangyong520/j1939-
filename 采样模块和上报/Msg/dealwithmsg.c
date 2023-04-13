#include "dealwithmsg.h"
uint8_t LCMDneed[6] = {0, 0, 0, 0, 0, 0};
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
void readOneMessage(J1939_MESSAGE *J1939_MESSAGE)
{
				char data[64];
				getLCMD_t LCMD;
				//PC_Usart("\r\n readOneMessage in  test pgn:%X\r\n",J1939_MESSAGE->Mxe.Data[1]); 
				if (0x00FE41==J1939_MESSAGE->Mxe.PGN)//¿ØÖÆµÆ¹â
				{
					PC_Usart("\r\n CheckLCMD test\r\n"); 
						CheckLCMD(J1939_MESSAGE,&LCMD);
					
					if(1==LCMD.bt3.Back_Up_Light_and_Alarm_Horn_Command)
					{
						LCMDneed[5]=1;
						Delay(500000);						
						//sendLD();
					}
					else
					{
						LCMDneed[5]=0;	
						Delay(500000);
					}
					if(1==LCMD.bt1.Running_Light_Command)
					{
						LCMDneed[0]=1;
						Delay(500000);						
						//sendLD();
					}
					else
					{
						LCMDneed[0]=0;	
						Delay(500000);
					}
					if(1==LCMD.bt1.Low_Beam_Head_Light_Command)
					{
						LCMDneed[1]=1;
						Delay(500000);						
						//sendLD();
					}
					else
					{
						LCMDneed[1]=0;	
						Delay(500000);
					}
					//PC_Usart("\r\n High_Beam_Head_Light_Command  test: %d\r\n",LCMD.bt1.High_Beam_Head_Light_Command);
					if(1==LCMD.bt1.High_Beam_Head_Light_Command)
					{
						
						LCMDneed[2]=1;
						Delay(500000);						
						//sendLD();
					}
					else
					{
						LCMDneed[2]=0;	
						Delay(500000);
					}
					//PC_Usart("\r\n Right_Stop_Light_Command test:%d\r\n",LCMD.bt3.Right_Stop_Light_Command);
					if(1==LCMD.bt2.Right_Turn_Signal_Lights_Command)
					{
						//PC_Usart("\r\n CheckLCMD if test\r\n");
						LCMDneed[3]=1;
						Delay(500000);						
						//sendLD();
					}
					else
					{
						LCMDneed[3]=0;	
						Delay(500000);
					}
					if(1==LCMD.bt2.Left_Turn_Signal_Lights_Command)
					{
						
						LCMDneed[4]=1;
						Delay(500000);						
						//sendLD();
					}
					else
					{
						LCMDneed[4]=0;	
						Delay(500000);
					}
				}
}
void sendLD()
{
	J1939_MESSAGE_T msg;
	
			getLD_t ld;

       config_LD(&ld);
       LD(&msg,&ld);
       send_massage(&msg);
}