//10212
#include<stdio.h>
int main()
{
 long a,b,c,i,test,n,p,m,last,sum;
 while(scanf("%ld%ld",&n,&m)==2)
 {
 last=0,sum=1;

 for(i=n-m+1;i<=n;i++)
 sum=sum*i;

  //printf("%ld\n",sum);
 last=sum%10;
   while(last==0)
   {
   sum=sum/10;
   last=sum%10;
   }
 printf("%ld\n",last);
 }
 
}
