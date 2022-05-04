#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

char* ans[2]={"NO","YES"};

int main()
{
    char ch;
    int mod=0;
    int p=131071;
 while((ch=getchar())!=EOF)
	    {
	        if(ch=='#')
	        {
	            puts(ans[!mod]);
	            mod = 0;
	        }
	        else if(ch!='\n')
	            mod = (mod*2 + ch-'0')%p;
  }
}
