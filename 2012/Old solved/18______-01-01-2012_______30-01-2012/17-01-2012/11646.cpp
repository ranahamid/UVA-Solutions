#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int a,b;
double p,q,w,l;
int count=1;
while(scanf("%d : %d",&a,&b)==2)
  {
  if(a==0&&b==0)
    break;
  p=(double)(acos((double)(a*a-b*b)/(a*a+b*b)));
  q=400/(2*a+(p*(sqrt(a*a+b*b))));
  l=a*q;
  w=b*q;
  printf("Case %d: %.10lf %.10lf\n",count,l,w);
  count++;
  }
}
