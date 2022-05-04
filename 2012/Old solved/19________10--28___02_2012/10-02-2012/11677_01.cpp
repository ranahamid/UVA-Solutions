#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define PI 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
int h1,m1,h2,m2;
   while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF)
      {
       if (h1+h2+m1+m2 == 0) return 0;
      if(h2<h1)
            {
            cout<<24*60+h2*60+m2-(h1*60+m1)<<endl;
            }
       else if(h2==h1)
            {
            if(m1>m2)
                 cout<<24*60-(m1-m2)<<endl;
            else
                 cout<<m2-m1<<endl;
            }
       else
            cout<<h2*60+m2-(h1*60+m1)<<endl;
      }
}
