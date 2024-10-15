
#include <iostream>
#include<fstream>
using namespace std;
void test01();
int main()
{
    void test01();
    return 0;
}
void test01()
{
    //1.包含头文件
    //2.创建流对象
    ofstream ofs;
    //3.指定的打开方式
    ofs.open("test.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;
    ofs.close();

}