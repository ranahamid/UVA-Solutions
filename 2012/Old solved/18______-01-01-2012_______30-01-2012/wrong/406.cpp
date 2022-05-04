#include<iostream>
#include<cstdlib>
#include<stdio.h>
#define max 1101
using namespace std;

bool prime[max];
int value[max];
int max1;

void primeN()
{
int i,j,p;
    
    int count=0;
    for(i=0;i<max;i++)
       prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    value[count++]=1;
    for(i=2;i<max;i++)
      {
      if(prime[i])
         value[count++]=i;//check this
      for( p=i*2;p<=max;p=p+i)
           prime[p]=false;
      }
max1=count;    
// for(i=0;i<count;i++)
 // printf("%d ",value[i]);
}


int main()
{
 primeN();
 int c,n,i, count;
 while(cin>>n>>c)
   {
   printf("%d %d: ",n,c);
   count=0;
   i=0;
   while(value[i]<=n)
   {
   count++;
   i++;
   } 
//cout<<"count is ;"<<count<<endl;   
 if(count%2==1)
     c=c*2-1;
 else
    c=c*2;
    
 count=(count-c)/2;
 if(count<0)
   count=0;
 
 for(;c-- && value[count]<=n && count<max1;count++)
    {
    printf("%d ",value[count]);
    }
printf("\n");

}
}
