//11716
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,r,len,test,rt;
	double sq,root;
    char name[10001];
    while(scanf("%d\n",&test)==1)
    {
    for(i=0;i<test;i++)
          {
          gets(name);
          len=strlen(name);
         root=((int)sqrt(len));
          sq=root*root;
          if(len!=sq)
          printf("INVALID\n");
          else
              { 
             rt=((int)sqrt(len));
                    for(i=0;i<rt;i++)
                    {
                    for(j=i;j<len;j+=rt)
                        {
                             printf("%c",name[j]);
                        }         
              }
              printf("\n");
              }
              
              
          }
    }
}
