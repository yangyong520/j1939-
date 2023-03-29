# -*- remarking: utf-8 -*-
import pandas as pd
import re
# 创建每一个存储PGN传感器数据的结构体
def check_i(inpath,outpath):
    data_frames1 = pd.read_excel(open(inpath, 'rb'))
    length = data_frames1.shape[0]
    # 获取每一个列的名称并为其创建一个data_frames
    Msg_FullName = data_frames1["Msg_FullName"]
    Msg_ShortName = data_frames1["Msg_ShortName"]
    Transmission_Repetition_Rate = data_frames1["Transmission Repetition Rate"]
    Data_Length = data_frames1["Data Length"]
    Default_Priority = data_frames1["Default Priority"]
    Parameter_Group_Number = data_frames1["Parameter Group Number"]
    Start_Position = data_frames1["Start Position"]
    Length = data_frames1["Length"]
    Parameter_Name = data_frames1["Parameter Name"]
    SPN = data_frames1["SPN"]
    Resolution = data_frames1["Resolution"]
    Data_Range = data_frames1["Data Range"]
    Operational_Range = data_frames1["Operational Range"]
    Type = data_frames1["Type"]
    Value_Table = data_frames1["Value_Table"]

    file = open(outpath, 'w',encoding='utf-8')
    SP=0
    SP0=''
    spbyte=0
    MSN=''

    for i in range(1,length-1):
        # 将Parameter_Name不能出现的c语言命名字符串都修改为“_"
        PN=str(Parameter_Name[i]).strip().replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')
        # 当Msg_ShortName有内容时说明是在每个pgn的开头
        if str(Msg_ShortName[i]) !='nan':
            if i !=0:
                wtmsg='} get'+MSN+'_t ;\n'
                file.write(wtmsg)
                # 将当前Parameter_Name不能出现的c语言命名字符串都修改为“_"
                MSN1=str(Msg_ShortName[i].strip()).replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')
            wtmsg='typedef struct get'+MSN1+' {\n'
            file.write(wtmsg)
            # 记录Parameter_Name并将不能出现的c语言命名字符串都修改为“_"
            MSN=str(Msg_ShortName[i]).strip().replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_')\
                .replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')
        if "1 byte" in Length[i]:#大小为1 byte时为其创建存储空间
            wtmsg = "    uint8_t " + PN + ";\n"
            file.write(wtmsg)
        if "2 bytes" in Length[i]:#大小为2 byte时为其创建存储空间
            wtmsg = "    uint16_t " + PN + ";\n"
            file.write(wtmsg)
        if "3 bytes" in Length[i] or "4 bytes" in Length[i]:#大小为3、4 byte时为其创建存储空间
            wtmsg = "    uint32_t " + PN + ";\n"
            file.write(wtmsg)
        if "5 bytes" in Length[i] or "6 bytes" in Length[i] or "7 bytes" in Length[i] or "8 bytes" in Length[i]:#大小为5-8 byte时为其创建存储空间
            wtmsg = "    uint64_t " + PN + ";\n"
            file.write(wtmsg)



        if "." in str(Start_Position[i]) :#当存储大小不满八位时为其创建存储位域

            #判断struct...{是否要写入
            if (str(Msg_ShortName[i]) !='nan'):
                #位域是连续部分情况
                if (str(Msg_ShortName[i+1]) =='nan') and "." in str(Start_Position[i+1])and int(str(Start_Position[i+1])[0])==int(str(Start_Position[i])[0]) :
                    wtmsg = '    struct ' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip()+ ' {\n'
                    file.write(wtmsg)
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                #位域只有一个的情况
                else:
                    wtmsg = '    struct ' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ' {\n'
                    file.write(wtmsg)
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    }' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    struct ' + str(MSN) + '_byte'+str(Start_Position[i])[0].strip()+' bt' + str(Start_Position[i])[0].strip() + ' ;\n'
                    file.write(wtmsg)
                continue
                #写入最后一个pgn结束部分
            elif str(Start_Position[i + 1])=='nan':
                wtmsg = '    }' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ';\n'
                file.write(wtmsg)
                wtmsg = '    struct ' + str(MSN) + '_byte'+str(Start_Position[i])[0].strip()+' bt' + str(Start_Position[i])[0].strip() + ' ;\n'
                file.write(wtmsg)
                wtmsg='} get'+MSN+'_t ;\n'
                file.write(wtmsg)
            elif "." not in str(Start_Position[i - 1]) :
                # 位域”}“及其后面部分的写入
                if "."  in str(Start_Position[i + 1])and int(str(Start_Position[i+1])[0])==int(str(Start_Position[i])[0]) :# 前面部分都是位域的位域”{“及其后面部分的写入
                    wtmsg = '    struct ' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ' {\n'
                    file.write(wtmsg)
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                else:
                    wtmsg = '    struct ' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ' {\n'
                    file.write(wtmsg)
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    }' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    struct ' + str(MSN) + '_byte'+str(Start_Position[i])[0].strip()+' bt' + str(Start_Position[i])[0].strip() + ' ;\n'
                    file.write(wtmsg)
                continue
            elif "."  in str(Start_Position[i - 1]) and int(str(Start_Position[i-1])[0])!=int(str(Start_Position[i])[0]):
                if  "."  in str(Start_Position[i + 1])and int(str(Start_Position[i+1])[0])==int(str(Start_Position[i])[0]) :
                    wtmsg = '    struct ' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ' {\n'
                    file.write(wtmsg)
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                else:
                    wtmsg = '    struct ' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ' {\n'
                    file.write(wtmsg)
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    }' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    struct ' + str(MSN) + '_byte'+str(Start_Position[i])[0].strip()+' bt' + str(Start_Position[i])[0].strip() + ' ;\n'
                    file.write(wtmsg)
                continue

            elif int(str(Start_Position[i])[0]) == int(str(Start_Position[i-1])[0]) :
                if int(str(Start_Position[i])[0]) != int(str(Start_Position[i+1])[0]) \
                        or "." not in str(Start_Position[i + 1]) \
                        or (str(Msg_ShortName[i+1]) != 'nan'):
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    }' + str(MSN) + '_byte' + str(Start_Position[i])[0].strip() + ';\n'
                    file.write(wtmsg)
                    wtmsg = '    struct ' + str(MSN) + '_byte'+str(Start_Position[i])[0].strip()+' bt' + str(Start_Position[i])[0].strip() + ' ;\n'
                    file.write(wtmsg)

                else:
                    wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                    file.write(wtmsg)
                continue
            else:
                wtmsg = '        uint8_t ' + PN + ':' + Length[i][0].strip() + ';\n'
                file.write(wtmsg)
    file.close()
