//11480
#include<iostream>
#include<stdio.h>
#define max 1000011
using namespace std;

unsigned long long int  res[max ]={0};
int main()
{
    int kase=0;
    res[6]=1;
    for(int i=1;i<=3;i++)
       {
       for(int j=6;j<=max-i;j++)
          {
          res[i+j]=res[i+j]+res[j];
          }
       }
       
    int n;
    while(cin>>n,n)
    {
    cout<<"Case "<<++kase<<": "<<res[n]<<endl;
    }
}
