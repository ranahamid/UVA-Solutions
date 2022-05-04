#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 10001
using namespace std;

int a[500001],i,test;

int partition(int a[],int p,int r)
{
int i,temp,j,x;
x=a[r];
i=p-1;//check this 
for(j=p;j<=r-1;j++)//check this 
   {
   if(a[j]<=x)//check this 
        {
        i++;
        temp=a[j];   
        a[j]=a[i];
        a[i]=temp;
        }
   }
   
temp=a[i+1];
a[i+1]=a[r];//check this 
a[r]=temp;
return(i+1);
}


void quicksort(int a[],int p,int r)
{
int q;
if(p<r)
     {
     q=partition(a,p,r);
     quicksort(a,p,q-1);
     quicksort(a,q+1,r);
     }
}
int main()
{
int test;
while(cin>>test)
{
if(test==0)
 break;
for(i=1;i<=test;i++)
  cin>>a[i];
quicksort(a,1,test);

for(i=1;i<=test;i++)//
  cout<<a[i]<<"  "; cout<<endl;//
}
}
