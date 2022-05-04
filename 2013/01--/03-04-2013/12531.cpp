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

#define pi 2*acos(0)


using namespace std;


int main()
{
int ans[181]={0},i,diff,n,h_degree,m_degree;
for(i=0;i<=720;i++)
   {
	//    360/60=6
   m_degree=(6*i)%360;
   h_degree=(6*(i/12))%360;
   diff=(m_degree-h_degree+360)%360;
   if(diff>180)
      diff=360-180;
    ans[diff]=1;
   }
while(cin>>n)
   {
   if(ans[n])
      cout<<"Y"<<endl;
    else
      cout<<"N"<<endl;
   }
}
