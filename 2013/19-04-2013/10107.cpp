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
	int n,k=0;
	int v[10100];
while(cin>>v[k])
  {	
  k++;
  	if(k>1)
	   if(v[k-1]<v[k-2])
  	       sort(v,v+k);
  	if(k&1)
  	    cout<<v[k/2]<<endl;
  	else
  	    cout<<((v[k/2-1]+v[k/2])/2)<<endl;
  
  
  	
  }
}

