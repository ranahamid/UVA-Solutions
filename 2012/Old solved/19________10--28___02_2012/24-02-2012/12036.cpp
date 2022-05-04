//12036
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int test,n,lx,ly,lim,kase=0;
cin>>test;
while(test--)
   {
   cin>>n;
   bool valid=true;
int   count[200]={0},i,j;
   
   for(i=1;i<=n;i++)
      {
      for(j=1;j<=n;j++)
          {
          cin>>lx;
          count[lx]++;
          if(count[lx]>n)
                 valid=false;       
          }
      }
   if(valid)
        printf("Case %d: yes\n",++kase);
   else
         printf("Case %d: no\n",++kase);
   }
}
