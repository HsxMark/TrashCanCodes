#include<iostream>
#include<string>
using namespace std;
//字符插入和删除
void test01()
{
	string str = "hello";
	//插入
	str.insert(1, "shabby");
	cout << "str=" << str << endl;
	//删除
	str.erase(1, 6);
	cout << str << endl;
}

int main()
{
	test01();
	return 0;
}