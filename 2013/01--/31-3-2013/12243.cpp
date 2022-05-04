#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>

#define pi 2*acos(0)
#define max 110

using namespace std;


int main()
{
    char st[1100],st1[1100],word[70][25];
    
    int found,kase=0,i;;
    while(gets(st)&& strcmp(st,"*"))
    {
    char *token;
    strcpy(st1,st);
    for(i=0;st1[i];i++)
       {
       if(st1[i]>=65 && st1[i]<=90)
          st1[i]=st1[i]+32;
       }
       
    token=strtok(st1," ");
    int k=0;
    while(token!=NULL)
      {
      strcpy(word[k++],token);
      token=strtok(NULL," ");
      }
    bool valid=true;
    for(i=1;i<k;i++)
        {
        if(word[i][0]!=word[0][0])
            valid=false;
        }
    if(valid)
        printf("Y\n");
    else
        printf("N\n");
    }
}
