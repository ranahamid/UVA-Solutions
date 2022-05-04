#include <stdio.h>
int factorial[13];
int dp[13];
int C(int n,int r)
{
    return factorial[n]/factorial[n-r]/factorial[r];
}
int count(int n)
{
    if(dp[n]!=-1)
        return dp[n];
    else
    {
        int i;
        int res = 0;
        for(i=1;i<=n;i++)
            res+=C(n,i)*count(n-i);
        return dp[n]=factorial[n]-res;
    }
}
int main()
{
    int i,c;
    factorial[0]=1;
    for(i=1;i<13;i++)
    {
        factorial[i]=i*factorial[i-1];
        dp[i]=-1;
    }
    dp[0]=1;
    dp[1]=0;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&i);
        printf("%d/%d\n",count(i),factorial[i]);
    }
    return 0;
}
