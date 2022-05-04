#include<stdio.h>
#include<iostream>
#define max 1001
#define len 2600
using namespace std;
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
int C[10]={0};
for(;i>=0;i--)
{
C[fact[n][i]]=C[fact[n][i]]+1;
}

 cout << n << "! --" << endl;
        cout << "   (0)    " << C[0];
        cout << "    (1)    " << C[1];
        cout << "    (2)    " << C[2];
        cout << "    (3)    " << C[3];
        cout << "    (4)    " << C[4]<<endl;
        cout << "   (5)    " << C[5];
        cout << "    (6)    " << C[6];
        cout << "    (7)    " << C[7];
        cout << "    (8)    " << C[8];
        cout << "    (9)    " << C[9]<<endl;

}
return 0;
}
