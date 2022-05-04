//11059
#include<stdio.h>
int main()
{
int kase,x[20],i,pro;
while(scanf("%d",&kase)==1)
     {
      for(i=0;i<kase;i++)
      scanf("%d",&x[i]);
      pro=1;
      for(i=0;i<kase;i++)
         {
         if(x[i]>0)
         pro=pro*x[i];
         }
         if(pro>0)
         printf("Case #%d: The maximum product is %d.\n\n",i+1,pro);
         else
         printf("Case #%d: The maximum product is 0.\n\n",kase+1);
         kase++;
     }                      

}

