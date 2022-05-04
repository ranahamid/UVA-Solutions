#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
      return a;
    else
      return gcd(b,a%b);
}

int main()
{
    int step,mode,a;
    while(scanf("%d%d",&step,&mode)==2)
    {
    a=gcd(step,mode);
    if(a==1)
    printf("%10d%10d    Good Choice\n\n",step,mode);
    else
    printf("%10d%10d    Bad Choice\n\n",step,mode);
    }
}
