#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,ts;
    
    while(scanf("%d",&ts)==1)
    {
      for(b=0;b<ts;b++)
      {
      scanf("%d",&a);
      printf("%d\n",((a*++a)>>1)-1);
     }
}
}
