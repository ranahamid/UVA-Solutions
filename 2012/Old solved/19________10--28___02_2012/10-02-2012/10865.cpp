#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#define pi 2*acos(0)
#define max 200001
using namespace std;

int main()
{
int N,k,b[max],a[max],x,y,stan,olie,i;

while(cin>>N,N)
{
for(i=1;i<=N;i++)
   {
   cin>>a[i]>>b[i];
   }
   
k=N/2+1; 
// mid point that is actually the dividing line region.
x=a[k]; 
// a[] holds the X co-ordinate value and x is the X of the mid point.
y=b[k]; 
// b[] holds the Y co-ordinate value and y is the Y of the mid point.

stan=0; // Initially both of them have 0 score.
olie=0;

for (i=1; i<=N; i++) 
  {
  if ((a[i]>x && b[i]>y)||(a[i]<x && b[i]<y)) 
  // Criteria for Stan
    stan++;
  if ((a[i]>x && b[i]<y)||(a[i]<x && b[i]>y)) 
  // Criteria for Olie
    olie++;
  }
  cout<<stan<<" "<<olie<<endl;
}
}
