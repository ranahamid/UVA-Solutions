#include<stdio.h>
#include<stdlib.h>

int main()
{
int kase,i,j,r,dis[40000],min,temp,rr,k,d,t;
 
 
 
 
  while(scanf("%d",&t)==1)
    {
    for(i=1;i<=t;i++)
    {
    scanf("%d",&r);
    for(j=1;j<=r;j++)
    {
    scanf("%d",&dis[j]);
    }

 
 
 
   for(j=1;j<=r;j++)
    {
    for(k=1;k<r;k++)
    {
    if(dis[k]>dis[k+1])
    {
    temp=dis[k];
   dis[k]=dis[k+1];
    dis[k+1]=temp;
    }
    }
    }
    

 for(j=1;j<=r;j++)
    {
    d=0;
    for(k=1;k<=r;k++)
    {
    d+=abs(dis[k]-dis[j]);
    }
    if(j==1)
    min=d;
    if(d<min)
    min=d;
    }



  printf("%d\n",min);
     
  }                         
}
return 0;
}
