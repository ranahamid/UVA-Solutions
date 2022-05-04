//11934
#include<stdio.h>
#include<math.h>
int main()
{
      long int a,b,c,d,l;
      long int count,i,j,k,kase,n;
 
    while(scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&l)==5)
     {
     if(a==0 && b==0 && c==0 && d==0 && l==0)
     break;
   else
     {
       count=0;                                              
     for(i=0;i<=l;i++)
          {
          
          n=a*pow(i,2)+b*i+c;
          if(n%d==0)
             {
             count++;
             }
          }
          }
  
     printf("%ld\n",count);
     } 
}
