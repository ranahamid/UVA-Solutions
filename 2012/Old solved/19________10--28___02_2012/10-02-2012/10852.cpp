
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;

int Isprime(int k)
{
int i;
for(i=2;i*i<=k;i++)
    {
    if(k%i==0)
      return 0;
    }
return 1;
}

int main()
{
int test,n;
cin>>test;
while(test--)
   {
   cin>>n;
   int k=(n/2)+1;
   while(true) 
       {
       if(Isprime(k))
            {
            cout<<k<<endl;
            break;
            }
       k++;
       }
       
   }
}
