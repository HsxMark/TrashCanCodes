#include<iostream> 
using namespace std;
//函数模板使用案列
//实现通用队数组进行排序
//算法 选择
//测试 char 数组、int数组
template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}//交换模板参数喵
//排序算法
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{//认定的最大值比遍历的数值打说明j下表的元素才是max
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//交换
			mySwap(arr[max], arr[i]);
		}
	}
}
//提供打印数组的模板
template <class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	//测试char
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}
int main(void)
{
	test01();
	return 0;
}