/*********************************************************************
*
*            J1939 Main Source Code
*
*********************************************************************
*
*	����������XieTongXueFlyMe�����е�J1939Э���ĵ��������Ͷ�ǰ���Ĺ����ܽ�,
* д����һ�׿�Դ��J1939������
*	��Э���ص㣺
*		1.����ֲ��������ض���CANӲ����ֻҪ����CAN2.0B���ɣ�
*		2.������������Ӧ�Ͷ˵�MCU��
*		3.֧�ֶ�������ýӿڣ�������Ƕ��ʽϵͳ��
*		4.˫ģʽ����ѯ�����жϣ��߼����Ӽ����ˣ�
*		5.����֡�����ݲ����շ��жӻ��棩
*
*  Դ�������أ�
*		https://github.com/XeiTongXueFlyMe/J1939
*  Դ������ʱ�ֲ�Webվ�㣺
*		https://xeitongxueflyme.github.io/j1939doc.github.io/
*
* Version     Date        Description
* -------------------------------------------------------------------
* v1.0.0     2017/06/04    �׸��汾 Version 1 ���԰淢��
* v1.0.1     2017/08/04    ���ƹ���
* v1.1.0     2017/11/22    Version 1 �ȶ�������
* v2.0.1     2017/11/24    Version 2 ���԰淢��
* v2.0.2     2018/01/03    ���V2.0.1 ��������
* v2.1.0     2018/01/20    Version 2 �ȶ�������
* Author               Date         changes
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*XeiTongXueFlyMe       7/06/04      �׸��汾
*XeiTongXueFlyMe       7/08/04      ���Ӷ�TP��֧��
*XeiTongXueFlyMe       7/11/24      ���ӶԶ�·CANӲ�����շ����ͱ��Ĵ���
*XeiTongXueFlyMe       7/11/29      �����������ӦAPI
*XeiTongXueFlyMe       7/12/07      ����TP����API����
*XeiTongXueFlyMe       7/12/08      ��������˲���
*XeiTongXueFlyMe       8/01/03      �������ܷ���API����Э��ջ��ʼ�������߼�
**********************************************************************/
#ifndef         __J1939_SOURCE
#define         __J1939_SOURCE
#endif

#include "J1939.H"
#include "J1939_config.H"

#define J1939_TRUE         1	/**< ��������ȷ����*/
#define J1939_FALSE        0	/**< ���������󷵻�*/
#define ADDRESS_CLAIM_TX   1	/**< �����ַ�������ʹ���ģʽ*/
#define ADDRESS_CLAIM_RX   2	/**< �����ַ�������ܴ���ģʽ*/

//ȫ�ֱ�����
/** �豸�ı�Ʒ�
*
*	������Ҫ��"J1939_config.H"������
*	@note �ڳ�ʼ���и�ֵ����ֵ�ο��ο�1939-81�ĵ�
*/
j1939_uint8_t                   CA_Name[J1939_DATA_LENGTH];
j1939_uint8_t                   CommandedAddress;

j1939_uint8_t                   J1939_Address;
J1939_FLAG                      J1939_Flags;
J1939_MESSAGE                   OneMessage;
CAN_NODE                        Can_Node;
//�ڵ��ַ
j1939_uint8_t					NodeAddress_1;
j1939_uint8_t					NodeAddress_2;
j1939_uint8_t					NodeAddress_3;
j1939_uint8_t					NodeAddress_4;
//�����ж�ȫ�ֱ���(CAN_NODE_1)
j1939_uint8_t                   RXHead_1;
j1939_uint8_t                   RXTail_1;
j1939_uint8_t                   RXQueueCount_1;
J1939_MESSAGE                   RXQueue_1[J1939_RX_QUEUE_SIZE];
//�����ж�ȫ�ֱ��� (CAN_NODE_1)
j1939_uint8_t                   TXHead_1;
j1939_uint8_t                   TXTail_1;
j1939_uint8_t                   TXQueueCount_1;
J1939_MESSAGE                   TXQueue_1[J1939_TX_QUEUE_SIZE];
//�����ж�ȫ�ֱ���(CAN_NODE_2)
j1939_uint8_t                   RXHead_2;
j1939_uint8_t                   RXTail_2;
j1939_uint8_t                   RXQueueCount_2;
J1939_MESSAGE                   RXQueue_2[J1939_RX_QUEUE_SIZE];
//�����ж�ȫ�ֱ��� (CAN_NODE_2)
j1939_uint8_t                   TXHead_2;
j1939_uint8_t                   TXTail_2;
j1939_uint8_t                   TXQueueCount_2;
J1939_MESSAGE                   TXQueue_2[J1939_TX_QUEUE_SIZE];
//�����ж�ȫ�ֱ���(CAN_NODE_3)
j1939_uint8_t                   RXHead_3;
j1939_uint8_t                   RXTail_3;
j1939_uint8_t                   RXQueueCount_3;
J1939_MESSAGE                   RXQueue_3[J1939_RX_QUEUE_SIZE];
//�����ж�ȫ�ֱ��� (CAN_NODE_3)
j1939_uint8_t                   TXHead_3;
j1939_uint8_t                   TXTail_3;
j1939_uint8_t                   TXQueueCount_3;
J1939_MESSAGE                   TXQueue_3[J1939_TX_QUEUE_SIZE];
//�����ж�ȫ�ֱ���(CAN_NODE_4)
j1939_uint8_t                   RXHead_4;
j1939_uint8_t                   RXTail_4;
j1939_uint8_t                   RXQueueCount_4;
J1939_MESSAGE                   RXQueue_4[J1939_RX_QUEUE_SIZE];
//�����ж�ȫ�ֱ��� (CAN_NODE_4)
j1939_uint8_t                   TXHead_4;
j1939_uint8_t                   TXTail_4;
j1939_uint8_t                   TXQueueCount_4;
J1939_MESSAGE                   TXQueue_4[J1939_TX_QUEUE_SIZE];

struct Request_List REQUEST_LIST;

#if J1939_TP_RX_TX
//TPЭ��ȫ�ֱ���
J1939_TP_Flags                  J1939_TP_Flags_t;
J1939_TRANSPORT_RX_INFO         TP_RX_MSG;
J1939_TRANSPORT_TX_INFO         TP_TX_MSG;
#endif //J1939_TP_RX_TX


static void 		    J1939_ReceiveMessages( void );
static j1939_uint8_t 	J1939_TransmitMessages( void );

/**
* @note  Ӳ���˲���2 �� ����˲���  �˲����ã�����PS�Σ�\n
*/
void SetAddressFilter( j1939_uint8_t Address )
{
    /*����˲�*/
#if J1939SoftwareFilterEn == J1939_TRUE
    switch (Can_Node)
    {
        case  Select_CAN_NODE_1:
        {
            NodeAddress_1 = Address;
            break;
        }
        case  Select_CAN_NODE_2:
        {
            NodeAddress_2 = Address;
            break;
        }
        case  Select_CAN_NODE_3:
        {
            NodeAddress_3 = Address;
            break;
        }
        case  Select_CAN_NODE_4:
        {
            NodeAddress_4 = Address;
            break;
        }
        default  :
        {
            break;
        }
    }
#endif//J1939SoftwareFilterEn
    /*Ӳ���˲�*/
    Port_SetAddressFilter(Address);
}

/**
* @param[in]  J1939_MESSAGE *
* @note ����*MsgPtr����Ϣ�����е������ֶΣ��������ݳ��ȡ����ȼ�����Դ��ַ�������Ѿ����á�\n
*/
void SendOneMessage( J1939_MESSAGE *MsgPtr )
{
    //������Ϣ����󲿷�,ȷ��DataLength�淶�����ο�CAN B2.0��
    MsgPtr->Mxe.Res = 0;//�ο�J1939��������·�㣨SAE J1939-21��
    MsgPtr->Mxe.RTR = 0;
    if (MsgPtr->Mxe.DataLength > 8)
    {
        MsgPtr->Mxe.DataLength = 8;
    }
    //����һ֡��Ϣ���� J1939_MESSAGE �е�������Ϣ���ص�canģ�����еĽṹ��
    Port_CAN_Transmit(MsgPtr);
}

