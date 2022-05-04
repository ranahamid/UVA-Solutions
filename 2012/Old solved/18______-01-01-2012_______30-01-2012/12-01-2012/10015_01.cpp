#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 32677
using namespace std;
int value[3600];
bool prime[32767];

int joseph(int n);

int main()
{
    int i,j,p;
    int count=0;
    for(i=0;i<=max;i++)
      prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    
    for(i=0;i<=max;i++)
     {
     if(prime[i])
       {
       value[count++]=i;
       for(p=i*2;p<=max;p=p+i)
         {
         prime[p]=false;
         }
       }                  
     }
     
 //    for(i=1;i<=100;i++)
  //   cout<<value[i]<<" "; 
  int n;
  while(cin>>n)
    {
               if(n==0)
               break;
               else
               cout<<joseph(n)<<endl;
    }
     
     system("PAUSE");
}

int joseph(int n)
{
    int i,s;
    s=0;
    for(i=1;i<=n;i++)
      {
      s=(s+value[n-i])%i;  //check this
      }
    return (s+1);
}
