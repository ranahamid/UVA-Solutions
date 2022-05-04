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
int ins,test,i,p,k;
cin>>test;
vector<string>v;
char s[100];
vector<string>::iterator pos;
while(test--)
  {
  
  scanf("%d\n",&ins);
  v.clear();
  for(i=0;i<ins;i++)
     {
     gets(s);
     v.push_back(s);
     }
  p=0;
  char *token,word[110][50];
  for(i=0;i<ins;i++)
     {
	 if(v[i]=="LEFT")
	   p--;
	 else if(v[i]=="RIGHT")
	   p++;
	 else
	    {
	    char ss[50];
	    for(k=0;v[i][k];k++)
	       {
	       ss[k]=v[i][k];
	       }
	     ss[k]='\0';
	     token=strtok(ss," ");
	     k=0;
		 while(token!=NULL)
	       {
	       strcpy(word[k++],token);
	       token=strtok(NULL," ");
		   }
		int a=atoi(word[2]);
	//	cout<<"a: "<<a<<endl;
		if(v[a-1]=="LEFT")
	   		{
	   		p--;
	   		v[i]="LEFT";
			}
	 	else if(v[a-1]=="RIGHT")
	   		{
	   		p++;
			v[i]="RIGHT";
			}
	    }
	 
	 }
	cout<<p<<endl;
  }

}
