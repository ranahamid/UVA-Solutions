//438
#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793
int main()
{
 double x1,x2,y1,y2,x3,y3;
 double i,j,s,a,b,c,r;
 double cir;
 while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
 {

 a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
 b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
 s=(a+b+c)/2;

r=a*b*c/(4*sqrt((s*(s-a)*(s-b)*(s-c))));
cir=2*pi*r;
printf("%.2lf\n",cir);
}
}
