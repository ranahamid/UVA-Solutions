#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
int test,kase=0;
cin>>test;
while(test--)
  {
  int x,y;
  cin>>x>>y;
  int first=(1+(y+x))*(y+x)/2+x;
  cin>>x>>y;
  int sec=(1 + (y + x)) * (y + x) / 2 + x;
  int ans=sec-first;
  printf("Case %d: %d\n",++kase,ans);
  }
}
