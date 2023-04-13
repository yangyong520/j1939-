//////////////////////////////////////////////////////////////////////////////////
//  功能描述   : 0.96寸OLED 接口演示例程
//              说明: 
//              ----------------------------------------------------------------
//              GND   电源地
//              VCC   接3.3v电源
//              SCL   接PB6（SCL）
//              SDA   接PB7（SDA）    
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
		delay_init();//延时函数初始化	  
		NVIC_Configuration();//设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	
		OLED_Init();//初始化OLED  
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
		//显示浩普电子工作室
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
		OLED_ShowChar(48,6,t,16);//显示ASCII字符	   
		t++;
		if(t>'~')t=' ';
		OLED_ShowNum(103,6,t,3,16);//显示ASCII字符的码值 	
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		delay_ms(8000);
		OLED_DrawBMP(0,0,128,8,BMP1);//图片显示
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
	
	
	SystemInit(); //设置系统时钟为72M
	LED_GPIO_Config();//LED管脚初始化
	CAN_GPIO_Config();//CAN管脚初始化
	CAN_NVIC_Configuration(); //CAN中断初始化   
	CAN_INIT();//CA初始化N模块	
	
	
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
	 //GetKey();	//检测是否有按键按下
	   
  	}
}

