//10370 
#include<stdio.h>
#include<math.h>
int main()
{
long double avo,avg,sum,a;
int n,j,k,kase,x[1001];
while(scanf("%lf",&kase)==1)
	{
    for(int i=1;i<=kase;i++)
    {
	scanf("%d",&n);
	sum=0;
	
	for(j=0;j<n;j++)
	  {
	  scanf("%d",x[j]);
	  sum+=x[j];
	  }
	  
	 avg=sum/n;
	avo=0;
	 for(k=0;k<n;k++)
	   {
  if(x[k]>avg) 
  avo++;
	   }
	  
	   a=(avo/n)*100;

	printf("%.3lf%c\n",a,37);
       }
	}
	return 0;
}
