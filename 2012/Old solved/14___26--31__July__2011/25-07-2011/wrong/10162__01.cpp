//10162
#include<stdio.h>
#include<string.h>
#define max 105
  int ar[max];
 int sum,i,j,n,digit;
  int t;
  char st[max];
    
void func()
{
      ar[0]=0; 
  sum=0; 
     for(i=1;i<100;i++)
     {
     t=1;
       for(j=1;j<=i;j++)
       {
       t=(t*i)%10;
       }
       sum=(sum+t)%10;
       ar[i]=sum;
     }
}
int main()
{
 func();
  while(scanf("%s",st)==1)
  {
  if(st[0]=='0' && st[1]=='\0')
  break;
  for(i=0;st[i];i++);
  if(i>1)
    digit=st[i-1]-48+10*st[i-2]-48;
  else
      digit=st[i-1]-48;  
  printf("%d\n",ar[digit]);  
  }
}
