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
int now,temp,test,t,i,k,c,n,h,m,min,d;
cin>>test;
for(t=1;t<=test;t++)
  {
  scanf("%d%d:%d",&n,&h,&m);
  now=h*60+m;
  min=1<<30;
  for(i=0;i<n;i++)
      {
      scanf("%d:%d%d",&h,&m,&d);
      temp=h*60+m;
      if(temp<now)
         temp=temp+1440;
      temp=temp+d;
      if(temp<min)
         min=temp;
      } 
  printf("Case %d: %d\n",t,min-now);
  }
}
