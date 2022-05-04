#include <stdio.h>
#define LL long
LL power(LL a, LL p)
{
    int ret=1;
    while (p--)
        ret*=a;
    return ret;
}
LL bigMod(LL b, LL p, LL m)
{
    if (!p) return 1;
    else if (!(p&0x01)) return power(bigMod(b,p/2,m),2)%m;
    else return (b%m * bigMod(b,p-1,m))%m;
}
 
int main()
{
    LL b, p, m;
    while (scanf("%ld %ld %ld",&b,&p,&m)==3)
    {
       printf("%ld\n",bigMod(b,p,m));
    }
    return 0;
}
