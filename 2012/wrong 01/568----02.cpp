#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int fact[20001];

int main()
{
int test,kase=0,n,i,f;

fact[0]=fact[1]=1;
for(i=2;i<=10000;i++)
    {
    f*=i;
    while(f%10==0)
         {
         f/=10;
         }
    f=f%100000;
    fact[i]=f%10;
    }


while(cin>>n)
   {
   printf("%5d -> %d\n",n,fact[n]);
   }
}
