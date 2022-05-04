#include<stdio.h>
int main()
{
    int temp,i,j,n,pl[10],mid,k,kase;
    while(scanf("%d",&kase)==1)
    {
    for(k=1;k<=kase;k++)
    {
    scanf("%d",&n);                        
    for(i=0;i<n;i++)
    scanf("%d",&pl[i]);
    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       {
       if(pl[j]>pl[j+1])
             {
             temp=pl[j];
             pl[j]=pl[j+1];
             pl[j+1]=temp;
             }
       }
       //
 // for(i=0;i<n;i++)
 // printf("%d ",pl[i]);  
 //
  mid=(int) n/2;
  printf("Case %d: %d\n",k,pl[mid]);
}
    }
}
