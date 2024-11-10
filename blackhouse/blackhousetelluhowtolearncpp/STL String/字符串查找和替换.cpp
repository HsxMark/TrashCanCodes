#include<iostream>
#include<string>

using namespace std;
//string查找和替换


void test01()
{
	string str1 = "abcdefg";
	int pos= str1.find("df");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{ 
		cout << "找到了字符串 " << pos << endl; 
	}
	//find和rfind的区别
	//rfind从右往左查找,find从左往右查
	pos= str1.rfind("de");
	cout << "pos=" << pos << endl;
}
//替换
void test02()
{
	string str1 = "abcdefgh";
	//从一号位置起三个字符串替换为1111
	str1.replace(1, 3, "1111");//此处把bcd替换为1111
	cout << "new" << str1 << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}