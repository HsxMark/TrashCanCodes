#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> solutions;
vector<int> position;

bool isConflict(int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    if (position[i] == col || abs(position[i] - col) == abs(i - row))
    {
      return false;
    }
  }
  return true;
}

void solve(int row)
{
  if (row == n)
  {
    solutions.push_back(position);//尾插法将position数组的值插入到solutions数组中
  }
  else
  {
    for (int col = 0; col < n; col++)
    {
      if (isConflict(row, col))
      {
        position[row] = col;
        solve(row + 1);
        position[row] = -1;
      }
    }
  }
}

void printSolution()
{
  int count=0;
  for(const auto& sol : solutions)
  {
    for(int i=0;i<n;i++)
    {
      cout<<sol[i]+1<<(i==n-1?"\n":" ");
      }
      count++;
      if(count==3)
      {
        break;
      }
    }
    cout<<solutions.size()<<endl;
}//输出前三个解

int main()
{
  cin>>n;
  position.resize(n,-1);
  solve(0);
  printSolution();
  return 0;

}