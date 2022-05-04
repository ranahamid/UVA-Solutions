#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
int n;
while(cin>>n)
  {
  if(n==0)
     break;
  if(n==2||n==3||n==5||n==7||n==17||n==19||n==13||n==31)
       {
     
       if(n==31)
       printf("2305843008139952100!\n");
       else
            {
            long long   ans=( long long )(pow(2,(n-1))*(pow(2,n)-1));  //2^(k-1)*(2^k-1)
            printf("Perfect: %lld!\n",ans);
            }
       }
  else if(n==11||n==23||n==29)
       cout<<"Given number is prime. But, NO perfect number is available."<<endl;
  else
       cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
  }
}
