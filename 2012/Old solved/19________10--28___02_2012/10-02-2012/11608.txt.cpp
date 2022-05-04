#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
#define max 500005
using namespace std;
int main()
{
    int problemNumber,req[13],month[13],i;
    int Case=0;
    while(cin>>problemNumber)
    {
    if(problemNumber<0)
      break;
    month[0]=problemNumber;
    for(i=1;i<=12;i++)
       cin>>month[i];
    for(i=0;i<12;i++)
       cin>>req[i];
    
    	printf ("Case %d:\n", ++Case);
    
    for(i=0;i<12;i++)
       {
       if(problemNumber>=req[i])
           {
           cout<<"No problem! :D"<<endl;
           problemNumber=problemNumber-req[i];
           }
       else
          cout<<"No problem. :("<<endl;
       
       problemNumber=problemNumber+month[i+1];
       }
    
    }
}
