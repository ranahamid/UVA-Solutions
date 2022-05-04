#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>

#define pi 2*acos(0)
#define max 110

using namespace std;


int main()
{
    map<string,string>m;
    map<string,string>::iterator pos;
    m.insert(make_pair("HELLO","ENGLISH"));
    m.insert(make_pair("HOLA","SPANISH"));
    m.insert(make_pair("HALLO","GERMAN"));
    m.insert(make_pair("BONJOUR","FRENCH"));
    m.insert(make_pair("CIAO","ITALIAN"));
    m.insert(make_pair("ZDRAVSTVUJTE","RUSSIAN"));
        
    string st;
    int found,kase=0;
    while(cin>>st && st!="#")
    {
    found=0;
    kase++;
    for(pos=m.begin();pos!=m.end();pos++)
       {
       if(pos->first==st)
           {                   
           cout<<"Case "<<kase<<": "<<pos->second<<endl;
           found=1;
           }
       }
    if(!found)
           printf("Case %d: %s\n",kase,"UNKNOWN");
    }
}
