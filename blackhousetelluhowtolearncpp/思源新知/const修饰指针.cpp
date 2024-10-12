#include <iostream>
using namespace std;
int main()
{
  // const修饰指针
  int a = 10;
  const int *p = &a; // 常量指针，指向的值不可以改，但是指向可以

  // const修饰常量
  int *const q = &a; // 指针常量，与上情况相反
  // const修饰指针和常量
  const int *p3=&a;//指针指向和指向的值都不能改了
}