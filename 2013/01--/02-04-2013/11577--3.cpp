#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[1000];
int main()
{
int n,a;
scanf("%d\n",&n);
while(n--)
{
int b[27]={0};
gets(str);
int max,i;
for(i=0;str[i];i++)
str[i]=tolower(str[i]);
for(i=0;str[i]!='\0';i++)
if(str[i]>96 && str[i]<123)
b[str[i]-97]++;

max=b[0];
for(i=0;i<=25;i++)
if(max<b[i])
max=b[i];
for(i=0;i<=25;i++)
if(max==b[i])
printf("%c",i+97);
printf("\n");
}
return 0;
}
