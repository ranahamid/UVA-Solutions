//543
#include<iostream>
#include<stdio.h>
#define max 1000001

using namespace std;

int prime[max];
void gold()
{
     int i,j;
     prime[0]=prime[1]=0;
     for(i=2;i<1000001;i++)
     prime[i]=1;
     
     for(i=2;i<1000001;i++) 
     {
        for(j=i*2;j<max;j=j+i)
           prime[j]=0; 
     }       
}



int main()
{
   gold();
    
    int n,a,b,p,i;
    while(cin>>n)
      {
      if(n==0)
      break;
            
      p=0;
      for(i=2;i<max;i++)
          {
          if(prime[i]==1 && prime[n-i]==1)//check this
           {
           p++;
           a=i;
           b=n-i;
           break;
           }
          if(i>n) //check this
          break; 
          }
          
    if(p==0)
    cout<<"Goldbach's conjecture is wrong."<<endl;
    else
    cout<<n<<" = "<<a<<" + "<<b<<endl;
      }    
}
