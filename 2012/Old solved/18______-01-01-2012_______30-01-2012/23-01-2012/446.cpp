#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
string tobin(int n)
{
string st;
while(n)
     {
     st=st+((n & 1) ? '1' : '0');
     n=n/2;
     }
     st.resize(13,'0');
     reverse(st.begin(),st.end());
     
return st;
}
int main()
{
int a,b,test;
string st;
char ch;
cin>>test;
while(test--)
   {
   cin>>hex>>a>>ch>>hex>>b;
   cout<<tobin(a)<<" "<<ch<<" "<<tobin(b)<<" = "<<((ch=='-')?(a-b):(a+b))<<endl;
   }
}
