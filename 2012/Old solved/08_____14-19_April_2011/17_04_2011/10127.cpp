//10127
#include<stdio.h>
#include<math.h>
int main()
{
   double one,num,ans,j;
  //long double one,num,ans,j;
    while(scanf("%lf",&num)==1)
    {
    one=1;
    for(j=1;;j++)
         {
                 if(fmodl(one,num)==0)
                 break;
                 else
                 {
                     one=(one*10)+1;
                     one=fmodl(one,num);
                 }
                 
         }
    printf("%.0lf\n",j);
    }
}
