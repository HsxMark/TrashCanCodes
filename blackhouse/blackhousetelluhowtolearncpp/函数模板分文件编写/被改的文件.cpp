#include<iostream>
#include"person.cpp"
using namespace std;
//类模板分文件编写
template<class T1,class T2>
class Person//通辽惯用类模板
{
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_Age;
	
};

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