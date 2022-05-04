//104450
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
long long int fib[60];
int i,n,count=0,m;
fib[1]=2;
fib[2]=3;
for(i=3;i<=50;i++)
   fib[i]=fib[i-2]+fib[i-1];

cin>>n;
while(n--)
    {
    cin>>m;
    cout<<"Scenario #"<<++count<<":"<<endl;
    cout<<fib[m]<<endl;
    cout<<endl;
    }
}
