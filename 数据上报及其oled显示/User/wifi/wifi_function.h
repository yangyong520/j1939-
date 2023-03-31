#ifndef __WIFI_FUNCTION_H
#define	__WIFI_FUNCTION_H 


#include "stm32f10x.h"
#include "wifi_config.h"
#include <stdbool.h>


#define     ESP8266_Usart( fmt, ... )           USART2_printf ( USART2, fmt, ##__VA_ARGS__ ) 
#define     PC_Usart( fmt, ... )                printf ( fmt, ##__VA_ARGS__ )

#define     ESP8266_CH_HIGH_LEVEL()             GPIO_SetBits( GPIOA, GPIO_Pin_1 )
#define     ESP8266_CH_LOW_LEVEL()              GPIO_ResetBits( GPIOA, GPIO_Pin_1 )

#define     ESP8266_RST_HIGH_LEVEL()            GPIO_SetBits( GPIOA, GPIO_Pin_8 )
#define     ESP8266_RST_LOW_LEVEL()             GPIO_ResetBits( GPIOA, GPIO_Pin_8 )





bool        ESP8266_Cmd                         ( char * cmd, char * reply1, char * reply2, u32 waittime );




bool        ESP8266_Link_Server                 ( );

bool        ESP8266_SendString                  (  );
char *      ESP8266_ReceiveString               ( FunctionalState enumEnUnvarnishTx );

void        ESP8266_STA_TCP_Client              ( void );




#endif    /* __WIFI_FUNCTION_H */





