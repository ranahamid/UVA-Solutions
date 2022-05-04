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

long long int triangles[1000009],i;
int main()
{

triangles[3]=0;
for(i=4;i<=1000000;i++)
   {
    if(i&1) 
	   triangles[i] = (i-1)*(i-3)/4 + triangles[i-1];
    else 
	   triangles[i] = (i-2)*(i-2)/4 + triangles[i-1];   
   }

 while(scanf("%lld",&i) && i > 2)
        printf("%lld\n",triangles[i]);
}
