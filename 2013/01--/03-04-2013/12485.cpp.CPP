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

#define pi 2*acos(0)


using namespace std;


int main()
{
int n,i,array[10005],ans,x,sum;

while(cin>>n)
  {
  sum=0;
  for(i=0;i<n;i++)
     {
     cin>>array[i];
     sum=sum+array[i];
     }
  ans=-1;
  if(sum%n==0)
     {
     x=sum/n;
     ans=1;
     }
  for(i=0;i<n && array[i]<x;i++)
     {
      ans=ans+x-array[i]; 
     }
  cout<<ans<<endl;
  }

}
