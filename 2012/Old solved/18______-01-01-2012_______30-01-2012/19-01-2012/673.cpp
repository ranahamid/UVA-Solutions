#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#define pi 2*acos(0)
using namespace std;

int main()

{
int t,test,i,j,n;
char ar[150];
scanf("%d\n",&test);
for(t=0;t<test;t++)
  {
  stack<char>s;
  gets(ar);
  bool k=true;
  int len=strlen(ar);
  
  for(i=0;i<len;i++)
     {
     if(ar[i]=='(' || ar[i]=='[')
       s.push(ar[i]);
     else
        {
        if(s.empty())
           {
           k=false;
           break;
           }
        if(ar[i]==')')
           {
           if(s.top()=='(')
             s.pop();
           else
               {
               k=false;
               break;
               }
           }
           
           else//if(ar[i]==']')
              {
              if(s.top()=='[')
                  s.pop();
              else
                  {
                  k=false;
                  break;
                  }
              } 
                        
           }
       
        
    
         
     }
      if(len==0)
     cout<<"Yes"<<endl;
     else
         {
         if(!s.empty())
         cout<<"No"<<endl;
         else if(k==true)
            cout<<"Yes"<<endl;
         else
             cout<<"No"<<endl;
         }     
  }
}
