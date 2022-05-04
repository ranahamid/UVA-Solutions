#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)
#define max 110

using namespace std;


int main()
{
    vector<int>b;
    vector<int>s;
    int kase=0, temp,m,n,i;
    
    while( (cin>>m>>n)&& (m!=0&& n!=0) ) 
    {
    kase++;
    b.clear();
    s.clear();
    for(i=0;i<m;i++)
       {
       cin>>temp;
       b.push_back(temp);
       }
    for(i=0;i<n;i++)
       {
       cin>>temp;
       s.push_back(temp);
       }
     if(m<=n)
        printf("Case %d: 0\n",kase);  
     else
        {
        //sort(b, b+m);
        sort(b.begin(),b.end());
         printf("Case %d: %d %d\n",kase,(m-n),b[0]); 
        }
    }
}
