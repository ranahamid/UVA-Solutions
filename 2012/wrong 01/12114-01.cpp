#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
//#define min(a,b) (a<b?a:b)
using namespace std;
int main()
{
int test,kase=0;
double after,b,s,before;

while(cin>>b>>s)
   {
      
      if(b==1)
          {
           cout << "Case " << kase++ << ": ";
           cout << ":-\\" << endl;
           continue;
          }
      before=min(s/b,1.0);
      after =min((s-1)/(b-1),1.0);
      if(after<before)
          cout<<"Case "<<++kase<<": :-("<<endl;
      else if(after>before)
           cout<<"Case "<<++kase<<": :-)"<<endl;
      else
            cout<<"Case "<<++kase<<": :-|"<<endl;
   }
}
