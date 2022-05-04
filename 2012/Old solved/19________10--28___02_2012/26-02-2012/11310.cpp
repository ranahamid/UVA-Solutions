#include <stdio.h>
#include<iostream>
using namespace std;

unsigned long long int res[50];
void func()
{
int i;
res[0]=1;
res[1]=1;
res[2]=5;
for(i=3;i<=45;i++)
   {
   res[i] = res[i-1] + 4*res[i-2] + 2*res[i-3];
   }
}

int main()
{
func();
int n,test;
cin>>test;
while(test--)
  {
  cin>>n;
  cout<<res[n]<<endl;
  }
}
