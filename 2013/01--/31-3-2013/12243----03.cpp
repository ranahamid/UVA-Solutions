#include <stdio.h>
#include <string.h>
char str[10000];
int main()
{
while(gets(str))
{
int i,t,d,r,n=0;
if(strcmp(str,"*")==0)
break;
else
t=str[0];
if(t<91)
d=t+32;
else
d=t-32;
r=0;
for(i=1;str[i]!='\0';i++)
if(str[i]==' '){
n++;
if(str[i+1]==t || str[i+1]==d)
r=1;
else
{r=0;
break;}}
if(n==0)
printf("Y\n");
else if(r)
printf("Y\n");
else
printf("N\n");
}
return 0;
}
