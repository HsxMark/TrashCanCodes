#include <iostream>
using namespace std;
// 32占4字节，64位占8字节
int main()
{
  // 指针所占内存空间大小
  int a = 10;
  // int *p;
  // p = &a;
  int *p = &a;
  cout << "sizeof (int*)= " << sizeof(int *) << endl;
  cout << "sizeof (int*)= " << sizeof(float *) << endl;
  cout << "sizeof (int*)= " << sizeof(char *) << endl;
  cout << "sizeof (int*)= " << sizeof(double *) << endl;
  return 0;
}