#include<stdio.h>
//.584

int main()
{
    long int i,j,n,k,ii,jj,a,b,count,max,aa,bb,temp;
    while(scanf("%ld%ld",&a,&b)==2)
    {
    printf("%ld %ld ",a,b);
    aa=a;
    bb=b;
    max=0;
    if(a>b)
           {
                temp=aa;
               aa=bb;
               bb=temp;
           }
   
    for(j=aa;j<=bb;j++)
       {
       i=j;
      count=1;
       while(i!=1)
          {
                  if(i%2==0)
                  i=i>>1;
                  else
                  i+=(i<<1)+1;
          count++;
          }
          if(count>max)
       max=count;
       }
       
       printf("%ld\n",max);
    }
}
