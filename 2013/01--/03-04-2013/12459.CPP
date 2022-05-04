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
long long int array[81];
int i,n;

array[0]=1;
array[1]=1;
for(i=2;i<81;i++)
   {
   	array[i]=array[i-2]+array[i-1];
   }
  while(scanf("%d",&n)&&n!=0)
     {
     cout<<array[n]<<endl;
     } 
}
