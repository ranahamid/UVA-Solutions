//10924
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[22];
    int isprime;
    int i,len,sum;
    while(gets(ch))
    {
    isprime=0;
    sum=0;
    len=strlen(ch);
    for(i=0;i<len;i++)
       {
       if((ch[i]>='A')&&(ch[i]<='Z'))
       sum+=ch[i]-38;
       else if((ch[i]>='a')&&(ch[i]<='z'))
       sum+=ch[i]-96;
       }

  for(int J=2;J<=(sum/2);J++)
       {
       if(sum%J==0)
{
       isprime++;
break;
       }
}


    if(isprime==0) 
    printf("It is a prime word.\n");
    if(isprime>0)
   printf("It is not a prime word.\n");
    }
}
