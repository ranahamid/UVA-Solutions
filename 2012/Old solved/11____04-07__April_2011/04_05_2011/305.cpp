#include<stdio.h>
int x[15]={0,2,7,5,30,169,441,1872,7632,1740,
93313,459901,1358657,2504881};

//long x[15]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
     if(n==0)
     break;
     else
       {
           printf("%d\n",x[n]);
       }                       
    }
    }
