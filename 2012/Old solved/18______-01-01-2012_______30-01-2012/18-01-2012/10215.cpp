#include<iostream>
#include<stdio.h>
#include<string.h>
#include <math.h>
#define EPS pow(10, -9)
using namespace std;

int main()
{
double L,W;
while(cin>>L>>W)
{
      printf("%.3f %.3f %.3f\n",EPS + (L + W - sqrt(L*L - L*W + W*W)) / 6.0, 0.0, EPS + ((L > W)? W : L) * 0.5);
      
}}
