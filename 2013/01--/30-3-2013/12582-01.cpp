#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>

#define pi 2*acos(0)
#define max 100

using namespace std;


int main()
{
int t,test,k,n,i;
string st;

cin>>test;
for(t=1;t<=test;t++)
  {
  cin>>st;
  stack<char>stk;
  map<char,int>m;
  stk.push(st[0]);
  for(i=1;i<st.size();i++)
     {
     if(stk.top()==st[i])
         stk.pop();
     else
         {
         m[stk.top()]++;
         stk.push(st[i]);
         m[stk.top()]++;
         }
     }
  sort(st.begin(),st.end());
  st.erase(unique(st.begin(),st.end()),st.end());
  
  printf("Case %d\n",t);
  for(i=0;i<st.size();i++)
     {
     printf("%c = %d\n",st[i],m[st[i]]);
     }
    
  }
}

