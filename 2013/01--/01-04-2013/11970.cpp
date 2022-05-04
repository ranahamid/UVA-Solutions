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


using namespace std;


int main()
{
int t,i,test,temp,n,isq;
scanf("%d\n",&test);
//freopen("testI.txt", "r", stdin);
//freopen("testO.txt", "w", stdout);

for(t=1;t<=test;t++)
  {
  cin>>n;
  stack<int>stk;
  for(i=1;(isq=i*i)<n;i++)
    {
    if( (temp=n-isq)%i==0)
        stk.push(temp);
    }
  printf("Case %d:",t);
  while(!stk.empty())
     {
     cout<<" "<<stk.top();
     stk.pop();
     }  
  cout<<endl;
  }
}
