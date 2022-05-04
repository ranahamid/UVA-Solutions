#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
int u,v,i,j;
while(cin>>i>>j>>u>>v)
{
if(i==0&&j==0&&u==0&&v==0)
break;
  cout << ( (i == u && j == v) ? 0 : (i == u || j == v || abs(i - u) == abs(j - v)) ? 1 : 2 ) << endl;
}
}
