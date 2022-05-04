//100
    #include<stdio.h>
    #include<iostream>
    
    int main()
    {
    long int i,j,n1,n2,max,count,temp,n11,n22;
    

    while(scanf("%ld %ld",&n1,&n2)==2)
    
    {
        n11=n1;
        n22=n2 ;            
   
    max=0;
    printf("\n\n________________\n\n");
    
    if(n2<n1)
    {
    temp=n2;
    n2=n1;
    n1=temp;
    }

    for(j=n1;j<=n2;j++)
    {
    i=j;
    count=1;

    while(i!=1)
    {
    if(i%2==0) 
    i=i/2;
    else i=3*i+1;
    
    printf("%d\t",i);
    count++;
    }
    
    if(count>max) 
    max=count;
    }
      printf("\n\n________________\n\n");
      printf("%ld",n11);
    printf(" %ld",n22); 
    printf(" %ld\n",max);
    }
    return 0;
    }
