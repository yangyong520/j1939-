#include "msg.h"
double Parameter_Translate(uint64_t result,float resolutionratio,float offset)
{
	return (double)((result*resolutionratio)+offset);
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

void transmit_USART_STR(J1939_MESSAGE *J1939_MESSAGE)
{
				char data[64];
				getLLRE_t LLRE;
				getCCVS1_t CCVS1;
				getET1_t ET1;
				getLD_t LD;
	/*
				sprintf(data,"\nPGN : %d Array:%X %X %X %X %X %X %X %X\n",J1939_MESSAGE->Mxe.PGN,J1939_MESSAGE->Mxe.Data[0],J1939_MESSAGE->Mxe.Data[1],J1939_MESSAGE->Mxe.Data[2],
	J1939_MESSAGE->Mxe.Data[3],J1939_MESSAGE->Mxe.Data[4],J1939_MESSAGE->Mxe.Data[5],J1939_MESSAGE->Mxe.Data[6],J1939_MESSAGE->Mxe.Data[7]);
				USART_STR(USART2,data);
	*/
	/*
				CheckCommand( &J1939_MESSAGE,&Command);
				sprintf(data,"\n**PGN : %d Data:%X **\n",J1939_MESSAGE->Mxe.PGN,J1939_MESSAGE->Mxe.Data);
				USART_STR(USART2,data);
	*/
				
				if (65265==J1939_MESSAGE->Mxe.PGN)//速度
				{
					/*sprintf(data,"\nPGN : %d Array:%X %X %X %X %X %X %X %X\n",J1939_MESSAGE->Mxe.PGN,J1939_MESSAGE->Mxe.Data[0],J1939_MESSAGE->Mxe.Data[1],J1939_MESSAGE->Mxe.Data[2],
	J1939_MESSAGE->Mxe.Data[3],J1939_MESSAGE->Mxe.Data[4],J1939_MESSAGE->Mxe.Data[5],J1939_MESSAGE->Mxe.Data[6],J1939_MESSAGE->Mxe.Data[7]);
				OLED_ShowString(0,0,data,26);
					*/
					
						CheckCCVS1(J1939_MESSAGE,&CCVS1);
				
						sprintf(data,"Speed:%.2f",CCVS1.Wheel_Based_Vehicle_Speed);
						OLED_ShowString(0,0,data,26);
					
				}
				if (65262==J1939_MESSAGE->Mxe.PGN)//温度
				{
					/*
					sprintf(data,"\nPGN : %d Array:%X %X %X %X %X %X %X %X\n",J1939_MESSAGE->Mxe.PGN,J1939_MESSAGE->Mxe.Data[0],J1939_MESSAGE->Mxe.Data[1],J1939_MESSAGE->Mxe.Data[2],
	J1939_MESSAGE->Mxe.Data[3],J1939_MESSAGE->Mxe.Data[4],J1939_MESSAGE->Mxe.Data[5],J1939_MESSAGE->Mxe.Data[6],J1939_MESSAGE->Mxe.Data[7]);
				OLED_ShowString(0,0,data,26);
					*/
					
						CheckET1(J1939_MESSAGE,&ET1);
				
						sprintf(data,"Temp:%.2f",ET1.Engine_Coolant_Temperature);
						OLED_ShowString(0,1,data,26);
					
				}

				if (65088==J1939_MESSAGE->Mxe.PGN)//获取灯光
				{

					
						CheckLD(J1939_MESSAGE,&LD);
					if(1==LD.bt1.Running_Light)
					{
						LED3( ON );	
					}
					else
					{
						LED3( OFF );	
					}
					if(1==LD.bt1.High_Beam_Head_Light_Data)
					{
						LED6( ON );	
					}
					else
					{
						LED6( OFF );	
					}
					
					if(3==LD.bt1.Low_Beam_Head_Light_Data)
					{
						LED5( ON );	
					}
					else
					{
						LED5( OFF );	
					}

					if(3==LD.bt2.Left_Turn_Signal_Lights)
					{
						LED4( ON );	
					}
					else
					{
						LED4( OFF );	
					}
					if(3==LD.bt2.Right_Turn_Signal_Lights)
					{
						LED1( ON );	
					}
					else
					{
						LED1( OFF );	
					}
					if(1==LD.bt3.Back_Up_Light_and_Alarm_Horn)
					{
						LED2( ON );	
					}
					else
					{
						LED2( OFF );	
					}
					sprintf(data,"LLit:%d RLit:%d BkUpLtH:%d",LD.bt2.Left_Turn_Signal_Lights,LD.bt2.Right_Turn_Signal_Lights,LD.bt3.Back_Up_Light_and_Alarm_Horn);
						OLED_ShowString(0,3,data,26);
					
				}

	

}
