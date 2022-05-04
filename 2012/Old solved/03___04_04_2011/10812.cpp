//10812
#include<stdio.h>
int main()
{
    int c,a,b,s,d,i;
    while(scanf("%d",&c)==1)
    {
    for(i=0;i<c;i++)
    {
    scanf("%d%d",&s,&d);
    a=s+d;
    b=s-d;
   
     if((a%2)||(b%2)||(b<0))
    printf("impossible\n");
    else
    printf("%d %d\n",a/2,b/2);
    }
}
return 0;
}
