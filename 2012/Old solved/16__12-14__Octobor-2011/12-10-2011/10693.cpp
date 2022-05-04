//10693
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;


int main()
{
    int n,i,l,f;
    double v,velocity;
    while(scanf("%d%d",&l,&f)==2)
    {
    if(l==0 && f==0)
    break;
    v=sqrt(l*f*2.0);
    velocity=(v*3600)/(2*l);
    printf("%.8lf %.8lf\n",v,velocity);
    
    }
}
