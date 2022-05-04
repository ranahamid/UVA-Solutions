#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#define pi 2*acos(0)
#define max 200001
using namespace std;

int main()
{
int R,C,W,A,P;

while(cin>>R>>C>>W)
{
if(R==0&&C==0&&W==0)
  break;
A = (R-8+1)*(C-8+1);
P = (A/2) + (A % 2)*W;
cout<<P<<endl;
}
}
