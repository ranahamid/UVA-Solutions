#include <stdio.h>
#include <stdlib.h>
typedef struct Edge
{
	int s,t,w;
}wormhole;

wormhole map[2200];
int d[1100];
char solve(int n,int e)
{
	int i,j;
	d[0] = 0;
	for(i=0;i<n-1;i++)
		for(j=0;j<e;j++)
			if(d[map[j].s] + map[j].w < d[map[j].t])
				d[map[j].t] = d[map[j].s] + map[j].w;
	for(j=0;j<e;j++)
			if(d[map[j].s] + map[j].w < d[map[j].t])
				return 1;
	return 0;
}
int main()
{
	int c,n,m,i;
	int top = 0;
	scanf("%d",&c);
	while(c-->0)
	{
		top = 0;
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
			d[i] = 1<<20;
		for(top=0;top<m;top++)
			scanf("%d %d %d",&map[top].s,&map[top].t,&map[top].w);
		if(solve(n,top))
			printf("possible\n");
		else
			printf("not possible\n");

	}
	return 0;
}
