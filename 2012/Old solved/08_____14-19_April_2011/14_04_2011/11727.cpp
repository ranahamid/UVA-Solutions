//11727
#include<stdio.h>

int main()
{
int a,b,c,i,kase;
while(scanf("%d",&kase)==1)
     {
     for(i=1;i<=kase;i++)
        {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b && a<c) ||(a<b && a>c))
        printf("Case %d: %d\n",i,a);
        
        else if((b>a && b<c) ||(b<a && b>c))
        printf("Case %d: %d\n",i,b);
        
        //else if((c>b && c<a) ||(c<b && c>a))
        else
        printf("Case %d: %d\n",i,c);
        }
     }    
}
