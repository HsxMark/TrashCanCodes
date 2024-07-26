#include <iostream>
using namespace std;
//类模板与函数模板的区别
template<class NameType,class AgeType=int>//模板参数列表，现在添加默认=
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;

	}
	void showPerson()
	{
		cout << "name:" << this->m_Name << "age" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//类模板没有自动类型推导使用方式
void test01()
{
	//Person p("monkeyking");无法自动推导
	Person<string, int>p("monkeyking", 1145);//correct only 指定类型
	p.showPerson();
}
//类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string>p("bigpig", 191981);//此时这个年龄就是整形了，只有类模板才会有的
	p.showPerson();
}



int main()
{
	test01();
	test02();
	return 0;
}