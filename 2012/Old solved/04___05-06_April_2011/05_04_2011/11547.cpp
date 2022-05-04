//11547
#include<stdio.h>
int main()
{
    long int ans,t,n,i;
    while(scanf("%ld",&t)==1)
    {
    for(i=0;i<t;i++)
      {
      scanf("%ld",&n);
      n*=567;
      n/=9;
      n+=7492;
      n*=235;
      n/=47;
      n-=498;
      n/=10;
      ans=n%10;
      if(ans<0)
      ans*=(-1);
      printf("%ld\n",ans);
      }
    }
}
