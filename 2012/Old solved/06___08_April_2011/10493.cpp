//10493
#include<stdio.h>
int main()
{
    int a,b,ans;
    while(scanf("%d%d",&a,&b)==2)
    {
    if(a==0)
    break;
    else
         {
          if(a==1)
             {
                  if(b==1)
                          {
                           printf("%d %d Multiple\n",a,b);
                           continue;
                           }
                  else
                      {
                       printf("%d %d Impossible\n",a,b);
                       continue;
                       }
             }
             if( (b-a)%(a-1)==0)
                 {
                 ans=(a+1)+a*((b-a)/(a-1));
                 printf("%d %d %d\n",a,b,ans);
                 }
             else
             {
                 printf("%d %d Impossible\n",a,b);
             }
             
         }
    }
}
