//880
#include<stdio.h>
#include<math.h>
int main()
{
    long n,r,k;
    while(scanf("%ld",&n)==1)
    {
    k=sqrt(2*n)+.5;
    r=k*(k+1)/2-n;
    printf("%ld/%ld\n",r+1,k-r);
    }
}
