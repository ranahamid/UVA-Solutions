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

#define pi 2*acos(0)


using namespace std;


int main()
{
int test,t,i,k,c,n;
cin>>test;
long long v[100048], sum;
for(t=1;t<=test;t++)
  {
	cin>>k>>c>>n>>v[0];
	for(i=1;i<n;i++)
	   v[i]=(k*v[i-1]+c)%1000007;
	sum=0;
	sort(v,v+n);
	for(i=1;i<n;i++)
	   {
	   	sum=sum+v[i]*i-v[i-1];
	   	v[i]=v[i]+v[i-1];
	   }   
	printf("Case %d: %lld\n",t,sum);
  }

}

