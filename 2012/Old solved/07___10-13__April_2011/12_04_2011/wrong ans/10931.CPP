//10931

#include<stdio.h>

long digit(long n)
{
     long sum=0;
     while(n>0)
     {
     sum=sum+n%10;
     n=n/10;
     }

return sum;
}

int main()
{
long  int ter[1000],num,i,l,mod;
long sum=0;
while(scanf("%ld",&num)==1)
{
    if(num<0) 
    break;
    for(i=0;i<100;i++)
    {
    ter[i]=num%2;
    num=num/2;
    if (num==0) 
    {
    l=i;
    break;
    }
}

for(i=l;i>=0;i--)
{
                 ter[i-1]+=ter[i]*10;
                 mod=ter[i];
                 }
                sum=digit(num); 

printf("The parity of %ld is %d (mod 2).\n",mod,sum);
               
}
 return 0;
}
