#include <iostream>
using namespace std;
//普通模板和函数模板的调用规则
//普通函数
void myPrint(int a, int b);//只留下了声明没有实现，会报错
template<class T>
//void myPrint(T a, T b)
//{
//    cout << "templateout" << endl;
//}
void myPrint(T a, T b,T c)
{
    cout << "templateoutreload" << endl;
}
void test01()
{
    int a = 10;
    int b = 20;
    //myPrint(a, b);
    //通过空模板的参数列表强制调用函数模板
   // myPrint<>(a, b);
    myPrint<>(a, b, 100);
}
int main()
{
    test01();
    return 0;
}
