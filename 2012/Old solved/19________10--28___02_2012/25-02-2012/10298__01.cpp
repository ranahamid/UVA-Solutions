//10298

#include<iostream>
#include<stdio.h>
#define max 1000011
using namespace std;
char ch[max];
int main()

{
    int i,len;
    gets(ch);
 while(ch[0]!='.')
   // while(ch[0]!='.' || ch[1])
    {
    len=1;
    for(i=1;ch[i];i++)
       {
       while(ch[i]!=ch[i%len])
          {
            len++;
          }
       }  
       if(i%len==0)
          cout<<i/len<<endl;
       else
          puts("1");
       gets(ch);

}
}
