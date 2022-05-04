#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
int test;
char input[10];
scanf("%d\n",&test);
while(test--)
  {
  gets(input);
  int count=0,f1=0,f2=0,f3=0,i;
  int len=strlen(input);
  char one[]="one",two[]="two",three[]="three";
  for(i=0;i<3;i++)
   {
   if(one[i]!=input[i])
      f1++;
   if(two[i]!=input[i])
      f2++;
   }
  if(f1<2)
     cout<<"1"<<endl;
  else if(f2<2)
     cout<<"2"<<endl;
else if(len==5)
{     
  for(i=0,f3=0;i<5;i++)
   {
   if(three[i]!=input[i])
      f3++;
  }
 if(f3<2)
     cout<<"3"<<endl;
}  
}
}
