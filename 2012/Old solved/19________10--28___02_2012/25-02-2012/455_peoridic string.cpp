//10298

#include<iostream>
#include<stdio.h>
#define max 1000011
using namespace std;
char ch[max];
int main()
{
int i,len,test;
  scanf("%d",&test);
  getchar();
while(test--)
{
getchar();
gets(ch);
    len=1;
    for(i=1;ch[i];i++)
       {
       while(ch[i]!=ch[i%len])
          {
            len++;
          }
       }  
       if(i%len==0)
          cout<<len<<endl;
       else
           cout<<i<<endl;
       if(test)
            putchar('\n');

}
}
