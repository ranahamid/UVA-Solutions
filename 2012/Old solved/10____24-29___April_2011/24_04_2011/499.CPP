//499
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main()
{
    char line[400],x;
    int len, kase,i,j,k,max;
    while(gets(line))
 {
 int  up[26]={0};
  int low[26]={0};
    
    len=strlen(line);
   
    for(j=0;j<len;j++)
      {
     
      if(line[j]>='A' && line[j]<='Z')
      {
	  x=line[j];
     up[x-65]++;
    }
    
       if(line[j]>='a' && line[j]<='z')
       {
        x=line[j];
     low[x-97]++;
    }
}


    max=0;
    for(int p=0;p<26;p++)
    {
    if(up[p]>max)
    max=up[p];
    if(low[p]>max)
    max=low[p];
    }
    
    for(k=0;k<26;k++)
{
if(up[k]==max) printf("%c",k+65);
}
  
  for(k=0;k<26;k++)
{
if(low[k]==max) printf("%c",k+97);
}  

printf(" %d\n",max);    
}
    

return 0;
}
