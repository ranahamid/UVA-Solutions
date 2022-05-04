#include <math.h>
#include<stdio.h>

long fact(long n)

       {
        if(n==0)
        return 1;
        else
        return ((int)n*(int)fact(n-1));
       }


int main()
{
long total,n,r;

    while(scanf("%ld%ld",&n,&r)==2)
    {
if(n==0 && r==0) break;
    //nCr=(  n!/(n-r)!*r!  )

    total=fact(n)/(fact(n-r)*fact(r));
    printf("%ld\n",total);
    }
}
