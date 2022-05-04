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
#define eps 1e-6
using namespace std;



int main()
{
//	freopen("1.txt", "r", stdin);
//	freopen("2.txt", "w", stdout);
int len,total=0,max=0,i,j;
char st[105][105];
for(i=0;i<105;i++)
{
	for(j=0;j<105;j++)
	{
		st[i][j]=' ';
	}
}
while(gets(st[total]))
   {
   total++;
   }
for(i=0;i<total;i++)
  {
  	len=strlen(st[i]);
  	st[i][len]=' ';
  	if(len>max)
  	   max=len;
  }
for(i=0;i<max;i++)
   {
   	for(j=total-1;j>=0;j--)
   	  {
   	  	printf("%c",st[j][i]);
   	  }
   printf("\n");
   }
}

