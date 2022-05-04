#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long sqr(long long n)
 {
 return n*n;
 }
long long  bigMod(long long p, long long  v, long long  m)
{
    if (p==0) 
           return 1;
    else if (p&1) 
          return (v%m * bigMod(p-1,v,m))%m;
    else 
          return (sqr(bigMod(p/2,v,m)))%m;
}
 
int main()
{
int test,n,lx,ly,lim;
cin>>test;
while(test--)
   {
   long long x,y,n;
   cin>>x>>y>>n;
   cout<<bigMod(y,x,n)<<endl;
   }
cin>>test;
}
             
