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
    
    int found,kase=0;
    while(gets(st1)&& strcmp(st1,"*"))
    {
    char *token;
    strcpy(st,st1);
    token=strtok(st," ");
    int k=0,i;
    while(token!=NULL)
      {
      strcpy(word[k++],token);
      token=strtok(NULL," ");
      }
    bool valid=true;
    char ch=word[0][0];
    if(ch>=65 && ch<=90)
         ch=ch+32;
    for(i=1;i<k;i++)
        {
        if( (word[i][0]!=ch) && (word[i][0]+32!=ch) )
            valid=false;
        }
    if(valid)
        printf("Y\n");
    else
        printf("N\n");
    }
}
