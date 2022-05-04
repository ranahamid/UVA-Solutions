#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)


using namespace std;


int main()
{
int test;
long a,b;
    cin>>test;
    while(test--)
    {
    cin>>a>>b;
    if(b%a==0)
      printf("%ld %ld\n",a,b);
    else
        printf("-1\n")   ;
    }
}
