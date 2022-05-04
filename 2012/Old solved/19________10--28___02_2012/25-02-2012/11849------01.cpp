#include<iostream>
#include<stdio.h>
using namespace std;

int ar[1000001];
int main()
{
    int n,m,s,temp,i;
    while(cin>>n>>m,n,m)
    {
    for(i=0;i<n;i++)
         cin>>ar[i];
    s=0;
    int counter=0;
    for(i=0;i<m;i++)
     {
        cin>>temp;
        for(;temp>=ar[s] && s<n;s++)
            {
                if(ar[s]==temp)
                {
                    ++counter;
                    break;
                }

            }
     }
   cout<<counter<<endl;

    }
}
