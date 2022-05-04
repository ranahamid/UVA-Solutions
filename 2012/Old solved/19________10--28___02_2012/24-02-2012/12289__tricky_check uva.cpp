#include <stdio.h>
#include <string.h>
 
int tester(char *in)
{
    int len = strlen(in), i, f1, f2, f3;
 
    if (len == 3)
    {
        char one[]="one", two[]="two";
        for (i=0, f1=0, f2=0 ; i<3 ; i++)
        {
            if (one[i]!=in[i]) f1++;
            if (two[i]!=in[i]) f2++;
        }
        if (f1<2) return 1;
        if (f2<2) return 2;
 
    } 
    else if (len == 5)
    {
       /* char three[]="three";
        for (i=0, f3=0 ; i<5 ; i++)
        {
            if (three[i]!=in[i]) f3++;
        }
        if (f3<2) */
        
        return 3;
    }
    return 0;
}
 
int main()
{
    int test, res;
    char input[100];
 
    scanf("%d",&test);
 
    while (test--)
    {
        scanf("%s",input);
        res = tester(input);
        printf("%d\n",res);
    }
    return 0;
}
