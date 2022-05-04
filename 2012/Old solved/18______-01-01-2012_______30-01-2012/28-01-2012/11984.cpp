#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
#define max 61
using namespace std;

int main()
{
    int test,k=0;
    double c,f,ans,temp1,temp2;
    cin>>test;
    while(test--)
       {
       cin>>c>>f;
       temp1=(9/5.0)*c+32;
       temp1=temp1+f;
       temp2=temp1-32;
       ans=temp2*(5/9.0);
       printf("Case %d: %.2lf\n",++k,ans);
       
       }
}
