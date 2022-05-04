//11689
#include<stdio.h>
int main()
{
    long int f,e,c,i,kase,n,ans,total,x;
    while(scanf("%ld",&kase)==1)
    {
    for(i=0;i<kase;i++)
        {
        scanf("%ld%ld%ld",&e,&f,&c);
        total=e+f;
        ans=0;
        for(;;)
               {
               x=total/c;
               ans=ans+x;
               total=total/c+total%c;
               if(total<c)
               break;
               }
               printf("%ld\n",ans);
        }
    }
}
