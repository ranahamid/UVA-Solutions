#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 50001
using namespace std;




///may be time limit exit TLE


int main()
{
    double a;
    int i,test,kase=1,n;
    cin>>test;
    while(test--)
    {
    double sum=0,avg;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
       //cin>>a[i];
       scanf("%lf",&a);
       sum+=a;
       }
    avg=sum/n;
    printf("Case #%d: %.3lf\n",kase++,avg);
       }
}
