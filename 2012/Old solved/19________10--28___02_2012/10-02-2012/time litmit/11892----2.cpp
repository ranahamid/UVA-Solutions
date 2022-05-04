
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
int kase,n,a[1500],i,test,j;


while(cin>>test)
 {
// cin>>n;
 scanf("%d",&n);

int one=0,second=0;

 for(i=0;i<n;i++)
    {
    //cin>>kase;
     scanf("%d",&kase);
    if(kase==1)
      ++one;
    else
      ++second;
    }
  if(one%2==1)
     cout<<"poopi"<<endl;
  else if(second>0)
      cout<<"poopi"<<endl;
  else
     cout<<"piloop"<<endl;
 }
  
}
