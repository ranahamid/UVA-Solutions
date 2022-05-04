#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char line[10000],m,test[10000],x,rev[10000];
int len,i,j,l,k,p;
while(gets(line))
{
if(line[0]=='D'&&line[1]=='O'&&line[2]=='N'&&line[3]=='E')break;
len=strlen(line);
j=0;
p=0;
for(i=0;i<len;i++)
{
x=tolower(line[i]);
if(x>='a' && x<='z')
{
test[j++]=x;


}
}
test[j]='\0';
l=j;
for(i=0,j=l-1;i<l/2,j>=l/2;i++,j--)
{
if(test[i]!=test[j])
{
p=1;
break;
}
}

if(p!=0)
printf("Uh oh..\n");
else
printf("You won't be eaten!\n");

}
return 0;
}


/*
//10945
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char test[10000],name[10002],x;
    int i,j,p,len,l;
    while(gets(name))
    {
    if( name[0]=='D' && name[1]=='O' && name[2]=='N' && name[3]=='E')
    break;
    else
        {
                 
         len=strlen(name);
         p=0;
         for(i=0;i<len;i++)
               {
              x=tolower(name[i]);
               //x=tolower(name[i]);
               if(x>='a' && x<='z')   
                  {
                  test[j]=x;
                  j++;
                  }
               }
         test[j]='\0';        
        l=j;
        for(i=0,j=l-1;i<l/2,j>l/2;i++,j--)
               {
               if (test[i]!=test[j])
               p=1;
               break;
               }    
        if (p!=0)
        printf("Uh oh..\n");    
        else
        printf("You won't be eaten!\n");   
        }
    }
}

*/