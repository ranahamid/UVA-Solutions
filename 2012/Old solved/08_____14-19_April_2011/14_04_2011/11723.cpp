#include<stdio.h>
int main()
{
    int r,n,x,i,kase=1;
    while(scanf("%d%d",&r,&n)==2)
    {
    if(r==0 && n==0)
    break;
    else
        {
            if((n+n*26)<r)
            printf("Case %d: impossible\n",kase);
            else
            
                {
                x=n;
                for(i=0;;i++)
                             {
                             n=x+x*i;
                             if(n>=r)
                                     {
                                     printf("Case %d: %d\n",kase,i);
                                     break;
                                     }
                             }
                }
        kase++;
        }
            
     }
 return 0;    
}