/**
* @param[in]  MsgPtr             �û�Ҫ���ӵ���Ϣ
* @param[in]  _Can_Node          Ҫ���ӵ�CANӲ�����
* @return    RC_SUCCESS          ��Ϣ���ӳɹ�
* @return    RC_QUEUEEMPTY       û����Ϣ����
* @note      �ӽ��ܶ����ж�ȡһ����Ϣ��*MsgPtr����������õ����жϣ���Ҫ���ж�ʧ�ܣ��ڻ�ȡ���ܶ�������ʱ
*/
j1939_uint8_t J1939_DequeueMessage( J1939_MESSAGE *MsgPtr, CAN_NODE  _Can_Node)
{
    j1939_uint8_t   _rc = RC_SUCCESS;

//***************************�ؽ����ж�********************************
#if J1939_POLL_ECAN == J1939_FALSE
    Port_RXinterruptDisable();
#endif
    switch (_Can_Node)
    {
    case  Select_CAN_NODE_1:
    {
        if (RXQueueCount_1 == 0)
        {
            _rc = RC_QUEUEEMPTY;
        }
        else
        {
            *MsgPtr = RXQueue_1[RXHead_1];
            RXHead_1 ++;
            if (RXHead_1 >= J1939_RX_QUEUE_SIZE)
            {
                RXHead_1 = 0;
            }
            RXQueueCount_1 --;
        }
        break;
    }
    case  Select_CAN_NODE_2:
    {
        if (RXQueueCount_2 == 0)
        {
            _rc = RC_QUEUEEMPTY;
        }
        else
        {
            *MsgPtr = RXQueue_2[RXHead_2];
            RXHead_2 ++;
            if (RXHead_2 >= J1939_RX_QUEUE_SIZE)
            {
                RXHead_2 = 0;
            }
            RXQueueCount_2 --;
        }
        break;
    }
    case  Select_CAN_NODE_3:
    {
        if (RXQueueCount_3 == 0)
        {
            _rc = RC_QUEUEEMPTY;
        }
        else
        {
            *MsgPtr = RXQueue_3[RXHead_3];
            RXHead_3 ++;
            if (RXHead_3 >= J1939_RX_QUEUE_SIZE)\
            {
                RXHead_3 = 0;
            }
            RXQueueCount_3 --;
        }
    break;
    }
    case  Select_CAN_NODE_4:
    {
        if (RXQueueCount_4 == 0)
        {
            _rc = RC_QUEUEEMPTY;
        }
        else
        {
            *MsgPtr = RXQueue_4[RXHead_4];
            RXHead_4 ++;
            if (RXHead_4 >= J1939_RX_QUEUE_SIZE)
            {
                RXHead_4 = 0;
            }
            RXQueueCount_4 --;
        }
        break;
    }
    default  :
    {
        _rc = RC_CANNOTRECEIVE;
        break;
    }
}
//***************************�������ж�********************************
#if J1939_POLL_ECAN == J1939_FALSE
    Port_RXinterruptEnable();
#endif

    return _rc;
}
/**
* @param[in] MsgPtr              �洢��ȡ��Ϣ�Ļ���
* @param[in] _Can_Node           ��ȡ��Ϣ��CANӲ����ţ�����һ·CAN��ȡ���ݣ�
* @return    RC_SUCCESS          ��ȡ��Ϣ�ɹ���
* @return    RC_QUEUEEMPTY       ��ȡ��Ϣ���ɹ���û����Ϣ��
* @note      �ӽ��ܶ����ж�ȡһ����Ϣ��*MsgPtr��
*/
j1939_uint8_t J1939_Read_Message( J1939_MESSAGE *MsgPtr, CAN_NODE  _Can_Node)
{
    return 	J1939_DequeueMessage(MsgPtr,_Can_Node);
}
/**
* @param[in]  MsgPtr     �û�Ҫ��ӵ���Ϣ
* @param[in]  _Can_Node  Ҫ��ӵ�CANӲ����ţ�Ҫѡ���ʹ�õ�CANӲ����ţ�
* @return     RC_SUCCESS          ��Ϣ��ӳɹ�
* @return     RC_QUEUEFULL        �����ж�������Ϣ���ʧ��
* @return     RC_CANNOTTRANSMIT   ϵͳĿǰ���ܷ�����Ϣ
* @note     ��γ��򣬽�*MsgPtr���뷢����Ϣ�ж���\n
�����Ϣ������ӻ��߷��ͣ�����һ����Ӧ�ķ�����ʾ��\n
��������жϱ����ã����ã�������Ϣ�жӺ󣬷����жϱ�ʹ��
*/
j1939_uint8_t J1939_EnqueueMessage( J1939_MESSAGE *MsgPtr, CAN_NODE  _Can_Node)
{
    j1939_uint8_t   _rc = RC_SUCCESS;
#if J1939_POLL_ECAN == J1939_FALSE
    Port_TXinterruptDisable();
#endif

    if (0)
    {
        _rc = RC_CANNOTTRANSMIT;
    }
    else
    {
        switch (_Can_Node)
        {
					
            case  Select_CAN_NODE_1:
            {
                if ((J1939_OVERWRITE_TX_QUEUE == J1939_TRUE) ||
                (TXQueueCount_1 < J1939_TX_QUEUE_SIZE))
                {
                    if (TXQueueCount_1 < J1939_TX_QUEUE_SIZE)
                    {
                        TXQueueCount_1 ++;
                        TXTail_1 ++;
                        if (TXTail_1 >= J1939_TX_QUEUE_SIZE)
                            TXTail_1 = 0;
                    }
                    else
                    {
                        J1939_Flags.TransmitMessagesdCover = 1;//�������ݱ����ǣ���һ֡���ݱ�����
                    }
                    TXQueue_1[TXTail_1] = *MsgPtr;
                }
                else
                _rc = RC_QUEUEFULL;
                break;
            }
            case  Select_CAN_NODE_2:
            {
                if ((J1939_OVERWRITE_TX_QUEUE == J1939_TRUE) ||
                (TXQueueCount_2 < J1939_TX_QUEUE_SIZE))
                {
                    if (TXQueueCount_2 < J1939_TX_QUEUE_SIZE)
                    {
                        TXQueueCount_2 ++;
                        TXTail_2 ++;
                        if (TXTail_2 >= J1939_TX_QUEUE_SIZE)
                            TXTail_2 = 0;
                    }
                    else
                    {
                        J1939_Flags.TransmitMessagesdCover = 1;//�������ݱ����ǣ���һ֡���ݱ�����
                    }
                        TXQueue_2[TXTail_2] = *MsgPtr;
                }
                else
                {
                    _rc = RC_QUEUEFULL;
                }
                break;
            }
            case  Select_CAN_NODE_3:
            {
                if ((J1939_OVERWRITE_TX_QUEUE == J1939_TRUE) ||
                (TXQueueCount_3 < J1939_TX_QUEUE_SIZE))
                {
                    if (TXQueueCount_3 < J1939_TX_QUEUE_SIZE)
                    {
                        TXQueueCount_3 ++;
                        TXTail_3 ++;
                        if (TXTail_3 >= J1939_TX_QUEUE_SIZE)
                            TXTail_3 = 0;
                    }
                    else
                    {
                        J1939_Flags.TransmitMessagesdCover = 1;//�������ݱ����ǣ���һ֡���ݱ�����
                    }
                    TXQueue_3[TXTail_3] = *MsgPtr;
                }
                else
                {
                    _rc = RC_QUEUEFULL;
                }
                break;
            }
            case  Select_CAN_NODE_4:
            {
                if ((J1939_OVERWRITE_TX_QUEUE == J1939_TRUE) ||
                (TXQueueCount_4 < J1939_TX_QUEUE_SIZE))
                {
                    if (TXQueueCount_4 < J1939_TX_QUEUE_SIZE)
                    {
                        TXQueueCount_4 ++;
                        TXTail_4 ++;
                        if (TXTail_4 >= J1939_TX_QUEUE_SIZE)
                            TXTail_4 = 0;
                    }
                    else
                    {
                        J1939_Flags.TransmitMessagesdCover = 1;//�������ݱ����ǣ���һ֡���ݱ�����
                    }
                    TXQueue_4[TXTail_4] = *MsgPtr;
                }
                else
                {
                    _rc = RC_QUEUEFULL;
                }
                break;
            }

            default  :
            {
                break;
            }
        }
				J1939_ISR( );
    }
		
/*
#if J1939_POLL_ECAN == J1939_FALSE
    Port_TXinterruptEnable();
    //���������ж�
    Port_TXinterruptOk();
#endif
		*/
    return _rc;
}
/**
* @param[in]  MsgPtr              �洢������Ϣ�Ļ���
* @param[in]  _Can_Node           ������Ϣ��CANӲ����ţ�����һ·CAN�������ݣ�
* @return     RC_SUCCESS          ������Ϣ�ɹ�
* @return     RC_QUEUEFULL        ������Ϣ���ɹ��������ж�������Ϣ���ʧ��
* @return     RC_CANNOTTRANSMIT   ������Ϣ���ɹ���ϵͳĿǰ���ܷ�����Ϣ
* @note       �����Ϣ������ӻ��߷��ͣ�����һ����Ӧ�ķ�����ʾ��\n
*/
j1939_uint8_t J1939_Send_Message( J1939_MESSAGE *MsgPtr, CAN_NODE  _Can_Node)
{
    return	J1939_EnqueueMessage(MsgPtr,_Can_Node);
}
/**
*
* @note ��δ�����ϵͳ��ʼ���б�����,������CAN�豸��ʼ��֮��\n
��ʼ��J1939ȫ�ֱ���\n
*/
void J1939_Initialization(void)
{
    /*��ʼ��ȫ�ֱ���*/
    J1939_Flags.FlagVal = 0; //û��������ַ�������ı�ʶλ��������Ϊ0����λ��

    /*��ʼ�����ܺͷ����ж�*/
    TXHead_1 = 0;
    TXHead_2 = 0;
    TXHead_3 = 0;
    TXHead_4 = 0;
    TXTail_1 = 0xFF;
    TXTail_2 = 0xFF;
    TXTail_3 = 0xFF;
    TXTail_4 = 0xFF;
    RXHead_1 = 0;
    RXHead_2 = 0;
    RXHead_3 = 0;
    RXHead_4 = 0;
    RXTail_1 = 0xFF;
    RXTail_2 = 0xFF;
    RXTail_3 = 0xFF;
    RXTail_4 = 0xFF;
    TXQueueCount_1 = 0;
    TXQueueCount_2 = 0;
    TXQueueCount_3 = 0;
    TXQueueCount_4 = 0;
    RXQueueCount_1 = 0;
    RXQueueCount_2 = 0;
    RXQueueCount_3 = 0;
    RXQueueCount_4 = 0;
    /*��ʼ���ڵ��ַ*/
    NodeAddress_1 = J1939_STARTING_ADDRESS_1;
    NodeAddress_2 = J1939_STARTING_ADDRESS_2;
    NodeAddress_3 = J1939_STARTING_ADDRESS_3;
    NodeAddress_4 = J1939_STARTING_ADDRESS_4;
    /*��ʼ��CAN�ڵ��ѡ��*/
    Can_Node = Select_CAN_NODE_1;
    /*��ʼ����������*/
    REQUEST_LIST.PGN = 0;
    REQUEST_LIST.data = J1939_NULL;
    REQUEST_LIST.update = J1939_NULL;
    REQUEST_LIST.lenght = 0;
    REQUEST_LIST.Can_Node = Select_CAN_NODE_Null;
    REQUEST_LIST.next = J1939_NULL;
    /*��TPЭ����Ϊ����*/
#if J1939_TP_RX_TX
    J1939_TP_Flags_t.state = J1939_TP_NULL;
    J1939_TP_Flags_t.TP_RX_CAN_NODE = Select_CAN_NODE_Null;
    J1939_TP_Flags_t.TP_TX_CAN_NODE = Select_CAN_NODE_Null;

    TP_TX_MSG.packets_request_num = 0;
    TP_TX_MSG.packets_total = 0;
    TP_TX_MSG.packet_offset_p = 0;
    TP_TX_MSG.time = 0;
    TP_TX_MSG.state = J1939_TP_TX_WAIT;

    TP_RX_MSG.packets_ok_num = 0;
    TP_RX_MSG.packets_total = 0;
    TP_RX_MSG.time = 0;
    TP_RX_MSG.state = J1939_TP_RX_WAIT;
#endif
}

