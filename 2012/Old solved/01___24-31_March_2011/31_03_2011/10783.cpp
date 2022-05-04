//10783
#include<stdio.h>

int main()
{
    int j,i,sum,t,a,b;
    
    while(scanf("%d",&t)==1)
    {
for(i=1;i<=t;i++){
scanf("%d%d",&a,&b);

    
    if(b<a)
    {
 int temp=a;
a=b;
b=temp;
}
    sum=0;
    
    for(j=a;j<=b;j++)
    {
  if((j%2)==1)
    sum+=j;   
             
}
      printf("Case %d: %d\n",i,sum);
                 
      }
}
return 0;  
}
