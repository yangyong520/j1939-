#encoding='utf-8'
import os
import pandas as pd



f=open("spn.txt",encoding="utf-8")
cur_dir = os.path.dirname(__file__)
pd.set_option('max_colwidth', 200)
pd.set_option('display.max_columns', None)
pd.set_option('display.max_rows', None)
res = pd.DataFrame(columns=("Msg_FullName","Msg_ShortName","Transmission Repetition Rate","Data Length","Default Priority","Parameter Group Number","Start Position","Length","Parameter Name","SPN","Resolution","Data Range","Operational Range","Type","alue_Table"))

i=5
SPN=''
Value_Table=''
Resolution=''
Data_Range = ''
Operational_Range = ''
Type=''
Value_Table=''
flag=False

def clear():
    SPN = ''
    Value_Table = ''
    Resolution = ''
    Data_Range = ''
    Operational_Range = ''
    Type = ''
    Value_Table=''


for line in f.readlines():

    line_temp=line.split(" ")
    line_temp1=line.split("  ")
    if 'SPN' in line_temp:
        if line_temp[0] =='SPN':
            if line_temp[1].isdigit():
                # Value_Table=''
                # print(line_temp)
                # print(line_temp1)
                print('spn:', SPN)
                print('Resolution: ', Resolution)
                print('Data Range:', Data_Range)
                print('Operational_Range:', Operational_Range)
                print('Type:', Type)
                print('Value_Table:\n',Value_Table)
                print('-------------------------------------------')
                clear()
                Value_Table = ''
                SPN=line_temp[1]
                # print('spn:',SPN)

    if 'SPN' in line_temp:
        if line_temp[1] == 'SPN':
            if line_temp[2].isdigit():
                if line_temp[0]=='(R)':
                    print('spn:', SPN)
                    print('Resolution: ', Resolution)
                    print('Data Range:', Data_Range)
                    print('Operational_Range:', Operational_Range)
                    print('Type:', Type)
                    print('Value_Table:\n',Value_Table)
                    print('-------------------------------------------')
                    clear()
                    Value_Table = ''
                    SPN = line_temp[2]
                    # print('spn:', SPN)

    if 'Resolution:' in line:
        if line_temp[1]=='':
            Resolution=line_temp1[1]
            # print('Resolution: ',Resolution)
    if 'Data Range:' in line:
        Data_Range=line_temp1[1]
        Operational_Range=line_temp1[-1]
        flag=True
        # print('Data Range:',Data_Range)
        # print(Operational_Range)
    if flag :
        if 'Data Range:' not in line:
            if 'Type:' not in line:
                # pass
                Operational_Range=Operational_Range+line
                # print(Operational_Range)
    if 'Type: ' in line:
        Type=line_temp[2]
        flag=False
        # print('Type:',Type)

    if line_temp[0].isdigit() or '0' in line_temp[0]:
        # print(line_temp1)
        Value_Table=Value_Table+line
        # print(Value_Table)




f.close()

