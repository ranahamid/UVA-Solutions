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
char st[100000];
int i,m,init,ok;
while(gets(st))
  {
  m=0;
  for(i=0;st[i];)
      {
      init=0;
      ok=0;
      if(st[i]==' ')
          {
          init++;
          while(st[i+1]==' ')
              {
              init++;
              i++;
              ok=1;
			  }
          }
      if(init>m)
          {
          m=init;
          }
      if(ok==0)
          {
          i++;
          }
	  }
  int ans=(ceil)(log(m)/log(2));
  cout<<ans<<endl;
  }
}
