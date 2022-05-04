#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
   
double a,b,c;
double S_red,S_blue,S_yellow,p,S,R,r;
while(cin>>a>>b>>c)
{

p = (a+b+c)/2;
S = sqrt(p*(p-a)*(p-b)*(p-c));
R = (a*b*c)/(4*S);
r = S/p;
S_red = (PI*r*r);
S_blue = S-S_red;
S_yellow = (PI*R*R)-S;

printf("%.4lf %.4lf %.4lf\n",S_yellow,S_blue,S_red);
}
}
