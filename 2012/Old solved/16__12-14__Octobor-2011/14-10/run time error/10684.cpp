//10684
#include<iostream>
#include<sstream>
#include<stdio.h>
#define m 1000
using namespace std;

int main()
{
    int n,i,j,a[m],b,sum,max;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;

    sum=0;
    max=0;

    for(i=0;i<n;i++)
       scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
       if(sum<0)
       sum=0;
       if(sum>max)
       max=sum;
    }
    if(max>0)
    printf("The maximum winning streak is %d.\n",max);
    else  //max==0
    printf("Losing streak.\n");
    }
}
