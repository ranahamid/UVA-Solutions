//10110
#include<stdio.h>
#include<math.h>

int main()
{
long int r;
 double num,root;

while(scanf("%lf",&num)==1)
	{
	if(num==0)
	break;

	r=sqrt(num);
	root=pow(r,2);

	if(root==num)
	printf("yes\n");
	else
	printf("no\n");
	}
return 0;
}
