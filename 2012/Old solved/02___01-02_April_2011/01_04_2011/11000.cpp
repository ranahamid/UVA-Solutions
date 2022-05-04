//11000
#include<stdio.h>
#include<string.h>
int main()
{
    long int n,a,b,srs[1000],c;
    //a=male-1
    //c=total-1
    while(scanf("%ld",&n)==1)
    {
    if(n==-1)
    break;
    a=srs[0]=1;
    b=srs[1]=2;
    for(int i=2;i<=n+1;i++)
      {
            srs[i]=c=a+b;
            a=b;
            b=c;
      }
      printf("%ld %ld\n",srs[n]-1,srs[n+1]-1);
    }
}
