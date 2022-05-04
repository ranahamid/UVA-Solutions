#include<iostream>
#include<stdio.h>
#define max 20000001
using namespace std;

int value[110000];
bool prime[max];

int main(int argc, char *argv[])
{

  int i,j;



     for(i=0;i<max;i++)
           prime[i]=true;
           
 prime[0] = false;  
prime[1] = false;    
    
     for(i=2;i<5000;i++) 
     {
      if(prime[i])                   
         {  
         for(j=i*2;j<max;j=j+i)
         prime[j]=false; 
         }
     } 

int index=1;

for(i=5;i<max;i++) 
     {
     if(prime[i] && prime[i-2])
        {
        value[index++]=i-2;
        }
     }
     
int n;
while(cin>>n)
  {
  printf("(%d, %d)\n",value[n],value[n]+2);
  }

}
