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
int n,last,i;
while(cin>>n)
  {
  	last=1;
  	for(i=1;i<=n;i++)
  	   {
  	   	last=last*i;
  	   	while(!(last%10))
  	   	     {
  	   	     last=last/10;
			 }
  	   	if(last>20000)
  	   	   last=last%20000;
  	   }
  	printf("%5u -> %d\n",n,last%10);
  }
}

