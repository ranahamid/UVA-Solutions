//11417

#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
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
    int g;
    int i,j,n;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    g=0;
    for(i=1;i<n;i++)
      {
      for(j=i+1;j<=n;j++)
         g+=gcd(i,j);
      }
    printf("%d\n",g);
    }
}
