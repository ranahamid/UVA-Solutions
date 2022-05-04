#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
long long int n,test;
cin>>test;
while(test--)
  {
  cin>>n;
  long long int ans=(long long int)(sqrt(8*n+1)-1)/2;
  cout<<ans<<endl;
  }
}
