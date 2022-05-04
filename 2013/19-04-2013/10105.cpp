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
	long fact[14],i,n,k,div,r;
	fact[0]=1;
	fact[1]=1;
	for(i=2;i<14;i++)
	    fact[i]=fact[i-1]*i;
while(cin>>n>>k)
    {
    	r=fact[n];
    	for(i=0;i<k;i++)
    	   {
    	   	cin>>div;
    	   	r=r/fact[div];
    	   }
    cout<<r<<endl;
	}
}

