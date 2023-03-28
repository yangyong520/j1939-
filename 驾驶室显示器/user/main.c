

/*
	CAN1
	USART1

    CAN波特率、收发器 配置见CAN.h

	stm32f10x.h中修改了外部晶振值8MHz
	

*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_flash.h"
#include "stm32f10x_can.h"
#include "usart.h"
#include "CAN.h"
#include <stdio.h>
#include "j1939.h"
void RCC_Configuration(void);
void LED_Config(void);
void Delay(__IO uint32_t nCount);


CanTxMsg TxMsg1={0xAB,0,CAN_ID_STD,CAN_RTR_DATA,8,{0xAB,0,0,0,0,0,0,0}};
CanTxMsg TxMsg2={0xCD,0,CAN_ID_STD,CAN_RTR_DATA,8,{0xCD,0,0,0,0,0,0,0}};

J1939_MESSAGE Msg;
int main(void)
{
			   
  /* System Clocks Configuration **********************************************/
  RCC_Configuration();   
  LED_Config();

  // 串口配置		
	
  USART_Configuration();

  USART_STR(USART2,"++++++++++++++++++++++++\r\n");
  USART_STR(USART2,"  CAN Study Board\r\n");
  USART_STR(USART2,"++++++++++++++++++++++++\r\n");	
														  
												   
  // CAN1 配置
  CAN1_Config(SET_CAN_SJW,SET_CAN_BS1,SET_CAN_BS2,SET_CAN_PRES);  
				   			  		  				
  Delay(2000);
                               			  
  // CAN2 配置
  CAN2_Config(SET_CAN_SJW,SET_CAN_BS1,SET_CAN_BS2,SET_CAN_PRES);				 							 
  J1939_Initialization( );	  			
					  
  while (1)
  {   
	  GPIO_ResetBits(GPIOC,GPIO_Pin_0);
	  GPIO_SetBits(GPIOC,GPIO_Pin_1);
	  GPIO_SetBits(GPIOC,GPIO_Pin_14);
	  GPIO_SetBits(GPIOC,GPIO_Pin_15);
    Delay(5000);
	  Delay(5000);	  
	  GPIO_SetBits(GPIOC,GPIO_Pin_0); 
	  GPIO_ResetBits(GPIOC,GPIO_Pin_1);
	  GPIO_SetBits(GPIOC,GPIO_Pin_14);
	  GPIO_SetBits(GPIOC,GPIO_Pin_15);

		//J1939_CAN_Transmit(&Msg);
		//J1939_EnqueueMessage(&Msg,Select_CAN_NODE_1);
	 //CAN_SendData(CAN1,&TxMsg1);
		//send_massage();

	  Delay(5000);
	  Delay(5000);	  
	  GPIO_SetBits(GPIOC,GPIO_Pin_0); 
	  GPIO_SetBits(GPIOC,GPIO_Pin_1);
	  GPIO_ResetBits(GPIOC,GPIO_Pin_14);
	  GPIO_SetBits(GPIOC,GPIO_Pin_15);
	  Delay(5000);
	  Delay(5000);	  
	  GPIO_SetBits(GPIOC,GPIO_Pin_0); 
	  GPIO_SetBits(GPIOC,GPIO_Pin_1);
	  GPIO_SetBits(GPIOC,GPIO_Pin_14);
	  GPIO_ResetBits(GPIOC,GPIO_Pin_15);
	  Delay(5000);
	  Delay(5000);											
	
	  //CAN_SendData(CAN2,&TxMsg2);									   							   
  }
}


void RCC_Configuration(void)
{   
  /* Setup the microcontroller system. Initialize the Embedded Flash Interface,  
     initialize the PLL and update the SystemFrequency variable. */
  SystemInit();
								  			 
}


void Delay(__IO uint32_t nCount)
{
    uint8_t x;
    for(; nCount != 0; nCount--)
	    for(x=0;x<100;x++);
}

void LED_Config(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_14|GPIO_Pin_15;				   
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOC, &GPIO_InitStructure);					 
}


#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* Infinite loop */
  while (1)
  {
  }
}
#endif
void send_massage(void)
{
				J1939_MESSAGE Msg;
        Msg.Mxe.DataPage                = 0;
        Msg.Mxe.Priority                = J1939_CONTROL_PRIORITY;
        Msg.Mxe.DestinationAddress      = 0x11;
        Msg.Mxe.DataLength              = 8;
        Msg.Mxe.PDUFormat               = 0xe0;
        Msg.Mxe.Data[0]         = 0x11;
        Msg.Mxe.Data[1]         = 0x22;
        Msg.Mxe.Data[2]         = 0x33;
        Msg.Mxe.Data[3]         = 0x11;
        Msg.Mxe.Data[4]         = 0x11;
        Msg.Mxe.Data[5]         = 0x11;
        Msg.Mxe.Data[6]         = 0x11;
        Msg.Mxe.Data[7]         = 0x11;
				//把数据写入发送缓存区中，然后触发CAN中断在J1939_ISR()中进行数据发送
        while (J1939_EnqueueMessage(&Msg,Select_CAN_NODE_1) != RC_SUCCESS){ 
					
            J1939_Poll();
					
				}	
}




/******************* (C) COPYRIGHT 2009 STMicroelectronics *****END OF FILE****/
