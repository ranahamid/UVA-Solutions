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
   char code[100];
   while(scanf("%s",&code)==1)
   {
   if(code[0]=='#')
   break;
   int len=strlen(code);
   if(next_permutation(code,code+len))
   printf("%s\n",code);
   else
   printf("No Successor\n");
   }
}
