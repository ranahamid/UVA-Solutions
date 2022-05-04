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
	//freopen("testI.txt", "r", stdin);
//freopen("testO.txt", "w", stdout);
int n,result;
while(cin>>n && n!=0)
   {
   result=n*(n+1)*(2*n+1)/6;
   cout<<result<<endl;
   }
}

