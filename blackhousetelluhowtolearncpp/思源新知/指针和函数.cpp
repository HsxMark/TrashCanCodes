#include <iostream>
using namespace std;
//实现两个数字交换
void swap01(int a,int b)
  {
    int temp=a;
    a=b;
    b=temp;
  }
int main()
{
  //指针与函数
  //1.值传递
  int a=10;
  int b=20;
  swap01(a,b);
  //2.地址传递
}