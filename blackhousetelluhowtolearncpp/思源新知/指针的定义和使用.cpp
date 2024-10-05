#include <iostream>
using namespace std;
int main()
{
  // 1.定义指针
  int a = 10;
  // 语法：数据类型*指针变量名;
  int *p;
  p = &a;
  cout << "a的地址为：" << &a << endl;
  cout << "指针p为：" << p << endl;
  // 2.使用指针

  return 0;
}