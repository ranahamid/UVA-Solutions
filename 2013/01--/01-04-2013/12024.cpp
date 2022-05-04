#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)
#define max 110

using namespace std;

int fact[13],dp[13];

int ncr(int n,int c)
{
return (fact[n]/(fact[n-c]*fact[c]));
}

int count(int n)
{
int i;
  if(dp[n]!=-1)
    return dp[n];
  int result=0;
  for(i=1;i<=n;i++)
    result=result+ncr(n,i)*count(n-i);
  dp[n]=fact[n]-result;
  return dp[n];
}


int main()
{
int test,n,i;
cin>>test;
//freopen("testI.txt", "r", stdin);
//freopen("testO.txt", "w", stdout);

fact[0]=1;
for(i=1;i<=13;i++)
   {
   fact[i]=i*fact[i-1];
   dp[i]=-1;
   }
dp[0]=1;
dp[1]=-1;

while(test--)
   {
   cin>>n;
   printf("%d/%d\n",count(n),fact[n]);                            
      
   }
}



