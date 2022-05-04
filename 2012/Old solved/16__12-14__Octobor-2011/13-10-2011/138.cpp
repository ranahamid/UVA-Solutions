//138
//time 0.424

#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;


int main()
{
long long temp,r,res,i;
int counter=0;
for(i=2;counter<10;i++)
{
temp=1+8*i*i;  
r=sqrt(temp);
if(r*r==temp)
  {
  int test=(r+1)/2-1;
  cout.width(10);
  cout<<i;
  cout.width(10);
  cout<<test<<endl; 
  counter++;
  }

}
return 0;
}
