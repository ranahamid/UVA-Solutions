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



int main()
{
int catalan[10] = {1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796};
int kase=0,n;
while(cin>>n)
  {
  	if(kase++)
  	   cout<<endl;
  	cout<<catalan[n-1]<<endl;
  	
  }
}

