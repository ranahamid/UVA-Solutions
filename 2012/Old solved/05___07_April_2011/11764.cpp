//11764
#include<stdio.h>
int main()
{
    int high,low,test,i,n,j,x[102]={0};
    int kase;
    while(scanf("%d",&test)==1)
    {
    kase=1;
    for(j=0;j<test;j++)
       {
       scanf("%d",&n);
          {
          for(i=0;i<n;i++)
             {
             scanf("%d",&x[i]);
             }
          high=low=0;
           
           for(i=0;i<n-1;i++)
             {
             if(x[i+1]<x[i])
             low++;
             else if (x[i+1]>x[i])
             high++;
             } 
            
          } 
         printf("Case %d: %d %d\n",kase,high,low);
         kase++;
       }
      
    }
}
