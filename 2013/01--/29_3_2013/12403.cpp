#include<iostream>
#include<string.h>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<stdlib.h>

#define max 20

using namespace std;

int main()
{
 int total=0,test;
 //cin>>test;
 scanf("%d\n",&test);
 while(test--)
 {
 char in[max],in1[max],*token,bb[2][max];
 gets(in1);
 //cout<<"ins : "<<in1<<endl;
 strcpy(in,in1);
 token=strtok(in," ");
 int k=0,amount;
 while(token!=NULL)
     {
     strcpy(bb[k++],token);
     token=strtok(NULL," ");
     }
if(k==2)
    {
    amount=atoi(bb[1]);
    total+=amount;
    }
else if(k==1)
  {
   cout<<total<<endl;
  }
 }

}
