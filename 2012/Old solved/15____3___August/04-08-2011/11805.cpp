#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n,k,p,tst,t;
    
    while(scanf("%d",&tst)==1)
    {
    for(t=1;t<=tst;t++)
      {
      scanf("%d%d%d",&n,&k,&p);
      printf("Case %d: %d\n",t,((k-1+p)%n)+1 );
      }
    }
}
