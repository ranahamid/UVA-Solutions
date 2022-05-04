#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;


bool squre(long long int n);

int main()
{
    long long int n;
    while(cin>>n)
    {
    if(n==0)
      break;
    if(squre(n))
       cout<<"yes"<<endl;
    else
         cout<<"no"<<endl;
    }
}

bool squre(long long int n)
{
     long long int a=(long long int)sqrt(n);
     if(a*a==n)
        return true;
     else
        return false;
}
