#include<stdio.h>


int main()
{
    long int da,maxnum,i,j,n,k,ii,jj,a,b,count,max,aa,bb;
    while(scanf("%ld%ld",&a,&b)==2)
    {
    if(a==0 && b==0)
    break;
    aa=a;
    bb=b;
    max=0;
    if(a>b)
           {
               int temp=aa;
               aa=bb;
               bb=temp;
           }
   
    for(j=aa;j<=bb;j++)
       {
       i=j;
       da=j;
      count=1;
     for(;;)
          {
                  if(i%2==0)
                  i=i>>1;
                  else if (i%2==1)
                  i+=(i<<1)+1;
                  if (i==1)
                  break;
          count++;
          }
          if(count>max)
          {
       max=count;
       maxnum=da;
       }
}
       printf("Between %d and %d, %d generates the longest sequence of %d values.\n",a,b,maxnum,max);
    }
}
