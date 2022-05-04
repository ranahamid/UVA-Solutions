#include<iostream>
#include<stdio.h>
#define max 200001
using namespace std;
int main()
{
long n,test,i,a[max];
while(cin>>test)
   {

   if(n==0)
      break;
      
      for(i=0;i<test;i++)
        cin>>a[i];  
        
     if(n==1 && a[0]==0)//if error check this 
        cout<<"Yes"<<endl;
     else if (n==1 && a[0]!=0) 
           cout<<"No"<<endl;
     else
         {
         for(i=1;i<test;i++)
            a[0]=a[i-1]^a[i];
             
         if(a[0])
           cout<<"Yes"<<endl;
          else
                cout<<"No"<<endl;      
          }
   }
}
