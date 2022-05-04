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


long long mov,x,balance;
int main()
{
	int n,i;
  while(cin>>n&&n)
  {
  	mov=0;
  	balance=0;
	while(n--)
	{
	cin>>x;
	x=x+balance;
	mov=mov+abs(x);
	balance=x;
	}
  cout<<mov<<endl;	
  }
}
