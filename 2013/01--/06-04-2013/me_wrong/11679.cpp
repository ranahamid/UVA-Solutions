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



 
int main()
{

int b,n,i,v[50],c,d,value;
while(scanf("%d%d",&b,&n)&&b!=0&&n!=0)
   {
	for(i=0;i<b;i++)
	   scanf("%d",&v[i]);
	for(i=0;i<n;i++)
	   {
	   	cin>>d>>c>>value;
	   	d--;
	   	c--;
	   	v[d]=v[d]-value;
	   	v[c]=v[c]+value;
	   }
   for(i=0;i<n;i++)
      {
      	if(v[i]<0)
      	     {
      	      break;
      	     }
      }
   if(i==n)
      cout<<"S"<<endl;
   else
      cout<<"N"<<endl;
    
   }
}
