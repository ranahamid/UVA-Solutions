//278
#include<stdio.h>

int min(int a, int b)
{
    if(a>b)
    return b;
    else
    return a;
}

int main()
{
    int a,b,ans,n,i;
    char ch,sor[100];
    scanf("%d",&n);
    gets(sor);
    while(n--)
    {
        gets(sor); 
       sscanf(sor,"%c %d %d",&ch,&a,&b);

       switch(ch)
       {
       case 'r':
	    ans=min(a,b);
	    printf("%d\n",ans);
	    break;     
          case 'Q':
	    ans=min(a,b);
	    printf("%d\n",ans);
	    break;   
         case 'K':
	    ans=((a+1)/2)*((b+1)/2);
	    printf("%d\n",ans);
	    break; 
      case 'k':
	    ans=((a*b)+1)/2;
	    printf("%d\n",ans);
	    break;       
	    
    }
}
}


