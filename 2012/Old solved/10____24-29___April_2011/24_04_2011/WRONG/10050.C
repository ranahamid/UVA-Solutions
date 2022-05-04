#include<stdio.h>
int main()
{
    int day[3651];
    int m,count,d,n,i,j,k,p[101],h[101],kase,l,sum,t;
    while(scanf("%d",&kase)==1)//2
    {
    for(t=0;t<kase;t++)
    {
    for(m=0;m<3651;m++)
    day[m]=0;
    
    scanf("%d",&d);//14
    scanf("%d",&l);//3
    for(k=1;k<=l;k++)
       {
       scanf("%d",&p[k]);//3,4,8
       }
       
    for(i=1;i<=l;i++)
      {
      for(j=p[i];j<=d;j=j+p[i])
  //   for(j=3;j<=d;j=j+3)
         {
         day[j]=1;
         }
    }
    //
    /*
    sum=0;
     for(i=1;i<=d;i++)
     {
     sum=sum+day[i];
     }
    printf("%d\n",sum);
     // 
    */
     
     for(i=1;i<=d;i=i+6)
     {
      day[i]=0;               
     }
     
     for(i=1;i<=d;i=i+5)
     {
      day[i]=0;               
     }
     
    sum=0;
     for(i=1;i<=d;i++)
     {
     sum=sum+day[i];
     }
    printf("%d\n",sum);
    }
    }
  return 0;
}
