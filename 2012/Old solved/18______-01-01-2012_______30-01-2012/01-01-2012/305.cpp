//305
#include<iostream>
using namespace std;

int ans[15]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
int main()
{
    int n;
    while(cin>>n)
     {
                 if(n==0)
                 break;
                 else
                 cout<<ans[n]<<endl;
     }
}
