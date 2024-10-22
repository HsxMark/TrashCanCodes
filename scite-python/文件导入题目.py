import csv

# 定义函数来计算指定城市的最大GDP
def calculate_max_gdp(file_path, city_name):
    try:
        with open(file_path, 'r', encoding='gbk') as csvfile:
            reader = csv.reader(csvfile)
            city_index = -1  # 初始化城市索引
            
            # 查找城市对应的行
            for index, row in enumerate(reader):
                if row[0] == city_name:
                    city_index = index
                    break

            if city_index == -1:
                return "城市名称不正确，未找到该城市。"
            
            max_gdp = max(row[1:], key=lambda x: float(x))  # 计算最大GDP

            return f"{city_name}的最大GDP为：{float(max_gdp):.2f} 亿元"
    
    except FileNotFoundError:
        return "文件未找到，请检查文件路径。"
    except Exception as e:
        return f"发生错误：{e}"

# 示例使用
file_path = r"C:\Users\HsxMa\Desktop\27A\素材\city_GDP.csv"  # 替换为正确的文件路径

# 让用户输入城市名称
city_name = input("请输入城市名称：")

# 输出结果
print(calculate_max_gdp(file_path, city_name))
