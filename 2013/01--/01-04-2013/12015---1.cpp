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
int t,i,test,ans,first,second,temp;
scanf("%d\n",&test);
//freopen("testI.txt", "r", stdin);
//freopen("testO.txt", "w", stdout);

for(t=1;t<=test;t++)
  {
  string st[10];//,temp_st;
  int value[10],m=0;
  for(i=0;i<10;i++)
  {
  cin>>st[i]>>value[i];    
  if(value[i]>m)
     {
     m=value[i];
     } 
  }
  printf("Case #%d:\n",t);
  for(i=0;i<10;i++)
  {
  if(value[i]==m)
     {
     cout<<st[i]<<endl;
     }
  }


  }
}
