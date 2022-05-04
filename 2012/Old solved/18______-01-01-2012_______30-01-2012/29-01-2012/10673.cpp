#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
    int x,high,low,test;
    double k;//must be double or float

    cin>>test;
    
while(test--)
   {
   cin>>x>>k;
   low=int(floor(x/k));
   high=int(ceil(x/k));
   for(int j=0;;j++)
      {
      if( (x-low*j)%high==0)
          {
          printf("%d %d\n",j,(x-low*j)/high);
          break;
          }
      }
   }
}
