//10070
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int n,i;
 int print = 0;
while(cin>>n)
   {
   if ( print != 0 )
      printf("\n");
   print=1;
   
   bool leapyear=false,hulukulu=false,bulukulu=false;
   if((n%4==0 && n%100!=0)||(n%400==0))
       leapyear=true;
   if(n%15==0)
      hulukulu=true;
   if(n%55==0 && leapyear==true)
      bulukulu=true;
   if(leapyear==false && hulukulu==false && bulukulu==false)
      cout<<"This is an ordinary year.\n"<<endl;
   else{ 
    if(leapyear==true)   
      cout<<"This is leap year."<<endl;
    if(hulukulu==true)   
      cout<<"This is huluculu festival year."<<endl;
   if(bulukulu==true)
      cout<<"This is bulukulu festival year."<<endl;
      }
  
   }
}