def check():#再次检查处理
    f=open("msg1.h",'w',encoding='utf-8')
    i = 1
    with open('msg.h', 'r',encoding='utf-8') as file:
        # 循环遍历文件的每一行
        prev_prev_line = ""
        prev_line = ""
        a = 1
        b=1
        for line in file:
            if b ==1 and "uint8_t Service_Component_Identification;"in line:
                b==0
                continue
            if a==1:
                a=0
                continue
            if line == prev_line:
                continue
            else:
                prev_line = line
            f.write(line)

def configc(intpath,outpath):
    data_frames1 = pd.read_excel(open(inpath, 'rb'))
    length = data_frames1.shape[0]

    Msg_FullName = data_frames1["Msg_FullName"]

    Msg_ShortName = data_frames1["Msg_ShortName"]
    Transmission_Repetition_Rate = data_frames1["Transmission Repetition Rate"]
    Data_Length = data_frames1["Data Length"]
    Default_Priority = data_frames1["Default Priority"]
    Parameter_Group_Number = data_frames1["Parameter Group Number"]
    Start_Position = data_frames1["Start Position"]
    Length = data_frames1["Length"]
    Parameter_Name = data_frames1["Parameter Name"]
    SPN = data_frames1["SPN"]
    Resolution = data_frames1["Resolution"]
    Data_Range = data_frames1["Data Range"]
    Operational_Range = data_frames1["Operational Range"]
    Type = data_frames1["Type"]
    Value_Table = data_frames1["Value_Table"]

    file = open(outpath, 'w',encoding='utf-8' )
    f=open('函数声明.h', 'w',encoding='utf-8')
    f1 = open('testallmsg.h', 'w',encoding='utf-8')
    wtmsg=' '*100
    for i in range(0, length - 1):
        PN=str(Parameter_Name[i]).strip().replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')

        my_string = str(Resolution[i])
        #
        # # 使用正则表达式匹配浮点数
        float_pattern = r"[-+]?\d*\.\d+|[-+]?\d+"
        result1 = re.findall(float_pattern, my_string)
        # RL = str(result1[0])
        # offset = str(result1[-1])
        # if int(SPN[i])==84:
        # print(SPN[i], RL, offset)
        if len(result1) > 1:
            RL = str(result1[0])
            offset = str(result1[-1])
        elif "ASCII" in str(Resolution[i]):

            pass
        elif "Binary" in str(Resolution[i]):
            pass
        else:
            pass
        #     RL = str(result1[0])
        #     offset = str(result1[-1])
        my_string = str(Data_Range[i])
        float_pattern = r"[-+]?\d*\.\d+|[-+]?\d+"
        result2 = re.findall(float_pattern, my_string)

        s = str(Parameter_Group_Number[i]).strip()
        match = re.search(r'\((.*?)\)', s)
        if match:
            content = match.group(1)
        if str(Msg_ShortName[i]) != 'nan':
            if i != 0:
                wtmsg = '}\n'
                file.write(wtmsg)
            MSN=str(Msg_ShortName[i].strip()).replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')
            wtmsg = 'void ' + MSN +' ( J1939_MESSAGE_T *J1939_MESSAGE,get'+MSN+'_t *'+MSN+')\n{\n'
            file.write(wtmsg)
            wtmsg = 'void ' +MSN + ' ( J1939_MESSAGE_T *J1939_MESSAGE,get' + MSN + '_t *' + MSN + ');\n'
            f.write(wtmsg)
            wtmsg = '       get' + MSN + '_t '+ MSN.lower() + ';\n\n'+'       config_'+MSN+'(&'+MSN.lower()+');\n       '+MSN+'(&msg,&'+MSN.lower() +');\n'+'       send_massage(&msg);\n'+'       Delay(500000);\n\n'
            f1.write(wtmsg)
            s=str(Parameter_Group_Number[i]).strip()
            match = re.search(r'\((.*?)\)', s)
            if match:
                content = match.group(1)
                wtmsg='    J1939_MESSAGE->PGN = '+content+' ;\n'
                file.write(wtmsg)
            if str(Data_Length[i]).strip().isdigit():
                wtmsg="    J1939_MESSAGE->byte_count = "+str(Data_Length[i]).strip()+';\n'
                file.write(wtmsg)

            MSN =str(Msg_ShortName[i].strip()).replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')
        if "1 byte" in str(Length[i]):
            wtmsg = "    J1939_MESSAGE->data["+str(int(str(Start_Position[i]).strip()[0])-1)+"] = "+MSN+"->"+PN+";\n"
            file.write(wtmsg)
        if "2 bytes" in str(Length[i]):
            if len(str(Start_Position[i]))>6 :
                id = str(int(str(Start_Position[i]).strip()[0] + str(Start_Position[i]).strip()[1] +
                             str(Start_Position[i]).strip()[2]) - 1)
                wtmsg = "    J1939_MESSAGE->data[" +id + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                id = str(int(str(Start_Position[i]).strip()[0] + str(Start_Position[i]).strip()[1] +
                             str(Start_Position[i]).strip()[2]))
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = " + "(uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
                continue
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" +str(int(str(Start_Position[i]).strip()[0])-1)+ "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)

                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = " + "(uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)

        if "3 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" +str(int(str(Start_Position[i]).strip()[0])-1)+ "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 1
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
        if "4 bytes" in str(Length[i]):
            if str(Start_Position[i][0].strip()).isdigit() and str(Start_Position[i][1].strip()).isdigit():
                id=str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1])-1)
                wtmsg = "    J1939_MESSAGE->data[" +id + "] = (uint8_t)(" + MSN + "->" + PN + ">>24);\n"
                file.write(wtmsg)
                id = str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1]))
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)

                id = str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1])+1)
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)

                id = str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1])+2)
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
                continue
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" + str(int(str(Start_Position[i]).strip()[0])-1)+ "] = (uint8_t)(" + MSN + "->" + PN + ">>24);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) +1
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 2
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)

        if "5 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" +str(int(str(Start_Position[i]).strip()[0])-1) + "] = (uint8_t)(" + MSN + "->" + PN + ">>40);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>32);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 1
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>24);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 2
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 3
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
        if "6 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "] = (uint8_t)(" + MSN + "->" + PN + ">>40);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>32);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 1
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>24);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 2
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 3
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
        if "7 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "] = (uint8_t)(" + MSN + "->" + PN + ">>48);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>40);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 1
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>32);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 2
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>24);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 3
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 4
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 5
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
        if "8 bytes" in str(Length[i]):
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    J1939_MESSAGE->data[" + str(int(str(Start_Position[i]).strip()[0])-1)+ "] = (uint8_t)(" + MSN + "->" + PN + ">>56);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip())
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>48);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 1
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>40);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 2
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>32);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 3
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>24);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 4
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>16);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 5
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ">>8);\n"
                file.write(wtmsg)
                id = int(Start_Position[i][0].strip()) + 6
                wtmsg = "    J1939_MESSAGE->data[" + str(id) + "] = (uint8_t)(" + MSN + "->" + PN + ");\n"
                file.write(wtmsg)
        if "." in str(Start_Position[i]):
            if i == 0:
                pass
            else:
                if str(Length[i])[0].isdigit() and str(Start_Position[i])[2].isdigit()\
                        and int(Length[i][0])<=8 and str(Length[i][1])==" " \
                        and (9-int(str(Start_Position[i])[2])>=int(Length[i][0])):
                    wtmsg = "    J1939_MESSAGE->data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "] |= (uint8_t)(" +\
                            MSN + "->" + "bt" + str(Start_Position[i])[0].strip() + "." + PN + \
                            ")<<"+str(int(Start_Position[i][2])-1)+";\n"
                    file.write(wtmsg)
                if str(Length[i][0]).isdigit() and str(str(Start_Position[i])[2]).isdigit()\
                        and int(Length[i][0])<=8 and str(Length[i][1])==" " \
                        and (9-int(str(Start_Position[i])[2])<int(Length[i][0]))\
                        and (17-int(str(Start_Position[i])[2])>=int(Length[i][0])):
                    wtmsg = "    J1939_MESSAGE->data[" +str(int(str(Start_Position[i]).strip()[0])-1) + "] |= (uint8_t)(" +\
                            MSN + "->" + "bt" + Start_Position[i][0].strip() + "." + PN + \
                            ")<<"+str(int(Start_Position[i][2])-1)+";\n"
                    file.write(wtmsg)
                    wtmsg = "    J1939_MESSAGE->data[" +str(int(str(Start_Position[i]).strip()[0])-1) + "] |=(uint16_t)(" + \
                            MSN + "->" + "bt" + Start_Position[i][0].strip() + "." + PN + \
                            ")>>" + "8" + ";\n"
                    file.write(wtmsg)
    file.close()

