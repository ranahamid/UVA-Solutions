//369
#include<stdio.h>
double fact(double n)
       {
        if(n==0)
        return 1;
        else
        return (n*fact(n-1));
       }
       

int main()

	{
  double n,k,r;
  while(scanf("%lf%lf",&n,&r)==2)
 {
     if(n==0 && r==0)break;                            
  k=fact(n)/(fact(n-r)*fact(r));
  printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,r,k);
}
	}
