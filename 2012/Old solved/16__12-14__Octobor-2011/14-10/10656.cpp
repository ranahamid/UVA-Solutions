#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    int a,b[1001],c;
   
    while(scanf("%d",&a)==1)
    {
    if(a==0)
    break;
    int space =0;
    
    for(c=0;c<a;c++)
    {
    scanf("%d",&b[c]);
    }
    
    for(c=0;c<a;c++)
      {
      if(b[c]>0)
          {
          if(space)
          printf(" ");
          space=1;
          printf("%d",b[c]);   
          }
      }
    if(space==0)
    printf("0");
    printf("\n");
    }
}
