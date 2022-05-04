//10195
#include<math.h>
#include<stdio.h>
int main()
{
    double a,b,c,s,ans;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
if(a<=0||b<=0||c<=0)
{
printf("The radius of the round table is: 0.000\n");
continue;
}
    s=(a+b+c)/2;

    ans=sqrt( ((s-a)*(s-b)*(s-c))/s);
    printf("The radius of the round table is: %.3lf\n",ans);
    
    }
}
