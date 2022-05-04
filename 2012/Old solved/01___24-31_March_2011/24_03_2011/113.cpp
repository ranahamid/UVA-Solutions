//113
#include<stdio.h>
#include<math.h>

int main()
    {
     double n,p,k,t;
    
     while(scanf("%lf %lf",&n,&p)==2)
     {
     
     t=1/n;
     k=pow(p,t);
     printf("%.0lf\n",k);
   
    } 
    }


/*
    #include<stdio.h>
    #include<math.h>

    int main()
{
    double x,k,n,p;

    while(scanf("%lf%lf",&n,&p)==2){

    x=1/n;
    k=pow(p,x);
    printf("%.0lf\n",k);

    }
    return 0;
    }
*/