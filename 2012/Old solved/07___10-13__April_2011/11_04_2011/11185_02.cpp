#include<stdio.h>
int main()
{
long int ter[1000],num,i,l,mod;

while(scanf("%ld",&num)==1)
{
    if(num<0) 
    break;
    for(i=0;i<100;i++)
    {
    ter[i]=num%3;
    num=num/3;
    if (num==0) 
    {
    l=i;
    break;
    }
}

for(i=l;i>=0;i--)
{
                 ter[i-1]=ter[i]*10+ter[i-1];
                 mod=ter[i];
                 }
                 printf("%ld",mod);
printf("\n");

              
}


    return 0;
    }
