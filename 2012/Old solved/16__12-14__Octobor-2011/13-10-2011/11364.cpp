#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    
    int i,j,test,k,n,start,end;
    while(scanf("%d",&test)==1)
    {
    for(i=0;i<test;i++)
       {
       vector<int>v;
       scanf("%d",&n);
       for(j=0;j<n;j++)
          {
          scanf("%d",&k);
          v.push_back(k);
          }
       sort(v.begin(),v.end());
       start=v[0];
       end=v[n-1];
       printf("%d\n",(end-start)*2);   
       }
    }
}
