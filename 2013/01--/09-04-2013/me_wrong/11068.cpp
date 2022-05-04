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
#include<cstdio>


#define pi 2*acos(0)


using namespace std;


int main()
{
double X,Y, a1,b1,c1,a2,b2,c2;
while(cin>>a1>>b1>>c1>>a2>>b2>>c2 &&a1!=0&&
	b1!=0&&c1!=0&&a2!=0&&b2!=0&&c2!=0)
	  {
	  if((a2*b1 - a1*b2)==0)
	     cout<<"No fixed point exists."<<endl;
	  else
	      {
	      X =(double)((b1*c2 - b2*c1)/(a2*b1 - a1*b2));
	      Y=(double)((c1 - a1*X) / b1);
// 		  X=(((c1*b2)-(c2*b1))/((a1*b2)-(a2*b1)));
  //		  Y=(((c1*a2)-(c2*a1))/((b1*a2)-(b2*a1)));
	      printf("The fixed point is at %.2lf %.2lf.\n",X,Y);
	      }
	  }	
}



/*


Geometry Line Problem

You need to find intersection point from two line equation.

If the two line equation are
a1X + b1Y = C1 -----------------------------------(i)
a2X + b2Y = C2 -----------------------------------(ii)

From equation (i) you get
Y = (c1 - a1X) / b1 ------------------------------(iii)
From equation (ii) you get
Y = (c2 - a2X)/ b2 -------------------------------(iv)

So, 
=>(c1 - a1X) / b1 =  (c2 - a2X)/ b2
=>(c1 - a1X) *b2 =  (c2 - a2X) * b1
=> X = (b1c2 - b2c1) / (a2b1 - a1b2) ---------(v)

From equation (v) you get the value of X
And put the value of X to equation (iii) you got the value of Y

Print X and Y

Remember that if (a2b1 - a1b2)==0 then print No fixed point exists.

*/
