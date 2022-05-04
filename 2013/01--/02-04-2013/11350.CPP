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
long long int test,a,b,c,d,e,f;
char ch;
    scanf("%lld\n",&test);
    while(test--)
    {
	 a=d=0;
     b=c=e=f=1;
	while( (ch=getchar())!='\n')
	   {
		if(ch=='R')
		   {
		   a=e;
		   b=f;	
		   }
		 else if(ch=='L')
		    {
		    c=e;
		    d=f;
		    }
		e=a+c;
		f=b+d;	
	   }
	printf("%lld/%lld\n",e,f);
	}
}
