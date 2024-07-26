#include<iostream>
#include<string>
using namespace std;
//类模板与继承
template<class T>
class Base
{
	T m;
};
//class Son:public Base//错误的，必须要知道父类中T的类型才能继承给子类
class Son :public Base<int>//又有新的问题，这只能是int了
{
	//闹麻了
};
void test01() 
{
	Son s1;
}
//如果想灵活指定父类中的T，子类也要变为类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
	T1 obj;
};
void test02()
{
	Son2<int, char>S2;
}
int main(void)
{
	test01();
	test02();
	return 0;
}