//10347
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,max,result,area;
     while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
    max=0;
    if(a>max)
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    
    if(a==0||b==0||c==0)
    printf("-1.000\n");
    
   else if((a+b+c-max)<=max)
    printf("-1.000\n");
    
    else
    {
     result=(2*(a*a*b*b+b*b*c*c+c*c*a*a))-(pow(a,4)+pow(b,4)+pow(c,4));
     area=(sqrt(result))/3;
     printf("%.3lf\n",area);   
    }    
    
    
    }
}