/**
* @note ������������ã����豸����CAN�жϣ������ǽ����жϣ�Ҳ�����Ƿ����жϣ�\n
��������Ҫ����жϱ�ʶλ\n
Ȼ����ý��ܻ��߷��ͺ�����
*/
#if J1939_POLL_ECAN == J1939_FALSE

void J1939_ISR( void )
{
    //�ж���ر�ʶλ,�ǽ��ܻ��Ƿ���
    //�����ʶλ
    Port_CAN_identifier_clc();
    //������صĴ�����
    J1939_ReceiveMessages();
    J1939_TransmitMessages();
    #if J1939_TP_RX_TX
    J1939_TP_Poll();
    #endif //J1939_TP_RX_TX
    //���ܴ�����Ϊ��������жϣ�ֱ�������صı�ʶλ
}
#endif

/**
* @param[in]  ElapsedTime   һ����ŵĺ�������ͨ������ 5 �� 3
* @note ������ǲ�����ѯ�ķ�ʽ��ȡ��Ϣ���������ÿ�������뽫������һ�Ρ�\n
���ϵĽ�����Ϣ�ͷ�����Ϣ����Ϣ������\n
���⣬����������ڵȴ�һ����ַ������Ӧ��\n
�����ʱ������ֻ�����ض�����Ϣ��Ŀ���ַ = J1939_Address��\n

����豸ʹ���жϣ��˺��������ã��ڵ���J1939_Initialization������������Ϊ\n
J1939_Initialization�������ܳ�ʼ��WaitingForAddressClaimContention��ʶλΪ1.\n

������ܵ������ַ��Ϣ���������Ҳ���뱻���ã��Է���һ����Ҫ�����Ǹı��ַ\n

���ʹ���ж�ģʽ�������򽫲��ᴦ����ܺͷ�����Ϣ��ֻ�����ַ������ʱ��\n
*/
//����TP��ѯ����
void J1939_TP_Poll(void);

void J1939_Poll( )   
{

#if J1939_POLL_ECAN == J1939_TRUE
    	Can_Node = Select_CAN_NODE_1;
    	J1939_Address = NodeAddress_1;
        J1939_ReceiveMessages();
        J1939_TransmitMessages();
    	Can_Node = Select_CAN_NODE_2;
    	J1939_Address = NodeAddress_2;
        J1939_ReceiveMessages();
        J1939_TransmitMessages();
    	Can_Node = Select_CAN_NODE_3;
    	J1939_Address = NodeAddress_3;
        J1939_ReceiveMessages();
        J1939_TransmitMessages();
    	Can_Node = Select_CAN_NODE_4;
        J1939_Address = NodeAddress_4;
        J1939_ReceiveMessages();
        J1939_TransmitMessages();
#if J1939_TP_RX_TX
        J1939_TP_Poll();
#endif //J1939_TP_RX_TX
#endif //J1939_POLL_ECAN == J1939_TRUE 
}

void J1939_Response(const j1939_uint32_t PGN);

#if J1939SoftwareFilterEn == J1939_TRUE
/**
* @return    RC_SUCCESS         ��Ϣ�ǿ��Խ���
* @return    RC_CANNOTTRANSMIT  ��Ϣ�ǲ����Խ���
* @note ����˲���\n
* @note ����SAE J1939Э�飬������ҪCAN�������ṩ����3���˲�����J1939Э����롣�����˲����ֱ��������£�
1. �����˲���0��ֻ���ܹ㲥��Ϣ��PF = 240 -255����
2. ���������˲���1��2ֻ����ȫ�ֵ�ַ��J1939_GLOBAL_ADDRESS��
3. ���ų�������У����ı��˲���2������Ӧ�����߼���
*/
j1939_uint8_t J1939_Messages_Filter(J1939_MESSAGE *MsgPtr)
{
    /*�˲���0*/
    if((MsgPtr->Mxe.PDUFormat) >= 240)
    {
        return RC_SUCCESS;
    }
    /*�˲���1*/
    if(((MsgPtr->Mxe.PDUFormat) < 240) && (MsgPtr->Mxe.PDUSpecific == J1939_GLOBAL_ADDRESS))
    {
        return RC_SUCCESS;
    }
    /*�˲���2*/
    switch (Can_Node)
    {
        case  Select_CAN_NODE_1:
        {
            if(((MsgPtr->Mxe.PDUFormat) < 240) && (MsgPtr->Mxe.PDUSpecific == NodeAddress_1))
            {
                return RC_SUCCESS;
            }
            break;
        }
        case  Select_CAN_NODE_2:
        {
            if(((MsgPtr->Mxe.PDUFormat) < 240) && (MsgPtr->Mxe.PDUSpecific == NodeAddress_2))
            {
                return RC_SUCCESS;
            }
            break;
        }
        case  Select_CAN_NODE_3:
        {
            if(((MsgPtr->Mxe.PDUFormat) < 240) && (MsgPtr->Mxe.PDUSpecific == NodeAddress_3))
            {
                return RC_SUCCESS;
            }
            break;
        }
        case  Select_CAN_NODE_4:
        {
            if(((MsgPtr->Mxe.PDUFormat) < 240) && (MsgPtr->Mxe.PDUSpecific == NodeAddress_4))
            {
                return RC_SUCCESS;
            }
            break;
        }
        default  :
        {
            break;
        }
    }
    return RC_CANNOTTRANSMIT;
}

#endif //J1939SoftwareFilterEn

