#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

#define pi 2*acos(0)
#define maxx 150

using namespace std;

double t(int nn,int percent)
{
   double tx;
   tx=nn*percent*(1/100.0);
   return tx;
}

int main()
{
    int test,tt,n,nn;
    int tax;
    cin>>test;
    for(tt=1;tt<=test;tt++)
       {
       cin>>n;
       if(n<=180000)
           {
           printf("Case %d: 0\n",tt);
           }       
        else
           {
        if(n > 1180000) 
             tax = 150000 + (n - 1179997) / 4;
        else if(n > 880000) 
             tax = 90000 + (n - 879996) / 5;
        else if(n > 480000) 
             tax = 30000 + (3*n - 1439981) / 20;
        else if(n > 180000) 
             tax = (n - 179991) / 10;
        if(tax) 
          tax=max(2000,tax); 
        printf("Case %d: %d\n",tt,tax);
           }
       }
    
}
