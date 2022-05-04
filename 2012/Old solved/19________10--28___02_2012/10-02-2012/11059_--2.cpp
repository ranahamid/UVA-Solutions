#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0)
#define max 500005
using namespace std;

int main()
{
int i,j,n,test=1;
long long a[22],max1,temp;
while(cin>>n)
  {
  for(i=0;i<n;i++)
     cin>>a[i];
  max1=-1;
  for(i=0;i<n;i++)
    {
    temp=1;
    for(j=i;j<n;j++)
       {
       temp=temp*a[j];
       if(temp>max1)
          max1=temp;
       if(temp==0)
          temp=1;
       }
    }
  if(max1<0)
    max1=0;
   cout << "Case #" << test++ << ": The maximum product is " << max1 << ".\n";
	        cout << endl;
  
  }
    
}