/**
* @note ��γ��򱻵��ã���CAN�շ����������ݣ��ж� ���� ��ѯ����\n
���һ����Ϣ������, ����������\n
�����Ϣ��һ�����������Ϣ��֡���䣨TP�������ܵ���Ϣ�����ӹ���������������С�\n
����, ��Ϣ���������û��Ľ��ն��С�\n
ע�⣺����γ��������ڼ��ж���ʧ�ܵġ�\n
*/
void J1939_ReceiveMessages( void )
{
#if J1939_TP_RX_TX
    j1939_uint32_t _pgn = 0;
#endif //J1939_TP_RX_TX
        /*�ӽ��ջ����ж�ȡ��Ϣ��OneMessage�У�OneMessage��һ��ȫ�ֱ���*/
        /*Port_CAN_Receive������ȡ�����ݷ���1��û�������򷵻�0*/
    if(Port_CAN_Receive(&OneMessage))
    {
#if J1939SoftwareFilterEn == J1939_TRUE

        if(J1939_Messages_Filter(&OneMessage) != RC_SUCCESS)
        {
            return ;
        }
#endif //J1939SoftwareFilterEn
        switch( OneMessage.Mxe.PDUFormat)
        {
#if J1939_TP_RX_TX
            case J1939_PF_TP_CM:       //�ο�J1939-21 TP��֡����Э��
                _pgn = (j1939_uint32_t)((OneMessage.Mxe.Data[7]<<16)&0xFF0000)
                            +(j1939_uint32_t)((OneMessage.Mxe.Data[6]<<8)&0xFF00)
                            +(j1939_uint32_t)((OneMessage.Mxe.Data[5])&0xFF);
                if((J1939_TP_Flags_t.state == J1939_TP_NULL) && (TP_RX_MSG.state == J1939_TP_RX_WAIT))
                {
                    if(OneMessage.Mxe.Data[0] == 16)
                    {
                        J1939_TP_Flags_t.state = J1939_TP_RX;
                        J1939_TP_Flags_t.TP_RX_CAN_NODE = Can_Node;

                        TP_RX_MSG.tp_rx_msg.SA = OneMessage.Mxe.SourceAddress;
                        TP_RX_MSG.tp_rx_msg.PGN = (j1939_uint32_t)((OneMessage.Mxe.Data[7]<<16)&0xFF0000)
                                                    +(j1939_uint32_t)((OneMessage.Mxe.Data[6]<<8)&0xFF00)
                                                    +(j1939_uint32_t)((OneMessage.Mxe.Data[5])&0xFF);
                        /*���ϵͳ��æ*/
                        if(TP_RX_MSG.osbusy)
                        {
                            TP_RX_MSG.state = J1939_TP_RX_ERROR;
                            break;
                        }
                        /*�ж��Ƿ����㹻���ڴ�������ݣ����û��ֱ�ӣ��Ͽ�����*/
                        if(((j1939_uint32_t)((OneMessage.Mxe.Data[2]<<8)&0xFF00)
                                +(j1939_uint32_t)((OneMessage.Mxe.Data[1])&0xFF)) > J1939_TP_MAX_MESSAGE_LENGTH)
                        {
                            TP_RX_MSG.state = J1939_TP_RX_ERROR;
                            break;
                        }
                        TP_RX_MSG.tp_rx_msg.byte_count = ((j1939_uint32_t)((OneMessage.Mxe.Data[2]<<8)&0xFF00)
                                                         +(j1939_uint32_t)((OneMessage.Mxe.Data[1])&0xFF));
                        TP_RX_MSG.packets_total = OneMessage.Mxe.Data[3];
                        TP_RX_MSG.time = J1939_TP_T2;
                        TP_RX_MSG.state = J1939_TP_RX_READ_DATA;
                        break;
                    }
                    goto PutInReceiveQueue;
                    break;
                }
                if(J1939_TP_Flags_t.state == J1939_TP_TX)
                {
                /*У��PGN*/
                    if (_pgn == TP_TX_MSG.tp_tx_msg.PGN)
                    {
                        switch(OneMessage.Mxe.Data[0])
                        {
                            case J1939_RTS_CONTROL_BYTE:
                                /* �������е����˵���Ѿ����������豸1�����������ӣ���Ϊ���Ͷˣ��������յ��豸2���������󣬲���ͬһ��PGN��Ϣ����*/
                                /* ����J1939-21������·��Ĺ涨������Ҫ����ԭ�е����ӣ������κ��£��豸2��ӦΪ��ʱ�Զ���������*/
                                break;
                            case J1939_CTS_CONTROL_BYTE:
                                if((J1939_TP_TX_CM_WAIT == TP_TX_MSG.state) || (J1939_TP_WAIT_ACK == TP_TX_MSG.state))
                                {
                                    /* ���͵ȴ����� */
                                    if(0x00u == OneMessage.Mxe.Data[1])
                                    {
                                        /* ˢ�µȴ������� */
                                        TP_TX_MSG.time = J1939_TP_T4;
                                    }
                                    else
                                    {
                                        if((OneMessage.Mxe.Data[2]+OneMessage.Mxe.Data[1]) > (TP_TX_MSG.packets_total+1))
                                        {
                                            /*���󳬳����ݰ���Χ*/
                                            TP_TX_MSG.state = J1939_TP_TX_ERROR;
                                        }
                                        else
                                        { /* response parameter OK */
                                            TP_TX_MSG.packets_request_num = OneMessage.Mxe.Data[1];
                                            TP_TX_MSG.packet_offset_p = (j1939_uint8_t)(OneMessage.Mxe.Data[2] - 1);
                                            TP_TX_MSG.state = J1939_TP_TX_DT;
                                        }

                                    }
                                }
                                break;
                            case J1939_EOMACK_CONTROL_BYTE:
                                if(J1939_TP_WAIT_ACK == TP_TX_MSG.state)
                                {
                                    TP_TX_MSG.state = J1939_TX_DONE;
                                }
                                //�����������һ�������ݵ�У��
                                break;
                            case J1939_CONNABORT_CONTROL_BYTE:
                                //�յ�һ���������ӣ�ʲô��������Э�����һ����ʱʱ���������������
                                break;
                            default:
                                break;
                        }
                    }
                }
            goto PutInReceiveQueue;
            break;
#endif//J1939_TP_RX_TX

#if J1939_TP_RX_TX
            case J1939_PF_DT:
                if((TP_RX_MSG.state == J1939_TP_RX_DATA_WAIT)&&(TP_RX_MSG.tp_rx_msg.SA == OneMessage.Mxe.SourceAddress))
                {
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u]=OneMessage.Mxe.Data[1];
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u+1]=OneMessage.Mxe.Data[2];
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u+2]=OneMessage.Mxe.Data[3];
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u+3]=OneMessage.Mxe.Data[4];
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u+4]=OneMessage.Mxe.Data[5];
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u+5]=OneMessage.Mxe.Data[6];
                    TP_RX_MSG.tp_rx_msg.data[(OneMessage.Mxe.Data[0]-1)*7u+6]=OneMessage.Mxe.Data[7];
                    /*���⴦�����½����ѽ��ܹ������ݰ�*/
                    if((OneMessage.Mxe.Data[0]) > TP_RX_MSG.packets_ok_num)
                    {
                        TP_RX_MSG.packets_ok_num++;
                    }
                    TP_RX_MSG.time = J1939_TP_T1;
                    /*�ж��Ƿ��յ�ż�������ݰ����߶�ȡ�����һ�����ݰ�*/
                    if((TP_RX_MSG.packets_ok_num%2 == 0) ||(TP_RX_MSG.packets_ok_num == TP_RX_MSG.packets_total))
                    {
                        TP_RX_MSG.state = J1939_TP_RX_READ_DATA;
                        break ;
                    }
                    break ;
                }
            //���򲻿������е��⣬�������ǲ��ܷ������ܵ����ݰ�
            goto PutInReceiveQueue;
#endif//J1939_TP_RX_TX
            case J1939_PF_REQUEST:
                /*��OneMessage.Mxe.PGN �����±������PGN*/
                if(OneMessage.Mxe.Data[1] < 240)
                {
                    OneMessage.Mxe.PGN = (j1939_uint32_t)((OneMessage.Mxe.Data[2]<<16)&0x030000)
                                    +(j1939_uint32_t)((OneMessage.Mxe.Data[1]<<8)&0xFF00)
                                    +0x00;
                }
                else
                {
                    OneMessage.Mxe.PGN = (j1939_uint32_t)((OneMessage.Mxe.Data[2]<<16)&0x030000)
                                    +(j1939_uint32_t)((OneMessage.Mxe.Data[1]<<8)&0xFF00)
                                    +(j1939_uint32_t)((OneMessage.Mxe.Data[0])&0xFF);
                }
                J1939_Response(OneMessage.Mxe.PGN);
                break;
            default:
PutInReceiveQueue:
            {
                /*
                if(OneMessage.Mxe.PDUFormat < 240){
                OneMessage.Mxe.PGN = (j1939_uint32_t)((OneMessage.Array[0]<<16)&0x030000)
                +(j1939_uint32_t)((OneMessage.Array[1]<<8)&0xFF00)
                +0x00;
                }else{
                OneMessage.Mxe.PGN = (j1939_uint32_t)((OneMessage.Array[0]<<16)&0x030000)
                +(j1939_uint32_t)((OneMessage.Array[1]<<8)&0xFF00)
                +(j1939_uint32_t)((OneMessage.Array[2])&0xFF);
                }
                */
                if(OneMessage.Mxe.PDUFormat < 240)
                {
                OneMessage.Mxe.PGN = (OneMessage.Mxe.Res << 17)
                                +(OneMessage.Mxe.DataPage << 16)
                                +(OneMessage.Mxe.PDUFormat << 8);
                }
                else
                {
                OneMessage.Mxe.PGN = (OneMessage.Mxe.Res << 17)
                                +(OneMessage.Mxe.DataPage << 16)
                                +(OneMessage.Mxe.PDUFormat << 8)
                                + OneMessage.Mxe.PDUSpecific;
                }

                switch (Can_Node)
                {
                    case  Select_CAN_NODE_1:
                    {
                        if ( (J1939_OVERWRITE_RX_QUEUE == J1939_TRUE) ||
                            (RXQueueCount_1 < J1939_RX_QUEUE_SIZE))
                        {
                            if (RXQueueCount_1 < J1939_RX_QUEUE_SIZE)
                            {
                                RXQueueCount_1 ++;
                                RXTail_1 ++;
                                if (RXTail_1 >= J1939_RX_QUEUE_SIZE)
                                    RXTail_1 = 0;
                            }else{
                                J1939_Flags.ReceivedMessagesdCover = 1; //�������ݸ���
                                J1939_Flags.ReceivedMessagesdCoverOrDroppedNode = Select_CAN_NODE_1;
                            }
                            RXQueue_1[RXTail_1] = OneMessage;
                        }
                        else
                            J1939_Flags.ReceivedMessagesDropped = 1; //�����������
                        break;
                    }
                    case  Select_CAN_NODE_2:
                    {
                        if ( (J1939_OVERWRITE_RX_QUEUE == J1939_TRUE) ||
                            (RXQueueCount_2 < J1939_RX_QUEUE_SIZE))
                        {
                            if (RXQueueCount_2 < J1939_RX_QUEUE_SIZE)
                            {
                                RXQueueCount_2 ++;
                                RXTail_2 ++;
                                if (RXTail_2 >= J1939_RX_QUEUE_SIZE)
                                    RXTail_2 = 0;
                            }else{
                                J1939_Flags.ReceivedMessagesdCover = 1; //�������ݸ���
                                J1939_Flags.ReceivedMessagesdCoverOrDroppedNode = Select_CAN_NODE_2;
                            }
                            RXQueue_2[RXTail_2] = OneMessage;
                        }
                        else
                            J1939_Flags.ReceivedMessagesDropped = 1;
                        break;
                    }
                    case  Select_CAN_NODE_3:
                    {
                        if ( (J1939_OVERWRITE_RX_QUEUE == J1939_TRUE) ||
                            (RXQueueCount_3 < J1939_RX_QUEUE_SIZE))
                        {
                            if (RXQueueCount_3 < J1939_RX_QUEUE_SIZE)
                            {
                                RXQueueCount_3 ++;
                                RXTail_3 ++;
                                if (RXTail_3 >= J1939_RX_QUEUE_SIZE)
                                    RXTail_3 = 0;
                            }else{
                                J1939_Flags.ReceivedMessagesdCover = 1; //�������ݸ���
                                J1939_Flags.ReceivedMessagesdCoverOrDroppedNode = Select_CAN_NODE_3;
                            }
                            RXQueue_3[RXTail_3] = OneMessage;
                        }
                        else
                            J1939_Flags.ReceivedMessagesDropped = 1;
                        break;
                    }
                    case  Select_CAN_NODE_4:
                    {
                        if ( (J1939_OVERWRITE_RX_QUEUE == J1939_TRUE) ||
                            (RXQueueCount_4 < J1939_RX_QUEUE_SIZE))
                        {
                            if (RXQueueCount_4 < J1939_RX_QUEUE_SIZE)
                            {
                                RXQueueCount_4 ++;
                                RXTail_4 ++;
                                if (RXTail_4 >= J1939_RX_QUEUE_SIZE)
                                    RXTail_4 = 0;
                            }else{
                                J1939_Flags.ReceivedMessagesdCover = 1; //�������ݸ���
                                J1939_Flags.ReceivedMessagesdCoverOrDroppedNode = Select_CAN_NODE_4;
                            }
                            RXQueue_4[RXTail_4] = OneMessage;
                        }
                        else
                            J1939_Flags.ReceivedMessagesDropped = 1;
                        break;
                    }
                    default  :
                    {
                        break;
                    }
                }
            }
        }
				/*
				char buff[512];
				char data[128];
				char data1[128];
				int i;
				
				sprintf(data,"\n**%X **\n",OneMessage.Mxe.Data[2]);
				USART_STR(USART2,data);
				*/
