//10924
#include<stdio.h>
#include<string.h>

int isprime;
int prime(int n)
{
    if (n==1)
    isprime=1;
    else 
    {
    isprime=1;
    for(int i=2;i<=(n/2);i++)
       {
       if(n%i==0)
       isprime=0;
       }
    }
    
}
int main()
{
    char ch[21];
    int i,len,sum;
    while(gets(ch))
    {
    sum=0;
    len=strlen(ch);
    for(i=0;i<len;i++)
       {
       if((ch[i]>='A')&&(ch[i]<='Z'))
       sum+=ch[i]-38;
       else if((ch[i]>='a')&&(ch[i]<='z'))
       sum+=ch[i]-96;
       }
    prime(sum);
    if(isprime==0)
    printf("It is not a prime word.\n");
    if(isprime>0)
    printf("It is a prime word.\n");
    }
}
