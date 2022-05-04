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

typedef long long int ll;
ll p,q;

ll f(ll x)
{
	if(!x)
	   return x;
	ll m=x%10;
	return (x/10)*45+(m*m+m)/2+f(x/10);
}

int main()
{
while(cin>>p>>q )
   {
	if( p<0 && q<0)
	   break;
   	cout<<f(q)-f(p-1)<<endl;
   }
}

