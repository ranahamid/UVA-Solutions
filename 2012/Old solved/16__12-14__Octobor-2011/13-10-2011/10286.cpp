//10286
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;
#define f 1.0673956817111818692592637626711;//from felix_halim

int main()
{
   
    double v,vel;
    while(scanf("%lf",&v)==1)
    {
    vel=v*f;
    printf("%.10lf\n",vel);
    }
}
