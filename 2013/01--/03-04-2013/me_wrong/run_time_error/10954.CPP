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
int n,i,k,cost,one,two,value;

while(cin>>n&&n!=0)
  {
  priority_queue<int,vector<int>,greater<int> >pq;	
  for(i=0;i<n;i++)
    {
    cin>>k;
    pq.push(k);
    }
  for(i=0;i<n;i++)
   {
   one=pq.top();
   pq.pop();
   
   two=pq.top();
   pq.pop();
   value=one+two;
   cost=cost+value;
   pq.push(value);
   }
  cout<<cost<<endl;
  }
}
