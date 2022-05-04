#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main()
{
    map<string,string>M;
    string a,b,buff;
    while(getline(cin,buff),buff.size())
    {
      stringstream ss;
      ss<<buff;
      ss>>a>>b;
      M[b]=a;       
    }

while(cin>>buff)
{
cout<<(M.count(buff) ?M[buff] : "eh")<<endl;
}
    
}
