//10055
#include <stdio.h>
#include <math.h>

int main()
{
long int has,opp,diff;
  while(scanf("%ld%ld",&has,&opp)==2)
{
    //printf("\nInput the number of soldiers in Hashmat's army\n");
  //  scanf("%ld",&has);
   // printf("\nEnter the number of soldiers in opponent's army");
   // scanf("%ld",&opp);
    diff=(has-opp);
    if(diff<0)
    diff=diff*-1;
    printf("%ld\n",diff);
}    
//getch();
}
