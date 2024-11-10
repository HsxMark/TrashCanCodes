def print_triangle(n):
    for i in range(n, 0, -1):
        print(chr(64 + i) * i)

n = int(input("请输入三角形的大小（1-10）："))

if 1 <= n <= 10:
    print_triangle(n) 
else:
    print("输入错误，请输入一个介于1到10之间的数字。")