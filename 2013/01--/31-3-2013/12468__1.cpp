#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
   int a,b,maxx,minn,res1,res2,result;
   while(scanf("%d%d",&a,&b)&& a>=0 && b>=0)
   {
   maxx=max(a,b);
   minn=min(a,b);
   res1=maxx-minn;
   res2=100+minn-maxx;
   result=min(res1,res2);
   cout<<result<<endl;
   }
}
