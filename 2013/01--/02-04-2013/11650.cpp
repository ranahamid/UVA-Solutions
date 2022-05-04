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
int test,hour,min;

    cin>>test;
    while(test--)
    {
    scanf("%d:%d",&hour,&min);
    hour=11-hour+(min==0);
    if(hour<=0)
      hour=hour+12;
    if(min!=0)
      min=60-min;
   printf("%02d:%02d\n",hour,min);       
    }
}
