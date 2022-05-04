#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int test,kase=0;
double after,b,s,before;
cin>>test;
while(test--)
   {
             
   int min=999999999;
   int bus,h1,m1,h2,i,m2,current,dur,arrival,time;
   scanf("%d%d:%d",&bus,&h1,&m1);
        current=h1*60+m1;
   for(i=0;i<bus;i++)
        {
        scanf("%d:%d%d",&h2,&m2,&dur);
             arrival=h2*60+m2;
        if(current>arrival)
              time=1440-current+arrival+dur;
        else 
              time=-current+arrival+dur;
        if(time<min)
             min=time;
        }
   printf("Case %d: %d\n",++kase,min);
   }
}
