#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
long long int com[35];
int test,i,j,len,kase=1;
com[0]=1;
for(i=1;i<=30;i++)
  {
  com[i]=com[i-1]*4;
  }

// for(i=1;i<=30;i++) cout<<com[i]<<" ";

scanf("%d\n",&test);
while(test--)
  {
  char ch[35];
  gets(ch);
  //scanf("%s",ch)
  len=strlen(ch);
  long long int ans=0;
  for(i=0;i<len;i++)
     {
     if(ch[len-1-i]>'A')
          ans=ans+com[i];
  if(ch[len-1-i]>'C')
          ans=ans+com[i];
  if(ch[len-1-i]>'G')
          ans=ans+com[i];
  if(ch[len-1-i]>'T')
          ans=ans+com[i];
     }
  printf("Case %d: (%d:%lld)\n",kase,len,ans);
  kase++;
   }
}
