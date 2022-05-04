//11556
#include<math.h>
#include<stdio.h>
int main()
{
    long n,b,i,a,temp;
    while(scanf("%ld%ld",&n,&b)==2)
    {
    temp=(pow(2,(b+1)) )-1;
    if(n>=b)
    printf("yes\n");
    else
    printf("no\n");
    }
}
