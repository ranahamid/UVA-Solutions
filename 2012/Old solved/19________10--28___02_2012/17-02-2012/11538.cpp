#include<iostream>
#include<stdio.h>
using namespace std;
unsigned long long n,m;
int main()
{
while(cin>>n>>m,n,m)
      {
      
      if(n<m)
         cout<<m*(m-1)*n+n*(n-1)*m+(n*(n-1)*(2*n-1)/6-(n-1)*n/2)*4+2*n*(n-1)*(m-n+1)<<endl;
      else
         cout<<n*(n-1)*m+m*(m-1)*n+(m*(m-1)*(2*m-1)/6-(m-1)*m/2)*4+2*m*(m-1)*(n-m+1)<<endl;

      }
}
