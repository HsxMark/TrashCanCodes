import pandas as pd

file_path = r"C:\Users\HsxMa\Downloads\27A\素材\city_GDP.csv"
df =pd.read_csv(file_path,encoding='GBK')

city_name='查询城市'
city_data = df[df['城市']==city_name]
max_gdp = city_data.loc[:,'2002':'2020'].max().max()

max_gdp_rounded = round(max_gdp,2)
print(f'{city_name} GDP最大值为{max_gdp_rounded}亿元')