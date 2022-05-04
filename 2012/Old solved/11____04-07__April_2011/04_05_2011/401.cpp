#include<stdio.h>
#include<string.h>

int a,b,c,len,i,j;

int palindrome(char line [])
{
int k=1;
len=strlen(line);
for(i=0,j=len-1;i<len,j>=0;i++,j--)
{
if (line[i]==line[j] )
continue;
else
{
    k=0;
    break;
}
}
if(k==1)
return 1;
else 
return 0;
}

int mirpalin(char line[])
{
int k=0;
len=strlen(line);   
for(i=0;i<len;i++)
  {
  if(line[i]=='A'||line[i]=='H'||line[i]=='I'||line[i]=='L'||
  line[i]=='M'||line[i]=='O'||line[i]=='T'||line[i]=='U'||
  line[i]=='V'||line[i]=='W'||line[i]=='X'||
  line[i]=='Y'||  
  line[i]=='1'||line[i]=='8'||line[i]=='0')
  k++;
  }   
 if(k==len)
 return 1;
 else
 return 0;       
}


int mirrorstring(char line[])
{
int k,a=1;
len=strlen(line); 
for(i=0;i<len;i++) 
{
if(line[i]=='E')
line[i]='3';
else if(line[i]=='J')
line[i]='L';
else if(line[i]=='0')
line[i]='O';
else if(line[i]=='S')
line[i]='2';
else if(line[i]=='Z')
line[i]='5';
else
continue;
}
a=palindrome(line);
if(a==1)
return 1;
else
return 0;
}


int main()
{
    
    char line[22];
    int pd,ms,mp;
    while(gets(line))
    {
    len=strlen(line);
    for(i=0;i<len;i++)
    printf("%c",line[i]);
    pd=palindrome(line);
    if(pd==1)
      {
             mp=mirpalin(line);
             if(mp==1)
             printf(" -- is a mirrored palindrome.\n\n");
             else
             printf(" -- is a regular palindrome.\n\n");
      }
    else
      {
      ms=mirrorstring(line);
      if(ms==1)
      printf(" -- is a mirrored string.\n\n");
      else
      printf(" -- is not a palindrome.\n\n");
      }
    }
}
