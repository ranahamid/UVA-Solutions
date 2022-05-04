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
int i,test,ans,first,second,temp;
cin>>test;
	//freopen("testI.txt", "r", stdin);
//freopen("testO.txt", "w", stdout);
while(test--)
   {
   ans=0;
   multiset<int>ms;
   multiset<int>::iterator pos;
   cin>>first>>second;
   for(i=0;i<first;i++)
       {
       cin>>temp;
       ms.insert(temp);
       }
       
   
   for(i=0;i<second;i++)
       {
       cin>>temp;
       pos=ms.find(temp);
       if(pos!=ms.end())
           ms.erase(pos);
       else
           ans++;                                  
       }
   printf("%d\n",ms.size()+ans);
   
   }
}



