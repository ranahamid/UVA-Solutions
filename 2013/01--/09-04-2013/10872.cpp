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

long long int n;
int main()
{
int test=1;
while(cin>>n && n)
   {
   if(n&1)
      n=n+3;
   printf("Case %d: %lld\n",test++,(n*n+24)/48);
   }
}



