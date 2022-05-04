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
double a,a1,a2,a3;
while(scanf("%lf",&a)!=EOF)
  {
  	a=a*a;
   a1 = 0.315146743627720*a;
        a2 = 0.511299166334351*a;
        a3 = 0.173554090037927*a;
  	printf("%.3lf %.3lf %.3lf\n",a1,a2,a3);
  }
}

