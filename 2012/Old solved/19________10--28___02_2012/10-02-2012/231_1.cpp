#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>

using namespace std;

int main()
{
    int  a,n;
    int k=0,i,j;


    while((cin>>a) && (a!=-1))
    {
    if(k)
       cout<<endl;
    vector<int>v;
    v.push_back(a);
   
   while((cin>>a) && (a!=-1))
       v.push_back(a);

       int Maximum=1;
       int s[v.size()];
       for(i=0;i<v.size();i++)
          {
          s[i]=1;
          for(j=0;j<i;j++)

             if(v[j]>=v[i])
                s[i]=max(s[i],s[j]+1);

          Maximum=max(Maximum,s[i]);
          }

printf("Test #%d:\n",++k);
printf("  maximum possible interceptions: %d\n",Maximum);
    }
}
