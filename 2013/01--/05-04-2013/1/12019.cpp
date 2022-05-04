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

#define pi 2*acos(0)


using namespace std;


int main()
{
int test,t,i,day,month,d,m;
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
string week[7]={"Friday","Saturday","Sunday","Monday",
				"Tuesday","Wednesday","Thursday"};
int cd[12];
cd[0]=days[0];
for(i=1;i<12;i++)
   cd[i]=cd[i-1]+days[i];
cin>>test;
for(t=1;t<=test;t++)
  {
 	cin>>month>>day;
 	d=day;
 	m=month-1;
 	if(m)
 	   d=d+cd[m-1];
 	cout<<week[d%7]<<endl;
 	
  }
}
