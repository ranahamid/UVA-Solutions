//11461
#include<stdio.h>
#include<math.h>
int main()
{
    long k,i,x,n1,n2,num1,num2;
    while(scanf("%ld%ld",&n1,&n2)==2)
    {
    if(n1==0 && n2==0)
    break;
    else
      {
          if(n1>n2)
          {
               int temp=n1;
               n1=n2;
               n2=temp;
          }
          
          num1=sqrt(n1);
          num2=sqrt(n2);
          k=0;
          for(i=num1;i<=num2;i++)
          {
          x=pow(i,2);
          if(x>=n1 && x<=n2)
          k++;
          else if(x>n2)
          break;
          }
      }
    
    printf("%ld\n",k);
    }
    
}
