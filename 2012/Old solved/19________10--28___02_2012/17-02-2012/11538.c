#include <stdio.h>
unsigned long long int n, m;
int main()
{
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(!n && !m) break;
		if(n > m)
		{
			printf("%llu\n",(10*m*m*m+2*m)/3-4*m*m+((((m*5)-3)*(n-m))+((n-m)-1)*(n-m))*m);
		}
		else
		{
			printf("%llu\n",(10*n*n*n+2*n)/3-4*n*n+((((n*5)-3)*(m-n))+((m-n)-1)*(m-n))*n);
		}
	}
	return 0;
}
