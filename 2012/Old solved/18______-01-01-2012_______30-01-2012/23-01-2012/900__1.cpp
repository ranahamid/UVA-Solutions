    #include<stdio.h>
    #define lim 5001
    #define len 1050
    int fbn[lim][len];
    void fibonacci()
    {
    int i,j,k,sum;
    fbn[0][0]=0;
    fbn[1][0]=1;
    fbn[2][0]=1;
    for(i=3;i<lim;i++)
    {
    for(j=0;j<len;j++)
    {
    fbn[i][j]+=fbn[i-2][j]+fbn[i-1][j];
    if(fbn[i][j]>=10)
    {
    fbn[i][j+1]+=fbn[i][j]/10;
    fbn[i][j]%=10;
    }
    }
    }
    }

    int main()
    {
    fibonacci();
    int n,i,j,k,lenth;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
       break;
    n=n+1;
                          
    for(i=len-1;i>0;i--)
    {
    if(fbn[n][i]!=0)break;
    }
  //  printf("The Fibonacci number for %d is ",n);
    for(;i>=0;i--)printf("%d",fbn[n][i]);
    printf("\n");
    }
    return 0;
    }
