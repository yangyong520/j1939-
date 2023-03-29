#encoding='utf-8'
import os
import pandas as pd

f=open("test.txt",encoding="utf-8")
cur_dir = os.path.dirname(__file__)
pd.set_option('max_colwidth', 200)
pd.set_option('display.max_columns', None)
pd.set_option('display.max_rows', None)
res = pd.DataFrame(columns=("Msg_FullName",
                            "Msg_ShortName",
                            "Transmission Repetition Rate",
                            "Data Length",
                            "Default Priority",
                            "Parameter Group Number",
                            "Start Position",
                            "Length",
                            "Parameter Name",
                            "SPN","Resolution",
                            "Data Range",
                            "Operational Range",
                            "Type","alue_Table"))

Msg_FullName=''
Msg_ShortName=''
Transmission_Repetition_Rate=''
Data_Length=''
Default_Priority=''
Parameter_Group_Number=''
Start_Position=''
Length=''
Parameter_Name=''
spn=''

flag=False
flag_lear=True
i=0

for line in f.readlines():
    line_temp=line.split(" ")
    line_temp1=line.split("  ")
    if 'PGN' in line_temp:
        if line_temp[0] =='PGN':
            if line_temp[1].isdigit():
                flag = False
                flag_lear=True
                Msg_FullName=line_temp1[1]
                Msg_ShortName=line_temp[-1]
                if Msg_ShortName=="\n":
                    Msg_ShortName=line_temp[-2]
                print("Msg_FullName:",Msg_FullName)
                print('Msg_ShortName:',Msg_ShortName)
        if line_temp[0]=="(R)" and line_temp[1]=='PGN' and line_temp[2].isdigit():
            # print(line_temp)
            flag = False
            flag_lear = True
            Msg_FullName = line_temp1[1]
            Msg_ShortName = line_temp[-1]
            if Msg_ShortName == "\n":
                Msg_ShortName = line_temp[-2]

            print("Msg_FullName :",Msg_FullName)
            print("Msg_ShortName :",Msg_ShortName)
    if 'Transmission Repetition Rate:'==line_temp1[0]:
        Transmission_Repetition_Rate=line_temp1[1]
        print('Transmission Repetition Rate:',Transmission_Repetition_Rate)
    if "Data Length:"==line_temp1[0]:
        Data_Length=line_temp1[1]
        print("Data Length:",Data_Length)
    if "Default Priority:"==line_temp1[0]:
        Default_Priority=line_temp1[1]
        print("Default Priority:",Default_Priority)
    if "Parameter Group Number:"==line_temp1[0]:
        Parameter_Group_Number=line_temp1[1]+line_temp1[2]
        print("Parameter_Group_Number:",Parameter_Group_Number)


    if "Start Position"==line_temp1[0] and "Length"==line_temp1[1]:
        flag=True
    print('flag:',flag)

    if flag :
        if 'Start Position' not in line or  '---SAE  J1939-71 - Revised MAY2012'not in line:
            print(line_temp1)
            print(line_temp)
            print('*'*100)
            print(len(line_temp1))
            if len(line_temp1)!=1:
                if line_temp[-2].isdigit():
                    Start_Position = line_temp1[0]
            else:
                Start_Position=Start_Position+' '+line
            if len(line_temp1) != 1:
                if line_temp[-2].isdigit():
                    Length = line_temp1[1]
            else:
                Length=Length+' '+line

            if len(line_temp1) != 1:
                if line_temp[-2].isdigit():
                    Parameter_Name = line_temp1[2]
            else:
                Parameter_Name=Parameter_Name+' '+line

            if len(line_temp1) != 1:
                if line_temp[-2].isdigit():
                    spn = line_temp1[-1]
            else:
                spn=spn+' '+line

            print(Start_Position,Length,Parameter_Name,spn)
        #     res.loc[i] = [Msg_FullName,
        #                   Msg_ShortName,
        #                   Transmission_Repetition_Rate,
        #                   Data_Length,Default_Priority,
        #                   Parameter_Group_Number,
        #                   Start_Position,
        #                   Length,
        #                   Parameter_Name,
        #                   spn,
        #                   "Resolution",
        #                   "Data Range",
        #                   "Operational Range",
        #                   "Type","alue_Table"]
        #     i=i+1
        #
        # # 写入excel文件
        #     res.to_excel(os.path.join(cur_dir, "test1.xlsx"))
        # if flag_lear:
        #     Msg_FullName = ''
        #     Msg_ShortName = ''
        #     Transmission_Repetition_Rate = ''
        #     Data_Length = ''
        #     Default_Priority = ''
        #     Parameter_Group_Number = ''
        #     flag_lear=False

        # 读取excel内容
        # df = pd.read_excel(os.path.join(cur_dir, "test1.xlsx"))


f.close()
