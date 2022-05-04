#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
#define max 500005
using namespace std;

int main()
{
    int n,test,i,j,a,b,ans,big,k;
    cin>>n;
    
     
     for(i=0;i<n;i++)
        {
        cin>>a>>b;
        ans=a;
        big=0;
        
        for(j=a;j<=b;j++)
        {
        int count=0;
        int temp=(int)sqrt(j);
        for(k=1;k<=temp;k++)
          {
          if(j%k==0)
               count++;
          }
        count=count*2;
        if(temp*temp==j)
        count--;
        
        if(count>big)
          {
          ans=j;
          big=count;
          }
        }
       printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,ans,big); 
        
       
     }
    
}
