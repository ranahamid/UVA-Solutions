#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>


#define pi 2*acos(0)

#define N 128
#define eps 1e-6
using namespace std;



int main()
{
double x1,y1,x2,y2,xm,ym,a,b,c,d;

while(cin>>x1>>y1>>x2>>y2)
   {
	xm=(x1+x2)/2.0;
	ym=(y1+y2)/2.0;
	
	a=xm-ym+y1;
	d=-xm+ym+x1;
	
	b=xm+ym-x1;
	c=xm+ym-y1;   	
	
   printf("%.10lf %.10lf %.10lf %.10lf\n",a,b,c,d);
   }
}

