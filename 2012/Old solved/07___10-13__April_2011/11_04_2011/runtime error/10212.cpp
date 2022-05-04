//10212
#include<stdio.h>

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
   
    double i,n,r,total,sum;

    while(scanf("%lf%lf",&n,&r)==2)
    {
       //nPr
        total=fact(n)/(fact(n-r));
 
  //  scanf("%lf",&total);
    i=0;
  
    sum=0;
    while(sum==0)
    {
    sum=(int)total%10;
    total=(int)total/10;
    i++;
    }
    printf("%lf\n",sum);
}
}