def config(intpath,outpath):
    data_frames1 = pd.read_excel(open(inpath, 'rb'))
    length = data_frames1.shape[0]
    Msg_FullName = data_frames1["Msg_FullName"]

    Msg_ShortName = data_frames1["Msg_ShortName"]
    Transmission_Repetition_Rate = data_frames1["Transmission Repetition Rate"]
    Data_Length = data_frames1["Data Length"]
    Default_Priority = data_frames1["Default Priority"]
    Parameter_Group_Number = data_frames1["Parameter Group Number"]
    Start_Position = data_frames1["Start Position"]
    Length = data_frames1["Length"]
    Parameter_Name = data_frames1["Parameter Name"]
    SPN = data_frames1["SPN"]
    Resolution = data_frames1["Resolution"]
    Data_Range = data_frames1["Data Range"]
    Operational_Range = data_frames1["Operational Range"]
    Type = data_frames1["Type"]
    Value_Table = data_frames1["Value_Table"]
    file = open(outpath, 'w',encoding='utf-8' )
    file1 = open("cfg.h", 'w',encoding='utf-8' )
    wtmsg = ' ' * 100
    for i in range(0, length -2):
        PN=str(Parameter_Name[i]).strip().replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')

        my_string = str(Resolution[i])
        #
        # # 使用正则表达式匹配浮点数
        float_pattern = r"[-+]?\d*\.\d+|[-+]?\d+"
        result1 = re.findall(float_pattern, my_string)
        if len(result1) >1:

            RL = result1[0]
            offset=result1[-1]
            # Resolution = result1[0]
        elif "ASCII"in str(Resolution[i]):

            pass
        elif "Binary" in str(Resolution[i]):
            pass
        else:
            pass




        my_string = str(Data_Range[i])
        float_pattern = r"[-+]?\d*\.\d+|[-+]?\d+"
        result2 = re.findall(float_pattern, my_string)


        ms = Msg_ShortName[i]
        if str(Msg_ShortName[i]) != 'nan':
            if i != 0:
                wtmsg = '}\n'
                file.write(wtmsg)
            wtmsg = 'void config_' + str(Msg_ShortName[i].strip()).replace('/', '_') + \
                    ' (get' + str(Msg_ShortName[i].strip()).replace('/', '_') + \
                    '_t *' + str(Msg_ShortName[i].strip()).replace('/', '_') + ')\n{\n'
            file.write(wtmsg)
            wtmsg = 'void config_' + str(Msg_ShortName[i].strip()).replace('/', '_') + \
                    ' (get' + str(Msg_ShortName[i].strip()).replace('/', '_') + \
                    '_t *' + str(Msg_ShortName[i].strip()).replace('/', '_') + ');\n'
            file1.write(wtmsg)
            MSN = str(Msg_ShortName[i]).strip().replace('/', '_')
        if len(result2)>1:
            low=result2[0]
            high=result2[1]

            if "byte" in Length[i]:
                wtmsg = "    " + MSN + " -> " + PN + "= Parameter_Translate(" + str(float (high ))+"*RATE" \
                        +" , "+str(float(RL))+" , "+str(float(offset))+")" + ";\n"
                file.write(wtmsg)
            if "bit" in Length[i]:
                wtmsg = "    " + MSN + " -> bt" + str(Start_Position[i])[0]+"."+PN + "= " + str(float (high ))+"*RATE"  + ";\n"
                file.write(wtmsg)

        else:
            pass
    file.close()


