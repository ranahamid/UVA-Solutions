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
if(s==0||s==1)
  return s;
if(s%2==0)
  return 1+choice(s/2);
else
  return 1+min(choice(s+1),choice(s-1));

  

}


int main()
{
int count;
	while(cin>>s)
   {
   cout<<choice(s)<<endl;
   }
}
