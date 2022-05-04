//272 uva
#include <stdio.h>
#include <string.h>
int main()
{
   int a=0;
    char ch;
    while(scanf("%c",&ch)==1)
             {
                             if(ch=='"')
                                        {
                                           a++;
                                           if((a%2)==1)
                                           printf("``");
                                           else if ((a%2)==0)
                                           printf("''");
                                        }
                             else 
                             printf("%c",ch);
             }                
}

