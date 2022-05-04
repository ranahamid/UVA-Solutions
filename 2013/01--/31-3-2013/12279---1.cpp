#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

//freopen("input.txt","r",stdin);
int t,c=0;
while(cin>>t&&t!=0)
{ c++;
vector<int>v;

for(int i=0; i<t; i++)
{
int tmp;
cin>>tmp;
v.push_back(tmp);
}

int count=0,sm=0;

for(int i=0; i<v.size(); i++)
{
if(v[i]==0)
{
count++;
}
}

sm= ( t - count) -count;


printf("Case %d: %d\n",c,sm);


}
}

