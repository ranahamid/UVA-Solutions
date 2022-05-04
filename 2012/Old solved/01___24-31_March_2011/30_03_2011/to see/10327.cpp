//10327


    #include<stdio.h>
    int main()
    {
    int n,temp,num[1001],flip,i,j;
    while(scanf("%d",&n)==1)
    {

    for(i=1;i<=n;i++)
    {
    scanf("%d",&num[i]);
    }
    flip=0;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
    if((num[j+1]<num[j])&&(j+1!=n+1))
    {
    temp=num[j];
    num[j]=num[j+1];
    num[j+1]=temp;
    flip++;
    }
    }
    }

    printf("Minimum exchange operations : %d\n",flip);
    }
    return 0;
    }


/*
#include<stdio.h>

int main()
{
    int flip,i,j,temp,x[1000],n,len;
    while(scanf("%d",&len)==1)
  {
    for(i=0;i<len;i++)
    {
    scanf("%d",&x[i]);
    }
    flip=0;
    for(i=0;i<len;i++)
    for(j=0;j<len;j++)
    {
    if(x[j]>x[j+1])
                   {
                              temp=x[j];
                              x[j]=x[j+1];
                              x[j+1]=temp;
                              flip++;
                   }
    }
 //   printf("Minimum exchange operations : %d\n",flip);
printf("Minimum exchange operations : %d\n",flip);
  }
}
*/