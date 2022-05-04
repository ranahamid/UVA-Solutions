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

using namespace std;

string bin(int n)
{
	if(n==-1)
	  return "11";
	else if(n==1)
	  return "1";
	else if(n==0)
	  return "0";
	if(n%2==0)
	   return bin(n/-2)+"0";
	else
	   return bin((n-1)/-2)+"1";
}

long long int n;

int main()
{
int t,test;
cin>>test;
for(t=1;t<=test;t++)
  {
  	cin>>n;
  cout<<"Case #"<<t<<": "<<bin(n)<<endl;
  }

}

