#include<stdio.h>
int main()
{
long int ini,lim,kase=1,A;
while(scanf("%ld%ld",&ini,&lim)==2)
{
A=ini;
if(ini<0 && lim<0) break;
long int term=1;
while(1)
{
if (ini==1) break;
else if(ini%2==0) ini=ini/2;
else ini=3*ini+1;
if(ini>lim)break;
term++;
}
printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",kase,A,lim,term);
kase++;
}
return 0;
}



/*

#include<stdio.h>
int main()
{
    long  int a,b,term,kase=1;
    while(scanf("%ld%ld",&a,&b)==2)
    {
    
    if(a<0 && b<0)
    break;
    term=1;
    while(1) 
         {
             
              if (a==1)
              break;
              else
                 {
                       if(a%2==0)
                       a=a/2;
                       else
                       a=3*a+1;
                       if(a>b)
                       break;
                      
                       term++;
                 }
                
         }
printf(""Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",kase,a,b,term);
    
         kase++; 
    }
}
*/