/******************** 鑫盛电子工作室 ********************
 * 文件名  ：led.c
 * 描述    ：led 应用函数库
 *          
 * 实验平台：MINI STM32开发板 基于STM32F103C8T6
 * 硬件连接：-----------------
 *          |   PB15 - LED1   |
 *          |   PB14 - LED2   |
 *          |                 |
 *           ----------------- 
 * 库版本  ：ST3.0.0 																										  
 * 淘宝店：http://shop66177872.taobao.com
*********************************************************/

#include "led.h"

 /***************  配置LED用到的I/O口 *******************/
void LED_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // 使能PB端口时钟  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14 | GPIO_Pin_15;	
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);  //初始化PB端口
  GPIO_SetBits(GPIOB, GPIO_Pin_14 | GPIO_Pin_15);	 // 关闭所有LED
}
