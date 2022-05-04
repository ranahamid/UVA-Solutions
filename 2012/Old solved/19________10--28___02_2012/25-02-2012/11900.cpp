#include<iostream>
#include<stdio.h>
using namespace std;

int ar[1000001];
int main()
{
int test,gm[100],c=0,i,n,p,q,kase=0;
cin>>test;
while(test--)
  {
  cin>>n>>p>>q;
  for(i=0;i<n;i++)
     {
     cin>>gm[i];
     }

  for(i=0,c=0;i<n;i++)
  {
  if(i>=p || c+gm[i]>q)
      break;
  else
      c=c+gm[i];
  }
  printf("Case %d: %d\n",++kase,i);
  }
}
