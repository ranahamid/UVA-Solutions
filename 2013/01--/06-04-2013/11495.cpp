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
int n,i,temp,winner;
vector<int>v;
while(cin>>n&&n!=0)
{

v.clear();
v.push_back(0);//no need
for(i=0;i<n;i++)
   {
   cin>>temp;
   v.push_back(temp);
   }
winner=1;
for(i=1;i<=n;)
   {
   	if(v[i]!=i)
   	   {
   	   	temp=v[i];
   	   	v[i]=v[v[i]];
   	   	v[temp]=temp;
   	   	winner=!winner;
   	   }
   	else
   	  i++;
   }    	
if(winner)
  cout<<"Carlos"<<endl;
else
 cout<<"Marcelo"<<endl;
 
}
}
