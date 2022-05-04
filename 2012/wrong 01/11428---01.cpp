#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
#define max 61
using namespace std;

int main()
{
    int a[62];
    for(int i=1;i<=max;i++)
        a[i]=(int)pow(i,3);
     int n;
     
     

        
        
     while(cin>>n,n)
       {
       
     int x,y,flag=0;
     for(x=1;x<=max;x++)
          {
          for(y=1;y<=max;y++)
             {
             if(  (a[y]-a[x] )  ==n  )
                   {
                   flag=1;
                   cout<<y<<" "<<x<<endl;
                   break;
                   }
             
             }
          }
     if(flag==0)
        cout<<"No solution"<<endl;
       }        

}
