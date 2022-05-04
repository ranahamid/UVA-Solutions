//10340
#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
    char st1[100000],st2[100000];
    while(cin>>st1>>st2)
    {
    int n,count;
    int i,j;
    for(i=0,j=0; st1[i]!='\0' && st2[j]!='\0'; )
  //for(i=0,j=0; st1[i]!='\0' && st2[j]!='\0'; )
       {
       if(st1[i]==st2[j])
          {
          i++;
          j++;
          }
       else
          j++;
       if(st1[i]=='\0')
       break;
       }
    if(st1[i]=='\0')
    printf("Yes\n");
    else
    printf("No\n");
    }
}
