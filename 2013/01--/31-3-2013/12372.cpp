#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>

#define pi 2*acos(0)
#define max 150

using namespace std;

int main()
{
    int test,t,i,a,b,c;
    cin>>test;
    for(t=1;t<=test;t++)
       {
       cin>>a>>b>>c;
       if(a<=20 && b<=20 && c<=20)
           printf("Case %d: good\n",t);
       else
           printf("Case %d: bad\n",t);
       }
    
}
