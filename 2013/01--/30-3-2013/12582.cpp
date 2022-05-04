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
  set<char>s;
  set<char>::iterator pos;
  
  for(i=0;i<st.size();i++)
     s.insert(st[i]);
  
  printf("Case %d\n",t);
  for(pos=s.begin();pos!=s.end();pos++)
     {
     printf("%c = %d\n",*pos,m[*pos]);
     }
    
  }
}

