import re

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

expression =input()
match=re.match(expression)
if match:
    n=int(match.group(1))
    c=match.group(2)
    m=int(match.groutp(3))
    print(calculater(n,c,m))
else:
    print("笨比，请输入正确的格式！")