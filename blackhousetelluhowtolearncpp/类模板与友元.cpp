 #include<iostream>
#include<string>
using namespace std;
template<class T1,class T2>
class Person;
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)//类外实现，不用加作用域，因为这是全局函数
{
	cout << "类外实现的各种功能比如" << p.m_Name << "and" << p.m_Age << endl;
}
//类模板与友元
//通过全局函数打印Person信息
template<class T1,class T2>
class Person//通辽惯用类模板
{
	//全局函数对内实现
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "姓名：" << p.m_Name<< " 年龄：" << p.m_Age << endl;
	}
	//全局函数类外实现
	//加空模板参数列表<>
	//如果全局函数是类外实现的，需要让编译器提前知道函数的存在//
	friend void printPerson2<>(Person<T1, T2> p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	}
private:
	T1 m_Name;
	T2 m_Age;
	
};


void test01()
{
	Person<string, int>P("Marker", 19);
	P.showPerson();
}
void test02()
{
	Person<string, int>p("Hsx", 91);
	printPerson2(p);
}
int main(void)
{
	test01();
	test02();
	return 0;
}