#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
using namespace std;

int main()
{
int t,test,k,n,i;
string st;
cin>>test;
for(t=1;t<=test;t++)
  {
  cin>>n>>k;
  cin>>st;
  int array[26+5]={0},result=0;
   for(i=0;i<n;i++)
      {
       if(array[st[i]-65])
              result++;
       array[st[i]-65]++;
       if(i-k>=0)
            array[st[i-k]-65]--;
      }
    printf("Case %d: %d\n",t,result);
  }
}

