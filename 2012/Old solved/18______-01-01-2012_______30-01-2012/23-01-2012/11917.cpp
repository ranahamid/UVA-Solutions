#include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
 int test,d,kase=0;
 cin>>test;
 while(test--)
    {
    string st;
    int sub,n,i;
    
    cin>>sub;
    map<string,int>m;
    for(i=0;i<sub;i++)
       {
       cin>>st>>n;
       m[st]=n;
       }
    cin>>d>>st;
    if(!m[st] || m[st]>d+5)
       printf("Case %d: Do your own homework!\n",++kase);
    else if(m[st]<=d)
         printf("Case %d: Yesss\n",++kase);
    else if(m[st]<=d+5)
         printf("Case %d: Late\n",++kase);
    }
}
