//10346
#include<stdio.h>
int main()
{
    int x,n,sum,k;
    while(scanf("%d%d",&n,&k)==2)
    {
    x=sum=n;
    while(x>=k)
               {
               sum=sum+(x/k);
               x=x/k+x%k;
               }
    printf("%d\n",sum);
    }
}
