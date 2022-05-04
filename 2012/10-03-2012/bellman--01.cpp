#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<limits.h>
using namespace std;

struct ed{
	int u,v;
		};

struct ed edge[100];
int start,w[100][100],node,ed,d[100];

void init()
{
for(int i=0;i<=node;i++)
  
	d[i]=INT_MAX;
d[start]=0;		
}



void relax(int u,int v)
{
if(d[v]>(d[u]+w[u][v]))
   d[v]=(d[u]+w[u][v]);
return;
}

int  bellman()
{
int i,j,u,v;
for(i=0;i<node-1;i++)
  {
for(j=0;j<ed;j++)
   {
u=edge[j].u;
v=edge[j].v;
relax(u,v);
}  
}

for(j=0;j<ed;j++)
   {
u=edge[j].u;
v=edge[j].v;
if(d[v]>(d[u]+w[u][v]))

  { 

return 1;
}
} 

return 2;
}

int main()
{
int cost,i,test;
cin>>test;
while(test--)
{
cin>>node>>ed;

start=0;
init();

for(i=0;i<ed;i++)
{
cin>>edge[i].u>>edge[i].v>>cost;
w[edge[i].u][edge[i].v]=cost;
}
int a=bellman();
if(a==1)printf ("possible\n");
else if(a==2)printf ("not possible\n");
}
}
/*
3 3

0 1 1000
1 2 15
2 1 -42
*/
