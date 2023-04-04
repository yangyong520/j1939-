/******************** ��ʢ���ӹ����� ********************
 * �ļ���  ��main.c
 * ����    ��LED1��500ms��Ƶ����˸(��ʱ�� TIM2 ������ʱ)��         
 * ʵ��ƽ̨��MINI STM32������ ����STM32F103C8T6
 * ��汾  ��ST3.0.0   *
 * �Ա��꣺http://shop66177872.taobao.com
*********************************************************/	

#include "stm32f10x.h"
#include "led.h" 
#include "Time_test.h"

volatile u32 time; // ms ��ʱ����


int main(void)
{
	  
	SystemInit(); /* ����ϵͳʱ��Ϊ 72M */	
	
	LED_GPIO_Config();/* led �˿����� */ 
	
	TIM2_NVIC_Configuration(); /* TIM2 ��ʱ���� */
    TIM2_Configuration(); 	
	START_TIME;	 /* TIM2 ��ʼ��ʱ */
	
  while(1)
  {
    if ( time == 5000 ) /* 500ms ʱ�䵽 */
    {
      time = 0;				     
	GPIO_WriteBit(GPIOB, GPIO_Pin_15, (BitAction)((1-GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_15)))); /* LED1 ȡ�� */ 
    }        
  }
}


