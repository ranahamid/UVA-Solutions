//10327
#include<stdio.h>
int main()
{
	int kase,t[52],i,j,swap,temp,lenth,k;

	while(scanf("%d",&lenth)==1)
 {
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
			printf("Minimum exchange operations : %d\n",swap);
			}
	
	return 0;
}
