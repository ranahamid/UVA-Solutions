#include<stdio.h>
#include<stdlib.h>
int main()
{
    long a,b;
    while(scanf("%ld%ld",&a,&b)==2)
    {
    long c=a^b;
    printf("%ld\n",c);
    }
    system("PAUSE");
}


/*
wrong 
#include<stdio.h>
#include<stdlib.h>
int main()
{
   unsigned long a,b,c;
    while(scanf("%uld%uld",&a,&b)==2)
    {
    c=a^b;
    printf("%uld\n",c);
    }
    system("PAUSE");
}
*/