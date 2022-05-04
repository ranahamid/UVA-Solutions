#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
#define max 1000001
using namespace std;

int prime[max];
void sieve()
{
int i,j;
prime[0]=0;
prime[1]=0;
for(i=2;i<max;i++)
    prime[i]=1;

for(i=2;i<max;i++)
   {
   if(prime[i])
          {
          for(j=i*2;j<max;j=j+i)
              prime[j]=0;
          }
   }

}

int main()
{
    int n,count;
while(cin>>n,n)
   {
   sieve();
   count=0;
   if(prime[n]==1)
       count=1;
   else
       {
       for(int i=2;i<=n/2;i++)
               {
               if( (prime[i]==1) && (n%i==0) )
                   count++;
               }
       }
   printf("%d : %d\n",n,count);
   }
}
