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
int test,t,i,k;
double sum,balance; 
unsigned char mem[128];
scanf("%d\n",&test);
sum=0.0;
char  st[100001];

for(i=1;i<=test;i++)
   {
  // scanf("%[.-+<>]\n",st);
   scanf("%[.-+><]\n",st);
  
   for(i=0;i<100;i++)
     mem[i]=0;
             
        
   int p=0;
   for(i=0;st[i];i++)
      {
      if(st[i]=='>')
         p++;
      if(st[i]=='<')
         p--;
      if(st[i]=='+')
         mem[p]++;
      if(st[i]=='-')
         mem[p]--;
      if(p==-1)
        p=99;
      else if(p==100)
        p=0;
      }
    printf("Case %d:",test);
   for(i=0;i<=99;i++)
     printf(" %02X",mem[i]);
   printf("\n");
   }
}
/*

1
..++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+.

*/
