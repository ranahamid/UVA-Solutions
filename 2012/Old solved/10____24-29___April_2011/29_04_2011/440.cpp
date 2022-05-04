//151
#include<stdio.h>
int func(int n,int mod)
{
    int i,j,c=0,x,k;

    int a[200];
    for(i=1;i<=n;i++)
    a[i]=1;

    a[1]=0;
    x=1;
    
    for(i=1;;i++)
    {
    for(j=1;j<=n;j++)
    {
    if(a[j]==1)
    c++;
    if(c==mod)
    {
              a[j]=0;
              c=0;
              x++;
              k=j;
              }
    if(x==n)
    break;
      }
      
    if(x==n)
    break;
     }
    return k;
}
        
int main()
{
int i,j,n;
while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    for(i=1;;i++)
     {
     j=func(n,i);
    if(j==2)
    {         
    printf("%d\n",i);
    break;
    }
    }
}
}
