//10038
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n,x[3001],diff[3000],temp,mn,pp;
    while(scanf("%d",&n)==1)
    {
    for(i=1;i<=n;i++)
    scanf("%d",&x[i]);
  
    
    for(i=1;i<=n;i++)
    {
    diff[i]=abs(x[i]-x[i+1]);
    }   
     
     
     for(i=1;i<n;i++)
     {
     for(j=1;j<n;j++)
     {
     if(diff[j]>diff[j+1])
         {
         temp=diff[j];
         diff[j]=diff[j+1];
         diff[j+1]=temp;
         }
         }
     }  
    mn=0;
    
     for(i=1;i<n;i++)
         {
         if (diff[i]!=i)
         mn++;
         } 
         
    if(mn==0)
    printf("Jolly\n");   
    else
    printf("Not jolly\n");  
    }
}
