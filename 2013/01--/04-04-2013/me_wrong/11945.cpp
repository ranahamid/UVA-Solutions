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

#define pi 2*acos(0)


using namespace std;


int main()
{
int test,t,i,k;
double sum,balance;
cin>>test;
sum=0.0;
for(i=1;i<=test;i++)
   {
   for(k=0;k<12;k++)
   {
   cin>>balance;
   sum=sum+balance;
   }
   printf("%d $",i);
   sum=sum/12.0;
   if(sum>=1000)
      {
      cout<<long(sum/1000.0);
      printf(",");
      printf("%.2lf",fmod(sum,1000.0));
      }
   else 
      {
      printf("%.2lf",sum);
      }
  printf("\n");
  }
}

