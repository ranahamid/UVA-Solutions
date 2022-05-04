///11172
#include<stdio.h>
int main()
{
    long int t,a,b,i;
    while(scanf("%ld",&t)==1)
    {
     for(i=0;i<t;i++)
       {
       scanf("%ld%ld",&a,&b);
       if(a==b)
       printf("=\n");
       else if(a>b)
       printf(">\n");
        else if(a<b)
       printf("<\n");
       }
    }
return 0;
}
