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
	int test,active,times,t,n,i,k,inactive,ignore;
	cin>>test;
for(t=1;t<=test;t++)
   {
   cin>>n>>i>>k; 	
   inactive=0;
   ignore=0;
   active=0;
   while(n--)
       {
       	cin>>times;
       	if(times<active)
       	    {
       	    ignore++;// If any instructions are sent during the activation period, those will be ignored. 
       	    }
        else if(times>=active+i)
           {
           inactive++;//if it doesn’t execute any instruction for at least i microseconds, it goes into inactive state
           active=times+k;//In the event the microcontroller is inactive, it will take k microseconds to activate itself and then it will process the instruction
           }
        if(times>active)
           {
           	active=times;
           }
	   }
   printf("Case %d: %d %d\n",t,inactive,ignore);
   }
}
