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

int main()
{
int n,ans[]={3, 5, 8, 12, 20, 34, 57, 98, 170, 300, 536,
    966, 1754, 3210, 5910, 10944, 20366, 38064, 71421, 134480, 254016}; 
while(cin>>n && n)
   {
   cout<<ans[(n-1960)/10]<<endl; 
   }
}



