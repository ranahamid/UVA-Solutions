//11296
#include<iostream>
#include<stdio.h>
#define max 1000011
using namespace std;


int main()
{

    int n;
    unsigned long long ans;
    while(cin>>n)
    {
    int x,ans=0;
    for(x=n&1;x<=n;x=x+2)
       ans=ans+(((n-x)/2)+1);
    cout<<ans<<endl;
    }
}
