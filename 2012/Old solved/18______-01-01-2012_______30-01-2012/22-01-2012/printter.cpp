#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<cstdlib>
#define pi 2*acos(0)
#define max 200001
using namespace std;

int main()
{
    FILE *fp;
    int start=2;
    int end=44;
    fp=fopen("rana.txt","w");
    for(int i=start;i<=end;i++)
     {
     if(i%2==0)
     fprintf(fp,"%d,",i);
     }
    system("pause");   
}
