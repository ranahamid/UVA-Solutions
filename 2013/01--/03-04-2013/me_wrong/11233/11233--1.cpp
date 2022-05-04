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
int n,l,i,found,len,k;
map<string,string>m;
map<string,string>::iterator pos;
string a,b;

vector<string>v;
while(scanf("%d%d\n",&n,&l)==2)   
  {
  for(i=0;i<n;i++)	
     {
     cin>>a>>b;
     m.insert(make_pair(a,b));
     }
  for(i=0;i<l;i++)
     {
     cin>>a;
	 v.push_back(a); 
     }
  
  	    
  for(i=0;i<l;i++)
     {
       found=0;
       for(pos=m.begin();pos!=m.end();pos++)
          {
          if(v[i]==pos->first)
              {
              cout<<pos->second<<endl;
              found=1;
              }
          }	
	 for(len=0;v[i][len];len++);
	 if(found==0)
  		{    	
	 	
//	 	cout<<len<<endl;
		char newst[100];
		if( (v[i][len-2]!='a')&&(v[i][len-2]!='e')&&(v[i][len-2]!='i')
		&&(v[i][len-2]!='o')&&(v[i][len-2]!='u')&&(v[i][len-1]='y')		  
		  )
		     {
		     /*for(k=0;k<len-1;k++)
		        {
		        newst[k]=v[i][k];
				}
		     newst[k++]='i';
		     newst[k++]='e';
		     newst[k++]='s';
		     newst[k]='\0';
		     cout<<newst<<endl;*/
		     v[i][len-1]='i';
		     v[i][len]='e';
		     v[i][len+1]='s';
		     v[i][len+2]='\0';
		     found=1;
			 }  		
		  }
	 if(found==0) 	 
	    {
		if( v[i][len-1]=='o'||v[i][len-1]=='s'||v[i][len-1]=='x'||
	 	 (v[i][len-2]=='c'||v[i][len-1]=='h')||
	 	 (v[i][len-2]=='s'||v[i][len-1]=='h')
		    )
		      {
		      cout<<v[i]<<"es"<<endl;
		      found=1;
		      }
		}
	 if(found==0)
	    {
	    cout<<v[i]<<"s"<<endl;
	    }   
	 
	 }//end of i


  } 
}
