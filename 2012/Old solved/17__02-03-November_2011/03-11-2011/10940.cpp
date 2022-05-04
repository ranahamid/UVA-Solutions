#include<stdio.h>
int main()
{
    int x,n,s;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
     x=1;
    while(x<=n)
      {
      x=x*2;
      s=x%n;
      }
      printf("%d\n",n-s);
    }
    
}

/*
1. By multiplying x with 2, we are actually tracking 
the cards after throwing and moving at the bottom.

2. By s = x%n and Result = n – s,  we are getting the 
card position and card number.
*/
