//11340
#include<stdio.h>
#include<string.h>

int main()
{
int len,i,k;
int j,m,kase,n,c[200],line;
char num[11],x[200],text[10001];
double sum;
while(scanf("%d\n",&kase)==1)
{
sum=0;
for(m=0;m<kase;m++)
{
scanf("%d\n",&n);
for(i=0;i<n;i++)
   {
   scanf("%c%d\n",&x[i],&c[i]);
   }
scanf("%d\n",&line);
for(i=0;i<line;i++)
  {
  gets(text); 
  len=strlen(text);
  for(j=0;j<line;j++)
  {
    for(k=0;k<len;k++)
    {
    if(x[j]==text[k])
    sum=sum+c[j];
    }
  }
}
printf("%.2lf$\n",sum/100);
}
}
return 0;
}
