#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>

#define pi 2*acos(0)


using namespace std;


int main()
{
int n,test,x,y,z;
cin>>test;
while(test--)
  {
  cin>>x>>y>>z;
  cout<<z*(2*x-y)/(x+y)<<endl;  
  }

}
