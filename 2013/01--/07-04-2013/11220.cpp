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


char *token,st[110],input[10000];
int test,t;
char line[2];

int main()
{

cin>>test;
   	gets(line);
   	gets(line);
for(t=1;t<=test;t++)
   {
   	printf("Case #%d:\n",t);
   	
   	while(gets(input) && input[0])
   	{
   	token=strtok(input," ");
   	int pos=0,k=0;
	while(token!=NULL)
   	   {
   	   	if(strlen(token)>pos)    
   	   		{
			st[k++]=*(token+pos);
   	   	    pos++;
			}
		token=strtok(NULL," ");
	   }
   	st[k]=0;
   	puts(st);
   }
  if(t!=test)
     cout<<endl;
  }
   
}
