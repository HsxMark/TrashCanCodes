// 指针的定义和使用
#include <iostream>
using namespace std;
int main()
{
  // 1.定义指针
  int a = 10;
  // 指针定义的语法：数据类型 * 指针变量
  int *p;
  // 让指针记录变量地址
  p = &a;
  cout << "a的地址为多少：" << &a << endl;
  cout << "指针p为：" << p << endl;

  // 2.使用指针
  // 指针前加*代表解引用找到指针指向的内存的数据
  cout << "a= " << a << endl;
  cout << "*p=" << *p << endl;
  return 0;
}
