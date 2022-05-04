//10079
#include<stdio.h>
int main()
{
long int pics,cut;
while(scanf("%ld",&cut)==1)
{
if(cut<0)
break;

pics=(cut*(cut+1)/2)+1;
printf("%ld\n",pics);

}
}
