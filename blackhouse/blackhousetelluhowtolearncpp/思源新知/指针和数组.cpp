#include <iostream>
using namespace std;
int main()
{
  // 利用指针访问数组
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "第一个元素:" << arr[0] << endl;
  int *p = arr; // arr就是数组的首地址
  cout<<"利用指针访问第一个元素"<<*p<<endl;
  p++;//指针向后便宜4个字节
  cout<<"利用指针访问第二个元素"<<*p<<endl;

  return 0;
}