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

using namespace std;


double todegree(double A)
{
	return M_PI*A/180.0;
}

int main()
{
double a,b,v,A,s,ro,ra,rb,na,nb;
while(cin>>a>>b>>v>>A>>s)
{
	if(a==0&&b==0&&v==0&&A==0&&s==0)
	    break;
	ro=v*s/2.0;
	ra=ro*cos(todegree(A));
	rb=ro*sin(todegree(A));
	int na=round((ra+0.0001)/a);
	int nb=round((rb+0.0001)/b);
	printf("%d %d\n",na,nb);
}


}

