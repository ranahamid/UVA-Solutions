#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
    long long  int a,b,kase=0,ans;
while(cin>>a>>b)
  {
  if(a==0&&b==0)
    break;
   ans=(a*(a-1)/2)*(b*(b-1)/2);
   
   cout<<"Case "<<++kase<<": "<<ans<<endl;             
  }
}

