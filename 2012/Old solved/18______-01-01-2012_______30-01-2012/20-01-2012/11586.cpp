#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
#define max 500005
using namespace std;
int main()
{
    int test,i,len;
    int m,f,mm,ff;
    char a[1001];
    scanf("%d\n",&test);
  while(test--)
      {
      gets(a);
      len=strlen(a);
      m=mm=ff=f=0;
      for(i=0;i<len;i++) 
        {
        if(a[i]=='M')  m++;
        if(a[i]=='F')  f++;       
        if(a[i+1]=='M')  mm++;
        if(a[i+1]=='F')  ff++;
        }
      if(  (m==ff || f==mm )&&(len!=2) )
        printf("LOOP\n");
      else
         printf("NO LOOP\n");
      }
    
    
    
}
