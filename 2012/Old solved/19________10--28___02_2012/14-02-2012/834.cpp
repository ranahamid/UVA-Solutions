#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
int num,den,i;
while(cin>>num>>den)
   {
   cout<<"["<<num/den;
   num=num%den;
   swap(num,den);
   
   for(i=0;den!=0;i++)
        {
        if(i==0)
           cout<<";";
        if(i!=0)
            cout<<",";
        cout<<num/den;
         num=num%den;
         swap(num,den);
        }
   cout<<"]"<<endl;
   }
} 
