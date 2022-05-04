#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
    int n,i;
    string st;
    bool k[11];
    for(i=0;i<=10;i++)
       k[i]=true;
    while(scanf("%d\n",&n)==1)
        {
        if(n==0)
           break;
          getline(cin,st);
        if(st=="too high")
               {
               for(i=n;i<=10;i++)
                      {
                      if(k[i]==false)
                          break;
                      k[i]=false;
                      }
               }
        
        else if(st=="too low")
               {
               for(i=n;i>=0;i--)
                      {
                      if(k[i]==false)
                          break;
                      k[i]=false;
                      }
               }
        else
             {
             if(k[n]==true)
                 cout<<"Stan may be honest"<<endl;
             else
                 
                 cout<<"Stan is dishonest"<<endl;
              for(i=0;i<=10;i++)
                  k[i]=true;
             }
        
        
        }
}
