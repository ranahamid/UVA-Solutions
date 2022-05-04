#include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;

int n=30001,test,i,j;
long long  ans[30001];
int coin[5]={1,5,10,25,50};

void coin1()
{

for(i=0;i<n;i++)
ans[i]=0;
ans[0]=1;

for(i=0;i<5;i++)
  {
  int c=coin[i];
  for(j=c;j<n;j++)
      {
      ans[j]+=(ans[j-c]);
      }
  }
}

int main()
{
 coin1();
int m;
 while(cin>>m)
 {
 
    if(ans[m]==1)
      cout<<"There is only 1 way to produce "<<m<<" cents change.\n";
    else
       cout<<"There are "<<ans[m]<< " ways to produce "<<m<<" cents change.\n";
  
 }
}

