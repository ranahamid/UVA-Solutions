#include<stdio.h>
#include<math.h>
int main()
{
    int n,x[102],kase,i,sum,avg,diff,ans,j=1;
    while(scanf("%d",&kase)==1)
    {
    if(kase==0)
    break;
    else
        {

               sum=0;
               ans=0;
               for(i=0;i<kase;i++)
               {
               scanf("%d",&x[i]);
               sum=sum+x[i];
               }
        avg=(int)(sum/kase);
       
        for(i=0;i<kase;i++)
            {
            if(avg<x[i])
               {
               ans=ans+(x[i]-avg);
               }

            }

         
        
printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,ans);
         j++;
        }
    }
}
