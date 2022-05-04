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


int main()
{
int test,i;
char st[200];

    scanf("%d",&test);
    gets(st);
    while(test--)
    {
    gets(st);
    for(i=0;st[i];i++)
      {
      if(isupper(st[i]))
          st[i]=st[i]+32;
      }
    int m,array[26]={0};
    
    for(i=0;st[i];i++)
       {
       if(islower(st[i]))
          {
          array[st[i]-97]++;
          }
       }
    m=array[0];
    for(i=0;i<26;i++)
      {
      if(array[i]>m)
         m=array[i];
      }
    for(i=0;i<26;i++)
      {
       if(array[i]==m)
          printf("%c",i+97);
      }
    printf("\n");  
      
    }
}
