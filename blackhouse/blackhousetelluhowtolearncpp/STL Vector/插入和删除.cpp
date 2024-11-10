#include<iostream>
#include<string>
#include<vector>
using namespace std;
//插入和删除
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
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	//遍历
	printVector(v1);
	//尾删
	v1.pop_back();
	printVector(v1);
	//插入
	v1.insert(v1.begin(), 100);//在头部插一个100
	printVector(v1);
	v1.insert(v1.begin(), 2, 100);
	printVector(v1);//一次性插入俩
	//删除
	v1.erase(v1.begin());
	printVector(v1);//参数也是迭代器
	//清空
	v1.erase(v1.begin(), v1.end());//也可以v1.clear();
	printVector(v1);
}
int main()
{
	test01();
	return 0;
}