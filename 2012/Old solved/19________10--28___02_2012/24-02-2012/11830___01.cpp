#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
char input[100000], pro[100000];
void func(char *a,char b)
{
int i,len;
len=strlen(a);

   
for(i=0;i<len;i++)
    {
    if(a[i]==b)
        a[i]='\\';
    }
int z=1;
for(i=0;i<len;i++)
   {
   if (a[i]!='0' && a[i]!='\\')
            z=0;
        if (!z && a[i]!='\\')
            putchar(a[i]);
   }
   if(z)
      putchar('0');
   putchar('\n');
}


int main()
{

  char c;
    while (gets(input))
    {
        if (!strcmp("0 0",input))
            break;
        sscanf(input,"%c %s",&c,pro);
 
        func(pro,c);
    }
  
  }

