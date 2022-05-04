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
int n,i,j,sum,s,temp,count,k;
char ch[1005];
while(gets(ch))
  {
  sum=0;
int  len=strlen(ch);
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
 for(j=1;j<=len;j++)
         {         
           k=sum;
           sum=0;
           if(k/10==0)
           {
           printf("%s is a multiple of 9 and has 9-degree %ld.\n",ch,j);
           break;
           }
          else
          {
              while(k>0)
              {
              sum+=k%10;
              k=k/10;
              }
          }
   
    }

  }
}
