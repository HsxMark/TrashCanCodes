#include<iostream>
#include<string>
using namespace std;
//string构造函数
//String& operator=(const char* s);
//String& operator=(const string& s);
//String& operator=(char c);
//String& assign(const char* s);
//String& assign(const char* s, int n);
//String& assign(const string& s);
//String& assign(int n, char c);

void test01()
{
	string str1;
	str1 = "helloworldddddddd";
	cout << str1 << endl;
	string str2;
	str2 = str1;
	cout << str2 << endl;
	string str3;
	str3 = 'a';
	cout << str3 << endl;
	string str4;
	str4.assign("hello cpp");
	cout << str4 << endl;
	string str5;
	str5.assign("hellocpp", 4);//输出前n=4个
	cout << str5 << endl;
	string str6;
	str6.assign(str5);
	cout << str6 << endl;
	string str7;
	str7.assign(10, 'w');//10个w输出
	cout << str7 << endl;
}
int main()
{
	test01();
	return 0;
}