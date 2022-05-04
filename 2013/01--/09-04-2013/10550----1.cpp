#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>


#define pi 2*acos(0)

#define N 128

using namespace std;




int main()
{
int ans,a,b,c,d;
while(cin>>a>>b>>c>>d)
 // while(scanf("%d %d %d %d",&a,&b,&c,&d) && (a||b||c||d))
    {
  if(a==0&&b==0&&c==0&&d==0)
     break;
  	ans=720+360;
  	
	
	if(b>a)
  	   ans=ans+(40+a-b)*9;
  	else
  	   ans=ans+(a-b)*9;
	

  
	if(b>c)
  	   ans=ans+(40+c-b)*9;
  	else
  	   ans=ans+(c-b)*9;
	
	if(d>c)
  	   ans=ans+(40+c-d)*9;
  	else
  	   ans=ans+(c-d)*9;
	
	cout<<ans<<endl;

  }

}

