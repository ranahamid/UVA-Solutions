#include <stdio.h>
 
/* Guilty by association */
 
int main()
{
    int i, a, b, c, deg;
    while (scanf("%d %d %d %d",&i,&a,&b,&c)==4)
    {
        if (!i && !a && !b && !c) break;
 
        deg = 720+360 + (((a>i?(40-a)+i:(i-a)) + (b<a?(40-a)+b:(b-a)) + (c>b?(40-c)+b:(b-c))))*9;
 
        printf("%d\n",deg);
    }
    return 0;
}
