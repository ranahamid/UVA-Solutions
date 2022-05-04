#include<iostream>
#include<cstdlib>
#define max 100
#define inf 9999999
using namespace std;

struct ed
{
int u,v;
};
struct ed st_edge[100];

int d[max],edge,node,st=0,w[max][max];

void initialize()
{
     int i;
     for(i=0;i<node;i++)
         d[i]=inf;
     d[st]=0;
}
void relax(int u,int v)
{
  if(d[v]>(d[u]+w[u][v]))
         d[v]=(d[u]+w[u][v]);
}

int bellman()
{
int i,j,u,v;
for(i=0;i<node-1;i++)
   {
   for(j=0;j<edge;j++)
        {
        u=st_edge[j].u;
        v=st_edge[j].v;
        relax(u,v);
        }
   }
for(j=0;j<edge;j++)
        {
        u=st_edge[j].u;
        v=st_edge[j].v;
        if(d[v]>(d[u]+w[u][v]))
                {
                return 1 ;
                }
        }

return 0;
}


int main()
{
int i,j,u,v,cost,test;
cin>>test;
while(test--)
{
cin>>node>>edge;
//starting point;
initialize();
for(i=0;i<edge;i++)
     {
     cin>>st_edge[i].u>>st_edge[i].v>>cost;
     w[st_edge[i].u][st_edge[i].v]=cost;
     }
if(bellman())
	printf("possible\n");
		else
			printf("not possible\n");

}
}/*
5 10

1 2 6
1 3 7
2 5 5
2 3 8
2 4 -4
3 4 9
3 5 -3
4 1 2
4 5 7
5 2 -2



*/
/*
5 10
1
1 2 6
1 3 7
2 5 5
2 3 8
2 4 -4
3 4 9
3 5 -3
4 1 2
4 5 7
5 2 -6



*/

