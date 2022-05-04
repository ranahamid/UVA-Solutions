//10170
#include<stdio.h>
int main()
{
 long s,d,n,i;
 while(scanf("%ld%ld",&s,&d)==2)
   {
   n=0;
   for(i=s;;i++)
      {
      n+=i;
      if(n>d || n==d)
      {
      printf("%ld\n",i);
      break;
      }
      }
   }
}
