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
int test,t,i,k,c,n,j;
cin>>test;
int freq[101];
for(t=1;t<=test;t++)
  {
	cin>>n;
	
	for(i=0;i<=100;i++)
	   {
	   freq[i]=0;
	   }
	   
	for(i=0;i<n;i++)
	   {
	    for(j=0;j<n;j++) 
	      {
	       cin>>k;
	       freq[k]++;
	      }
	   }
	bool grid=true;
	for(i=0;i<n;i++)
	   {
	   if(freq[i]>n)
	       {
	       grid=false;
	       break;
	       }
	   }
   if(grid)
     printf("Case %d: yes\n",t);
   else
	   printf("Case %d: no\n",t);
  }
}
