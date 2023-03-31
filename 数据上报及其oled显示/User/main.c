/**
  ******************************************************************************
  *     ESP8266 WiFiģ�����
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
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
  char cCh;	
	u8 t;

	/* ��ʼ�� */
	delay_init();//��ʱ������ʼ��	  
	OLED_Init();//��ʼ��OLED  
	
	OLED_Clear(); 	
	WiFi_Config();                                                        
	SysTick_Init();  
	ESP8266_STA_TCP_Client();

}


/*********************************************END OF FILE**********************/
