#include <stdio.h>
#include <math.h>
int main()
{
int i,t;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
double val,vat;
scanf("%lf",&val);
val=val-180000;
if(val<1)
{ 
printf("Case %d: 0\n",i);
continue;
}
val=val-300000;
if(val<1)
{
val=val+300000;
vat=(val*10)/100;
vat=ceil(vat);

if(vat<2000)
printf("Case %d: 2000\n",i);
else
printf("Case %d: %.0lf\n",i,vat);
continue;
}
vat=30000;
val=val-400000;
if(val<1)
{
val=val+400000;
vat=(vat+(((val*15))/100));
vat=ceil(vat);
printf("Case %d: %.0lf\n",i,vat);
continue;
}
vat=vat+60000;
val=val-300000;
if(val<1)
{
val=val+300000;
vat=(vat+((val*20)/100));
vat=ceil(vat);
printf("Case %d: %.0lf\n",i,vat);
continue;
}
vat=vat+60000;
vat=(vat+((val*25)/100));
vat=ceil(vat);
printf("Case %d: %.0lf\n",i,vat);
continue;
}
return 0;
}
