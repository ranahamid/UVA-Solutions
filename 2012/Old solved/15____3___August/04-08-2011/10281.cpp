#include<stdio.h>

int main()
{
    long i,j,k,len=0,hour,min,sec,v1,speed=0;
    double total_distance=0,last_time=0;
    char ch;
    while(scanf("%c",&ch)==1)
    {
     if(ch>='0' && ch<='9')
        {
                switch(len)
                     {
                     case 0:
                          hour=(ch-48)*10;
                          break;
                     case 1:
                          hour=hour+ch-48;
                          break;
                     case 2:
                          min=(ch-48)*10;
                          break;
                     case 3:
                          min=min+ch-48;
                          break;
                     case 4:
                          sec=(ch-48)*10;
                          break;
                     case 5:
                          sec=sec+ch-48;
                          break;
                     case 6:
                          v1=ch-48;
                          break;
                     default:
                          v1=v1*10+ch-48;
                             
                     }
                len++;
        }
     else if(ch=='\n')
         {
            total_distance+=speed*(3600*hour+60*min+sec-last_time)/3600.0;
            last_time=3600*hour+60*min+sec;
            if(len==6)
            printf("%02ld:%02ld:%02ld %.2lf km\n",hour,min,sec,total_distance);
            else
            speed=v1;
            len=0;
         }
    }
    return 0;
    }
