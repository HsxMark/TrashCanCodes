#include<iostream>
#include<string>
using namespace std;
//字符串比较的操作
void test01()
{
	string str1 = "xello";
	string str2 = "xxello";
	if (str1.compare(str2) == 0)//比较过程：一个一个比
	{
		cout << "str1=str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1>str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1<str2" << endl;
	}
}//如果比汉字，没啥意义，.compare只是比两个字符串是不是对应的
//想到密码与数据库对比了


int main()
{
	test01();
	return 0;
}