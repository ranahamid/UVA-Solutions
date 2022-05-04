#include<iostream>
#include<stdio.h>
#include<math.h>
#define modulo 1000000007
using namespace std;

//for big mod use this 

unsigned  long long int  bigmod(unsigned long long int b,unsigned long long int e,unsigned long long int m) 
{
 unsigned long long int res = 1;
	    while(e)
	    {
	        if(e&1)
	            res = (res*b)%m;
	        e>>=1;
	        b = (b*b)%m;
	    }
	    return res;
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
             
