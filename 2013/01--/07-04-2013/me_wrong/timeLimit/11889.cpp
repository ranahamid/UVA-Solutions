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


typedef long long ll;


ll gcd(ll a,ll b)
{

 if (b==0)
    return a;
  else
       return gcd(b,a%b);
}

ll lcm(ll a, ll b)
{
return (a*b)/gcd(a,b);
}

ll a,b,c,i;
int main()
{
	int test;
cin>>test;
while(test--)
  {
  cin>>a>>c;	
  if(c%a)
     cout<<"NO SOLUTION"<<endl;
  else
     {
     b=c/a;
	 for(i=b;i<=1000009;i=i+b)
	     {
	     if(c%i==0)
	         break;
	     }	
     cout<<i<<endl;
	 }
  }
}
