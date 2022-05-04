//579

#include<stdio.h>
#include<math.h>
int main()
    {
         float min,hour,angl;
          while(scanf("%f:%f",&hour,&min)==2)
          {
              if((hour==0)&&(min==0))
              break;
              angl=(hour*30+min*0.5)-(min*6);

              if (angl>180)
              angl=360-angl;

              if (angl<0)
              angl=angl*-1;
              printf("%.3f\n",angl);
          }
    }
