#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<limits.h>
using namespace std;

struct edge{
	        int u,v,cost;
		   }e[2002];
int main()
{
int test,n,m,node,edge,j,i;
cin>>test;
while(test--)
{
  cin>>node>>edge;
  
int d[1010];
  for(int i=0;i<=node;i++)
     d[i]=INT_MAX;
  d[0]=0;//starting point

  for(j=0;j<edge;j++)
         {
            cin>>e[j].u>>e[j].v>>e[j].cost;
         }
int u,v;
  for(i=0;i<node-1;i++)
    {
    for(j=0;j<edge;j++)
         {
        u=e[j].u;
        v=e[j].v;
        if(d[v]>(d[u]+e[j].cost))
            d[v]=(d[u]+e[j].cost);
         }
    }
bool negetive_cycle=false;

for(j=0;j<edge;j++)
         {
        u=e[j].u;
        v=e[j].v;
        if(d[v]>(d[u]+e[j].cost))
             {
             negetive_cycle=true;
             break;
             }
         }

if(negetive_cycle)
  cout<<"possible"<<endl;
else
  cout<<"not possible"<<endl;
}
}

