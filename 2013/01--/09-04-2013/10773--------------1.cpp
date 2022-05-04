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

#define N 128

using namespace std;




int main()
{
int test,t;
cin>>test;

double d,v,u,ans;
for(t=1;t<=test;t++)
  {
  cin>>d>>v>>u;
  if(u>=v && u &&v)
     
     printf("Case %d: %.3lf\n",t,(d/sqrt(u*u-v*v))-(d/u));
     	
  else 
     cout<<"can't determine"<<endl;
  }

}

