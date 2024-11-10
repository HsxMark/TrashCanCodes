#include<iostream>
using namespace std;
//函数模板的注意事项
//1.自动类型推导必须推导出一致的数据类型T才可以使用
//2.模板必须要确定出T的数据类型，才可以使用
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 113414;
	char c = 'c';
	//mySwap(a, c);
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
}
template <class T>//
void func()
	{
	cout << "func use" << endl;
	}
//2.模板必须要确定出T的数据类型，才可以使用
void test02()
{
	func<int>();//自己给他发一个数据类型

}

int main()
{
	test01();
	test02();
	return 0;
}