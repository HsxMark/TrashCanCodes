#include <iostream>
#include <vector>
using namespace std;
// 仿函数返回bool类型，称为谓词
class GreaterFive
{
public:
  bool operator()(int val)
  {
    return val > 5;
  }
};

void test01()
{
  vector<int> v;
  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }
  // 查找容器中是否有大于5这个元素
  // GreaterFive匿名的函数对象
  vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
  if (it == v.end())
  {
    cout << "未找到" << endl;
  }
  else
  {
    cout << "找到了大于5的数字";
  }
}

int main()
{
  test01();
  return 0;
}