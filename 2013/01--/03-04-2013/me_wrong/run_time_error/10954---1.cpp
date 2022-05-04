#include <stdio.h>
#include <vector>
#include <queue>
#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)

using namespace std;
class cmp
{
  public:
  bool operator() (const int& lhs, const int&rhs) const
  {
    return lhs > rhs;
  }
};
int main()
{
  char str[35000];
  char n[5];
  priority_queue<int,vector<int>,cmp> nums;
  register int tmp, a, b, cost;
  while(1)
  {
    gets(n);
    if(n[0] == '0') break;
    cost = 0;
    gets(str);
    char * mem = strtok(str," ");
    while(mem != NULL)
    {
      nums.push(atoi(mem));
      mem = strtok(NULL," ");
    }
    while(!nums.empty())
    {
      a = nums.top();
      nums.pop();
      b = nums.top();
      nums.pop();
      
      cost += a + b;
      if(!nums.empty())
        nums.push(a + b);
      
    }
    printf("%d\n",cost);
  }
  return 0;
}

/*
10
5 245 214 213 213 54 787 211 33 11
*/
