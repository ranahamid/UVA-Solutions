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


using namespace std;


int main()
{
int l,w,h,theta;
double d,ans;
while(cin>>l>>w>>h>>theta)
   {
   	d=l*tan((pi*theta)/180.0);
   	if(d>h)
   	   ans=0.5*h*h*l*w/d;
   	else
   	   ans=l*w*(h-(d/2.0));
   	printf("%.3lf mL\n",ans);
   }
}
