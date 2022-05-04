//10334
#include<stdio.h>
#define lim 5000
#define len 1050
int fib[lim][len];

void fibbo()
{
     int i,j;
     fib[0][0]=0;
     fib[1][0]=1;
     fib[2][0]=1;
     
     for(i=3;i<lim;i++)
     {
     for(j=0;j<len;j++)
          {
          fib[i][j]+=fib[i-2][j]+fib[i-1][j];
           
          if (fib[i][j]>9)
              {
              fib[i][j+1]+=fib[i][j]/10;
              fib[i][j]%=10;
              }
          }
     }
}


int main()
{
 fibbo();
 int n,i;
 while(scanf("%d",&n)==1)
 {
 n+=2;
 
 for(i=len-1;i>0;i--)
    {
    if(fib[n][i]!=0)
    break;
    }
    
 for(;i>=0;i--)
 printf("%d",fib[n][i]);
 printf("\n");
 }  
 return 0; 
}
