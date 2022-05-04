#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,i;
    char st[22];
    while(scanf("%s",st))
    {
    if(st[0]=='-'&&st[1]=='1')
      break;
    if(st[0]=='o'&&st[1]=='x')
      {
      n=0;
      int len=strlen(st);
      for(i=2;i<len;i++)
             {
             //c++ er 5 no theke
             }
      }
    else
        {
        n=0;
        int len=strlen(st);
        for(i=0;i<len;i++)
           n=n*10+st[i]-48;
        printf("0x%x\n",n);
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
