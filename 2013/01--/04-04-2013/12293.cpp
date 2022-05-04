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

int n;
while(cin>>n&&n!=0)
  {
  if(n&n+1)
    cout<<"Alice"<<endl;
  else
  	cout<<"Bob"<<endl;
  }
}
