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
#define maxx 150

using namespace std;


int main()
{
    int i,n,temp;
    int kase=0;
    vector<int>v;
    while(scanf("%d",&n) & n!=0)
      {
      int count=0;
      for(i=0;i<n;i++)
          {
          cin>>temp;
          if(temp)
             count++;
          else
              count--;
          }
      kase++;
      printf("Case %d: %d \n",kase,count);

      }
}
