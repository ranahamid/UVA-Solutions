//10922
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
#define max 500005
using namespace std;
int main()
{
int n,i,j,sum,s,temp,count;
char ch[1005];
while(gets(ch))
  {
  sum=0;
  for(i=0;ch[i]!='\0';i++)
     {
     sum=sum+ch[i]-48;
     }
  if(sum==0)
    break;
  if(sum%9)
     {
     printf("%s is not a multiple of 9.\n",ch);
     continue;
     }
  count=1;
  while(sum^9)
    {
    n=sum;
    sum=0;
    while(n)
      {
      sum=sum+n%10;
      n=n/10;
      }
    count++;
    }
    printf("%s is a multiple of 9 and has 9-degree %d.\n",ch,count);
  }
}
