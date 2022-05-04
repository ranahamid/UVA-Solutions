#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>

#define pi 2*acos(0)
#define max 150

using namespace std;


int sum,track;
vector<int>v;
int node,ed,edge[max][max];
    
    
void aslonglive(int start)
{
int count=0,i,j;
int maxx=0;
for(i=0;i<node;i++)
   {
   if(edge[start][i])
       {
       if(v[i]>maxx)
          {
          maxx=v[i];
          track=i;
          count++;
          }
       }
   }
   sum=sum+maxx;
  if(count)
    aslonglive(track);
}

int main()
{
    int test,temp,i,j,a,b,t;
    cin>>test;
    
    for(t=1;t<=test;t++)
    {
  
    
    cin>>node>>ed;
    for(i=0;i<node;i++)
       {
       cin>>temp;
       v.push_back(temp);
       }
    for(i=0;i<node;i++)
       {
        for(j=0;j<node;j++)
           {
           edge[i][j]=0;
           }
       }
       
    for(i=0;i<ed;i++)
       {
       cin>>a>>b;
       edge[a][b]=1;
       }    
    sum=0;
    track=0;    
    aslonglive(0);
    printf("Case %d: %d %d\n",t,sum,track);   
    }
}
