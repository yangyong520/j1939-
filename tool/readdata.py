#encoding='utf-8'
import os
import pandas as pd

cur_dir = os.path.dirname(__file__)
pd.set_option('max_colwidth',200)
pd.set_option('display.max_columns',None)
pd.set_option('display.max_rows',None)


res = pd.DataFrame(columns=("Msg_FullName","Msg_ShortName","Transmission Repetition Rate","Data Length","Default Priority","Parameter Group Number","Start Position	Length","Parameter Name","SPN","Resolution	Data Range","Operational Range	Type","Value_Tabl"))
#添加两行数据
res.loc[1] = ["Msg_FullName","Msg_ShortName","Transmission Repetition Rate","Data Length","Default Priority","Parameter Group Number","Start Position	Length","Parameter Name","SPN","Resolution	Data Range","Operational Range	Type","Value_Tabl"]
res.loc[2] = ["Msg_FullName","Msg_ShortName","Transmission Repetition Rate","Data Length","Default Priority","Parameter Group Number","Start Position	Length","Parameter Name","SPN","Resolution	Data Range","Operational Range	Type","Value_Tabl"]
# 写入excel文件
res.to_excel(os.path.join(cur_dir, "test1.xlsx"))
#读取excel内容
df =pd.read_excel(os.path.join(cur_dir, "test1.xlsx"))
print(df.head())

