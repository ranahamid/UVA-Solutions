#include<stdio.h>
#include<math.h>

int main()
{
    int n,x[102],kase,i,sum,avg,diff,ans,j=1,cc;

    while(scanf("%d",&kase)==1)
    {
    if(kase==0)
    break;
    else
        {

               sum=0;
               for(i=0;i<kase;i++)
               {
               scanf("%d",&x[i]);
               sum=sum+x[i];
               }
        avg=(int)(sum/kase);
        diff=0;
        for(i=0;i<kase;i++)
            {
cc=(avg-x[i]);
if(cc<0)
cc*=-1;
            diff=diff+cc;

            }

         ans=diff/2;

         printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,ans);
         j++;
        }
    }
}
