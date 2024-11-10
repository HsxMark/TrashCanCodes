#include<iostream>
#include<string>
using namespace std;
//字符插求子串
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);//从b截取到cd
	cout << subStr << endl;
}
void test02()
{
	string email = "yuanshen@nima.com";
	//从邮件地址中获取用户名信心
	email.find("@");
	int pos = email.find("@");
	cout << pos << endl;
	string usrName = email.substr(0,pos);
	cout << "user:" << usrName << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}