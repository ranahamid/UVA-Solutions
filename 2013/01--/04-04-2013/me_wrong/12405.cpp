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

#define pi 2*acos(0)


using namespace std;


int main()
{
int test,ok,i,t,count,n;
char st[110];
cin>>test;
for(t=1;t<=test;t++)
   {
   count=0;
   scanf("%d\n",&n);
   gets(st);
   for(i=0;st[i];i++)
       {
       ok=0;
       if(st[i]=='.')
           {
           st[i+1]='#';
		   ok=1;
		   count++; 
           }
       if(ok==0)
          {
          i++;
          }    
       }
   printf("Case %d: %d\n",t,count) 	  ;
   }
}
