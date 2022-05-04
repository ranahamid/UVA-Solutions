#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
    int test,kase=0;
    int cdate, cmonth, cyear ;
    int bdate, bmonth, byear ;
    char ch;
    cin>>test;
    while(test--)
    {
    int age=0;
    cin>>cdate>>ch>>cmonth>>ch>>cyear;
    cin>>bdate>>ch>>bmonth>>ch>>byear;
     
    age=cyear-byear;
    
    if((cmonth<bmonth)||((cmonth==bmonth)&&(cdate<bdate)))
       age--;
    if(age<0)
         printf("Case #%d: Invalid birth date\n",++kase);
    else if(age>130)
        printf("Case #%d: Check birth date\n",++kase);
   else
           printf("Case #%d: %d\n",++kase,age);
   
    }
}
