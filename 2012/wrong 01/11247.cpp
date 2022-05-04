#include<iostream>
#include<stdio.h>
using namespace std;

int ar[1000001];
int main()
{
    int m,x,v;
    while(cin>>m>>x,m,x)
    {
    if(m==1||x==0||x==100)
        {
        cout<<"Not found"<<endl;
        continue;
        }
    v=((m-1)*100)/(100-x);
    if( (((m-1)*100)%(100-x))==0)
       v--;
    if(v<m)
       cout<<"Not found"<<endl;
    else
       cout<<v<<endl;
    }
}
