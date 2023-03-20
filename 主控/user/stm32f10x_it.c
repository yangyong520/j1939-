/**
  ******************************************************************************
  * @file GPIO/IOToggle/stm32f10x_it.c 
  * @author  MCD Application Team
  * @version  V3.0.0
  * @date  04/06/2009
  * @brief  Main Interrupt Service Routines.
  *         This file provides template for all exceptions handler and 
  *         peripherals interrupt service routine.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2009 STMicroelectronics</center></h2>
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_it.h"
#include "stm32f10x_tim.h"
#include "stm32f10x_usart.h"
#include "stm32f10x_can.h"
#include "CAN.h"
#include "usart.h"

/** @addtogroup StdPeriph_Examples
  * @{
  */

/** @addtogroup GPIO_IOToggle
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M3 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval : None
  */
void NMI_Handler(void)
{
}

/*
  USART2�жϷ������
*/


							  
void USART2_IRQHandler(void)
{
	u8 rece;

    /* ���� */
    if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
    {
  	    rece=USART_ReceiveData(USART2);		//��������
												   				 

    }

    /* ���� */
    if(USART_GetITStatus(USART2, USART_IT_TXE) != RESET)                    
    { 
        USART_ITConfig(USART2, USART_IT_TXE, DISABLE);
    }
}

/*******************************************************************************
* Function Name  : USB_LP_CAN_RX0_IRQHandler
* Description    : This function handles USB Low Priority or CAN RX0 interrupts 
*                  requests.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void CAN1_RX0_IRQHandler(void)
{
	J1939_ISR( );
	/*
    CanRxMsg RxMessage;

    RxMessage.StdId=0x00;
    RxMessage.ExtId=0x00;
	RxMessage.RTR=CAN_RTR_DATA;  // ����֡orԶ��
    RxMessage.IDE=CAN_ID_STD;	 // ��׼or��չ
    RxMessage.DLC=0;
    RxMessage.FMI=0;
    RxMessage.Data[0]=0x00;
    RxMessage.Data[1]=0x00;

    CAN_Receive(CAN1,CAN_FIFO0, &RxMessage);	 // CAN��������		

	Comm_Send_CANmsg_str(1,&RxMessage);
	*/
}

/***********************
 CAN2 FIFO1
***********************/
void CAN2_RX1_IRQHandler(void)
{
    CanRxMsg RxMessage;

    RxMessage.StdId=0x00;
    RxMessage.ExtId=0x00;
	RxMessage.RTR=CAN_RTR_DATA;  // ����֡orԶ��
    RxMessage.IDE=CAN_ID_STD;	 // ��׼or��չ
    RxMessage.DLC=0;
    RxMessage.FMI=0;
    RxMessage.Data[0]=0x00;
    RxMessage.Data[1]=0x00;

    CAN_Receive(CAN2,CAN_FIFO1, &RxMessage);	 // CAN��������	

	Comm_Send_CANmsg_str(2,&RxMessage);
}

/***********************
 CAN2 FIFO    �ݲ�ʹ��
***********************/								   								  
void CAN2_RX0_IRQHandler(void)
{
    CanRxMsg RxMessage;

    RxMessage.StdId=0x00;
    RxMessage.ExtId=0x00;
	RxMessage.RTR=CAN_RTR_DATA;  // ����֡orԶ��
    RxMessage.IDE=CAN_ID_STD;	 // ��׼or��չ
    RxMessage.DLC=0;
    RxMessage.FMI=0;
    RxMessage.Data[0]=0x00;
    RxMessage.Data[1]=0x00;

    CAN_Receive(CAN2,CAN_FIFO0, &RxMessage);	 // CAN��������

	USART_STR(USART1,"CAN2 RX0 Get\r\n");   //////////
}								 								



/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval : None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval : None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval : None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval : None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval : None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval : None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSV_Handler exception.
  * @param  None
  * @retval : None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval : None
  */
void SysTick_Handler(void)
{
}

/******************************************************************************/
/*                 STM32F10x Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f10x_xx.s).                                            */
/******************************************************************************/

/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval : None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */

/**
  * @}
  */

/******************* (C) COPYRIGHT 2009 STMicroelectronics *****END OF FILE****/
