#include "stm32f10x.h"
#include "can.h"
#include "led.h"
#include "j1939.h"
#include "msg.h"
#include "testmsg.h"
void Delay(vu32 nCount)
{
  for(; nCount != 0; nCount--);
}
/*�����ܽų�ʼ��*/
void KeyInit(void)
{
        GPIO_InitTypeDef GPIO_InitStructure;

        RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//ʹ������ʱ��
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);//ʹ������ʱ��

        GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 ;
        GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; //����������10MHz
        GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//��������
        GPIO_Init(GPIOB, &GPIO_InitStructure);

        GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
        GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; //����������10MHz
        GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //��������
        GPIO_Init(GPIOA, &GPIO_InitStructure);
}
/*����Ƿ��а�������*/
void  GetKey(void)
{
        

        if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13))
        {
                Delay(1000000);//ȥ����//ȥ����
                if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13))
                {
                        while(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13)){ ; }//�ȴ������ͷ�                        
                        can_tx(0X55,0X77); 
						LED1(1);LED2(1);
                }
        }

        if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12))
        {
                 Delay(1000000);//ȥ����//ȥ����
                if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12))
                {
                        while(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12)){ ; }//�ȴ������ͷ�                        
                        can_tx(0X99,0Xbb); 	
						LED1(1);LED2(1);
                }
        }       

      
}


J1939_MESSAGE Msg;

int main(void)
{   
	J1939_MESSAGE_T msg;
	SystemInit(); //����ϵͳʱ��Ϊ72M
	KeyInit();	  //�����ܽų�ʼ��
	LED_GPIO_Config();//LED�ܽų�ʼ��
	CAN_GPIO_Config();//CAN�ܽų�ʼ��
	CAN_NVIC_Configuration(); //CAN�жϳ�ʼ��   
	CAN_INIT();//CA��ʼ��Nģ��	
	J1939_Initialization( );	
 	while(1)
    {
			
	  GPIO_SetBits(GPIOC,GPIO_Pin_14);
	  GPIO_SetBits(GPIOC,GPIO_Pin_15);
    Delay(500000);
	  Delay(500000);	
	  GPIO_SetBits(GPIOC,GPIO_Pin_14);
	  GPIO_SetBits(GPIOC,GPIO_Pin_15);
    Delay(500000);
	  Delay(500000);
		testallmsg_group1()	;		
		//testallmsg_group2()	;	
		//testallmsg_group3()	;	
			
		//send_massage(&msg;);
	 //GetKey();	//����Ƿ��а�������
	   
  	}
}


void send_massage(J1939_MESSAGE_T *msg)
{			
				uint8_t j1939_msg[8];
        //Msg.Mxe.DataPage                = 0;//dp
        Msg.Mxe.Priority                = J1939_CONTROL_PRIORITY;
        Msg.Mxe.DestinationAddress      = 254;
        Msg.Mxe.DataLength              = msg->byte_count;
        Msg.Mxe.PDUFormat               = msg->PGN<<16>>24;//pf
				Msg.Mxe.PDUSpecific							= msg->PGN<<24>>24;
				Msg.Mxe.PGN =msg->PGN;

        Msg.Mxe.Data[0]         = msg->data[0];
        Msg.Mxe.Data[1]         = msg->data[1];
        Msg.Mxe.Data[2]         = msg->data[2];
        Msg.Mxe.Data[3]         = msg->data[3];
        Msg.Mxe.Data[4]         = msg->data[4];
        Msg.Mxe.Data[5]         = msg->data[5];
        Msg.Mxe.Data[6]         = msg->data[6];
        Msg.Mxe.Data[7]         = msg->data[7];
				//������д�뷢�ͻ������У�Ȼ�󴥷�CAN�ж���J1939_ISR()�н������ݷ���
        while (J1939_EnqueueMessage(&Msg,Select_CAN_NODE_1) != RC_SUCCESS){ 
            J1939_Poll();//ֻ�в�ѯ��ʽ����Ҫ
				}	
}




