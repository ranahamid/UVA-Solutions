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
int t,i,test,temp,n,isq;
char st[10000];
scanf("%d",&test);



for(t=1;t<=test;t++)
  {
  int p,c,asc=1,des=1;
  
  cin>>p;
  for(i=0;i<9;i++)
      {
      cin>>c;
      asc=asc & (p<c);
      des=des & (p>c);
      }
  if(asc||des)
    printf("Ordered \n");
  else
       printf("Unordered \n");

  }
}

