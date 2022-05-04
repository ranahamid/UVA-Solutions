#include<iostream>
#include<stdio.h>
#include<string.h>
//#define max 102
#define max 1000002
using namespace std;

bool self[max+1];
//memset(self,true,sizeof(self));

int main()
{
int i;

for(i=0;i<max;i++)
  self[i]=true;

for(i=1;i<max;i++)
   {
   int sum=0,n=i;
   while(n!=0)
      {
       sum=sum+n%10;
       n=n/10;
      }
    sum=sum+i;
    if(sum<=max)
      self[sum]=false;
   }
for(i=1;i<max;i++)
   {
    if(self[i]==true)
       cout<<i<<endl;
   }
}

