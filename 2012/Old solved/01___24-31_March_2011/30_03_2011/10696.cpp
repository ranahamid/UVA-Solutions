//10696
#include<stdio.h>
int main()
{
    long int n,res,rs;
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
    break;
    else if (n>=101)
    {
         res=n-10;
    
    printf("f91(%ld) = %ld\n",n,res);
             }      
             
             else if(n<=100)
             
             {
                  
               printf("f91(%ld) = 91\n",n);
              }
                       }
}
