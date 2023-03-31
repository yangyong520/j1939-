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
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
 
 
void ( * pNet_Test ) ( void );


/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
  char cCh;	
	u8 t;

	/* 初始化 */
	delay_init();//延时函数初始化	  
	OLED_Init();//初始化OLED  
	
	OLED_Clear(); 	
	WiFi_Config();                                                        
	SysTick_Init();  
	ESP8266_STA_TCP_Client();

}


/*********************************************END OF FILE**********************/
