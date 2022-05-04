#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int test,n,i,prev;
    bool valid;
    string ans;;
    cin>>test;
    while(test--)
     {
     ans="";
      cin>>n;
      valid=true;
      while(n>9 && valid)
           {
           prev=n;
           for(i=9;i>=2;i--)
               {
               if(n%i==0)
                    {
                    ans+=i+48;
                    n=n/i;
                    break;
                    }
               }
           if(prev==n)
           valid=false;
           }
      reverse(ans.begin(),ans.end());
      if(valid==true)
      cout<<n<<ans<<endl;
      else
       cout<<"-1"<<endl;     
       }
}
