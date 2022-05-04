#include<stdio.h>
#include<string.h>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
struct DNA{
          vector <int> number;
          string str[110];
          };

struct DNA dna;

int main()
{
    
int test,i,k,m,n,j,count;
while(scanf("%d",&test)==1)
{
for(k=0;k<test;k++)
   {
   scanf("%d%d\n",&n,&m);
   for(i=0;i<m;i++)
   cin>>dna.str[i];
   
      count=0;
  /* for(i=0;i<m;i++)
   cout<<dna.str[i]<<endl; */
  for(i=0;i<m;i++)
    {
 
    for(j=i+1;j<n;j++)
      {
      if(dna.str[j]<dna.str[j-1])
      count++;
      }
    dna.number.push_back(count);
       count=0;
    }
/*
for(i=0;i<m;i++)
   cout<<dna.number[i]<<endl;*/
sort(dna.number.begin(),dna.number.end());
 for(i=0;i<dna.number.size();i++)
    {
    cout<<dna.number[i]<<"  ";
    //number[i] ==sorting will perform
    //error makes here........
    cout<<dna.str[i]<<endl;
    }
    
  
     for(i=0;i<m;i++)
     {
     cout<<dna.str[dna.number[i]]<<endl;
     }
     
   }
} 
system("PAUSE");   
}
