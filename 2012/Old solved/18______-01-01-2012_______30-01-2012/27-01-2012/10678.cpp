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
cin>>D>>L;
temp1=pow((L/2),2);//(L/2)^2
temp2=pow((D/2),2);;//(D/2)^2)

a =sqrt(temp1-temp2);//a = sqrt((L/2)^2 - (D/2)^2)
b = L / 2;
printf("%.3lf\n",pi*a*b);
}
}
