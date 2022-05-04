#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
    long x,high,low,test;
    double k;
    cin>>test;
    
while(test--)
   {
   cin>>x>>k;
   low=long(floor(x/k));
   high=long(ceil(x/k));
   for(long j=0;;j++)
      {
      if( (x-low*j)%high==0)
          {
          printf("%ld %ld\n",j,(x-low*j)/high);
          break;
          }
      }
   }
}
