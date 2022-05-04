#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define max 10010
using namespace std;

int res[max];
int main()
{
    int i,j,n;
   for(i=0;i<max;i++)
       res[i]=4;
  
    for(i=1;i*i<=10000;i++)
       res[i*i]=1;
    res[0]=0;
    
    for(i=1;i<=10000;i++)
      {
      for(j=1;j<=i;j++)
          {
          if(res[j]==1)
               {
               res[i]=min(res[i],1+res[i-j]);
               }
          }
      }
    
    int test;
    cin>>test;
    while(test--)
    {
    cin>>n;
    cout<<res[n]<<endl;               
    }
}
