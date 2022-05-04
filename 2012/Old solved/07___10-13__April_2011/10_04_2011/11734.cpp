
#include<stdio.h>
#include<string.h>
int main()
{
char judge[30],team[30],team1[30];
int kase,len1,len2,match,j,k,er;
while(scanf("%d\n",&kase)==1)
{
for(int i=1;i<=kase;i++)
{
gets(team);
gets(judge);
printf("Case %d: ",i);
len1=strlen(team);
len2=strlen(judge);
if((strcmp(judge,team))==0)printf("Yes\n");
else
{
k=0;
er=0;
for(j=0;j<len1;j++)
{
if((team[j]>='a'&&team[j]<='z')||(team[j]>='A'&&team[j]<='Z'))
{
team1[k]=team[j];
k++;
}
}
team1[k]='\0';
for(j=0;j<len2;j++)
{
if(judge[j]!=team1[j])
{
er++;
break;
}
}
if(len2==k && er ==0)printf("Output Format Error\n");
else printf("Wrong Answer\n");
}
}
}
return 0;
}
/*

#include<stdio.h>
#include<string.h>
int main()
{
    char team[60],judge[60],temp[50];
    int i,j,k,er,t,len1,len2;
    while(scanf("%d\n",&t)==1)
    {
    for(i=1;i<=t;i++)
          {
          gets(team);         
          gets(judge);
          len1=strlen(team);
          len2=strlen(judge);
         
         
                        if(strcmp(team,judge)==0)
                        printf("Case %d: Yes\n",i+1);
               
          else
              {
                        er=0;
                         k=0;
              for(j=0;j<len1;j++)
                 {
                 if(team[j]>='a'&&team[j]<='z'||team[j]>='A'&&team[j]<='Z')
                 
                 {
                 temp[k]=team[j];
                 k++;
                 }
                 }
                 temp[k]='\0';
                
                 for(j=0;j<len2;j++)
                 {
                  if(judge[j]!=temp[j])
                  {
                                        er++;
                                        break;
                  }                    
                 }

              if(len2==k && er==0)
        
             printf("Case %d: Output Format Error\n",i+1)  ; 
             else
             printf("Case %d: Wrong Answer\n",i+1); 
              }
              

          
          }
    }
    return 0;
}
*/