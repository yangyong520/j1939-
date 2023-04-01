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
 
 
void delay2s(void)   //?? -0.5us
{
    unsigned char a,b,c;
    for(c=151;c>0;c--)
        for(b=97;b>0;b--)
            for(a=44;a>0;a--);
}



/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
  char *wifiname="1702";
	char *wifipawd="12345678";
	char *IP="23.224.131.118";
	char *port="6000";

	/* 初始化 */
	WiFi_Config();                                                                  //初始化WiFi模块使用的接口和外设
	SysTick_Init();                                                                 //配置 SysTick 为 1ms 中断一次 

	PC_Usart("\r\n ESP8266 test\r\n");                            //打印测试例程提示信息

  
	ESP8266_STA_TCP_Client(wifiname,wifipawd,IP,port);

}
/*********************************************END OF FILE**********************/
