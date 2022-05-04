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
	double a,n,dx,dv=1.0/3;
	int m,i;
while(cin>>n && n)
  {
//  	a=(int)pow(n+eps,dv);
	m=floor(n+1e-9);
	for(i=1;(i*i*i)<=m;i++);
	
	a=i-1;
	dx=a+(n-a*a*a)/(3.*a*a);
  	//a+(n-a*a*a)/(3.*a*a);
	  // a+(n-a*a*a)/(3.*a*a);
  //	printf("%.4f\n", a + (n - a * a * a) / (3. * a * a));
    printf("%.4f\n",dx);
  }

}

