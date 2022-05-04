#include<stdio.h>
int main()
    {
    int c,i,j,k,l,a,b;

    while(scanf("%d",&c)==1){
    for(int v=1;v<=c;v++){
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
                     
                     
    for(j=1;j<=a;j++)
    {
    for(k=1;k<=j;k++)
    {
    printf("%d",j);
    }
    printf("\n");
    }
     
                               
    for(l=a-1;l>=1;l--)
    {
    for(k=1;k<=l;k++)
    {
    printf("%d",l);
    }
    printf("\n");
    }
    printf("\n");
    }
    }
    }
       
return 0;
    }
