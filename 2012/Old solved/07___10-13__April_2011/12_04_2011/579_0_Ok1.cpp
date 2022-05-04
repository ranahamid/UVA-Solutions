//579

#include<stdio.h>
#include<math.h>

int main()
    {
         double min,hour,angl,hourangle,minuteangle;
          while(scanf("%lf:%lf",&hour,&min)==2)
          {
              if((hour==0)&&(min==0))
              break;
             hourangle=hour*30+(min/60)*30;
             minuteangle=min*6;
             angl=(hourangle-minuteangle);
if(angl<0)
angl*=-1;

              if (angl>180)
              angl=360-angl;

              printf("%.3lf\n",angl);
          }
    }
    /*
579 - Clock Hands

You have to determine the angle between 2 clock hands.

Use this simple algorithm:

hAngle=h*30+(m/60)*30; // Angle from 12o'clock to hour hand
mAngle=m*6;                 // Angle from 12o'clock to minute hand
angle=abs(hAngle-mAngle);

if (angle>180) angle=360-angle;
Common Mistake

1. Forget to subtract the angle with 180 if it is larger 180 (They want the smallest angle)
2. This is 12 hour clock !!! Clock with hands usually 12-hour clock !!!

*/
