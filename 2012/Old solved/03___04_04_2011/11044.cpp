//11044
#include<stdio.h>
int main()
{
int i,z,a,b;
while(scanf("%d",&z)==1)
  {
   for(i=0;i<z;i++)
     {
     scanf("%d%d",&a,&b);
     a=(a/3)*(b/3);
     printf("%d\n",a);
     }
   }
}
