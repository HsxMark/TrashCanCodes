#include<iostream>
using namespace std;
//类模板中成员函数的创建时机
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 受" << endl;

	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 受" << endl;

	}
};
template<class T>
class MyClass
{
public:
	T obj;//整了个泪模板
	//接下来写类模板的成员函数
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};
void test01()
{
	MyClass<Person1>m;
	m.func1();
	//m.func2();//showperson2不是1的成员
}

int main(void)
{
	test01();
	return 0;
}