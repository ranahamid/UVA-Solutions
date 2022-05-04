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
#include<cstdio>
#define pi 2*acos(0)



using namespace std;


long long int s,s1,s2;


long long int choice(long long int s)
{
if(s==3)
  return 2;

s1=s+1;
s2=s-1;

if(s2==0)
  return 0;

int c=0;
while(s1%2==0 && s1!=0)
  {
  s1=s1/2;
  c++;
  }

while(s2%2==0 && s2!=0)
  {
  s2=s2/2;
  c--;
  }
if(c>0)
  return s+1;
else
  return s-1;

}


int main()
{
int count;
	while(cin>>s)
   {
   count=0;
   while(s!=0)
     {
   	 if(s%2==0)
   	   s=s/2;
 	 else
 	   s=choice(s);
   	 count++;
     }
   cout<<count<<endl;
   }
}