/*
				for (i=0;i<8;i++)
				{
					
					sprintf(data1,"%X-",OneMessage.Mxe.Data[i]);
					strcat(data,data1);
				}
				//USART_STR(USART2,data);
				sprintf(buff,"OneMessage:%X\n R:%X\n DP:%X\n PF:%X\n PGN:%X\n Data:%s\n",OneMessage.Mxe.Priority,OneMessage.Mxe.RTR,OneMessage.Mxe.DataPage,OneMessage.Mxe.PDUFormat,\
				OneMessage.Mxe.PGN,data);

				USART_STR(USART2,buff);
				*/
    }

}
/**
* @return    RC_SUCCESS          ��Ϣ���ͳɹ�
* @return    RC_CANNOTTRANSMIT   ϵͳû�з�����Ϣ,û��Ҫ���͵���Ϣ,������CAN�豸
* @note      ����������������������Ϣ�ж�������Ϣ��λ����ᷢ����Ϣ ��������ܷ�����Ϣ����صĴ�����뽫���ء�\n
���������ڼ䣬�ж��Ǳ�ʧ�ܵġ�
*/
static j1939_uint8_t J1939_TransmitMessages()
{
    switch (Can_Node)
    {
    case  Select_CAN_NODE_1:
    {
        if (TXQueueCount_1 == 0)
        {
            //���û��Ҫ���͵���Ϣ�ӷ�����Ϣ�ж��У��ָ��ж�(��շ��ͱ�ʶλ)
            #if J1939_POLL_ECAN == J1939_FALSE
            Port_TXinterruptEnable();
            #endif
            return RC_CANNOTTRANSMIT;
        }
        else
        {
            while(TXQueueCount_1 > 0)
            {
                /*ȷ���ϴ����ݷ��ͳɹ�*/
                /**************������һ���жϺ���**************************/

                TXQueue_1[TXHead_1].Mxe.SourceAddress = NodeAddress_1;

                SendOneMessage( (J1939_MESSAGE *) &(TXQueue_1[TXHead_1]) );
                TXHead_1 ++;
                if (TXHead_1 >= J1939_TX_QUEUE_SIZE)
                TXHead_1 = 0;
                TXQueueCount_1 --;
            }

            /*������һЩ��ʶλ��ʹ���ж�*/
            #if J1939_POLL_ECAN == J1939_FALSE
                Port_TXinterruptEnable();
            #endif
        }
        break;
    }
    case  Select_CAN_NODE_2:
    {
        if (TXQueueCount_2 == 0)
        {
            //���û��Ҫ���͵���Ϣ�ӷ�����Ϣ�ж��У��ָ��ж�(��շ��ͱ�ʶλ)
            #if J1939_POLL_ECAN == J1939_FALSE
            Port_TXinterruptEnable();
            #endif
            return RC_CANNOTTRANSMIT;
        }
        else
        {

            while(TXQueueCount_2 > 0)
            {
                /*ȷ���ϴ����ݷ��ͳɹ�*/
                /**************������һ���жϺ���**************************/

                TXQueue_2[TXHead_2].Mxe.SourceAddress = NodeAddress_2;

                SendOneMessage( (J1939_MESSAGE *) &(TXQueue_2[TXHead_2]) );
                TXHead_2 ++;
                if (TXHead_2 >= J1939_TX_QUEUE_SIZE)
                TXHead_2 = 0;
                TXQueueCount_2 --;
            }

            /*������һЩ��ʶλ��ʹ���ж�*/
            #if J1939_POLL_ECAN == J1939_FALSE
                Port_TXinterruptEnable();
            #endif
        }
        break;
    }
    case  Select_CAN_NODE_3:
    {
        if (TXQueueCount_3 == 0)
        {
            //���û��Ҫ���͵���Ϣ�ӷ�����Ϣ�ж��У��ָ��ж�(��շ��ͱ�ʶλ)
            #if J1939_POLL_ECAN == J1939_FALSE
            Port_TXinterruptEnable();
            #endif
            return RC_CANNOTTRANSMIT;
        }
        else
        {
            while(TXQueueCount_3 > 0)
            {
                /*ȷ���ϴ����ݷ��ͳɹ�*/
                /**************������һ���жϺ���**************************/

                TXQueue_3[TXHead_3].Mxe.SourceAddress = NodeAddress_3;

                SendOneMessage( (J1939_MESSAGE *) &(TXQueue_3[TXHead_3]) );
                TXHead_3 ++;
                if (TXHead_3 >= J1939_TX_QUEUE_SIZE)
                TXHead_3 = 0;
                TXQueueCount_3 --;
            }

            /*������һЩ��ʶλ��ʹ���ж�*/
            #if J1939_POLL_ECAN == J1939_FALSE
                Port_TXinterruptEnable();
            #endif
        }
        break;
    }
    case  Select_CAN_NODE_4:
    {
        if (TXQueueCount_4 == 0)
        {
            //���û��Ҫ���͵���Ϣ�ӷ�����Ϣ�ж��У��ָ��ж�(��շ��ͱ�ʶλ)
            #if J1939_POLL_ECAN == J1939_FALSE
            Port_TXinterruptEnable();
            #endif
            return RC_CANNOTTRANSMIT;
        }
        else
        {

            while(TXQueueCount_4 > 0)
            {
                /*ȷ���ϴ����ݷ��ͳɹ�*/
                /**************������һ���жϺ���**************************/

                TXQueue_4[TXHead_4].Mxe.SourceAddress = NodeAddress_4;

                SendOneMessage( (J1939_MESSAGE *) &(TXQueue_4[TXHead_4]) );
                TXHead_4 ++;
                if (TXHead_4 >= J1939_TX_QUEUE_SIZE)
                TXHead_4 = 0;
                TXQueueCount_4 --;
            }

            /*������һЩ��ʶλ��ʹ���ж�*/
            #if J1939_POLL_ECAN == J1939_FALSE
            Port_TXinterruptEnable();
            #endif
        }
        break;
    }
    default  :
    {
        return RC_CANNOTTRANSMIT;
        break;
    }
    }

    return RC_SUCCESS;
}
#if J1939_TP_RX_TX
/**
* @note ����TP.DT���ο�J1939-21
*/
void J1939_TP_DT_Packet_send(void)
{
    J1939_MESSAGE _msg;
    j1939_uint16_t _packet_offset_p;
    j1939_int32_t _i=0;
    _msg.Mxe.Priority = J1939_TP_DT_PRIORITY;
    _msg.Mxe.DataPage =0;
    _msg.Mxe.PDUFormat = J1939_PF_DT;
    _msg.Mxe.DestinationAddress = TP_TX_MSG.tp_tx_msg.SA;
    _msg.Mxe.DataLength = 8;


    /*��ȡ�����͵����ݰ�����*/
    if(TP_TX_MSG.packets_request_num > 0)
    {
        TP_TX_MSG.packets_request_num--;
        /*��ȡ����ƫ��ָ��*/
        _packet_offset_p = (j1939_uint16_t)(TP_TX_MSG.packet_offset_p*7u);
        /*�������ݰ����*/
        _msg.Mxe.Data[0] = (j1939_uint8_t)(1u + TP_TX_MSG.packet_offset_p);

        for(_i = 0; _i<7; _i++)
        {
            _msg.Mxe.Data[_i+1] = TP_TX_MSG.tp_tx_msg.data[_packet_offset_p + _i];
        }
        /*�Ƿ������һ��������Ϣ*/
        if(TP_TX_MSG.packet_offset_p == (TP_TX_MSG.packets_total - 1u))
        {
            /*����Ⱥ�Ƿ��ܱ��������Ƿ���Ҫ��䣬*/
            if ( _packet_offset_p > TP_TX_MSG.tp_tx_msg.byte_count - 7 )
            {
            /*������Ҫ����������*/
            _i = TP_TX_MSG.tp_tx_msg.byte_count- _packet_offset_p - 7 ;

            for (    ; _i < 0  ; _i++ )
            {
            /*����Ĭ��J1939�Ĳ���Ⱥ��СΪ8*/
            _msg.Mxe.Data[_i+8] = J1939_RESERVED_BYTE ;
            }
            }


            TP_TX_MSG.packets_request_num = 0;
            TP_TX_MSG.packet_offset_p = 0;
            TP_TX_MSG.time = J1939_TP_T3;
            /* ��ת���裬�ȴ�����ȷ�ϻ������·�����������*/
            TP_TX_MSG.state = J1939_TP_WAIT_ACK;
        }
        else
        {
            /*Ϊ��һ�����ݷ�����׼��*/
            TP_TX_MSG.packet_offset_p++;
            TP_TX_MSG.state = J1939_TP_TX_DT;
        }

        /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
        J1939_EnqueueMessage(&_msg, Can_Node);
    }
    else
    {

        TP_TX_MSG.packets_request_num = 0;
        TP_TX_MSG.packet_offset_p = 0;
        TP_TX_MSG.time = J1939_TP_T3;
        TP_TX_MSG.state = J1939_TP_WAIT_ACK;
    }

}
/**
* @note ����TP��CM-RTS,16,23,4,255,PGN��Ϣ���ο�J1939-21��
*/
void J1939_CM_Start(void)
{
    j1939_uint32_t pgn_num;
    J1939_MESSAGE _msg;

    pgn_num = TP_TX_MSG.tp_tx_msg.PGN;

    _msg.Mxe.Priority = J1939_TP_CM_PRIORITY;
    _msg.Mxe.DataPage =0;
    _msg.Mxe.PDUFormat = J1939_PF_TP_CM;
    _msg.Mxe.DestinationAddress = TP_TX_MSG.tp_tx_msg.SA;
    _msg.Mxe.DataLength = 8;
    _msg.Mxe.Data[0] = J1939_RTS_CONTROL_BYTE;
    _msg.Mxe.Data[1] = (j1939_uint8_t) TP_TX_MSG.tp_tx_msg.byte_count ;
    _msg.Mxe.Data[2] = (j1939_uint8_t) ((TP_TX_MSG.tp_tx_msg.byte_count)>>8);
    _msg.Mxe.Data[3] = TP_TX_MSG.packets_total;
    _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
    _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
    _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);

    /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
    J1939_EnqueueMessage(&_msg, Can_Node);

    /*ˢ�µȴ�ʱ�䣬������һ�����裨��*/
    TP_TX_MSG.time = J1939_TP_T3;
    TP_TX_MSG.state = J1939_TP_TX_CM_WAIT;

}
/**
* @note �ж�TP����
*/
void J1939_TP_TX_Abort(void)
{
    J1939_MESSAGE _msg;
    j1939_uint32_t pgn_num;
    
    pgn_num = TP_TX_MSG.tp_tx_msg.PGN;
    
    _msg.Mxe.Priority = J1939_TP_CM_PRIORITY;
    _msg.Mxe.DataPage =0;
    _msg.Mxe.PDUFormat = J1939_PF_TP_CM;
    _msg.Mxe.DestinationAddress = TP_TX_MSG.tp_tx_msg.SA;
    _msg.Mxe.DataLength = 8;
    _msg.Mxe.Data[0] = J1939_CONNABORT_CONTROL_BYTE;
    _msg.Mxe.Data[1] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[2] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[3] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
    _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
    _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);
    
    /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
    J1939_EnqueueMessage(&_msg, Can_Node);
    /*��������*/
    TP_TX_MSG.state = J1939_TX_DONE;

}
/**
* @note �ж�TP����
*/
void J1939_TP_RX_Abort(void)
{
    J1939_MESSAGE _msg;
    j1939_uint32_t pgn_num;
    
    pgn_num = TP_RX_MSG.tp_rx_msg.PGN;
    
    _msg.Mxe.Priority = J1939_TP_CM_PRIORITY;
    _msg.Mxe.DataPage =0;
    _msg.Mxe.PDUFormat = J1939_PF_TP_CM;
    _msg.Mxe.DestinationAddress = TP_RX_MSG.tp_rx_msg.SA;
    _msg.Mxe.DataLength = 8;
    _msg.Mxe.Data[0] = J1939_CONNABORT_CONTROL_BYTE;
    _msg.Mxe.Data[1] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[2] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[3] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
    _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
    _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
    _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);
    
    /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
    J1939_EnqueueMessage(&_msg, Can_Node);
    /*��������*/
    TP_RX_MSG.state = J1939_RX_DONE;

}
/**
* @note TP�ļ�ʱ��
*/
j1939_uint8_t J1939_TP_TX_RefreshCMTimer(j1939_uint16_t dt_ms)
{
    if((J1939_TP_TX_CM_WAIT == TP_TX_MSG.state)||(J1939_TP_WAIT_ACK == TP_TX_MSG.state))
    {
        if(TP_TX_MSG.time > dt_ms)
        {
            TP_TX_MSG.time = TP_TX_MSG.time - dt_ms;
            return J1939_TP_TIMEOUT_NORMAL;
        }
        else
        {
        /*��ʱ */
            TP_TX_MSG.time = 0u;
            return  J1939_TP_TIMEOUT_ABNORMAL;
        }
        
    }
    else
    {
        return  J1939_TP_TIMEOUT_NORMAL;
    }
}
/**
* @note TP�ļ�ʱ��
*/
j1939_uint8_t J1939_TP_RX_RefreshCMTimer(j1939_uint16_t dt_ms)
{
    if((J1939_TP_RX_DATA_WAIT == TP_RX_MSG.state))
    {
        if(TP_RX_MSG.time > dt_ms)
        {
            TP_RX_MSG.time = TP_RX_MSG.time - dt_ms;
            return J1939_TP_TIMEOUT_NORMAL;
        }
        else
        {
            /*��ʱ */
            TP_RX_MSG.time = 0u;
            return  J1939_TP_TIMEOUT_ABNORMAL;
        }
    
    }
    else
    {
        return  J1939_TP_TIMEOUT_NORMAL;
    }
}
/**
* @note ���Ͷ�ȡ���� TP.CM_CTS �� EndofMsgAck��Ϣ��
*/
void J1939_read_DT_Packet()
{
    J1939_MESSAGE _msg;
    j1939_uint32_t pgn_num;
    pgn_num = TP_RX_MSG.tp_rx_msg.PGN;
    
    _msg.Mxe.Priority = J1939_TP_CM_PRIORITY;
    _msg.Mxe.DataPage =0;
    _msg.Mxe.PDUFormat = J1939_PF_TP_CM;
    _msg.Mxe.DestinationAddress = TP_RX_MSG.tp_rx_msg.SA;
    _msg.Mxe.DataLength = 8;
    
    /*���ϵͳ��æ,�������ӵ��ǲ�������Ϣ*/
    if(TP_RX_MSG.osbusy)
    {
        _msg.Mxe.Data[0] = J1939_CTS_CONTROL_BYTE;
        _msg.Mxe.Data[1] = 0;
        _msg.Mxe.Data[2] = J1939_RESERVED_BYTE;
        _msg.Mxe.Data[3] = J1939_RESERVED_BYTE;
        _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
        _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
        _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
        _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);
        /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
        J1939_EnqueueMessage(&_msg, Can_Node);
        return ;
    }
    if(TP_RX_MSG.packets_total > TP_RX_MSG.packets_ok_num)
    {
    /*���һ����Ӧ���������2������*/
        if((TP_RX_MSG.packets_total - TP_RX_MSG.packets_ok_num)==1)
        {
            _msg.Mxe.Data[0] = J1939_CTS_CONTROL_BYTE;
            _msg.Mxe.Data[1] = 1;
            _msg.Mxe.Data[2] = TP_RX_MSG.packets_total;
            _msg.Mxe.Data[3] = J1939_RESERVED_BYTE;
            _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
            _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
            _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
            _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);
            /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
            J1939_EnqueueMessage(&_msg, Can_Node);
            TP_RX_MSG.state = J1939_TP_RX_DATA_WAIT;
            return ;
        }
        _msg.Mxe.Data[0] = J1939_CTS_CONTROL_BYTE;
        _msg.Mxe.Data[1] = 2;
        _msg.Mxe.Data[2] = (TP_RX_MSG.packets_ok_num + 1);
        _msg.Mxe.Data[3] = J1939_RESERVED_BYTE;
        _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
        _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
        _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
        _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);
        
        /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
        J1939_EnqueueMessage(&_msg, Can_Node);
        TP_RX_MSG.state = J1939_TP_RX_DATA_WAIT;
        return ;
    }
    else
    {
        /*���ʹ�������������Ϣ��EndofMsgAck*/
        _msg.Mxe.Data[0] = J1939_EOMACK_CONTROL_BYTE;
        _msg.Mxe.Data[1] = (TP_RX_MSG.tp_rx_msg.byte_count & 0x00ff);
        _msg.Mxe.Data[2] = ((TP_RX_MSG.tp_rx_msg.byte_count >> 8) & 0x00ff);
        _msg.Mxe.Data[3] = TP_RX_MSG.packets_total;
        _msg.Mxe.Data[4] = J1939_RESERVED_BYTE;
        _msg.Mxe.Data[7] = (j1939_uint8_t)((pgn_num>>16) & 0xff);
        _msg.Mxe.Data[6] = (j1939_uint8_t)(pgn_num>>8 & 0xff);
        _msg.Mxe.Data[5] = (j1939_uint8_t)(pgn_num & 0xff);
        /*���ܶ���������������ȥ���������ﲻ�ܿ�����ֵ�������޵�����*/
        J1939_EnqueueMessage(&_msg, Can_Node);
        TP_RX_MSG.state = J1939_RX_DONE;
        return ;
    }
}
/**
* @note TPЭ���������Ϊ�����������ߵļ�ʱ׼ȷ��10ms��ѯһ��   J1939_TP_TX_RefreshCMTimer(10)\n
�����Ҫ���ߵķֱ��ʣ�1ms��ѯһ�Σ�����Ҫ�������ʱ����  J1939_TP_TX_RefreshCMTimer(1)
*/
void J1939_TP_Poll(void)
{
    if(J1939_TP_Flags_t.state == J1939_TP_NULL || J1939_TP_Flags_t.state == J1939_TP_OSBUSY)
    {
        return ;
    }
    if(J1939_TP_Flags_t.state == J1939_TP_RX)
    {
        Can_Node = J1939_TP_Flags_t.TP_RX_CAN_NODE;
            switch(TP_RX_MSG.state)
            {
                case J1939_TP_RX_WAIT:
                ;
                break;
                
                case J1939_TP_RX_READ_DATA:
                    /*���Ͷ�ȡ���� TP.CM_CTS �� EndofMsgAck��Ϣ*/
                    J1939_read_DT_Packet();
                break;
                
                case J1939_TP_RX_DATA_WAIT:
                    /*�ȴ�TP.DT֡�������Ϣ*/
                    if(J1939_TP_TIMEOUT_ABNORMAL == J1939_TP_RX_RefreshCMTimer(10))
                    {
                        /* �ȴ���ʱ�����������쳣����ת���쳣���� */
                        TP_RX_MSG.state = J1939_TP_RX_ERROR;
                    }
                break;
                
                case J1939_TP_RX_ERROR:
                    J1939_TP_RX_Abort();
                    J1939_TP_Flags_t.TP_RX_CAN_NODE = Select_CAN_NODE_Null;
                break;
                    
                case J1939_RX_DONE:
                    TP_RX_MSG.packets_ok_num = 0;
                    TP_RX_MSG.packets_total = 0;
                    TP_RX_MSG.time = J1939_TP_T3;
                    TP_RX_MSG.state = J1939_TP_RX_WAIT;
                    J1939_TP_Flags_t.state = J1939_TP_NULL;
                break;
                
                default:
                break;
            }
        return ;
    }
    if(J1939_TP_Flags_t.state == J1939_TP_TX)
    {
        Can_Node = J1939_TP_Flags_t.TP_TX_CAN_NODE;
        switch (TP_TX_MSG.state)
        {
            case J1939_TP_TX_WAIT:
                /*û��Ҫ���͵�����*/
            break;
            
            case J1939_TP_TX_CM_START:
                /*����TP.CM_RTS֡�������Ϣ(�ο�j1939-21)*/
                J1939_CM_Start();
            break;
            
            case J1939_TP_TX_CM_WAIT:
                /*�ȴ�TP.CM_CTS֡�������Ϣ*/
                if(J1939_TP_TIMEOUT_ABNORMAL == J1939_TP_TX_RefreshCMTimer(10))
                {
                /* �ȴ���ʱ�����������쳣����ת���쳣���� */
                TP_TX_MSG.state = J1939_TP_TX_ERROR;
                }
            break;
            
            case J1939_TP_TX_DT:
                J1939_TP_DT_Packet_send();
            break;
            
            case J1939_TP_WAIT_ACK:
                /*�ȴ�TP.EndofMsgACK֡�������Ϣ*/
                if(J1939_TP_TIMEOUT_ABNORMAL == J1939_TP_TX_RefreshCMTimer(10))
                {
                /* �ȴ���ʱ�����������쳣����ת���쳣���� */
                TP_TX_MSG.state = J1939_TP_TX_ERROR;
                }
            break;
            
            case J1939_TP_TX_ERROR:
                J1939_TP_TX_Abort();
            
            break;
            
            case J1939_TX_DONE:
                TP_TX_MSG.packets_request_num = 0;
                TP_TX_MSG.packet_offset_p = 0;
                TP_TX_MSG.time = J1939_TP_T3;
                TP_TX_MSG.state = J1939_TP_TX_WAIT;
                J1939_TP_Flags_t.state = J1939_TP_NULL;
            break;
            default:
                //���򲻻����е�����������������һ���������
            break;
        }
    return ;
    }
}

