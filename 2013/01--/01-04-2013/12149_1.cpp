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


int main()
{
int n,i;
while(scanf("%d",&n) && n)
{
long long int j,sum=0;
for(i=1;i<=n;i++)
{
j=i*i;
sum+=j;
}
printf("%lld\n",sum);
}
return 0;
}

