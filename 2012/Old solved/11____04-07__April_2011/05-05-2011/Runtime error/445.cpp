//445
#include<stdio.h>
#include<string.h>
int main()
{
    char line[134];
    int len,i,j,num;
    while(gets(line))
    {
    num=0;
    len=strlen(line);
    for(i=0;i<len;i++)
      {
      if(line[i]=='!')
      printf("\n");
      else 
           {
           if (line[i]>='0' && line[i]<='9')
           num+=(line[i]-48);
           else if (line[i]>='A' && line[i]<='Z')
                {
                for(j=0;j<num;j++)
                printf("%c",line[i]);
                num=0;
                }
           else if (line[i]=='b' )
                {
                for(j=0;j<num;j++)
                printf(" ",line[i]);
                num=0;
                }
            else if (line[i]=='*' )
                {
                for(j=0;j<num;j++)
                printf("*");
               num=0;
                }
           }
      }
      printf("\n");
    }
}
