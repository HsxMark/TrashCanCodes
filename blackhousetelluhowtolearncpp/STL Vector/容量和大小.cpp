#include<iostream>
#include<string>
#include<vector>
using namespace std;
//赋值操作
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1是空的" << endl;
	}
	else
	{
		cout << "v1不是空的" << endl;
		cout << "v1的容量为 " << v1.capacity()<<endl;//10个数字，但是13个空余下的，如果要加新的东西可能要扩
		cout << "v1 的大小是多少" << v1.size() << endl;
	}
	//重新指定大小
	v1.resize(15,100);
	printVector(v1);//后面出现0是空的，默认用0填充，也可自己改
	//利用重载的版本可以指定默认的填充
	v1.resize(5);
	printVector(v1);//少了，超出的部分删掉了
}
int main()
{
	test01();
	return 0;
}