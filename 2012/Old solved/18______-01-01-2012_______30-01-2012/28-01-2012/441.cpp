#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)

using namespace std;

int main()
{
    bool blank= false;
    int k;
    while(cin>>k,k)
    {
    if(blank==true)
      cout<<endl;
    blank=true;
    int x[13];
    for(int i=0;i<k;i++)
       cin>>x[i];
       
    for(int a=0;k-a>5;a++)
        {
        for(int b=a+1;k-b>4;b++)
           {
           for(int c=b+1;k-c>3;c++)
              {
              for(int d=c+1;k-d>2;d++)
                 {
                 for(int e=d+1;k-e>1;e++)
                    {
                    for(int f=e+1;k-f>0;f++)
                       {
printf ("%d %d %d %d %d %d\n", x [a],x [b], x [c], x [d], x [e], x [f]);                       
                       }
                    }
                 }
              }
           }
        }
    }
}
