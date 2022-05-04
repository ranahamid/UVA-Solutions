#include<stdio.h>
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    double ncows,nshow,ncars,a,b,c,d;
    double ans;
while(scanf("%lf%lf%lf",&ncows,&ncars,&nshow)==3)
{

ans=(1.0*(ncows*ncars+ncars*(ncars-1))/(ncows+ncars-nshow-1))/(ncows+ncars);
printf("%.5lf\n",ans);
}
}
