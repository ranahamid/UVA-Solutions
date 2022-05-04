//483
    #include<stdio.h>
    #include<string.h>

    int main()
    {
    char c,s[1000];
    int i,j,k,len;

    while(scanf("%s",&s)==1){
    if(s[0]=='\n' || s[1]=='\n') printf("\n");
    else 
    {
         len=strlen(s);
         for(i=len-1;i>=0;i--)
         {
         if(s[i]==' ')
        printf(" ");
        else
         printf("%c",s[i]);
         }
         printf(" ");
         }
         
           //printf("\n");
    }
  
    return 0;
    }
