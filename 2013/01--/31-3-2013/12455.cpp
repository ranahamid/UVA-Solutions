#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
   int a,b,res1,test,i,need,number,j;
   
   cin>>test;
   while(test--)
   {
   cin>>need>>number;
   int array[1000]={0};
   array[0]=1;
   for(i=0;i<number;i++)
      {
      cin>>a;
      for(j=need-a;j>=0;j--)
           {
           if(array[j] && array[j+a]==0)
                  {
                  array[j+a]=1;
                  }
           }
      }
   if(array[need])
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
   
   
   
   }
   
}
