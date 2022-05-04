#include<iostream>
#include<string.h>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<stdlib.h>

#define max 200

using namespace std;

int main()
{
 int total=0,test,amount=0;
  char in[max];
 scanf("%d",&test);
 while(test--)
 {
 cin>>in;
 //scanf
 if(strcmp(in,"donate")==0)
   {
   cin>>amount;
   toatal+=amount;
   }
 else
   {
   cout<<total<<endl;
   }
 }

}
