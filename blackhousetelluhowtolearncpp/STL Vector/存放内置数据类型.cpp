#include<iostream>
#include<vector>//要包含头文件
#include<algorithm>//标准算法头文件
using namespace std;
//vector存放内置数据类型
void myPrint(int val)
{
	cout << val << endl;
}
void test01()
{
	//创建了一个vector容器，数组
	vector<int> v;
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	//	//通过迭代器访问容器中的数据
	//	vector<int>::iterator itBegin = v.begin();//起始迭代器指向容器中第一个元素
	//	vector<int>::iterator itEnd = v.end();//结束迭代器指向容器中最后一个元素的下一个位置
	//	//第一种遍历方式
	//	while (itBegin != itEnd)
	//	{
	//		cout << *itBegin << endl;
	//		itBegin++;
	//	}
	//}
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//第二种遍历方式
	//{
	//	cout << *it << endl;
	//}
	//第三种遍历方式 利用STL提供的遍历算法
	for_each(v.begin(), v.end(), myPrint);//起点，终点、算法
}
int main()
{
	test01();
	return 0;
}