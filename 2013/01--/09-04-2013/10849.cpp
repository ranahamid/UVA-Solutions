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
int test,k,i,sq,n,x1,y1,x2,y2,moves,d11,d12,d21,d22;
cin>>test;
while(test--)
   {
   cin>>n>>sq;
   for(i=0;i<n;i++)
       {
       cin>>x1>>y1>>x2>>y2;
       
	   d11=x1+y1;
       d12=x1-y1;
           
       d21=x2+y2;
       d22=x2-y2;
       if( (d11&1)!=(d21&1) || (d11&1)!=(d21&1)) 
             cout<<"no move"<<endl;
//       if((d11 & 1) != (d21 & 1) || (d12 & 1) != (d22 & 1)) 
//	       puts("no move");
            
       else 
           {      
	       if(x1==x2 && y1==y2)
           	  moves=0;
           else
              moves=2-(d11==d21)-(d12==d22);
           cout<<moves<<endl;
		   }
	   }
   }
}



