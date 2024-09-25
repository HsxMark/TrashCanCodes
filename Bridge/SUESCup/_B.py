def calculater(n: int, c: str, m: int):
    if m == 0 and (c == '/' or c == '%'):
        return 114514
    elif c == '+':
        return n + m
    elif c == '-':
        return n - m
    elif c == '*':
        return n * m
    elif c == '/':
        return n // m  # 整数除法
    elif c == '%':
        return n % m  # 取模

# 外部代码，负责读取用户输入并调用函数
n, c, m = input().split()  # 输入格式为：数字 运算符 数字，例如：5 + 3
n = int(n)  # 将n转换为整数
m = int(m)  # 将m转换为整数
print(calculater(n, c, m))  # 调用函数并输出结果
