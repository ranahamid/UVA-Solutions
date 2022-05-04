//913
#include <stdio.h>
int main()
{
    long int n,sum,odd;
    while(scanf("%ld",&n)==1)
    {
    odd=(n*(n+2))/2;
    sum=(3*odd)-6;
    printf("%ld\n",sum);
    }
}
