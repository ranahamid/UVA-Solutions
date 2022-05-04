#include<stdio.h>
#include<algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;


bool cmp(string  x,string y)
{
     string t1=x+y;
     string t2=y+x;
     if(t1>t2)
       return true;
    
         return false;
}

int main()
{
    int test,i;
    string a[60];
    while(scanf("%d",&test)==1)
    {
    if(test==0)
      break;
      
    for(i=0;i<test;i++)
      cin>>a[i];
      
    sort(a,a+test,cmp);
    
    for(i=0;i<test;i++)
    cout<<a[i];
    cout<<endl;
    }

}
