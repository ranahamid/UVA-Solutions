#include<iostream>
#include<stdio.h>
#include<math.h>
#define modulo 1000000007
using namespace std;

unsigned long long int square(unsigned long long int  n)
 {
 return n*n;
 }


unsigned  long long int  bigmod(unsigned long long int b,unsigned long long int p,unsigned long long int m) 
{
if (p == 0)
   return 1;
else if (p%2 == 0)
   return square(bigmod(b,p/2,m)) % m; // square(x) = x * x
else
    return ((b % m) * bigmod(b,p-1,m)) % m;
}

int main()
{
unsigned long long x,y,n,test,kase=0;
cin>>test;
while(test--)
   {
   cin>>n;
cout<<"Case #"<<++kase<<": "<<n*bigmod(2,n-1,modulo)%modulo<<endl;
   }

}
             
