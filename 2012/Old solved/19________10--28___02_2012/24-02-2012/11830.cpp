#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

void func(string a,char b)
{
int i,len;
len=0;
while(a[len]!=NULL)
   len++;
   
for(i=0;i<len;i++)
    {
    if(a[i]==b)
        a[i]='\\';
    }
int z=1;
for(i=0;i<len;i++)
   {
   if(a[i]!='0'&& a[i]!='\\' )
      {
      z=0;
      printf("%c",a[i]);
      }
   }
   if(z)
      printf("0");
   printf("\n");
}


int main()
{
string a;
char b;
while(cin>>b>>a)
  {
  if(b=='0'&&a=="0")
     break;
  func(a,b);
  }
}
