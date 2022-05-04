#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)


using namespace std;


int main()
{
int t,test,a,b,c,array[150],i,n;
double s;

    cin>>test;
    while(test--)
    {
    s=0;
    int k=0;
    while(scanf("%d",&t)==1 && t!=0)
       {
       array[k++]=t;
       }
    n=k;         
    sort(array,array+n);
    for(i=n;i--;)
       {
       s=s+pow((double)array[i],(double)n-i);
       if(s>2500000)
          break;
       }
    if(s>2500000)
       printf("Too expensive\n");
    else
    
       printf("%.0lf\n",2*s);
    }
}
