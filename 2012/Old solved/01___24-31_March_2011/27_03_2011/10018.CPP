//10018
#include <stdio.h>
long int reverse(long int  n)
{
    long  int sum=0;
while(n>0)
     {
     sum=sum*10+n%10;
     n=n/10;
     }
     return sum;
}


int main(int argc, char *argv[])
{
    long  int tot,i,iter,n,sum=0,sum1=0,x=0;

while(scanf("%ld",&tot)==1)
{
  for(i=1;i<=tot;i++)
  {
  iter=0;
    scanf("%ld",&n);

    for(;;)
    {
 sum1=reverse(n);
 if (sum1==n)
  break;
 else
 n=n+sum1;
 iter++;
    }

    printf("%ld %ld\n",iter,sum1);
}
   }
   return 0;

}
