#include<stdio.h>
#include<string.h>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#define max 1000
using namespace std;
struct DNA{
          int number;
          char str[1000];
          };

struct DNA dna[max];

int main()
{
    
int test,i,k,m,n,j,count;
char str[1000];
while(scanf("%d",&test)==1)
{
for(k=0;k<test;k++)
   {
   scanf("%d%d\n",&n,&m);
   for(i=0;i<m;i++)
   gets(str);
   
   strcpy(dna[i].str,str);
   
      count=0;
      
  /* for(i=0;i<m;i++)
   cout<<dna.str[i]<<endl; */
   
  for(i=0;i<m;i++)
    {
 
    for(j=i+1;j<n;j++)
      {
      if(dna[i].str[j]>=dna[i].str[j-1])
      count++;
      }
    dna[i].number=count;
       count=0;
    }

for(i=0;i<m;i++)
   printf("%d",dna[i].number);

/*
sort(dna.number.begin(),dna.number.end());
 for(i=0;i<dna.number.size();i++)
    {
    cout<<dna[i].number<<"  ";
    //number[i] ==sorting will perform
    //error makes here........
    cout<<dna[i].str<<endl;
    }
    
  
     for(i=0;i<m;i++)
     {
     cout<<dna[dna.number[i]].str<<endl;
     }
     
     */
     
   }
} 

system("PAUSE");   
}
