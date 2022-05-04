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


int main()
{
int i,j,m,n,sum,a,b;
vector<int>v;
while(cin>>n)
   {
   for(i=0;i<n;i++)
      {
      cin>>j;
      v.push_back(j);
      }
   sort(v.begin(),v.end());
   cin>>m;
   for(i=0,j=n-1;i<j;)
      {
      sum=v[i]+v[j];
      if(sum==m)
           {
           a=i++;
           b=j--;
           // break;
           }
      else if(sum<m)
         {
         i++;
		 }
      else
         {
         j--;
		 }
      }
   printf("Peter should buy books whose prices are %d and %d.\n\n",v[a],v[b]);
   }
}
