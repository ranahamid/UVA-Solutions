#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int test,kase=0;

cin>>test;
int h1,m1,h2,m2,time;
while(test--)
   {
   scanf("%d:%d",&h1,&m1);
   time=h1*60+m1;
   if(time>720)
      time=time-720;
   else
      time=720-time;
   
   h2=time/60;
   m2=time%60;
   if(h2==0)
      h2=12;
   if(h2>9)
       cout<<h2<<":";
   else
       cout<<"0"<<h2<<":"; 
    if(m2>9)
       cout<<m2<<endl;
   else
       cout<<"0"<<m2<<endl;
   }
}
