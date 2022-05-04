//10432

#include<math.h>
#include<stdio.h>
int main()
{
    double r,b,n,area;
    while(scanf("%lf%lf",&r,&n)==2)
    {
    b=sin((2*3.14159265358979)/n);
    area=(r*r*n*b)/2;
    printf("%.3lf\n",area);
    }
}
