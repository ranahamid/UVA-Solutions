#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int test,i;
     cin>>test;
     double b,p,k,n,ans;
     while(test--)
     {
     cin>>n>>p>>k;
     if(p==0)
       ans=0;
     else
        {
        ans=p*(pow((1-p),(k-1)));
        ans=ans/(1-(pow((1-p),n)));
        }
     printf("%.4lf\n",ans);
     }
}
