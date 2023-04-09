//////////////////////////////////////////////////////////////////////////////////
//  ��������   : 0.96��OLED �ӿ���ʾ����
//              ˵��: 
//              ----------------------------------------------------------------
//              GND   ��Դ��
//              VCC   ��3.3v��Դ
//              SCL   ��PB6��SCL��
//              SDA   ��PB7��SDA��    
//////////////////////////////////////////////////////////////////////////////////
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "stm32f10x.h"
#include "can.h"
#include "led.h"
#include "j1939.h"
#include "exti.h"
/*
void Delay(vu32 nCount)
{
  for(; nCount != 0; nCount--);
}
*/
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
/*
int main(void)
{	u8 t;
		delay_init();//��ʱ������ʼ��	  
		NVIC_Configuration();//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ� 	
		OLED_Init();//��ʼ��OLED  
		OLED_Clear(); 	
		t=' ';
	   
		OLED_ShowCHinese(0,0,0);
		OLED_ShowCHinese(18,0,1);
		OLED_ShowCHinese(36,0,2);
		OLED_ShowCHinese(54,0,3);
		OLED_ShowCHinese(72,0,4);
		OLED_ShowCHinese(90,0,5);
		OLED_ShowCHinese(108,0,6);
	while(1) 
	{		
		OLED_Clear();
		//��ʾ���յ��ӹ�����
		OLED_ShowCHinese(0,0,0);
		OLED_ShowCHinese(18,0,1);
		OLED_ShowCHinese(36,0,2);
		OLED_ShowCHinese(54,0,3);
		OLED_ShowCHinese(72,0,4);
		OLED_ShowCHinese(90,0,5);
		OLED_ShowCHinese(108,0,6);
		OLED_ShowString(6,3,"0.96' OLED TEST",16);		
		OLED_ShowString(0,6,"ASCII:",16);  
		OLED_ShowString(63,6,"CODE:",16);  
		OLED_ShowChar(48,6,t,16);//��ʾASCII�ַ�	   
		t++;
		if(t>'~')t=' ';
		OLED_ShowNum(103,6,t,3,16);//��ʾASCII�ַ�����ֵ 	
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		OLED_DrawBMP(0,0,128,8,BMP1);//ͼƬ��ʾ
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		OLED_DrawBMP(0,0,128,8,BMP1);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
	}	
}
*/
int main(void)
{   
	delay_init();
	OLED_Init();
	OLED_Clear();
	
	
	SystemInit(); //����ϵͳʱ��Ϊ72M
	KeyInit();	  //�����ܽų�ʼ��
	LED_GPIO_Config();//LED�ܽų�ʼ��
	CAN_GPIO_Config();//CAN�ܽų�ʼ��
	CAN_NVIC_Configuration(); //CAN�жϳ�ʼ��   
	CAN_INIT();//CA��ʼ��Nģ��	
	
	
	J1939_Initialization( );
	OLED_ShowString(6,3,"0.96' OLED TEST",16);	
	OLED_Clear();	
	EXTI_Config();
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
		//send_massage();
	 //GetKey();	//����Ƿ��а�������
	   
  	}
}
void send_massage(void)
{
				J1939_MESSAGE Msg;
        Msg.Mxe.DataPage                = 0;
        Msg.Mxe.Priority                = J1939_CONTROL_PRIORITY;
        Msg.Mxe.DestinationAddress      = 0x11;
        Msg.Mxe.DataLength              = 8;
        Msg.Mxe.PDUFormat               = 0xfe;
        Msg.Mxe.Data[0]         = 0x11;
        Msg.Mxe.Data[1]         = 0x22;
        Msg.Mxe.Data[2]         = 0x11;
        Msg.Mxe.Data[3]         = 0x44;
        Msg.Mxe.Data[4]         = 0x55;
        Msg.Mxe.Data[5]         = 0x11;
        Msg.Mxe.Data[6]         = 0x11;
        Msg.Mxe.Data[7]         = 0x11;
				//������д�뷢�ͻ������У�Ȼ�󴥷�CAN�ж���J1939_ISR()�н������ݷ���
        while (J1939_EnqueueMessage(&Msg,Select_CAN_NODE_1) != RC_SUCCESS){ 
            J1939_Poll();//ֻ�в�ѯ��ʽ����Ҫ
				}	
}

