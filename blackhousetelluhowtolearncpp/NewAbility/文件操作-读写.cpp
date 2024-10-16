
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
using namespace std;
void test01();
void test02();
int main()
{
    test01();
    test02();
    return 0;
}
void test01()
{
    // 1.包含头文件
    // 2.创建流对象
    ofstream ofs;
    // 3.指定的打开方式
    ofs.open("test.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;
    ofs.close(); // 关闭
}

void test02()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败喵" << endl;
        return;
    } // 验证机制

    // 读取数据
    char buf[1024] = {0};
    while (ifs >> buf)
    {
        cout << buf << endl;
    }
    ifs.close();
    // 以上是第一种

    char buff[1024] = {0};
    while (ifs.getline(buff, sizeof(buff)))
    {
        cout << buff << endl;
    }
    // 以上是第二种
    string bufff;
    while (getline(ifs, bufff))
    {
        cout << bufff << endl;
    }
    // 以上第三种
    char c;
    while ((c = ifs.get()) != EOF) // End of File
    {
        cout << c << endl;
    }
}