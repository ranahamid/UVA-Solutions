#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
using namespace std;

int main()
{
double a,b,L,D,temp1,temp2;
int test;
cin>>test;
while(test--)
{

cin >> D >> L;
a = L / 2.0;
b = sqrt(a * a - D * D / 4.0);
printf("%.3lf\n",pi*a*b);
}
}
