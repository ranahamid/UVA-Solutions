#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>


#define pi 2*acos(0)


using namespace std;

int main()
{
string st;
char val;
getline(cin,st);
while(true)
   {
   	val=0;
	getline(cin,st);
	if(st=="___________")
	   break;
	if(st[9]=='o')
	   val=val+1;
	if(st[8]=='o')
	   val=val+2;
	 if(st[7]=='o')
	   val=val+4;
	 
	 if(st[5]=='o')
	   val=val+8;
	 if(st[4]=='o')
	   val=val+16;
	 if(st[3]=='o')
	   val=val+32;
	 if(st[2]=='o')
	   val=val+64;
	 if(st[1]=='o')
	   val=val+128;
	 
	 cout<<val;   

   }
}



