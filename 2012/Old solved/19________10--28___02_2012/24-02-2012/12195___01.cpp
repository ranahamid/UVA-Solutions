#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#define ERROR 1e-11
using namespace std;
char input[2200];

int main()
{
char *p;
double sum;
int i,count;
while(gets(input))
 {
 if(strcmp(input,"*")==0)
     break;
count=0;
 p=strtok(input,"/");
while (p!=NULL)
{
 for(i=0,sum=0;p[i]>='A'&& p[i]<='Z';i++)
    {
    if(p[i]=='W')
        sum=sum+1.00;
    else if(p[i]=='H')
        sum=sum+(1.0/2.0);
    else if (p[i]=='Q') 
           sum += 1.0/4.0;
    else if (p[i]=='E') 
          sum += 1.0/8.0;
    else if (p[i]=='S') 
           sum += 1.0/16.0;
    else if (p[i]=='T') 
          sum += 1.0/32.0;
    else if (p[i]=='X') 
            sum += 1.0/64.0;
    }
// if (fabs(sum-1)<ERROR) 
if((sum-1.00)==0)
  count++;


p=strtok(NULL,"/");
} 
cout<<count<<endl;
 }
}