def Detect_received_data(intpath,outpath):
    data_frames1 = pd.read_excel(open(inpath, 'rb'))
    length = data_frames1.shape[0]

    Msg_FullName = data_frames1["Msg_FullName"]

    Msg_ShortName = data_frames1["Msg_ShortName"]
    Transmission_Repetition_Rate = data_frames1["Transmission Repetition Rate"]
    Data_Length = data_frames1["Data Length"]
    Default_Priority = data_frames1["Default Priority"]
    Parameter_Group_Number = data_frames1["Parameter Group Number"]
    Start_Position = data_frames1["Start Position"]
    Length = data_frames1["Length"]
    Parameter_Name = data_frames1["Parameter Name"]
    SPN = data_frames1["SPN"]
    Resolution = data_frames1["Resolution"]
    Data_Range = data_frames1["Data Range"]
    Operational_Range = data_frames1["Operational Range"]
    Type = data_frames1["Type"]
    Value_Table = data_frames1["Value_Table"]

    file = open(outpath, 'w',encoding='utf-8' )
    f=open('Check函数声明.h', 'w',encoding='utf-8')
    f1 = open('Checktestallmsg.h', 'w',encoding='utf-8' )
    wtmsg=' '*100
    for i in range(0, length - 1):
        PN=str(Parameter_Name[i]).strip().replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')

        ms = Msg_ShortName[i]
        # print(ms)
        my_string = str(Resolution[i])
        #
        # # 使用正则表达式匹配浮点数
        float_pattern = r"[-+]?\d*\.\d+|[-+]?\d+"
        result1 = re.findall(float_pattern, my_string)
        # RL = str(result1[0])
        # offset = str(result1[-1])
        # if int(SPN[i])==84:
        # print(SPN[i], RL, offset)
        if len(result1) > 1:
            RL = str(result1[0])
            offset = str(result1[-1])
        elif "ASCII" in str(Resolution[i]):

            pass
        elif "Binary" in str(Resolution[i]):
            pass
        else:
            pass
        #     RL = str(result1[0])
        #     offset = str(result1[-1])
        my_string = str(Data_Range[i])
        float_pattern = r"[-+]?\d*\.\d+|[-+]?\d+"
        result2 = re.findall(float_pattern, my_string)

        s = str(Parameter_Group_Number[i]).strip()
        match = re.search(r'\((.*?)\)', s)
        if match:
            content = match.group(1)
        if str(Msg_ShortName[i]) != 'nan':
            if i != 0:
                wtmsg = '}\n'
                file.write(wtmsg)
            MSN=str(Msg_ShortName[i].strip()).replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')
            wtmsg = 'void Check' + MSN +' ( J1939_MESSAGE *J1939_MESSAGE,get'+MSN+'_t *'+MSN+')\n{\n'
            file.write(wtmsg)
            wtmsg = '       uint64_t buff' +';\n'
            file.write(wtmsg)
            wtmsg = 'void Check' +MSN + ' ( J1939_MESSAGE *J1939_MESSAGE,get' + MSN + '_t *' + MSN + ');\n'
            f.write(wtmsg)
            wtmsg = '       get' + MSN + '_t '+ MSN.lower() + ';\n\n'+'       config_'+MSN+'(&'+MSN.lower()+');\n       '+MSN+'(&msg,&'+MSN.lower() +');\n'+'       send_massage(&msg);\n'+'       Delay(500000);\n\n'
            f1.write(wtmsg)

                # wtmsg='    J1939_MESSAGE->PGN = '+content+' ;\n'
                # file.write(wtmsg)

            if str(Data_Length[i]).strip().isdigit():
                # wtmsg="    J1939_MESSAGE->byte_count = "+str(Data_Length[i]).strip()+';\n'
                # file.write(wtmsg)
                pass

            MSN =str(Msg_ShortName[i].strip()).replace(' ', '_').replace('/', '_').replace('#', '').replace('-', '_').replace(',', '').replace('(','_').replace(')','_').replace('.','_').replace('\n','_').replace('%','_').replace("'",'_').replace('"','_').replace(';','_').replace('–','')

        if "1 byte" in str(Length[i]):
            wtmsg = "    "+MSN+"->"+PN+" = Parameter_Translate(J1939_MESSAGE->Mxe.Data["+str(int(str(Start_Position[i]).strip()[0])-1)+"],"+RL+","+offset+") "+";\n"
            file.write(wtmsg)
        if "2 bytes" in str(Length[i]):
            if len(str(Start_Position[i]))>6 :
                id = str(int(str(Start_Position[i]).strip()[0] + str(Start_Position[i]).strip()[1] +
                             str(Start_Position[i]).strip()[2]) - 1)
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<24;\n"

                file.write(wtmsg)
                id = str(int(str(Start_Position[i]).strip()[0] + str(Start_Position[i]).strip()[1] +
                             str(Start_Position[i]).strip()[2]))
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)

                id = str(int(str(Start_Position[i]).strip()[0] + str(Start_Position[i]).strip()[1] +
                             str(Start_Position[i]).strip()[2]) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)

                id = str(int(str(Start_Position[i]).strip()[0] + str(Start_Position[i]).strip()[1] +
                             str(Start_Position[i]).strip()[2]) + 2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff ," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)
                continue
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "])<<8;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff" + " |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff ," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)

        if "3 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "])<<16;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff ," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)

        if "4 bytes" in str(Length[i]):

            if str(Start_Position[i][0].strip()).isdigit() and str(Start_Position[i][1].strip()).isdigit():
                id=str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1])-1)
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<24;\n"
                file.write(wtmsg)
                id = str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1]))
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)

                id = str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1])+1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)

                id = str(int(str(Start_Position[i]).strip()[0]+str(Start_Position[i]).strip()[1])+2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff ," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)
                continue

            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "])<<24;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff ," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)


        if "5 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "])<<32;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<24;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 3)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)
        if "6 bytes" in str(Length[i]):
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" +str(int(str(Start_Position[i]).strip()[0])-1) + "])<<40;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<32;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<24;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 3)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 4)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)
        if "7 bytes" in str(Length[i]) :
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "])<<48;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<40;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<32;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<24;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 3)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 4)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 5)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)
        if "8 bytes" in str(Length[i]):
            if str(Start_Position[i][0].strip()).isdigit():
                wtmsg = "    buff=(uint64_t)(J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "])<<56;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) )
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<48;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 1)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<40;\n"
                file.write(wtmsg)

                id = str(int(Start_Position[i][0].strip()) + 2)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<32;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 3)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<24;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 4)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<16;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 5)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "])<<8;\n"
                file.write(wtmsg)
                id = str(int(Start_Position[i][0].strip()) + 6)
                wtmsg = "    buff |= (uint64_t)(J1939_MESSAGE->Mxe.Data[" + id + "]);\n"
                file.write(wtmsg)
                wtmsg = "    " + MSN + "->" + PN + " = Parameter_Translate(buff," + RL + "," + offset + ") " + ";\n"
                file.write(wtmsg)
        if "." in str(Start_Position[i]):
            if i == 0:
                pass
            else:
                if str(Length[i])[0].isdigit() and str(Start_Position[i])[2].isdigit()\
                        and int(Length[i][0])<=8 and str(Length[i][1])==" " \
                        and (9-int(str(Start_Position[i])[2])>=int(Length[i][0])):
                    wtmsg = "    "+MSN + "->" + "bt" + str(Start_Position[i])[0].strip() + "." + PN+" = "+"J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1)+"]>>"+str(int(Start_Position[i][2])-1) + ";\n"
                    file.write(wtmsg)
                if str(Length[i][0]).isdigit() and str(str(Start_Position[i])[2]).isdigit()\
                        and int(Length[i][0])<=8 and str(Length[i][1])==" " \
                        and (9-int(str(Start_Position[i])[2])<int(Length[i][0]))\
                        and (17-int(str(Start_Position[i])[2])>=int(Length[i][0])):
                    wtmsg ="    uint16_t buff16;\n"
                    file.write(wtmsg)
                    wtmsg = "    buff16 =J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i]).strip()[0])-1) + "]>>" + str(int(Start_Position[i][2]) - 1) + ";\n"
                    file.write(wtmsg)

                    wtmsg = "    buff16 |=J1939_MESSAGE->Mxe.Data[" + str(int(str(Start_Position[i])[0])).strip() + "]<<8" + ";\n"
                    file.write(wtmsg)
                    wtmsg = "    " + MSN + "->" + "bt" + str(Start_Position[i])[0].strip() + "." + PN + " = buff16 " + ";\n"
                    file.write(wtmsg)
                    RL=0
    wtmsg = "}"
    file.write(wtmsg)

    file.close()

if __name__=="__main__":
       inpath = '表格整理.xlsx'#要检查的文件
       outpathh='msg.h'
       outpathc = 'msg.c'
       outpathcfgc = 'cfg.c'
       Dd='Detect_received_data.c'
       check_i(inpath,outpathh)
       #
       check()
       configc(inpath,outpathc)
       config(inpath, outpathcfgc)
       Detect_received_data(inpath, Dd)