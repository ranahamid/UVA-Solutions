#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    int n; 
int sum,avg,rem,ans,i,a,dec,diff;
  char ch;
while(cin>>n,n)
  {
  vector<int>v(n);
 
  sum=0;
  
  for(i=0;i<n;i++)
     {
     scanf("%d%c%d",&a,&ch,&dec);
     sum+=v[i]=a*100+dec;
     }
  
  avg=sum/n;
  rem=sum%n;
  a=0;
  ans=0;
  
  for(i=0;i<n;i++)
      {
      diff=v[i]-avg;
  
     if(diff>0)
     ans+= diff - ((rem-- > 0)?1:0);
      }
  printf("$%d.%02d\n",ans/100,ans%100);
  }


}
