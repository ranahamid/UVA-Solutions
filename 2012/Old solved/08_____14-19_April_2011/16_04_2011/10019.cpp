#include<stdio.h>
int main()
{
    long int n,bin,hex,bb,hb,x,kase,i;
    //bb=Binary Bit
    //Hex Bit=Hexa Bit
    while(scanf("%ld",&kase)==1)
    {
    for(i=0;i<kase;i++)
    {               
    scanf("%ld",&n);                   
    bin=n,hex=n,bb=0,hb=0;
    while(bin!=0)
                 {
                 x=bin%2;
                 if(x==1)
                 bb++;
                 bin/=2;
                 }
    while(hex!=0)
                 {
                 x=hex%10;
                 if(x==1 || x==2 || x==4 || x==8)
                 hb++;
                 else if(x==3 || x==5 || x==9 || x==6)
                 hb=hb+2;
                 else  if(x==7)
                 hb=hb+3;
                 hex/=10;
                 }
    printf("%ld %ld\n",bb,hb);
    }          
    }
}
