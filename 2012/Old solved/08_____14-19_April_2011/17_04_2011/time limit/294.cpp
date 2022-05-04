#include<stdio.h>
#include<math.h>
int main()
{
    long unsigned kase,u,l,p,d,i,k,j,div,maxdiv,maxval,temp;
    while(scanf("%lu",&kase)==1)
    {
    for(i=1;i<=kase;i++)
       {
       scanf("%lu%lu",&l,&u);
       if(l>u)
              {
               temp=l;
              l=u;
              u=temp;
              }
              
       maxdiv=0;
       for(j=1;j<=u;j++)
       {
        div=0;
        
        for(k=1;k<=sqrt(j);k++)
        {
        if(j%k==0)
        {
        div++;
        if(j/k!=k)
        div++;
        }
       }
       if(div>maxdiv)
       {
       maxdiv=div;
       maxval=j;
       }
       }
       printf("Between %lu and %lu, %lu has a maximum of %lu divisors.\n",l,u,maxval,maxdiv);
       }
       
    }
return 0;
}
