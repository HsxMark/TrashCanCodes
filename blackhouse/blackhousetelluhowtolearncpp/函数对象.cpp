#include <iostream>
#include <string>
using namespace std;

class Add
{
public:
  int operator()(int v1, int v2)
  {
    return v1 + v2;
  }
};
// 函数对象可以有参数和返回值
void test01()
{
  Add add;
  cout << add(10, 10) << endl;
}
// 函数对象超出普通函数的概念，函数对象可以有自己的状态
class myPrint
{
public:
  myPrint()
  {
    this->count = 0;
  }
  void operator()(string test)
  {
    cout << test << endl;
    this->count++;
  }
  int count;//内部自己的状态
};

void test02()
{
  myPrint myprint;
  myprint("hello world");
  myprint("hello world");
  myprint("hello world");
  myprint("hello world");
  myprint("hello world");

  cout<<"myprint调用次数为"<<myprint.count<<endl;
}

// 函数对象可以作为参数传递
void doPrint(myPrint &mp, string test)
{
  mp(test);
}

void test03()
{
   myPrint myPrint;
  doPrint(myPrint, "hello world");
}

int main()
{
  test01();
  test02();
  test03();
  return 0;
}