#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 50001
using namespace std;

///may be time limit exit TLE


int main()
{
    int i,test,kase=1,n;
    double num;
    cin>>test;
    while(test--)
    {
    double sum=0,avg;
    
    cin>>n;
    for(i=0;i<n;i++)
       {
       cin>>num;
       sum=sum+num;
       }
    avg=sum/n;
    printf("Case #%d: %.3lf\n",kase++,avg);
       }
}
