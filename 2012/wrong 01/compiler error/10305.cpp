#include<iostream>
#include<cstdlib>
#include<list>

#define max 100
using namespace std;


list<int>linklist;

int link[max][max],color[max]={0},node;


int   DFS(int u)
{
int i,j;
color[u]=1;
for(i=1;i<=node;i++)
   {
   if(link[u][i]==0 || color[i]==1) 
      continue;
     DFS(i);
   }
linklist.push_front(u);
}


int main()
{
int i,j,edge,u,v;
while(cin>>node>>edge)
{
if(node==0 && edge==0)
    break;
while(edge--)
    {
    cin>>u>>v;
    link[u][v]=1;
    }
for(i=1;i<=node;i++)
    {
    if(color[i]==0)
        DFS(i);
    }

list<int>::iterator p;

for(p=linklist.begin();p!=linklist.end();p++ )
   {
   int u=*p;
   cout<<u<<" ";
   }
cout<<endl;
}
}

/*
9 8

1 2
2 3
1 8
2 8
3 6
4 3
4 5
7 8

*/

