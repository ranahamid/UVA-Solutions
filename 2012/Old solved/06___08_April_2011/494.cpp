//494
#include <stdio.h>
int main()
{
    char name[1000];
    int i,p;
    while(gets(name))
    
{
p=0;           
for(i=0;name[i]!='\0';i++)
{                    
    if(
          ((name[i]>='a'&& name[i]<='z')||
          (name[i]>='A' && name[i]<='Z'))
          &&
          (name[i+1]<'a' || name[i+1]>'z') &&
           (name[i+1]<'A' || name[i+1]>'Z')      
      )
          p++;
      }
      printf("%d\n",p);
    }
}
