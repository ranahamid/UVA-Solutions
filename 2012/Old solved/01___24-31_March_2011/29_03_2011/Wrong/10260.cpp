//10260
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,len;
    char code[22];
    while(gets(code))
    {
    int a[22]={0};
    len=strlen(code);
    for(i=0;i<len;i++)
       {
       if(code[i]=='B'||code[i]=='F'||code[i]=='P'||code[i]=='v')
       a[i]=1;
       if(code[i]=='C'||code[i]=='G'||code[i]=='J'||code[i]=='K'||
       code[i]=='Q'||code[i]=='S'||code[i]=='X'||code[i]=='Z')
       a[i]=2;
       if(code[i]=='D'||code[i]=='T')
       a[i]=3;
       if(code[i]=='L')
       a[i]=4;
       if(code[i]=='M'||code[i]=='N')
       a[i]=5;
       if(code[i]=='R')
       a[i]=6;
       
       if((i>0) &&(a[i]==a[i-1]))
     //   if(i>0 && a[i]==a[i-1])
       continue;
       else if (a[i]!=0)
       printf("%d",a[i]);
       }
printf("\n");

    }
return 0;
 // getch();
}
