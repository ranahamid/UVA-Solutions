//834 – Continued Fractions
#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main()
{
    int i,num,den;
    while(cin>>num>>den)
    {
    cout<<"["<<num/den;
    num=num%den;
    swap(num,den);
    for(i=0;i<num;i++)
       {
       if(i==0)
       cout<<";";
       if(i>0)
       cout<<",";
       cout<<num/den;
       num=num%den;
        swap(num,den);
       }
       cout<<"]"<<endl;
    }
}
