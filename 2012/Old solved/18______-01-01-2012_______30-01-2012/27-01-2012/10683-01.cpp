#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
#define pi 2*acos(0)
#include<iomanip>
using namespace std;

int main()
{
string st="00000000";
double trditional,convert;
while(cin>>st)
  {
  double hh,mm,ss,cc;
  hh=(st[0]-48)*10+st[1]-48;
  mm=(st[2]-48)*10+st[3]-48;
  ss=(st[4]-48)*10+st[5]-48;
  cc=(st[6]-48)*10+st[7]-48;

  trditional=(hh*3600+mm*60+ss)*100+cc;

 convert=(125.0 / 108.0)*trditional;
  
 long ans=(long)convert;
 cout<<setw(7)<<setfill('0')<<ans<<endl;
 st="00000000";
 }
}

