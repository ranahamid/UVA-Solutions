//10219
#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
    int n,r;
    while(cin>>n>>r)
      {
      double way=1;
       int  i,count=1;
      for(i=r+1;i<=n;i++)  //check this
         {
         way=(double)(way*i)/(i-r); //check this
         while(way>9)   //check this
           {
                     count++;
                     way=(double)way/10;
           }
         }
      cout<<count<<endl;
      }
}
