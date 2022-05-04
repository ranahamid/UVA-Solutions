//pre- calculate
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,d,i,j,k,l;
    for(i=6;i<=200;i++)
       {a = i*i*i;
        for(j=2;j<i;j++)
           {b = j*j*j;
            for(k=j+1;k<i;k++)
               {c = k*k*k;
                for(l=k;l<i;l++)
                   {d = l*l*l;
                   //if(b^3 + c^3 + d^3 > a^3) break
                      if( a == (b+c+d) )
                    {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
                    }
                 
                   
                   }
               }
           }
       }
      // system("pause");
}
