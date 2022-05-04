#include<stdio.h>
#include<string.h>
#include<string>
#include<math.h>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    char s[2000];
    char c;
    while(gets(s))
    {
        if(!strcmp(s,"*"))
        break;
        int p=0,k=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
            if(s[i]==' ')
            p++;
        }
        c=s[0];
        int f=0;
         for(int i=0;s[i]!='\0';i++)
         {
             if(s[i]==' ')
             {
                 if(c==s[i+1])
                 k++;
             }

         }
         if(p==k){
         printf("Y\n");
         continue;
         }
         else{
         printf("N\n");
         continue;
         }
    }
    return 0;
}
