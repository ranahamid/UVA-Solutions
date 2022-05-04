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
int bed,i,j,b,cost,price,n,h,w,z;
while(cin>>n>>b>>h>>w)
   {
   cost=1<<30;
   for(i=0;i<h;i++)
       {
       bed=-1;
       cin>>price;
       for(j=0;j<w;j++)
          {
          	cin>>z;
          	if(z>bed)
          	    {
          	     bed=z;
          	    }
          }
       if(bed>=n && price*n<=b && price<cost )  
	       {
	       	cost=price;
	       } 
       }
    if(cost==1<<30)
	  cout<<"stay home"<<endl;   
    else
      cout<<cost*n<<endl;
   }
}
