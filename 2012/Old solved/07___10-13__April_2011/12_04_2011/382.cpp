#include<stdio.h>
int main()
{
    long n,sum,i;
    
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
            {
            printf("END OF OUTPUT\n");
            break;
            }
    else
        {
        sum=0;
        for(i=1;i<n;i++)
            {
            if((n%i)==0)
            sum+=i;
            }
        if(sum==n)
        printf("%5ld  PERFECT\n",n);
        else if(sum>n)
        printf("%5ld  ABUNDANT\n",n);
        else if(sum<n)
        printf("%5ld  DEFICIENT\n",n);
        }
    }
}
