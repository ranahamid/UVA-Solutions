#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<ctype.h>


#define pi 2*acos(0)


using namespace std;
 unsigned long long int a,b;

int main()
{


 while(scanf("%llu%llu",&a,&b)==2)
   {
   if(a<1LLU<<(1+b))
     printf("yes\n");
   else
     printf("no\n");
   }
}
