    #include<stdio.h>
    #include<string.h>

    int main()
    {
    int i;
    char x, ch[]={'/','.',  ',','M','N','B','V','C','X','Z','Z',
    '\'',';','L','K','J','H','G','F','D','S','A','A',']',
    '[','P','O','I','U','Y','T','R','E'
    ,'W','Q','Q','\\','=','-','0','9','8',
    '7','6','5','4','3','2','1','`','`',' ',' '};

    while(scanf("%c",&x)==1)
    {
    for(i=0;i<55;i++)
    if(x==ch[i]) {
    printf("%c",ch[i+1]);
    break;
    }
    if(i==55) printf("%c",x);
    }
    printf("\n");
    return 0;
    }
