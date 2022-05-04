//10219
#include <math.h>
#include<stdio.h>
//for finding digit
int digit(double n)
{
         int sum=0;
         while(n>9)
         { 
                   n=n/10;
                   sum++;
         }
         
         return sum;
}
//for finding factoril
long double fact(long double n)
// double fact(double n)
       {
        if(n==0)
        return 1;
        else
        return (n*fact(n-1));
       }
int main()
{
double total,n,r;
int ans;
    while(scanf("%lf%lf",&n,&r)==2)
    {
    //nCr=(  n!/(n-r)!*r!  )
    total=fact(n)/(fact(n-r)*fact(r));  //check this
    //printf("%lf\n",total);
    
    ans=digit(total); 
        
    printf("%d\n",(ans+1));       //check this
    }
}
