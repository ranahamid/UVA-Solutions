//10929
#include<stdio.h>
#include<string.h>
int main()
    {
    char num[1002];
    int n,i,k,len,r;
    while(gets(num))
       {
          len=strlen(num);
          if(len==1 && num[0]=='0')
          break;
          r=0;
          k=0;
          n=0;
          for(i=0;i<len;i++)
          {
             r=(n*10)+(num[i]-48);
             n=r%11;
             if(n==0 && i==len-1)
             k++;
          }
          if(k>0)
          printf("%s is a multiple of 11.\n",num);
          else
          printf("%s is not a multiple of 11.\n",num);
       }
    }                  

