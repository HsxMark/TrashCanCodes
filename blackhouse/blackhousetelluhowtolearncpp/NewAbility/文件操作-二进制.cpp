#include <iostream>
#include <fstream>
using namespace std;
class Person
{
public:
  char m_Name[64];
  int m_Age;
};
void test01()
{
  // 老样子
  ofstream ofs;
  ofs.open("Person.txt", ios::out | ios::binary); // 二进制写
  Person p = {"张三", 18};
  ofs.write((const char *)&p, sizeof(Person));
  ofs.close();
};
void test02()
{
  ifstream ifs;
  ifs.open("person.txt", ios::in | ios::binary);
  if(!ifs.is_open())
  {
    cout<<"废物，又把文件搞没了"<<endl;
    return;
  }
  //读文件
  Person p;
  ifs.read((char*)&p,sizeof(Person));
  cout<<"名字："<<p.m_Name<<"年龄"<<p.m_Age<<endl;
  ifs.close();
};
int main(void)
{
  test01();
  test02();
}
