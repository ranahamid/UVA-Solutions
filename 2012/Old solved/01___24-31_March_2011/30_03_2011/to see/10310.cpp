//10310

    #include<stdio.h>
    #include<math.h>
    int main()
    {
    long int n,kase,i,j,k;
    double gx,gy,dx,dy,hx[1001],hy[1001],gdis,ddis;
    while(scanf("%ld%lf%lf%lf%lf",&n,&gx,&gy,&dx,&dy)==5)
    {
    int goph=0,x;
    for(i=1;i<=n;i++)
    {
    scanf("%lf%lf",&hx[i],&hy[i]);
    }
    for(i=1;i<=n;i++)
    {
    gdis=4*(pow((hx[i]-gx),2)+pow((hy[i]-gy),2));
    ddis=pow((hx[i]-dx),2)+pow((hy[i]-dy),2);
    if(gdis<=ddis)
    {
    goph++,x=i;
    break;
    }
    }
    if(goph==0)printf("The gopher cannot escape.\n");
    else printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",hx[x],hy[x]);

    }
    return 0;
    }
    
/*

#include<stdio.h>
#include<math.h>
int main()
{
    double gx,gy,dx,dy,goph,hx[1001],hy[1001],gdis,ddis;
    int n,x,i;
    while(scanf("%d%lf%lf%lf%lf",&n,&gx,&gy,&dx,&dy)==5)
    {
    for(i=1;i<=n;i++)
      {
      scanf("%lf%lf",&hx[i],&hy[i]);
      }
     goph=0;
    for(i=1;i<=n;i++)
      {
                     //important two line
    gdis=4*(pow((hx[i]-gx),2)+pow((hy[i]-gy),2));
    ddis=pow((hx[i]-dx),2)+pow((hy[i]-dy),2);
    if(gdis<=ddis)
                  {
                  goph++;
                  x=i;   
                  break;         
                  }
                  }
                   
      if(goph==0)
      printf("The gopher cannot escape.\n");
      else
      {
          printf("The gopher can escape through the hole at (%lf,%lf).\n",hx[x],hy[x]);
      }   
}   
}
*/
