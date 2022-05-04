//11192
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    int len,i,j,end,start,a,group;
    while(scanf("%d\n",&group)==1)
    {
    if(group==0)
    break;
    else
    {
        gets(ch);
        len=strlen(ch);
        a=len/group;
        start=0;
        end=0;
        for(i=0;i<len;i++)
        {
        if( (i+1)%a==0)
          {
          end=i;
          for(j=end;j>=start;j--)
            {
            printf("%c",ch[j]);
            }
            start=end+1;
          }
        }
    }
 printf("\n");
    }
}
