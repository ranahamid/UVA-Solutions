#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#define pi 2*acos(0)
#define R 6440
using namespace std;

int main()
{
    double distance,angle,min,deg,cord,arc,red,red2,temp;
    string st;
    while(cin>>distance>>angle>>st)
    {
    if(st=="min")
        deg=angle/60;  
    else 
        deg=angle;
    if(deg>180)
       deg=360-deg;
           
    red=(pi*deg)/180;
    temp=R+distance;
    if(deg==180);
      {
      arc=(R+distance)*red;
     // cord=2*R+distance;
      cord = sqrt(2 * temp * temp * (1 - cos(red)));
    }
  
    if(deg<180)
    {
    arc=(R+distance)*red;
    red2=(pi*(180-deg))/180;
   // cord=(R+distance)*(sin(red)/sin(red2));
   cord = sqrt(2 * temp * temp * (1 - cos(red)));
    }
printf("%.6lf %.6lf\n",arc,cord);

}
}
