//264
#include<stdio.h>
#include <math.h>
int main()
{
    long n,r,k;
    while(scanf("%ld",&n)==1)
    {
    k=(int) (sqrt(2*n)+0.5);
    r=k*(k+1)/2-n;
    if((n%2)==0)
    printf("TERM %ld IS %ld/%ld\n",n,r+1,k-r);
    else
    printf("TERM %ld IS %ld/%ld\n",n,k-r,r+1);
    }
}
