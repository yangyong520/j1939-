/******************** 鑫盛电子工作室 ********************
 * 文件名  ：can.c
 * 描述    ：CAN测试应用函数库。         
 * 实验平台：MINI STM32开发板 基于STM32F103C8T6
 * 硬件连接：-----------------
 *          | 				  |
            |  PB8-CAN-RX     |
 *          |  PB9-CAN-TX     |
 *          |                 |
 *           -----------------
 * 库版本  ：ST3.0.0  																										  
 * 淘宝店：http://shop66177872.taobao.com
*********************************************************/
#include "can.h"
#include "led.h"
#include "stdio.h"

typedef enum {FAILED = 0, PASSED = !FAILED} TestStatus;

/* 在中断处理函数中返回 */
__IO uint32_t ret = 0;

volatile TestStatus TestRx;	

/*CAN RX0 中断优先级配置  */
 void CAN_NVIC_Configuration(void)
{
    NVIC_InitTypeDef NVIC_InitStructure;

  	/* Configure the NVIC Preemption Priority Bits */  
  	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);

	#ifdef  VECT_TAB_RAM  
	  /* Set the Vector Table base location at 0x20000000 */ 
	  NVIC_SetVectorTable(NVIC_VectTab_RAM, 0x0); 
	#else  /* VECT_TAB_FLASH  */
	  /* Set the Vector Table base location at 0x08000000 */ 
	  NVIC_SetVectorTable(NVIC_VectTab_FLASH, 0x0);   
	#endif

	/* enabling interrupt */
  	NVIC_InitStructure.NVIC_IRQChannel=USB_LP_CAN1_RX0_IRQn;;
  	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
  	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
  	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  	NVIC_Init(&NVIC_InitStructure);
}

/*CAN GPIO 和时钟配置 */
 void CAN_GPIO_Config(void)
{
  GPIO_InitTypeDef GPIO_InitStructure; 
  /* 复用功能和GPIOB端口时钟使能*/	 
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO | RCC_APB2Periph_GPIOB, ENABLE);	                        											 

  /* CAN1 模块时钟使能 */
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE); 

  /* Configure CAN pin: RX */	 // PB8
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	 // 上拉输入
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  
  /* Configure CAN pin: TX */   // PB9
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP; // 复用推挽输出
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  
	//#define GPIO_Remap_CAN    GPIO_Remap1_CAN1 本实验没有用到重映射I/O
  GPIO_PinRemapConfig(GPIO_Remap1_CAN1, ENABLE);

  
}

/*	CAN初始化 */
 void CAN_INIT(void)
{
  CAN_InitTypeDef        CAN_InitStructure;
  CAN_FilterInitTypeDef  CAN_FilterInitStructure;
  CanTxMsg TxMessage;  

  /* CAN register init */
  CAN_DeInit(CAN1);	//将外设CAN的全部寄存器重设为缺省值
  CAN_StructInit(&CAN_InitStructure);//把CAN_InitStruct中的每一个参数按缺省值填入

  /* CAN cell init */
  CAN_InitStructure.CAN_TTCM=DISABLE;//没有使能时间触发模式
  CAN_InitStructure.CAN_ABOM=DISABLE;//没有使能自动离线管理
  CAN_InitStructure.CAN_AWUM=DISABLE;//没有使能自动唤醒模式
  CAN_InitStructure.CAN_NART=DISABLE;//没有使能非自动重传模式
  CAN_InitStructure.CAN_RFLM=DISABLE;//没有使能接收FIFO锁定模式
  CAN_InitStructure.CAN_TXFP=DISABLE;//没有使能发送FIFO优先级
  CAN_InitStructure.CAN_Mode=CAN_Mode_Normal;//CAN设置为正常模式
CAN_InitStructure.CAN_SJW = CAN_SJW_1tq;
CAN_InitStructure.CAN_BS1 = CAN_BS1_13tq;
CAN_InitStructure.CAN_BS2 = CAN_BS2_2tq;
CAN_InitStructure.CAN_Prescaler = 9;
CAN_Init(CAN1, &CAN_InitStructure);

                                      //波特率为：72M/2/60(1+3+2)=0.1 即100K

  /* CAN filter init */
  CAN_FilterInitStructure.CAN_FilterNumber=1;//指定过滤器为1
  CAN_FilterInitStructure.CAN_FilterMode=CAN_FilterMode_IdMask;//指定过滤器为标识符屏蔽位模式
  CAN_FilterInitStructure.CAN_FilterScale=CAN_FilterScale_32bit;//过滤器位宽为32位
  CAN_FilterInitStructure.CAN_FilterIdHigh=0x0000;// 过滤器标识符的高16位值
  CAN_FilterInitStructure.CAN_FilterIdLow=0x0000;//	 过滤器标识符的低16位值
  CAN_FilterInitStructure.CAN_FilterMaskIdHigh=0x0000;//过滤器屏蔽标识符的高16位值
  CAN_FilterInitStructure.CAN_FilterMaskIdLow=0x0000;//	过滤器屏蔽标识符的低16位值
  CAN_FilterInitStructure.CAN_FilterFIFOAssignment=CAN_FIFO0;// 设定了指向过滤器的FIFO为0
  CAN_FilterInitStructure.CAN_FilterActivation=ENABLE;// 使能过滤器
  CAN_FilterInit(&CAN_FilterInitStructure);//	按上面的参数初始化过滤器

  /* CAN FIFO0 message pending interrupt enable */ 
 CAN_ITConfig(CAN1,CAN_IT_FMP0, ENABLE); //使能FIFO0消息挂号中断
 
 }  
/* 发送两个字节的数据*/
void can_tx(u8 Data1,u8 Data2)
{ 
  CanTxMsg TxMessage;  

  TxMessage.StdId=0x00;	//标准标识符为0x00
  TxMessage.ExtId=0x0000; //扩展标识符0x0000
  TxMessage.IDE=CAN_ID_EXT;//使用标准标识符
  TxMessage.RTR=CAN_RTR_DATA;//为数据帧
  TxMessage.DLC=2;	//	消息的数据长度为2个字节
  TxMessage.Data[0]=Data1; //第一个字节数据
  TxMessage.Data[1]=Data2; //第二个字节数据 
  CAN_Transmit(CAN1,&TxMessage); //发送数据
  
 
}
/* USB中断和CAN接收中断服务程序，USB跟CAN公用I/O，这里只用到CAN的中断。 */
void USB_LP_CAN1_RX0_IRQHandler(void)
{
	//OLED_ShowString(6,3," J1939_ISR TEST",16);	
  J1939_ISR( );
	//OLED_Clear();
  
} 


