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

long long res = 0;
   
long long H(int n)
{
   for( int i = 1; i <= n; i++ )
   {
   res+= n/i;
   }
   return res;
}

 

int main()
{
	int test,t,n;
	cin>>test;
while(test--)
   {
   cin>>n;
   cout<<H(n)<<endl; 	
   }
}
