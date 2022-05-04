//10015

#include<iostream>
#include<cstdlib>
#include<stdio.h>
#define max 33000
using namespace std;

int joseph(int n);

int value[3600];
bool prime[max];

int main()
{
    int i,j,p;
    
    int count=0;
    for(i=0;i<max;i++)
       prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    
    for(i=2;i<max;i++)
      {
      if(prime[i])
         value[count++]=i;//check this
      for( p=i*2;p<=max;p=p+i)
           prime[p]=false;
      }
    
 //for(i=2;i<max;i++)
//  printf("%d ",value[i]);
 int n;
 while(scanf("%d",&n)==1)
   {
   if(n==0)
     break;
   else
     cout<<joseph(n)<<endl;
   }
   
}

int joseph(int n)
{
     int s,i;
     s=0;
     for(i=1;i<=n;i++)
      {
      s=(s+value[n-i])%i;   //check this
      }
                     
     
     return (s+1);
}
