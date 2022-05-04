#include<stdio.h>
#include<math.h>
int main()
{
double s,v,u,a,t,d,b,c;
int kase,i,j,n;
kase=1;
while(scanf("%d",&n)==1)
{
if(n==0)break;
else if(n==1)
{
scanf("%lf %lf %lf",&u,&v,&t);
a=(v-u)/t;
s=u*t+(.5*a*t*t);
printf("Case %d: %.3lf %.3lf\n",kase,s,a);
}
else if(n==2)
{
scanf("%lf %lf %lf",&u,&v,&a);
t=(v-u)/a;
s=u*t+(.5*a*t*t);
printf("Case %d: %.3lf %.3lf\n",kase,s,t);
}
else if(n==3)
{
scanf("%lf %lf %lf",&u,&a,&s);
v=sqrt(u*u+2*a*s);
t=(v-u)/a;
printf("Case %d: %.3lf %.3lf\n",kase,v,t);
}
else
{
scanf("%lf %lf %lf",&v,&a,&s);
u=sqrt(v*v-2*a*s);
t=(v-u)/a;
printf("Case %d: %.3lf %.3lf\n",kase,u,t);
}
kase++;
}
return 0;
}


/*

//11715
#include<math.h>
#include<stdio.h>
int main()
{
    int n,i,kase;
    double u,v,s,a,ans,t;
    kase=1;
    while(scanf("%d",&n)==1)
    {
                           
    if(n==0)
    break;
    else if (n==1)
         {
                  scanf("%lf%lf%lf",&u,&v,&t);
                  s=((u+v)/2)*t;
                  a=(v-u)/t;
                  printf("Case %d: %.3lf %.3lf\n",kase,s,a);
                  kase++;
         }
     
    else if (n==2)
         {
                   scanf("%lf%lf%lf",&u,&v,&a);
                   t=(v-u)/a;
                   s=u*t+.5*a*pow(t,2);
                   printf("Case %d: %.3lf %.3lf\n\n",kase,s,t);
                   kase++;
         }   
    
    else if (n==3)
         {
                  scanf("%lf%lf%lf",&u,&a,&s);
                  v=sqrt(pow(u,2)+(2*a*s));
                  t=(v-u)/a;
                  printf("Case %d: %.3lf %.3lf\n\n",kase,v,t);
                  kase++;
         }
    
    else if (n==4)
         {
                   scanf("%lf%lf%lf",&v,&a,&s);
                  
                  u=sqrt(v*v-2*a*s);
                   t=(v-u)/a;
                    printf("Case %d: %.3lf %.3lf\n\n",kase,u,t);
                   kase++;
         }
         
         
          
    }
    return 0;
}

*/