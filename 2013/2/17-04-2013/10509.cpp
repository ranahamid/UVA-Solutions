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
	double n,dx,dv=1.0/3;
	int a;
while(cin>>n && n)
  {
  	a=(int)pow(n+eps,dv);
  	dx=(n-a*a*a)/(3*a*a);
  	printf("%.4f\n",a+dx);
  }

}

