#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#define N 1000000
using namespace std;
int x[1000020];

void calc()
{
     x[0]=1;
     for(int i=1;i<=N;i++)
     {
x[i]=x[(int)floor(i-sqrt(i))]+x[(int)floor(log(i))]+x[(int)floor(i*sin(i)*sin(i))];
x[i]%=N;
     }
}

int main()
{
    calc();
    int a,b,c,d,i;

    while(scanf("%d",&i)==1)
    {
    if(i==-1)
    break;
    printf("%d\n",x[i]);
    }
}
