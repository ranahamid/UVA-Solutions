#include<stdio.h>
#define max 1001
#define len 2600

int fact[max][len];

void calc()
{
int i,j,k;
fact[0][0]=fact[1][0]=1;
for(i=2;i<max;i++)
{
for(j=0;j<len;j++)
{
fact[i][j]+=fact[i-1][j]*i;
if(fact[i][j]>9)
{
fact[i][j+1]+=fact[i][j]/10;
fact[i][j]%=10;
}
}
}
}

int main()
{
long i,j,n;
calc();
while(scanf("%ld",&n)==1)
{

for(i=len-1;i>0;i--)
if(fact[n][i]!=0)
break;
int c[10]={0};
for(;i>=0;i--)
{
c[fact[n][i]]=c[fact[n][i]]+1;
}

printf("%ld! --\n",n);
 printf("   (0)    %d    (1)    %d    (2)    %d    (3)    %d    (4)    %d\n",c[0],c[1],c[2],c[3],c[4]);
 printf("   (5)    %d    (6)    %d    (7)    %d    (8)    %d    (9)    %d\n",c[5],c[6],c[7],c[8],c[9]); 


}
return 0;
}
