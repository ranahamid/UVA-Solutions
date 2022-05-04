#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 10001
using namespace std;
int value[10001];
bool prime[10001];



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
  int n,test,k;
  cin>>test;
  while(test--)
    {
    cin>>n;
    k=n/2+1;
    for(i=0;i<max;i++)
        {
        if(value[i]>=k)
              {
              cout<<value[i]<<endl;
              break;
              }
        }
    }
}
