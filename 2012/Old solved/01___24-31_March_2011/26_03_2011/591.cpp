//591
#include<stdio.h>

int main()
{
int n,x[102],i,j,set=0,mov,sum,avg;

while(scanf("%d",&n)==1)
	{
   
   if(n==0)
   break;
set++;
    sum=0;
   mov=0;
   for(i=0;i<n;i++)
   	{
      scanf("%d",&x[i]);
      sum+=x[i];
      }

   avg=sum/n;

   for(j=0;j<n;j++)
   	{
      if(avg<x[j])
       mov+=x[j]-avg;
      }

  //  printf("Set #%d\nThe minimum number of moves is %d\n",set,mov);
  printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,mov);
   }
   return 0;
}
