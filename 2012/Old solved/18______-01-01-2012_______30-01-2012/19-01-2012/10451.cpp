#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
using namespace std;

int main()
{
    int n,test=1;
    double r1,r2,area;
    
    while(cin>>n>>area)
    {
    if(n<3)
      break;
    double temp1,temp2,temp3;
    temp1=(2*area)/n;
    temp2=sin(2 * pi / n);
    temp3=temp1/temp2;
    r1=sqrt(temp3);
    r2=r1*cos(pi/n);
    printf("Case %d: %.5lf %.5lf\n",test++,r1*r1*pi-area,area-r2*r2*pi);
    }
}
