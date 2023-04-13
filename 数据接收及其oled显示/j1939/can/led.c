/******************** ��ʢ���ӹ����� ********************
 * �ļ���  ��led.c
 * ����    ��led Ӧ�ú�����
 *          
 * ʵ��ƽ̨��MINI STM32������ ����STM32F103C8T6
 * Ӳ�����ӣ�-----------------
 *          |   PB15 - Right_Turn_Signal_Lights   |
 *          |   PB14 - LED2   |
 *          |                 |
 *           ----------------- 
 * ��汾  ��ST3.0.0  																										  
 * �Ա��꣺http://shop66177872.taobao.com
*********************************************************/
#include "led.h"


 /***************  ����LED�õ���I/O�� *******************/
void LED_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // ʹ��PB�˿�ʱ��  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_5 ;	
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);  //��ʼ��PB�˿�
  GPIO_SetBits(GPIOB, GPIO_Pin_1 | GPIO_Pin_5 );	 // �ر�����LED

	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE); // ʹ��PB�˿�ʱ��  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5|GPIO_Pin_6 | GPIO_Pin_7 ;	
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);  //��ʼ��PB�˿�
  GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5|GPIO_Pin_6 | GPIO_Pin_7 );	 // �ر�����LED
}
void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 


