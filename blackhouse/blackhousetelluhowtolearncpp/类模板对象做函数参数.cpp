#include<iostream>
#include<string>
using namespace std;
//类模板对象做函数参数
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "姓名：" << this->m_Name << " 年龄:" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};
//1.	指定传入的类型 - 直接显示对象的数据类型
void printPerson1(Person<string,int>&p)//制定了传入类型
{
	p.showPerson();
}
void test01()
{
	Person<string, int>p("齐天大圣", 1141);
	printPerson1(p);
}

//2.	参数模板化 - 将对象中的参数变为模板进行传递
template<class T1,class T2>
void PrintPerson2(Person<T1, T2>& p)//也把模板中参数模板化
{
	p.showPerson();
	cout << "T1的类型" << typeid(T1).name() << endl;
	cout << "T2的类型" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>p("猪八戒", 4090);
	PrintPerson2(p);
}//教程

//3.整个类模板化 - 将这对象类型模板化进行传递
template<class T>
void printPerson3(T& p)//也把模板中参数模板化
{
	p.showPerson();
	cout << "T的数据类型" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int>p("大唐盛世",10);
	printPerson3(p);
}


int main(void)
{
	test01();
	test02();
	test03();
	return 0;
}