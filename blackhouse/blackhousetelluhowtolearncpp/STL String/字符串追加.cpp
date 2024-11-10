#include<iostream>
#include<string>

using namespace std;
//string字符串末尾拼接字符串
//String& operator+=(const char* str);
//String& operator+=(const char c);
//String& operator+=(const string& str);
//String& append(const char* s);
//String& append(const char* s, int n);
//String& append(const string& s);
//String& append(const string& s, int pos, int n);

void test01()
{
	string str1 = "wo";
	str1 += "不玩元神";
	cout << str1;
	string str2;
	str2 = "我也不玩明朝";
	str1 += str2;
	cout << str1<<endl;
	string str3 = "i";
	str3.append(" hate Genshin 因怕");
	cout << str3 << endl;
	str3.append("game abcde nigger", 4);//品进来前n个
	cout << str3 << endl;
}

int main()
{
	test01();
	return 0;
}