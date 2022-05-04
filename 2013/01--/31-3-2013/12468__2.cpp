#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
   int a,b,res1;
   cin>>a>>b;
   while(a!=-1 && b!=-1 )
   {
   res1=abs(b-a);
   if(res1>50)  
      cout<<100-res1<<endl;
   else
     cout<<res1<<endl;
   cin>>a>>b;
   }
}
