#include<iostream>
#include<stdio.h>

using namespace std;

long long  catlon[20]={0,1,2,5,14,42,132,429,1430,4862,16796,
58786,208012,742900,2674440,9694845,35357670,129644790,
477638700,1767263190}; 

int main()
{
long long  n,i;
    while(cin>>n)
    {

    for(i=0;i<=19;i++)
            {
            if(catlon[i]==n)
               {
               cout<<i<<endl;
               break;
               }          
            }
    }
}             

