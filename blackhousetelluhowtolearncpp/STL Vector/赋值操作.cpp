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
	//赋值
	vector <int>v2;
	v2 = v1;
	printVector(v2);
	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//前面闭区间后面开
	printVector(v3);
	//assign n个elem
	vector<int>v4;
	v4.assign(10, 100);//赋值不是构造
	printVector(v4);
}
int main()
{
	test01();
	return 0;
}