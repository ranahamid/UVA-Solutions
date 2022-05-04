#include<math.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char num[500];
   long long int i,len,x,skew,k;
    while(gets(num))
    {
    len=strlen(num);
    if(len==1 && (num[0]-48)==0)
    break;
    else
        {
              skew=0;
              for(i=0;i<len;i++)
              {
              x=(num[i]-48);
              k=len-i;
              skew+=x*(pow(2,k)-1);
              }
         printf("%ld\n",skew);     
        }
    }
}
