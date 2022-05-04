#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
int index=0,i,ans[150],temp;
char ar[150];
for(i=0;i<150;i++)
  ans[i]=0;
while(cin>>ar)
  {
  if(strcmp(ar,"0")==0)
     break;
  int len=strlen(ar);
  index=0;
  for(i=len-1;i>=0;i--)
      {
      temp=(ar[i]-48)+ans[index];
      if(temp>9)
           {
           ans[index]=temp%10;
           index++;
           ans[index]=ans[index]+temp/10;
           }
      else
           {
           ans[index]=temp;
           index++;
           }
      }
  }
  int j=0;
for(i=0;i<150;i++)
  {
  if(ans[i]!=0)
       {
        j=i;

       }
  }
for(i=j;i>=0;i--)
cout<<ans[i];
cout<<endl;
}
