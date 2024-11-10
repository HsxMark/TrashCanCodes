#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
//大于greater
//内建函数对象 关系仿函数
class MyCompare
{
public:
        bool operator()(int v1, int v2)
        {
                return v1 > v2;
        }
};

void test01()
{
        vector<int>v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
                cout << *it << " ";
        }
        cout << endl;
        //sort(v.begin(), v.end(), MyCompare());
        sort ( v.begin(), v.end(), greater<int>());//使用内建的结构，提供了模板
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
                cout << *it << " ";
        }
        cout << endl;
}
int main()
{
        test01();
        return 0;
}