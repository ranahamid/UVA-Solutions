//11462
#include<stdio.h>
#define max 2000005
int main()
{
    int m,n,x[max],i,j,k;
    while(scanf("%d",&n)==1)
    {
if(n==0)
break;

    for(i=1;i<=n;i++)
      {
      scanf("%d",&x[i]);
      }
      m=0;
    for(i=0;i<=110;i++)
    {
    for(j=1;j<=n;j++)
      {
      if(x[j]==i && m<n-1)
        {
         printf("%d ",i);
         m++;
         }
         if(x[j]==i && m==n-1)
        {
         printf("%d\n",i);
         m++;
         }
         if(m==n)
         break;
        }
      }
      
    }
    return 0;
}
