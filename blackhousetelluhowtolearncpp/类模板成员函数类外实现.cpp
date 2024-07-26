#include<iostream>
#include<string>
using namespace std;
//类模板成员函数类外实现
template<class T1,class T2>
class Person//通辽惯用类模板
{
public:
	Person(T1 name, T2 age);
	/*{
		this->m_Age = age;
		this->m_Name = name;
	}*/
	void showPerson();
	/*{
		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	}*/
	T1 m_Name;
	T2 m_Age;
};
//但是我要类外实现，构造函数类外实现
template<class T1,class T2>//编译器不认识，所以要加temp作用域
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Age = age;
	this->m_Name = name;
}
//成员函数的类外实现showPerson
template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
}
void test01()
{
	Person<string, int>P("Mark", 19);
	P.showPerson();
}
int main(void)
{
	test01();
	return 0;
}