//576
#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j,syl1,syl2,syl3,a,b;
    char h[302];
    while(gets(h))
    {
 
    len=strlen(h);
    if(h[0]=='e' && h[1]=='/' && h[2]=='o' && h[3]=='/' && h[4]=='i' && len==5)break;
    syl1=syl2=syl3=a=b=0;
    for(i=0;i<len;i++)
    {
    if(h[i]=='/' && a==0)
    a=i;
    if(h[i]=='/' && a!=0)
    b=i;
    }
    
    
    
    
    
    for(i=0;i<len;i++)
       {
       if(h[i]=='/' && a==0)
       a=i;
       if(h[i]=='/' && a!=0)
       b=i;
       }
       
    for(i=0;i<a;i++)
       {
       if(
       (h[i]=='a'|| h[i]=='e'||h[i]=='i'||h[i]=='o'||h[i]=='u'||h[i]=='y')
        &&
        (!(h[i-1]=='a'|| h[i-1]=='e'||h[i-1]=='i'||h[i-1]=='o'||h[i-1]=='u'||h[i-1]=='y'))
        ) 
       syl1++;
       }
    if(syl1!=5)
    printf("1\n");
    
    else

     {
     for(i=a+1;i<b;i++)
       {
       if(
       (h[i]=='a'|| h[i]=='e'||h[i]=='i'||h[i]=='o'||h[i]=='u'||h[i]=='y')
        &&
      (!  (h[i-1]=='a'|| h[i-1]=='e'||h[i-1]=='i'||h[i-1]=='o'||h[i-1]=='u'||h[i-1]=='y'))
        ) 
       syl2++;
       }
       
    if(syl2!=7)
    printf("2\n");

    else
    {
     for(i=b+1;i<len;i++)
       {
       if(
       (h[i]=='a'|| h[i]=='e'||h[i]=='i'||h[i]=='o'||h[i]=='u'||h[i]=='y')
        &&
        (!(h[i-1]=='a'|| h[i-1]=='e'||h[i-1]=='i'||h[i-1]=='o'||h[i-1]=='u'||h[i-1]=='y'))
        ) 
       syl3++;
       }
 
    if(syl3!=5)
    printf("3\n");
    else
    printf("Y\n");
    }
    }
}
return 0;
}
