#include <iostream>
using namespace std;
int main()
{
  int *p = NULL;
  //*p=100;//会报错
  // 空指针用于变量初始化，并且无法访问，0~255内存编号是系统占用的，不可访问
  return 0;
}

// 野指针
int main()
{
  int *p = (int *)0x1100;
  cout << *p << endl;//访问野指针报错
  return 0;//随便访问会报错
}