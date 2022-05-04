//10235

#include <stdio.h>
long int prime1(long k)
{
     long is,i;
if(k<2)
      
      is=0;
      else
      is=1;
      for(i=2;i<k;i++)
        
            if(k%i==0) 
            is=0;
if(is==0)
return 0;
else 
return 1;
            }                 
int main()
{
    
    long int i,k,is,n,z,p,sum,y;
   
  while(scanf("%ld",&n)==1)
  
     {
     k=p=n;
      z=prime1(k);
      if(z==0)
      printf("%ld is not prime.",n);
      else if (z==1)
           {
           sum=0;
     
     while(p>0)
     {
               sum=sum*10+p%10;
               p=p/10;
     }
     y=sum;
     if(k<2)
      is=0;
      else
      is=1;
      
      for(i=2;i<k;i++)
        
            if(k%i==0) 
            is=0; 
                    is=prime1(y);
                    
                    if(is==1)
                    printf("%ld is emirp.",n);
                    
                    else if(is==0)
                    printf("%ld is prime.",n);  
           } 
           printf("\n");
      
        }
}
