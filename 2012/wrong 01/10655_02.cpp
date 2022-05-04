#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{
    long long int p,q,n,a_b,a,b,ans;
    while(cin>>p>>q)
    {
    if(p==0 && q==0)
       break;
    cin>>n;
    a_b=(long long int)(sqrt(p*p-4*q));
    a=(long long int)((p-a_b)/2.0);
    b=p-a;
    //cout<<a<<b<<endl;
    ans=(long long int)pow(a,n)+(long long int)pow(b,n);//an+bn
    cout<<ans<<endl;
    }
}
