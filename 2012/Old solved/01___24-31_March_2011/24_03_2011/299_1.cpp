//299
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int temp,i,j,k,kase,len,x[100]={0};
   int swap;
   while(scanf("%d",&kase)!=0)
       {
        scanf("%d",&len);
        for(i=0;i<len;i++)
           {
            scanf("%d",&x[i]);
            }
        swap=0;    
            
          for(i=0;i<len;i++)
          {
          for(j=0;j<len;j++)
          {
           if( ( x[j]>x[j+1])&& (j!=len))
              {
               temp=x[j];
               x[j]=x[j+1];
               x[j+1]=temp;
               swap++;
              }
          } 
          } 
          
          			printf("Optimal train swapping takes %d swaps.\n",swap);
                            
       }
    
}
