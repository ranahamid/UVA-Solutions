#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    
int i,n,sum,max1,test;
while(cin>>n)
{
if(n==0)
break;
sum=0;
max1=0;

for(i=0;i<n;i++)
  {
  cin>>test;
  sum=sum+test;
  if(sum>max1)
    max1=sum;
  if(sum<0)
    sum=0;
  }
if(max1==0)
printf("Losing streak.\n");
else

printf("The maximum winning streak is %d.\n",max1);
}
}
