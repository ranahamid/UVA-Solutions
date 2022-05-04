//11362
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
bool cmp(string a,string b)
 {
     if(a.size()>b.size())
             return false;
     for(size_t i=0;i<a.length();i++)
       {
       if(a[i]!=b[i])
       return false;
       }
     return true;
 }
 
int main()
{
    int i,test,n;
    
    string a[10100];
    while(scanf("%d",&test)==1)
    {
for(int k=0;k<test;k++)
{                               
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    bool flag=true;
    
    for(i=0;i<n-1;i++)
       {
       if( cmp(a[i],a[i+1]) )
         {
                    flag=false;
                    break;
         }
       }
    if(flag)
    printf("YES\n");
    else
     printf("NO\n");
    
    }
}
}
