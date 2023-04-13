/**
  ******************************************************************************
  *     ESP8266 WiFi模块测试
  *
  ******************************************************************************
  */ 
 
#include "stm32f10x.h"
#include "bsp_gpio.h"
#include "bsp_usart1.h"
#include "bsp_usart2.h"
#include "wifi_config.h"
#include "wifi_function.h"
#include "bsp_SysTick.h"
#include <string.h>
#include "can.h"
#include "led.h"
#include "j1939.h"
#include "msg.h"
#include "testmsg.h"
#include "config.h"
#include "bsp_ds18b20.h"
#include "stm32f10x.h"
#include "led.h" 
#include "Time_test.h"
 

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
	
void Delay(vu32 nCount)
{
  for(; nCount != 0; nCount--);
}
/*按键管脚初始化*/
void KeyInit(void)
{
        GPIO_InitTypeDef GPIO_InitStructure;

        RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//使能外设时钟
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);//使能外设时钟

        GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 ;
        GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; //最高输出速率10MHz
        GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//上拉输入
        GPIO_Init(GPIOB, &GPIO_InitStructure);

        GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
        GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; //最高输出速率10MHz
        GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //上拉输入
        GPIO_Init(GPIOA, &GPIO_InitStructure);
}
/*检测是否有按键按下*/
void  GetKey(void)
{
        

        if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13))
        {
                Delay(1000000);//去抖动//去抖动
                if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13))
                {
                        while(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13)){ ; }//等待按键释放                        
                        can_tx(0X55,0X77); 
						LED1(1);LED2(1);
                }
        }

        if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12))
        {
                 Delay(1000000);//去抖动//去抖动
                if(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12))
                {
                        while(Bit_RESET == GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12)){ ; }//等待按键释放                        
                        can_tx(0X99,0Xbb); 	
						LED1(1);LED2(1);
                }
        }       

      
}





int main(void)
{
	//
	SystemInit();
	KeyInit();
	LED_GPIO_Config();//LED管脚初始化
	CAN_GPIO_Config();
	NVIC_Configuration( );
	CAN_NVIC_Configuration();
	
	
	GPIO_Config ( );              
	USART1_Config ( );           
	USART2_Config ( );         
	NVIC_Configuration( ); 
	CAN_INIT();
	J1939_Initialization( );	
       
	TIM2_NVIC_Configuration(); //TIM2 定时配置 
    TIM2_Configuration(); 	
	
	//初始化WiFi模块使用的接口和外设
	SysTick_Init();                                                                 //配置 SysTick 为 1ms 中断一次 

	DS18B20_Init();
	PC_Usart("\r\n ESP8266 test\r\n");                            //打印测试例程提示信息

  
	ESP8266_STA_TCP_Client(WIFINAME,WIFIPSWD,IP,PORT);
	//TIM_2( );
	while(1)
    {
			sendLD();
		//testallmsg_group1()	;		
		//testallmsg_group2()	;	
		//testallmsg_group3()	;	
			
		//send_massage(&msg;);
	 //GetKey();	//检测是否有按键按下
	   
  	}

}




/*********************************************END OF FILE**********************/
