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


using namespace std;


int main()
{
int test,n,i,temp;
vector<int>v;
    cin>>test;
    while(test--)
    {
	cin>>n;
	for(i=0;i<n;i++)
	   {
	   cin>>temp;
	   v.push_back(temp);
	   }
	sort(v.begin(),v.end());
	int sum=0;
	for(i=n-3;i>=0;i=i-3)
 	   {
 		sum=sum+v[i];
 	   }
	cout<<sum<<endl;
	
	}
}
