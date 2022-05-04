#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
int test,kase=0;
int i,a,v,c,b,deg;
char ch;
cin>>test;

while(test--)
   {     
   scanf("%c%d%d",&ch,&a,&b);
   if(ch=='k')
      
      cout<<((a*b)+1)/2<<endl;
      
   else if(ch=='K')
      
      cout<<((a+1)/2)*((b+1)/2)<<endl;
      
   else if(ch=='r'||ch=='Q')
       
       cout<<min(a,b)<<endl;
       
       
   }
}
