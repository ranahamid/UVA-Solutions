//10365
#include<stdio.h>

int main()
{
    long a,test,b,n,min,i,j,k;
    while(scanf("%ld",&test)==1)
    {
      for(a=0;a<test;a++)
        {
         scanf("%ld",&n);
         min=1000000000;

for (i=1; i*i*i<=n; i++)
		{
			for (j=i; i*j*j<=n; j++)
				{
				 if(n%(i*j))
              continue;
				k=n/(i*j);
              if(2*(i*j+i*k+j*k)<min)
              min=2*(i*j+i*k+j*k);
				}
		}

         printf("%ld\n",min);
        }
    }
}
