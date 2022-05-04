#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
#define max 500005
using namespace std;

int main()
{
int n;
int i,des[max],a,b;

while(cin>>n)
  {
   if(n==0) 
      break; 
    memset(des,0,1000);
   for(i=0;i<n;i++)
      {
      cin>>a>>b;
      des[a]--;
      //cout<<"des[a]--;"<<des[a]<<" ";
      des[b]++;
    //  cout<<"des[b]--;"<<des[b]<<endl;
      }
   bool flag=true;
   for(i=1;i<=n;i++)
      {
      if(des[i]!=0)
         {
         flag=false;
         break;
         }      
      }
   if(flag==true)
      cout<<"YES"<<endl;
   else
        cout<<"NO"<<endl;
  }
}
