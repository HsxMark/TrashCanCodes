#include<iostream>
#include<string>
#include<vector>
using namespace std;
//vector构造函数
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it;
	}
}
void test01()
{
	vector<int>v1;//默认构造无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	//通过区间方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);
	//n个elem方式构造
	vector<int>v3(10, 100);//10个一百
	printVector(v3);
	//靠背构造
	vector<int>v4(v3);
	printVector(v4);//就是copy了一下
}
int main()
{
	test01();
	return 0;
}