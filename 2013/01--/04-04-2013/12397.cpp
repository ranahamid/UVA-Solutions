#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>

#define pi 2*acos(0)


using namespace std;


int main()
{

int n,i,count;
int v[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
int c[]={4   ,6  ,3  ,5  ,2  ,4 ,2 ,4 ,2 ,3,2,3,1};

while(cin>>n)
  {
  	count=0;
   for(i=0;n!=0;i++)
      {
      while(n>=v[i])
         {
         count=count+c[i];
         n=n-v[i];
         }
      }
  cout<<count<<endl;
  }
}
