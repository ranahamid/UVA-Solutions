#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>

#define pi 2*acos(0)
#define max 100

using namespace std;


int main()
{
int t,test,k,n,i;
string st;
double length,red,green,width;

cin>>test;

while(test--)
  {
  cin>>length;
  width=(length*6)/10.0;
  red=length/5;
  red=pi*pow(red,2);
  green=(length*width)-red;  
  printf("%.2lf %.2lf\n",red,green);
  }
}

