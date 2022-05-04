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
long long ans[62];

int main()
{

int n,i,test;

ans[1]=1;
ans[2]=1;
ans[3]=1;

for(i=4;i<62;i++)
  ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
  
//cout<<ans[4]<<endl;
test=1;

while(cin>>n&&n!=0)
  {
  printf("Case %d: %lld\n",test++,ans[n]);
  }
}
