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

int dp[N][N];

int ans(int n,int k)
{
	if(n<0 || k<0)
	  return 0;
	if(dp[n][k]!=-1)
	  return dp[n][k];
	else
	{
	
	  int i,res=0;
	  for(i=0;i<=n;i++)
	    {
	    	res=res+ans(n-i,k-1)%1000000;
	    }
      return dp[n][k]=res%1000000;
	}
}

int main()
{
int i,j,n,k;
for(i=0;i<N;i++)
  {
  	for(j=0;j<N;j++)
  	  {
  	  	dp[i][j]=-1;
  	  }
  }
  dp[0][0]=1;
while(cin>>n>>k&&n!=0&&k!=0)
   {
   	cout<<ans(n,k)<<endl;
   }
}
/*
set ways[1][1]=1, ways[1][2]=2, ways[1][3]=3, ......... ways[1][100]=100
set ways[1 to 100][1] = 1

and ways[i][j] = ways[i-1][j] + ways[i][j-1] (Here range of i & j [2,100])*/


