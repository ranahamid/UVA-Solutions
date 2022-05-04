    #include<stdio.h>
    int r[10000020],c[10000020];
    void con()
    {
    long i,j,a=1,m,o,n;
    for(i=1;i<=4480;i++)
    {
    if(i%2==0)
    {
    m=1;
    n=i;
    for(j=1;j<=i;j++)
    {
    r[a]=m,c[a]=n;
    a++;
    if(a>10000000)break;
    m++;
    n--;
    }
    }
    else
    {
    m=i;
    n=1;
    for(j=1;j<=i;j++)
    {
    r[a]=m,c[a]=n;
    a++;
    if(a>10000000)break;
    m--;
    n++;
    }
    }
    }

    }

    int main()
    {
    long i,j,k,m,n,a=1;
    con();
    while(scanf("%ld",&n)==1)
    {
    printf("TERM %ld IS %ld/%ld\n",n,r[n],c[n]);

    }
    return 0;
    }