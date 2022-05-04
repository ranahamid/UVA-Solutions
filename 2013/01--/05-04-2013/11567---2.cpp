#include <stdio.h>
int min(int a,int b)
{
    return (a<b)?a:b;
}
int calc(long long int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n&1)
        return 1 + min(calc(n+1),calc(n-1));
    else
        return 1+calc(n/2);
}
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
        printf("%d\n",calc(n));
    return 0;
}
