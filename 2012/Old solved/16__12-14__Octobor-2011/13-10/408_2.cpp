#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int gcd(int a,int b)
{
   while (b > 0) 
   {
   a %= b;
   swap (a, b);
   }
	 
  return a;
}

int main()
{
    int step,mode,a;
    while(scanf("%d%d",&step,&mode)==2)
    {
  
    if(gcd(step,mode)==1)
    printf("%10d%10d    Good Choice\n\n",step,mode);
    else
    printf("%10d%10d    Bad Choice\n\n",step,mode);
    }
}