/**����һ��������io�ӿ�
*
* @param[in] PGN	TP�Ự�Ĳ���Ⱥ���
* @param[in] SA		TP�Ự��Ŀ���ַ
* @param[in] *data	TP�Ự�����ݻ����ַ
* @param[in] data_num TP�Ự�����ݴ�С
* @param[in]  _Can_Node  Ҫ��ӵ�CANӲ����ţ�Ҫѡ���ʹ�õ�CANӲ����ţ�
* @return    RC_SUCCESS        �ɹ���TP���ӣ���ʼ���뷢������
* @return    RC_CANNOTTRANSMIT ���ܷ��ͣ���ΪTPЭ���Ѿ������������ӣ�����δ�Ͽ�
* @note      TPЭ��ķ��ͺ���
*/
j1939_int8_t J1939_TP_TX_Message(j1939_uint32_t PGN,j1939_uint8_t DA,j1939_uint8_t *data,j1939_uint16_t data_num, CAN_NODE  _Can_Node)
{
    j1939_uint16_t _byte_count =0;
    /*ȡ�÷���Ȩ��*/
    if(J1939_TP_Flags_t.state == J1939_TP_NULL)
    {
        J1939_TP_Flags_t.state = J1939_TP_TX;
        J1939_TP_Flags_t.TP_TX_CAN_NODE = _Can_Node;
    }
    else
    {
        return RC_CANNOTTRANSMIT;//���ܷ��ͣ���ΪTPЭ���Ѿ������������ӣ�����δ�Ͽ�
    }

    TP_TX_MSG.tp_tx_msg.PGN = PGN;
    TP_TX_MSG.tp_tx_msg.SA = DA;
    TP_TX_MSG.tp_tx_msg.byte_count = data_num;
    for(_byte_count = 0;_byte_count < data_num;_byte_count++)
    {
        TP_TX_MSG.tp_tx_msg.data[_byte_count] = data[_byte_count];
    }
    
    TP_TX_MSG.packet_offset_p = 0;
    TP_TX_MSG.packets_request_num = 0;
    TP_TX_MSG.packets_total = data_num/7;
    if((data_num%7) != 0)
    {
        TP_TX_MSG.packets_total ++;
    }
    TP_TX_MSG.time = J1939_TP_T3;
    
    //������ʼCM_START
    TP_TX_MSG.state = J1939_TP_TX_CM_START;

return RC_SUCCESS;
}

