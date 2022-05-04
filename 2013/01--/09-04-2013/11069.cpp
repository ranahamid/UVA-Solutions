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


using namespace std;


int main()
{
int i,n,ans[77];
ans[1]=1;
ans[2]=2;
ans[3]=2;
for(i=4;i<77;i++)
  ans[i]=ans[i-3]+ans[i-2];
while(cin>>n)
  {
  cout<<ans[n]<<endl;
  }
}



