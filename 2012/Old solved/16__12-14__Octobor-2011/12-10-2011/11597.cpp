//11597
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n,i=1;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    printf("Case %d: %d\n",i,n/2); //like 11550
    i++;
    }
}
