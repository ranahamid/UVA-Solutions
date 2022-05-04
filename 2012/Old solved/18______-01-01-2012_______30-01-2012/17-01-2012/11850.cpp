//11850
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
int kase,n,a[1500],i;
while(cin>>n)
  {
  if(n==0)
     break;
   for(i=0;i<n;i++)
     cin>>a[i];
   int possible=1;
   sort(a,a+n);
   
   for(i=1;i<n;i++)
     if(a[i]-a[i-1]>200)
        possible=0;
   if(2*(1422-a[n-1])>200)
      possible=0;
      
   if(possible==1)
     cout<<"POSSIBLE"<<endl;
   else
     cout<<"IMPOSSIBLE"<<endl;
  }
}
