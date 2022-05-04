#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
  int i,j,v,u,x;
  while(scanf("%d%d%d%d",&i,&j,&v,&u)==4)
  {
  if(i==0 && j==0 && v==0 && u==0)
  break;
  if(i==v && j==u)
  x=0;
  else if(i==v || j==u || abs(i-v)==abs(j-u))
  x=1;
  else
  x=2;
  printf("%d\n",x);
  }
}
