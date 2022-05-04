#include<iostream>
#include<stdio.h>
using namespace std;

int a,b,c,d,l;
int func(int x)
{
return (a*x*x+b*x+c);
}
int main()
{
 int count ;
    while(cin>>a>>b>>c>>d>>l,a,b,c,d,l)
    {
    count=0;
    for(int i=0;i<=l;i++) 
       {
       if( (func(i)%d)==0)
            count++;
       }
    cout<<count<<endl;
}
}
