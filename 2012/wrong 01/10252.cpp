//10252
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()

{
char s1[1001],s2[1001],c1[26],c2[26],i,j,temp;
while(gets(s1)&&gets(s2))
  {
  for(i=0;i<26;i++)
     c1[i]=c2[i]=0;
     
  for(i=0;s1[i];i++)
    c1[s1[i]-97]++;
  for(i=0;s2[i];i++)
    c2[s2[i]-97]++;
  for(i=0;i<26;i++)
     {
     j=min(c1[i],c2[i]);
     while(j-->0)
         {
       // putchar(i+'a');
       cout<<(char)(i+'a');
         }
     }
// putchar('\n');
cout<<endl;
  }
}
