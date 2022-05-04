#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#define max 100
using namespace std;

struct MATRIX {
       int row,column;
              }matrixset[max];


int m[max][max],n,s[max][max];

/*
6
30 35
35 15
15 5
5 10
10 20
20 25

*/


void matrixchainorder()
{
     
 int i,j,k,l,q;
     for( i=1;i<=n;i++)
     m[i][i]=0;
     for(l=2;l<=n;l++)
        {
          for( i=1;i<=n-l+1;i++)
          {
           j=l+i-1;
           m[i][j]=1000000;
           for( k=i;k<=j-1;k++)
              {
              q=m[i][k]+m[k+1][j]+( ( matrixset[i].row) *(matrixset[k].column) *(matrixset[j].column));
              if(q<m[i][j])
                         {
                         m[i][j]=q;
                         s[i][j]=k;
                         }
              }
           }   
        }
}


void printoptimalparens(int i,int j)
{
     if(i==j)
     printf("A%d",i);
     else
         {
         printf("(");
         printoptimalparens(i,s[i][j]);
		printf(" x ");
         printoptimalparens(s[i][j]+1,j);
         printf(")");
         }
}
 
 
int main()
{
int row,column,kase=0;

while(cin>>n,n)
{
for(int i=1;i<=n;i++) 
   {
      
        cin>>row;
        matrixset[i].row=row;
        
        
        cin>>column;
        matrixset[i].column=column;
        
   }
   matrixchainorder();
printf("Case %d: ",++kase);
   printoptimalparens(1,n);
    cout<<endl;
}
}
