#include<stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long a,b,c,d,t,test,i,j,key,sum;
    vector<long> x(4);
       
    while(scanf("%ld",&test)==1)
    {
    for(t=0;t<test;t++)
       {
       for(i=0;i<4;i++)
       scanf("%ld",&x[i]);
       
    sort(x.begin(), x.end());
    
   // printf("%ld  %ld  %ld  %ld  ",a,b,c,d);
    //
    if(x[0]==x[3])
    printf("square\n");
    else if(x[0]==x[1] && x[2]==x[3])
    printf("rectangle\n");
   // else if(a<sum && b<sum && c<sum &&d<sum )
    else if(x[3]<(x[0]+x[1]+x[2]))
    printf("quadrangle\n");
    else 
    printf("banana\n");
       }
    }
}
