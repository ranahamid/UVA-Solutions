#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)
#define max 110

using namespace std;


int main()
{
	//freopen("testI.txt", "r", stdin);
//freopen("testO.txt", "w", stdout);
int i,n,result,t,test,a,b,c,d,a1,a2,b1,b2,c1,c2,d1,d2;
cin>>test;
for(t=1;t<=test;t++)
   {
   scanf("%2d:%2d %2d:%2d %2d:%2d %2d:%2d",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2);
   a=a1*60+a2;
   b=b1*60+b2;
   c=c1*60+c2;
   d=d1*60+d2;
   if(a>d|b<c)
      printf("Case %d: Hits Meeting\n",t);
   else
       printf("Case %d: Mrs Meeting\n",t);
   
   }
}

