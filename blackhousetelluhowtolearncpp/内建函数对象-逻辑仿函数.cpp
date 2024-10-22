#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;
//内建函数对象逻辑仿函数
//逻辑非
void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//利用逻辑非，将容器v搬运到v2中并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());//目标容器务必提前开空间啊
	
	
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());//
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
}



int main()
{
	test01();
	return 0;
}
