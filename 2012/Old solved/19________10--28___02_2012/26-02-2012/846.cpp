#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int main()
{
    int i,j,n,test,diff,start,x,y,count;
    cin>>test;
    while(test--)
    {
    cin>>x>>y;
    diff=y-x;
    start=1;
    count=0;
    bool flag=false;
    while(diff>0)
       {
       diff=diff-start;
          count++;
       if(flag)
           start++;
       flag=!flag;
       }
    cout<<count<<endl;
    }
}
