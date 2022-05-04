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
int test,a,b,c;
    cin>>test;
    while(test--)
    {
    cin>>a>>b>>c;
    if( (a+b<=c )||(a+c<=b)||(b+c<=a))
      printf("Wrong!!\n");
    else
       printf("OK\n");
    }
}
