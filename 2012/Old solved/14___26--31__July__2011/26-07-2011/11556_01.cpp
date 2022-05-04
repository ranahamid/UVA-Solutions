//11556
#include<math.h>
#include<stdio.h>
int main()
{
    double n,b,i,a,temp;
    while(scanf("%lf%lf",&n,&b)==2)
    {
    temp=(pow(2,(b+1)) )-1;
    if(n>=b)
    printf("yes\n");
    else
    printf("no\n");
    }
}
