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
int n,m,i,temp,sum,index;
vector<int>head;
vector<int>knight;
while((cin>>n>>m)&&(n!=0&&m!=0))
    {
    head.clear();
    knight.clear();
    
	for(i=0;i<n;i++)
	   {
	   cin>>temp;
	   head.push_back(temp);
	   }
	for(i=0;i<m;i++)
	   {
	   cin>>temp;
	   knight.push_back(temp);
	   }
	sort(head.begin(),head.end());   
	sort(knight.begin(),knight.end());
	sum=0;
	index=0;
	for(i=0;i<m;i++)
	{
		if(knight[i]>=head[index])
		{
		sum=sum+knight[i];
		index++;
		if(index==n)
		   break;
		}
	}
	
	if(index==n)
	  printf("%d\n",sum);
	else
	  printf("Loowater is doomed!\n");
	}
    
}
