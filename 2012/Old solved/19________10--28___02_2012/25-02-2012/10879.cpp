//10879
#include<iostream>
#include<stdio.h>
#define max 1000011
using namespace std;


int main()
{
    int j,kase=0,test;
    int n,res[2];
    cin>>test;
    while(test--)
    {
    cin>>n;
    int top=0;
     for(j=2;top<2&&j*j<=n;j++)
       {
       if(n%j==0)
           {
           res[top++]=j;
           }
       }
printf("Case #%d: %d = %d * %d = %d * %d\n",++kase,n,res[0],n/res[0],res[1],n/res[1]);       
   }
}
