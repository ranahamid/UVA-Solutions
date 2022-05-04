//10633

#include<stdio.h>
int main()
{
    unsigned long int n,x;
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
    break;
    x=(n*10)/9;
    if(n%9==0)
    printf("%ld %ld\n",x-1,x);
    else
   printf("%ld\n",x); 
                            }
}

