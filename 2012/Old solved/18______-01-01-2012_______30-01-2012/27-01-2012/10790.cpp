#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
    long int a,b,test=0,ans;
while(cin>>a>>b)
  {
  if(a==0&&b==0)
    break;
   ans=(a*(a-1)/2)*(b*(b-1)/2);
   
   printf("Case %ld: %ld\n",++test,ans);             
  }
}

