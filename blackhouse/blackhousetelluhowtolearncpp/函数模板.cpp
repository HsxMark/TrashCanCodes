#include<iostream>
using namespace std;
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
template<typename T>//声明一个模板告诉编译器后面代码中紧跟着的T不要报错
//T是通用数据类型
void mySwap(T& a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//两种方式使用函数模板

	//1、自动类型推导mySwap(a, b);即可
	//2、显示指定类型
	mySwap<int>(a, b);//
	
	cout << a << endl;
	cout << b << endl;
	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << c << endl;
	cout << d << endl;
}
int main(void)
{
	test01();
	system("pause");
	return 0;
}