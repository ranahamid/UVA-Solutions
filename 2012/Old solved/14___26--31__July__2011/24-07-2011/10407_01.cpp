#include<stdio.h>


#include<iostream>
#define max 10000
using namespace std;
int gcd(int a,int b)
{
int r=1;
if(a>b)
   {
   while(r!=0)
     {
     r=a%b;
     a=b;
     b=r;
     }
   return a;
   }
if(b>a)
   {
   while(r!=0)
      {
      r=b%a;
      b=a;
      a=r;
      }
   return b;
   }
if(a==b)
return a;
}

    
int main()
{
int a,b,x[max],i,num,j,m,d[max];

   for(;;) 
   {
   int n=0;
   scanf("%d",&x[n]);
   if(x[n]==0)
   break;
   n++;   
   m=0; 
     
   for(;;) 
   {
   scanf("%d",&x[n]);
   if(x[n]==0)
   
   break;

//cout<<n<<"  "<<m<<"  "<<endl;

d[n-1]=x[n]-x[n-1];
if (d[n-1]<0)
d[n-1]=-d[n-1];
if (d[n-1])
n++; 
}

num=d[0];
    for(j=1;j<n-1;j++)
    num=gcd(num,d[j]);
    printf("%d\n",num);
    i=0;

}
}
