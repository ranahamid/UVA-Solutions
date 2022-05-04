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
    int sec,n,t,test,mile,juice,i;
    cin>>test;
    for(t=1;t<=test;t++)
      {
      cin>>n;
      mile=0;
      juice=0;
      for(i=0;i<n;i++)
         {
         cin>>sec;
         mile=mile+(sec/30)+1;
         juice=juice+(sec/60)+1;
         }
      mile=mile*10;
      juice=juice*15;
      if(mile<juice)
         printf("Case %d: Mile %d\n",t,mile);
      else if(mile>juice)
         printf("Case %d: Juice %d\n",t,juice);
      else
         printf("Case %d: Mile Juice %d\n",t,mile);      
      
      }
}
