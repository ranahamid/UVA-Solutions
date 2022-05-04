//299
#include<stdio.h>
int main()
{
	int kase,t[52],i,j,swap,temp,lenth,k;

	while(scanf("%d",&kase)==1)
 {
	for(k=1;k<=kase;k++)
		{
		scanf("%d",&lenth);
		for(i=1;i<=lenth;i++)
			{
			scanf("%d",&t[i]);
			}


		swap=0;
		
		for(i=1;i<=lenth;i++)
			{
			for(j=1;j<=lenth;j++)
				{
					if((t[j]>t[j+1]) && j!=lenth)
						{
						temp=t[j];
						t[j]=t[j+1];
						t[j+1]=temp;
						swap++;
						}
					}
				}
			printf("Optimal train swapping takes %d swaps.\n",swap);
			}
		}
	return 0;
}
