#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char line[201];
int x;
int kase,i,j,k,n,len,max;
int let[26];

while(scanf("%d\n",&n))
{
for(k=0;k<kase;k++)
{
gets(line);
len=strlen(line);

for(i=0;i<26;i++)
let[i]=0;

for(i=0;i<len;i++)
{
if((tolower(line[i]))>='a' && (tolower(line[i]))<='z')
{
x=tolower(line[i]);
let[x-97]++;
}
}
   
max=0;

for(j=0;j<26;j++)
{
if(let[j]>max) max=let[j];
}
for(j=0;j<26;j++)
{
if(let[j]==max) printf("%c",j+97);
}
printf("\n");
}
}
return 0;
}
