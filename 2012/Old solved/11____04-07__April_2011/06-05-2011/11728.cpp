#include<stdio.h>
#include<math.h>

int list[1001];

void fact()
{
     int i,j;
     for(i=1;i<=1000;i++)
     list[i]=0;
     
     for(i=1;i<=1000;i++)
     {
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
           list[i]+=j;
        }
     }     
}

int main()
{
      fact();
    int k,r,i,j,n,kase=1;
  
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    
    printf("Case %d: ",kase);
    r=0;
    for(i=1000;i>=1;i--)
       {
       if(list[i]==n)
           {
           printf("%d\n",i);
           r++;
           break;
           }
       }
       
    if(r==0)
    printf("-1\n");
    kase++;
    }
    return 0;
}
