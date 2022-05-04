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
 char st[max],a[max],ma=1;
 int i,len,count;
 while(cin>>st)
    {
    if(strcmp(st,"E-N-D")==0)
         break;
    count=0;
    len=strlen(st);
    for(i=0;i<len;i++)
        {
        if(st[i]>='a'&&st[i]<='z'||st[i]>='A'&&st[i]<='Z'||st[i]=='-')
              continue;
        else
             count++;
        }
    len-=count;
    if(ma<len)
       {
       ma=len;
       strcpy(a,st);
       }
    }
 for(i=0;i<a[i];i++)
    {
    if(a[i]>='A'&&a[i]<='Z')
       printf("%c",a[i]+32);
    else if(a[i]>='a'&&a[i]<='z'||a[i]=='-')
       printf("%c",a[i]);
    }
    printf("\n");
}
