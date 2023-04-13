#include "exti.h"
#include <stdbool.h>
#define printf(fmt, ...) do { } while (0)
static void NVIC_ConfigurationEXTI15_10_IRQn(void)
{
  NVIC_InitTypeDef NVIC_InitStructure; 
  
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);// 设置优先级分组
  
  /* 配置P[A|B|C|D|E]0为中断源 */
  NVIC_InitStructure.NVIC_IRQChannel = EXTI15_10_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;//先占优先级为0
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;  //从优先级为0
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
}
void EXTI_PB12_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure; 
	EXTI_InitTypeDef EXTI_InitStructure; 
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO,ENABLE); //使能端口和复用IO时钟 
	
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;       
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;	 // 上拉输入
  GPIO_Init(GPIOB, &GPIO_InitStructure);

  GPIO_EXTILineConfig(GPIO_PortSourceGPIOB, GPIO_PinSource12); //选择PB口的1号口为中断线路
  EXTI_InitStructure.EXTI_Line = EXTI_Line12; //外部中断线1
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt; //设置为中断请求
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //下降沿中断
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  EXTI_Init(&EXTI_InitStructure); 
}
void EXTI_PA11_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure; 
	EXTI_InitTypeDef EXTI_InitStructure; 
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO,ENABLE); //使能端口和复用IO时钟 
	
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;       
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;	 // 上拉输入
  GPIO_Init(GPIOA, &GPIO_InitStructure);

  GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource11); //选择PB口的1号口为中断线路
  EXTI_InitStructure.EXTI_Line = EXTI_Line11; //外部中断线1
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt; //设置为中断请求
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //下降沿中断
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  EXTI_Init(&EXTI_InitStructure); 
}
void EXTI_PC13_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure; 
	EXTI_InitTypeDef EXTI_InitStructure; 
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC | RCC_APB2Periph_AFIO,ENABLE); //使能端口和复用IO时钟 
	
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;       
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;	 // 上拉输入
  GPIO_Init(GPIOC, &GPIO_InitStructure);

  GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource13); //选择PB口的1号口为中断线路
  EXTI_InitStructure.EXTI_Line = EXTI_Line13; //外部中断线1
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt; //设置为中断请求
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //下降沿中断
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  EXTI_Init(&EXTI_InitStructure); 
}
void EXTI_PA1_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	EXTI_InitTypeDef EXTI_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;


	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO, ENABLE);


	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_Init(GPIOA, &GPIO_InitStructure);


	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource1);
	EXTI_InitStructure.EXTI_Line = EXTI_Line1;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);

// ?? NVIC ?????
	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x00;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x00;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}
void EXTI_PA2_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    EXTI_InitTypeDef EXTI_InitStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

    // ??GPIOA??
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    // ??GPIOA Pin2???????
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    // ??GPIOA Pin2??????2
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource2);

    // ???????2??????
    EXTI_InitStructure.EXTI_Line = EXTI_Line2;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init(&EXTI_InitStructure);

    // ???????NVIC
    NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x00;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x00;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
}


void EXTI_PA3_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    EXTI_InitTypeDef EXTI_InitStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

    // ??GPIOA??
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    // ??GPIOA Pin3???????
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    // ??GPIOA Pin3??????3
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource3);

    // ???????3??????
    EXTI_InitStructure.EXTI_Line = EXTI_Line3;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init(&EXTI_InitStructure);

    // ???????NVIC
    NVIC_InitStructure.NVIC_IRQChannel = EXTI3_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x00;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x00;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
}

void EXTI_Config(void)
{
	NVIC_ConfigurationEXTI15_10_IRQn();

	EXTI_PB12_Config();
	EXTI_PA1_Config();
	EXTI_PA2_Config();
	EXTI_PA3_Config();
	EXTI_PA11_Config();
	EXTI_PC13_Config();
}

void EXTI15_10_IRQHandler(void)
{
	delay_ms(10);

  if(EXTI_GetITStatus(EXTI_Line12) != RESET) //确保是否产生了EXTI Line中断
  {
		printf("\r\n EXTI_Line12\r\n");
		 switch (LCMDneed[3])
			{
				case 1:
				{
					LCMDneed[3]=0;
					break;
				}
				case 0:
				{
					LCMDneed[3]=1;
					break;
				}				
			}		
				sendLCMD();
			//Right_Turn_Signal_Lights( ON );
	  
    EXTI_ClearITPendingBit(EXTI_Line12);     //清除中断标志位
  } 

	if(EXTI_GetITStatus(EXTI_Line11) != RESET) //运行灯
  {
		printf("\r\n EXTI_Line11\r\n");
	  switch (LCMDneed[0])
			{
				case 1:
				{
					LCMDneed[0]=0;
					break;
				}
				case 0:
				{
					LCMDneed[0]=1;
					break;
				}				
			}		
				sendLCMD();
    EXTI_ClearITPendingBit(EXTI_Line11);     //清除中断标志位
  }  
	if(EXTI_GetITStatus(EXTI_Line13) != RESET) //确保是否产生了EXTI Line中断
  {
		printf("\r\n EXTI_Line13\r\n");
		 switch (LCMDneed[4])
			{
				case 1:
				{
					LCMDneed[4]=0;
					break;
				}
				case 0:
				{
					LCMDneed[4]=1;
					break;
				}				
			}		
				sendLCMD();
	  //Left_Turn_Signal_Lights( ON );	
    EXTI_ClearITPendingBit(EXTI_Line13);     //清除中断标志位
  }  
}
void EXTI1_IRQHandler(void)//倒车灯
{
		
	if (EXTI_GetITStatus(EXTI_Line1) != RESET) {
        delay_ms(10);
    if (EXTI_GetITStatus(EXTI_Line1) != RESET) {
        printf("\r\n EXTI_Line1\r\n");
			switch (LCMDneed[5])
			{
				case 1:
				{
					LCMDneed[5]=0;
					break;
				}
				case 0:
				{
					LCMDneed[5]=1;
					break;
				}				
			}		
				sendLCMD();
        EXTI_ClearITPendingBit(EXTI_Line1);
    }
	}
}
void EXTI2_IRQHandler(void)
{
		
    if (EXTI_GetITStatus(EXTI_Line2) != RESET) {
        printf("\r\n EXTI_Line1\r\n");
			 switch (LCMDneed[1])
			{
				case 1:
				{
					LCMDneed[1]=0;
					break;
				}
				case 0:
				{
					LCMDneed[1]=1;
					break;
				}				
			}		
				sendLCMD();
			//Low_Beam_Head_Light_Data( ON );	
        EXTI_ClearITPendingBit(EXTI_Line2);
    }
	
}
void EXTI3_IRQHandler(void)//远光灯
{

    if (EXTI_GetITStatus(EXTI_Line3) != RESET) {
        printf("\r\n EXTI_Line1\r\n");
			 switch (LCMDneed[2])
			{
				case 1:
				{
					LCMDneed[2]=0;
					break;
				}
				case 0:
				{
					LCMDneed[2]=1;
					break;
				}				
			}		
				sendLCMD();
				//High_Beam_Head_Light_Data( ON );
				//sendLCMD();	
        EXTI_ClearITPendingBit(EXTI_Line3);
    }

	}
