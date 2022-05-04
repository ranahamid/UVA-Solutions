//138
//0.012_time

#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;

int R[20] = {
6,8,
35,49,
204,288,
1189,1681,
6930,9800,
40391,57121,
235416,332928,
1372105,1940449,
7997214,11309768,
46611179,65918161
};  felix_halim

int main()
{
int i;
for(i=0;i<20;i=i+2)
{
printf("%10d%10d\n",R[i],R[i+1]);
}
system("PAUSE");
}
