//11479
#include<stdio.h>
int main()
{
    long a,b,c,t,i,max;
    while(scanf("%ld",&t)==1)
    
    {
    for(i=0;i<t;i++)
    {
    scanf("%ld%ld%ld",&a,&b,&c);    
    max=0;
    if(a>max) max=a;            
    if(b>max) max=b;
    if(c>max) max=c;
    
    if ((a+b+c-max)<=max)
    printf("Case %d: Invalid\n",i+1);
    else if(a==b&&b==c)
    printf("Case %d: Equilateral\n",i+1);
    else if(a==b||a==c||b==c)
    printf("Case %d: Isosceles\n",i+1);
    else if(a!=b&&a!=c&&b!=c)
    printf("Case %d: Scalene\n",i+1);
    }
    
    }
}
