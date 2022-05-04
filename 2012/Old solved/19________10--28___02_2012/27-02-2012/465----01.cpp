#include<iostream>
#include<stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
char s1[10000],s2[10000],ch;
long double a,b,sum,mul,c;
 while ( scanf ("%s %c %s", s1, &ch, s2) == 3)
  {
 // cout<<s1<<" "<<ch<<" "<<s2<<endl;
  printf("%s %c %s\n", s1, ch, s2);
  a=atof(s1);
  b=atof(s2);
  if(a>2147483647)	
      cout<<"first number too big"<<endl;
  if(b>2147483647)	
      cout<<"second number too big"<<endl;
  
   if(ch=='+')
      {
     c=a+b;
     if(c>2147483647)     
        cout<<"result too big"<<endl;
      }
  if(ch=='*')
      {
      c=a*b;
      if(c>2147483647)     
         cout<<"result too big"<<endl;
      }
  }
}
