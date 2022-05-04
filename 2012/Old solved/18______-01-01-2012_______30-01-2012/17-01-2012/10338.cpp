#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int count =1;
    while(test--)
    {
    char name[22];
    cin>>name;
    int i,j,flag;
    unsigned long mul=1;
    int valid[22];
    
    for(i=0;name[i]!='\0';i++)
        {
        flag=1;
        for(j=i-1;j>=0;j--)
             {
               if(name[i]==name[j])
                  {
                  valid[i]=valid[j]+1;
                  mul=mul*(i+1)/valid[i];
                  flag=0;
                  break;
                  }
             }
        if(flag)
          {
          valid[i]=1;
          mul=mul*(i+1);
          }
        }
    cout<<"Data set "<<count<<": "<<mul<<endl;
    count++;
    }
}
