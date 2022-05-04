//11777
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int i,test,j;
    char ch;
    int Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3,low,avg,sum;
    while(scanf("%d",&test)==1)
    {
     for(i=1;i<=test;i++)
       {
     //cin>>Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3;
scanf("%d%d%d%d%d%d%d",&Term1,&Term2,&Final,&Attendance,&Class_Test1,&Class_Test2,&Class_Test3);     
    /* low=0;
     if(Class_Test1<low)
     low=Class_Test1;  
     if(Class_Test2<low)
     low=Class_Test2; 
     if(Class_Test3<low)
     low=Class_Test3;   
     */
     vector<int>v;
     v.push_back(Class_Test1); 
     v.push_back(Class_Test2);
     v.push_back(Class_Test3);
     
     sort(v.begin(),v.end());
     reverse(v.begin(),v.end());
     
     avg=(v[0]+v[1])/2;
     sum=Term1 + Term2 + Final+  Attendance+avg;
     ///    cout<<sum;
     if(sum>=90)
     printf("Case %d: A\n",i);
     else if(sum>=80 && sum<90)
     printf("Case %d: B\n",i);
     else if(sum>=70 && sum<80)
     printf("Case %d: C\n",i);
     else if(sum>=60 && sum<70)
     printf("Case %d: D\n",i);
     else if (sum<60)
     printf("Case %d: F\n",i); 
       }
    }
}
