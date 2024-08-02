#include<iostream>
#include<string>
#include<vector>
using namespace std;
//数据存取
void printVector(vector<int>&v)//常规打印函数
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
	//利用[]方式访问数组中的元素
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	//利用at方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	//获取第一个元素
	cout << "First is: " << v1.front() << endl;
	cout << "Last is: " << v1.back() << endl;

}
int main()
{
	test01();
	return 0;
}