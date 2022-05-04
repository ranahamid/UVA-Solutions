#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 10001
using namespace std;

int value[max];
bool prime[max];
int ans[max];

int checkprime(int n)
{
int i;
for(i=0;i<max;i++)
   {
   if(value[i]==n)///to be improved from book --bangla
      return 1;
   else if (value[i]>n)
     return 0; 
   }
 
}


int digit(int n)
{
int sum=0;
while(n>=9)
   {
   sum=sum+n%10;
   n=n/10;
   }
return sum;
}

int prim()
{
    int i,j,p;
    int count=0;
    
    prime[0]=false;
    prime[1]=false;
    for(i=2;i<=max;i++)
      prime[i]=true;
      
    
    
    for(i=2;i<=max;i++)
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

for(i=0;i<max;i++)
   ans[i]=0;
   int sum;
  
for(i=2;i<max;i++)
   {
   if(prime[i])
       {
       sum=digit(i);
       if(checkprime(sum))
             {
             ans[i]=1;
             }
       }
   }
   
for(i=2;i<max;i++)
  ans[i]=ans[i]+ans[i-1];

}

int main()
{
prim();
int test,m,n;
cin>>test;
while(test--)
   {
   cin>>m>>n;
  cout<<ans[n]-ans[m-1]<<endl;;
   }
}

