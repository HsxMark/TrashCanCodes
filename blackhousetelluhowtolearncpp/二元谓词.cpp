#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyCompare
{
public:
  bool operator()(int val1, int val2)
  {
    return val1 > val2;
  }

};
// 二元谓词
void test01()
{
  vector<int> v;
}

int main()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(20);
  v.push_back(60);
  v.push_back(30);

  sort(v.begin(), v.end());
  for(vector<int>::iterator it=v.begin();it!=v.end();it++)
  {
    cout<<*it<<" ";

  }
  cout<<endl;

  //使用函数对象 改变算法策略
  sort(v.begin(),v.end(),MyCompare());
  cout<<"-----------------"<<endl;
  for(vector<int>::iterator it=v.begin();it!=v.end();it++)
  {
    cout<<*it<<" ";

  }
  cout<<endl;
}
