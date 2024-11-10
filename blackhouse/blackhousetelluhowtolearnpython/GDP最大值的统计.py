import pandas as pd

# 使用原始字符串来指定文件路径，避免反斜杠转义问题
file_path = r"C:\Users\HsxMa\Downloads\27A\素材\city_GDP.csv"

# 读取文件
df = pd.read_csv(file_path, encoding='GBK')

# 假设要查询的城市名称
city_name = '查询城市'

# 选择该城市的数据，并从2002到2020年获取最大GDP值
city_data = df[df['城市'] == city_name]
max_gdp = city_data.loc[:, '2002':'2020'].max().max()

# 保留两位小数
max_gdp_rounded = round(max_gdp, 2)

print(f'{city_name} 2002至2020年的最大GDP值为：{max_gdp_rounded} 亿元')
