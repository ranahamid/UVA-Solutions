#include<stdio.h>

int main()
{
	long n,m,i,temp,digit,two;

	while(2==scanf("%ld%ld",&n,&m))
	{
		two=0;
		digit=1;
		for (i=n-m+1; i<=n; i++)
		{
			temp=i;
			while(temp%2==0)
			{
				temp=(temp>>1);
				two++;
			}
			while(temp%5==0)
			{
				temp=temp/5;
				two--;
			}
			digit=(digit*temp)%10;
		}

		for (i=1; i<=two; i++)
			digit=(digit<<1)%10;
		if (two<0)
			digit=5;

		printf("%ld\n",digit);
	}
	return 0;
}
