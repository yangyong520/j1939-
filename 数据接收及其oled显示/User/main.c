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
			//sendLCMD();
	 //GetKey();	//����Ƿ��а�������
	   
  	}
}

