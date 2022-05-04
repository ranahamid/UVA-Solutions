#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
   string code;
   while(cin>>code,code!="#")
   {
   cout<< (!next_permutation(code.begin(),code.end())?"No Successor" :code)<<endl;
   }
}
