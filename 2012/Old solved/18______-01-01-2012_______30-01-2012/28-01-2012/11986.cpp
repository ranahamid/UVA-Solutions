#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
#define max 61
using namespace std;

long int power(int base,int n)
  {
  long rat=1;
  for(int i=1;i<=n;i++)
    rat=rat*base;
    
  return rat;
  }

int main()
{
    int test,k=0,i;
    cin>>test;
    long n;
    while(test--)
      {
      cin>>n;
      n++;

      for(i=0;i<=70;i++)
         {
         if(power(2,i)>=n )
              break;
         }
      printf("Case %d: %ld\n",++k,i);
      }
}
