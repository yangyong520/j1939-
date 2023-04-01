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
 
 
void delay2s(void)   //?? -0.5us
{
    unsigned char a,b,c;
    for(c=151;c>0;c--)
        for(b=97;b>0;b--)
            for(a=44;a>0;a--);
}



/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
  char *wifiname="1702";
	char *wifipawd="12345678";
	char *IP="23.224.131.118";
	char *port="6000";

	/* ��ʼ�� */
	WiFi_Config();                                                                  //��ʼ��WiFiģ��ʹ�õĽӿں�����
	SysTick_Init();                                                                 //���� SysTick Ϊ 1ms �ж�һ�� 

	PC_Usart("\r\n ESP8266 test\r\n");                            //��ӡ����������ʾ��Ϣ

  
	ESP8266_STA_TCP_Client(wifiname,wifipawd,IP,port);

}
/*********************************************END OF FILE**********************/
