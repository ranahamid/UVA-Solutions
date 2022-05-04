//10473
#include<iostream>
#include<sstream>
#include<map>
#include<stdio.h>
using namespace std;

int main()
{
string buff;
int n;
while(cin>>buff)
  {
  if(buff[0]=='-')
  break;
  if( buff.size()>1 && buff[1]=='x')
       {
       sscanf(buff.c_str(),"%X",&n);
       printf("%d\n",n);
       }
  else
       {
       
       sscanf(buff.c_str(),"%d",&n);
       printf("0x%X\n",n);
       }
  }
}    
