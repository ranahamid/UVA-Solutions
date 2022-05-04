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


int result[1050010];
int main()
{
int n,m,i,temp,j;
vector<int>v;

  for(i=0;i<=1050010;i++)
      result[i]=0;
      
while(cin>>n)
  {
  	cin>>m;
  	v.clear();
  	for(i=0;i<m;i++)
  	    {
  	     cin>>temp;
  	     v.push_back(temp);
  	    }
  for(i=0;i<=n;i++)
     {
     	if(result[i]==0)
     	    {
     	    	for(j=0;j<m;j++)
     	    	    {
     	    	    	if(i+v[j]<=n)
     	    	    	  {
     	    	    	  	result[i+v[j]]=1;
     	    	    	  }
     	    	    }
     	    }
     }
puts(result[n] ? "Stan wins" : "Ollie wins");
  for(i=n;i>=1;i--)
     result[i]=0;
  }

}

