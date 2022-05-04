#include <stdio.h>
#define isEven(j) (!(j & 0x01))
#define SWAP(a,b) {if (b<a) {int t=a; a=b; b=t;}}
int dp[1000000];
int get(int i)
{
    int n, counter;
 
    counter=1;
    n = i;
    while (n>1)
    {
 
        if (n<1000000 && dp[n])
        {
            return dp[i]=(counter+=(dp[n]-1));
        }
        counter++;
        if ( isEven(n) )
        {
            n = n >> 1;
        } else
        {
            n = (n*3 + 1) >> 1;
            counter++;
        }
    }
    dp[i]=counter;
    return counter;
}
int pro()
{
    int i, n, counter;
    for (i=1 ; i<=1000000 ; i++)
    {
        counter=1;
        n = i;
        while (n>1)
        {
 
            if (n<i)
            {
                counter+=(dp[n]-1);
                break;
            }
            counter++;
            if ( isEven(n) )
            {
                n = n >> 1;
            } else
            {
                n = (n*3 + 1) >> 1;
                counter++;
            }
        }
        dp[i]=counter;
    }
    return 0;
}
 
int main()
{
    int i, a, b, low, high;
    int max;
    while (scanf("%d %d",&a,&b)==2)
    {
        low = a; high=b;
        SWAP(low,high);
        max=-1;
        for (i=low ; i<=high ; i++)
        {
            if (get(i)>max)
                max = dp[i];
        }
        printf("%d %d %d\n",a,b,max);
    }
    return 0;
}