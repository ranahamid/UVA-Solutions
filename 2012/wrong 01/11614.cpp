#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int test,n,lx,ly,lim;
cin>>test;
while(test--)
   {
   cin>>n;
   lim=(int)(ceil(sqrt(double(2*n))));
   lx=lim*(lim+1)/2;
   ly=lim*(lim-1)/2;
   
   if(lx<=n)
       cout<<lim<<endl;
   else if(ly<=n)
       cout<<lim-1<<endl;
   else
       cout<<lim-2<<endl;
   
   }
}
