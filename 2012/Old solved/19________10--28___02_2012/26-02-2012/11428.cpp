#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int main()
{
    int i,j,n;
    while(cin>>n,n)
    {
    int flag=0;
    for(i=0;pow(j,3)-pow(i,3)!=n && pow((j=i+1),3)-pow(i,3)<n;)
          {
          i++;
          for(j=i+1;pow(j,3)-pow(i,3)<n;j++);
          }
    if(pow(j,3)-pow(i,3)==n)
       cout<<j<<" "<<i<<endl;
    else
       cout<<"No solution"<<endl;
    }
}
