//11541
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int len,i,n,sum;
char num[11];
//for purpose of big integer
// char num[1100];
while(gets(num))
{
sum=0;
if(num[0]==48)
break;
len=strlen(num);
for(i=0;i<len;i++)
  {
  sum=sum+(num[i]-48);
  }
while(sum>9)
{
n=sum;
sum=0;
while(n>0)
  {
  sum=sum+n%10;
  n=n/10;
  }
}
printf("%d\n",sum);
}
}