/**
* @param[in]  msg.data	     ��ȡ���ݵĻ���
* @param[in]  msg.data_num   ��ȡ���ݵĻ����С
* @param[in]  _Can_Node      Ҫ��ӵ�CANӲ����ţ�Ҫѡ���ʹ�õ�CANӲ����ţ�
* @param[out] msg.SA         ����Դ��ַ
* @param[out] msg.byte_count ���ݴ�С
* @param[out] msg.PGN        ���ݲ���Ⱥ���
* @return  RC_CANNOTRECEIVE ���ܽ��ܣ�TPЭ�����ڽ���������
* @return  RC_SUCCESS		��ȡ���ݳɹ�
* @note TP�Ľ��ܺ��� , ���ܻ���Ĵ�С������ڽ������ݵĴ�С�������ʼ�������С��  J1939_TP_MAX_MESSAGE_LENGTH\n
����ȷ���� �������Ĵ�С������������������з���
*/
j1939_int8_t J1939_TP_RX_Message(TP_RX_MESSAGE *msg, CAN_NODE _Can_Node)
{
    j1939_uint16_t _a = 0;
    /*�ж��Ƿ��ܶ�ȡ����*/
    if(J1939_TP_Flags_t.state == J1939_TP_NULL && TP_RX_MSG.tp_rx_msg.PGN != 0)
    {
        J1939_TP_Flags_t.state = J1939_TP_OSBUSY;
    }
    else
    {
        return RC_CANNOTRECEIVE;//���ܽ��ܣ�TPЭ�����ڽ���������,��û������
    }
    
    //�ж��ǲ���Ҫ��ȡ��һ·CAN����
    if(_Can_Node != J1939_TP_Flags_t.TP_RX_CAN_NODE)
    {
        /*�ͷ�TP�ӹ�Ȩ��*/
        if(J1939_TP_Flags_t.state == J1939_TP_OSBUSY)
        {
            J1939_TP_Flags_t.state = J1939_TP_NULL;
        }
        return RC_CANNOTRECEIVE;
    }
    
    //�ж����ݻ��湻����
    if((msg->data_num) < TP_RX_MSG.tp_rx_msg.byte_count)
    {
        return RC_CANNOTRECEIVE;//���ܽ��ܣ�������̫С
    }

    /*��ȡ����*/
    for(_a = 0;_a < msg->data_num;_a++)
    {
        msg->data[_a] = TP_RX_MSG.tp_rx_msg.data[_a];
    }
    /*��ȡ���� Դ��ַ*/
    msg->SA  =  TP_RX_MSG.tp_rx_msg.SA;
    /*��ȡ���ݵĴ�С*/
    msg->byte_count  =  TP_RX_MSG.tp_rx_msg.byte_count;
    /*��ȡ����PGN*/
    msg->PGN  =  TP_RX_MSG.tp_rx_msg.PGN;
    
    /*������ȡ��������*/
    TP_RX_MSG.tp_rx_msg.byte_count= 0u;
    TP_RX_MSG.tp_rx_msg.PGN = 0;

    /*�ͷ�TP�ӹ�Ȩ��*/
    if(J1939_TP_Flags_t.state == J1939_TP_OSBUSY)
    {
        J1939_TP_Flags_t.state = J1939_TP_NULL;
    }

return RC_SUCCESS;
}
/**
* @param[in] pgn  ������Ĳ���Ⱥ
* @param[in] DA   Ŀ���ַ��DestinationAddress�� ��DA = 0xff��ʾ��ȫ������
* @param[in] _Can_Node  Ҫ��ӵ�CANӲ����ţ�Ҫѡ���ʹ�õ�CANӲ����ţ�
* @note      ���󣨴�ȫ�ַ�Χ�����ض�Ŀ�ĵصģ�����Ⱥ���������J1939-21��16-17ҳ������ȷ��˵��
*/
void J1939_Request_PGN(j1939_uint32_t pgn ,j1939_uint8_t DA, CAN_NODE  _Can_Node)
{
    J1939_MESSAGE _msg;
    
    _msg.Mxe.DataPage                = 0;
    _msg.Mxe.Priority                = J1939_REQUEST_PRIORITY;
    _msg.Mxe.DestinationAddress      = DA;
    _msg.Mxe.DataLength              = 3;
    _msg.Mxe.PDUFormat               = J1939_PF_REQUEST;
    _msg.Mxe.Data[0]        		 = (j1939_uint8_t)(pgn & 0x000000FF);
    _msg.Mxe.Data[1]        		 = (j1939_uint8_t)((pgn & 0x0000FF00) >> 8);
    _msg.Mxe.Data[2]				 = (j1939_uint8_t)((pgn & 0x00FF0000) >> 16);
    
    while (J1939_EnqueueMessage( &_msg, _Can_Node) != RC_SUCCESS);
}
/**
* @param[in]  data	      ��Ҫ�������ݵĻ���
* @param[in]  dataLenght  �������ݵĻ����С
* @param[in]  PGN         ��Ҫ�������ݵ�PGN(����Ⱥ���)
* @param[in]  void (*dataUPFun)()  ���ڸ��»���data �ĺ�����ַָ��
* @param[in]  _Can_Node      Ҫ��ӵ�CANӲ����ţ�Ҫѡ���ʹ�õ�CANӲ����ţ�
* @note ����һ��PGN �� ���� ��Ӧ�� ��Ӧ\n ����յ��������������� REQUEST_LIST.dataUPFun(),�ڽ�����REQUEST_LIST.data���ͳ�ȥ
* @warning  ������ֻ�ܱ����е��ã������̣߳����е������ں�����ӻ������
*/
void J1939_Create_Response(j1939_uint8_t data[],j1939_uint16_t dataLenght,j1939_uint32_t PGN,void (*dataUPFun)(),CAN_NODE  _Can_Node)
{
    /*���ҿ��õ�������*/
    struct Request_List * _requestList = &REQUEST_LIST;
    while(J1939_NULL != _requestList->next)
    {
        _requestList = _requestList->next;
    }
    _requestList->next = (struct Request_List *)malloc(sizeof(struct Request_List));
    _requestList = _requestList->next;
    
    /*���µ������ֵ*/
    _requestList->data = data;
    _requestList->lenght = dataLenght;
    _requestList->PGN = PGN;
    _requestList->update = dataUPFun;
    _requestList->Can_Node = _Can_Node;
    _requestList->next = J1939_NULL;

}
/**
* @note ���յ�һ��PGN����������REQUEST_LIST������Ӧ��PGN������Զ�����REQUEST_LIST�е�PGN��\n
���û����ᷢ��һ��NACK; ����������Ӧ�߼����ο�J1939-21 17ҳ��4
*/
void J1939_Response(const j1939_uint32_t PGN)
{
    J1939_MESSAGE _msg;
    
    /*���ҿ��õ�������*/
    struct Request_List * _requestList = &REQUEST_LIST;
    while((PGN != _requestList->PGN) || (Can_Node != _requestList->Can_Node))
    {
        if(_requestList->next == J1939_NULL)
        {
            /*ԭ�ĵ��涨 ȫ�����󲻱�֧��ʱ������Ӧ NACK*/
            if(OneMessage.Mxe.PDUSpecific == J1939_GLOBAL_ADDRESS)
            {
                return;
            }
            if((PGN & 0xFF00) >= 0xF000)
            {
                return;
            }
    
            /*û����Ӧ��PGN��Ӧ�������������߷���һ��NACK*/
            _msg.Mxe.Priority            = J1939_ACK_PRIORITY;
            _msg.Mxe.DataPage            = 0;
            _msg.Mxe.PDUFormat           = J1939_PF_ACKNOWLEDGMENT;
            _msg.Mxe.DestinationAddress  = OneMessage.Mxe.SourceAddress;
            _msg.Mxe.DataLength          = 8;
            _msg.Mxe.SourceAddress		 = J1939_Address;
            _msg.Mxe.Data[0]         = J1939_NACK_CONTROL_BYTE;
            _msg.Mxe.Data[1]         = 0xFF;
            _msg.Mxe.Data[2]         = 0xFF;
            _msg.Mxe.Data[3]         = 0xFF;
            _msg.Mxe.Data[4]         = 0xFF;
            _msg.Mxe.Data[5]         = (PGN & 0x0000FF);
            _msg.Mxe.Data[6]         = ((PGN >> 8) & 0x0000FF);
            _msg.Mxe.Data[7]         = ((PGN >> 16) & 0x0000FF);
            
            SendOneMessage( (J1939_MESSAGE *) &_msg);
            return ;
        }
        else
        {
            _requestList = _requestList->next;
        }
    }

    /*����dataUPFun������������Ҫ���ڲ���Ⱥ���ݸ���*/
    if(J1939_NULL != _requestList->update)
    {
        _requestList->update();
    }

/*��Ӧ����*/
    if(_requestList->lenght > 8)
    {
    /*��һ��ȷ����Ӧ��֡(�ǹ㲥��֡)*/
        if(RC_SUCCESS != J1939_TP_TX_Message(_requestList->PGN,OneMessage.Mxe.SourceAddress,_requestList->data,_requestList->lenght,Can_Node))
        {
            /*ԭ�ĵ��涨 ȫ�����󲻱�֧��ʱ������Ӧ NACK*/
            if(OneMessage.Mxe.PDUSpecific == J1939_GLOBAL_ADDRESS)
            {
                return;
            }

            /*�����֡���Ͳ��ɹ�*/
            _msg.Mxe.Priority            = J1939_ACK_PRIORITY;
            _msg.Mxe.DataPage            = 0;
            _msg.Mxe.PDUFormat           = J1939_PF_ACKNOWLEDGMENT;
            _msg.Mxe.DestinationAddress  = OneMessage.Mxe.SourceAddress;
            _msg.Mxe.DataLength          = 8;
            _msg.Mxe.SourceAddress		 = J1939_Address;
            _msg.Mxe.Data[0]         = J1939_ACCESS_DENIED_CONTROL_BYTE;
            _msg.Mxe.Data[1]         = 0xFF;
            _msg.Mxe.Data[2]         = 0xFF;
            _msg.Mxe.Data[3]         = 0xFF;
            _msg.Mxe.Data[4]         = 0xFF;
            _msg.Mxe.Data[5]         = (PGN & 0x0000FF);
            _msg.Mxe.Data[6]         = ((PGN >> 8) & 0x0000FF);
            _msg.Mxe.Data[7]         = ((PGN >> 16) & 0x0000FF);
            
            SendOneMessage( (J1939_MESSAGE *) &_msg);
            return ;
        }

        /*��һ��ȷ����Ӧ*/
        _msg.Mxe.Priority            = J1939_ACK_PRIORITY;
        _msg.Mxe.DataPage            = 0;
        _msg.Mxe.PDUFormat           = J1939_PF_ACKNOWLEDGMENT;
        /*ԭ�ĵ��涨 ȫ��������Ӧ��ȫ��*/
        if(OneMessage.Mxe.PDUSpecific == J1939_GLOBAL_ADDRESS)
        {
            _msg.Mxe.DestinationAddress  = 0XFF;
        }
        else{
            _msg.Mxe.DestinationAddress  = OneMessage.Mxe.SourceAddress;
        }
        _msg.Mxe.DataLength          = 8;
        _msg.Mxe.SourceAddress		 = J1939_Address;
        _msg.Mxe.Data[0]         = J1939_ACK_CONTROL_BYTE;
        _msg.Mxe.Data[1]         = 0xFF;
        _msg.Mxe.Data[2]         = 0xFF;
        _msg.Mxe.Data[3]         = 0xFF;
        _msg.Mxe.Data[4]         = 0xFF;
        _msg.Mxe.Data[5]         = (PGN & 0x0000FF);
        _msg.Mxe.Data[6]         = ((PGN >> 8) & 0x0000FF);
        _msg.Mxe.Data[7]         = ((PGN >> 16) & 0x0000FF);
        SendOneMessage( (J1939_MESSAGE *) &_msg);
    }
    else
    {
    
        /*��һ��ȷ����Ӧ*/
        _msg.Mxe.Priority            = J1939_ACK_PRIORITY;
        _msg.Mxe.DataPage            = 0;
        _msg.Mxe.PDUFormat           = J1939_PF_ACKNOWLEDGMENT;
        _msg.Mxe.SourceAddress		 = J1939_Address;
        /*ԭ�ĵ��涨 ȫ��������Ӧ��ȫ��*/
        if((OneMessage.Mxe.PDUSpecific == J1939_GLOBAL_ADDRESS) || ((PGN & 0xFF00) >= 0xF000))
        {
            _msg.Mxe.DestinationAddress  = 0XFF;
        }
        else
        {
            _msg.Mxe.DestinationAddress  = OneMessage.Mxe.SourceAddress;
        }
        _msg.Mxe.DataLength          = 8;
        _msg.Mxe.SourceAddress		 = J1939_Address;
        _msg.Mxe.Data[0]         = J1939_ACK_CONTROL_BYTE;
        _msg.Mxe.Data[1]         = 0xFF;
        _msg.Mxe.Data[2]         = 0xFF;
        _msg.Mxe.Data[3]         = 0xFF;
        _msg.Mxe.Data[4]         = 0xFF;
        _msg.Mxe.Data[5]         = (PGN & 0x0000FF);
        _msg.Mxe.Data[6]         = ((PGN >> 8) & 0x0000FF);
        _msg.Mxe.Data[7]         = ((PGN >> 16) & 0x0000FF);
        SendOneMessage( (J1939_MESSAGE *) &_msg);
        
        /*��һ��ȷ����Ӧ��֡*/
        _msg.Mxe.Priority            = J1939_ACK_PRIORITY;
        _msg.Mxe.DataPage            = (((_requestList->PGN)>>16) & 0x1);
        _msg.Mxe.PDUFormat           = ((_requestList->PGN)>>8) & 0xFF;
        _msg.Mxe.SourceAddress		 = J1939_Address;
        /*ԭ�ĵ��涨 ȫ��������Ӧ��ȫ��*/
        if(OneMessage.Mxe.PDUSpecific == J1939_GLOBAL_ADDRESS)
        {
            _msg.Mxe.DestinationAddress  = 0XFF;
        }
        else
        {
            _msg.Mxe.DestinationAddress  = OneMessage.Mxe.SourceAddress;
        }
        _msg.Mxe.DataLength          = _requestList->lenght;
        {
            j1939_uint8_t _i = 0;
            for(_i = 0;_i < (_requestList->lenght);_i++)
            {
            _msg.Mxe.Data[_i] = _requestList->data[_i];
            }
            for(;_i<8;_i++)
            {
            _msg.Mxe.Data[_i] = 0xFF;
            }
        }
        SendOneMessage( (J1939_MESSAGE *) &_msg);
    }
}
#endif
