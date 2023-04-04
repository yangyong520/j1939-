/******************** 鑫盛电子工作室 ********************
 * 文件名  ：main.c
 * 描述    ：LED1以500ms的频率闪烁(定时器 TIM2 产生定时)。         
 * 实验平台：MINI STM32开发板 基于STM32F103C8T6
 * 库版本  ：ST3.0.0   *
 * 淘宝店：http://shop66177872.taobao.com
*********************************************************/	

#include "stm32f10x.h"
#include "led.h" 
#include "Time_test.h"

volatile u32 time; // ms 计时变量


int main(void)
{
	  
	SystemInit(); /* 配置系统时钟为 72M */	
	
	LED_GPIO_Config();/* led 端口配置 */ 
	
	TIM2_NVIC_Configuration(); /* TIM2 定时配置 */
    TIM2_Configuration(); 	
	START_TIME;	 /* TIM2 开始计时 */
	
  while(1)
  {
    if ( time == 5000 ) /* 500ms 时间到 */
    {
      time = 0;				     
	GPIO_WriteBit(GPIOB, GPIO_Pin_15, (BitAction)((1-GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_15)))); /* LED1 取反 */ 
    }        
  }
}


