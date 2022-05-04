#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
   long test,n,i;
   double x;
   scanf("%ld",&test);
   while(test--)
     {
     scanf("%ld",&n);
     double x=( ( sqrt(1+8*n) )-1 )/2.0;
     /*
     double x= sqrt(1+8*n) ;
     x=x-1;
     x=x/2;*/
     int long h=floor(x);
     
     printf("%ld\n",h);
    
     }
}
