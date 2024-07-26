#include<iostream>	
#include<string>
//模板的局限性，提供模板的重载，可以为特定的类型提供具体化模板
using namespace std;
//对比两个数据是否相等的函数
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name=name;
		this->m_Age = age;
	}
	int m_Age;
	string m_Name;
};



template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;

	}
	else
	{
		return false;
	}
}
void test01()
{
	//对比
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "==" << endl;
	}
	else
	{
		cout << "sja" << endl;
	}
}
void test02()
{
	Person p1("tim",1145);
	Person p2("tim",1145);

	bool ret = myCompare(p1,p2);
	if (ret)
	{
		cout << "shi xiangtongd " << endl;
	}
	else
	{
		cout << "sda" << endl;
	}
	//在写代码的时候编译器不知道T是干嘛的
}
int main(void)
{
	//test01();
	test02();
	return 0;
}