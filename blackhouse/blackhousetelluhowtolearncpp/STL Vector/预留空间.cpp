#include<iostream>
#include<string>
#include<vector>
using namespace std;
//vector预留空间
void printVector(vector<int>&v)//常规打印函数
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
}
//1、基本使用
void test01()
{
	vector<int>v;
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num= " << num << endl;
}

int main()
{
	test01();
	return 0;
}