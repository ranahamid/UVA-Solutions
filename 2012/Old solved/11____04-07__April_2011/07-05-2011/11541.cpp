    #include<stdio.h>
    #include<string.h>

    int decode(char let,int num)
    {
    if (num==0) return 0;
    else for( int i=1;i<=num;i++)
    printf("%c",let);

    return 0;
    }

    int main()
    {
    char line[202],let;
    int kase,amnt,i,j,len;
    while(scanf("%d\n",&kase)==1)
    {
    for(i=1;i<=kase;i++)
    {
    gets(line);
    printf("Case %d: ",i);
    len=strlen(line);
    let=0;
    amnt=0;
    for(j=0;j<len;j++)
    {
    if(line[j]>='A' && line[j]<='Z')
    {
    decode(let,amnt);
    let=line[j];
    amnt=0;
    }
    else
    
    amnt=((amnt*10)+(line[j]-48));
    
    if(j==len-1)
    decode(let,amnt);
    }
    printf("\n");
    }
    }
    return 0;
    }
