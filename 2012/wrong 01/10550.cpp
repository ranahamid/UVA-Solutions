#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
int test,kase=0;
int i,a,v,c,b,deg;
while(cin>>i>>a>>b>>c,i,a,b,c)
  {
  deg = 720+360 + (((a>i?(40-a)+i:(i-a)) + (b<a?(40-a)+b:(b-a)) + (c>b?(40-c)+b:(b-c))))*9;
  cout<<deg<<endl;
  }
}
