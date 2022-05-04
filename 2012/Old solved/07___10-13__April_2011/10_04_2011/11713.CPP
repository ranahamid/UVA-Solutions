    #include<stdio.h>
    #include<string.h>

    int main()
    {
    char n1[210],n2[210];
    int kase,i,j,k,len1,len2;
    while(scanf("%d",&kase)==1)
    {
    for(j=1;j<=kase;j++)
    {
    scanf("%s",&n1);
    scanf("%s",&n2);
    len1=strlen(n1);
    len2=strlen(n2);
    k=0;
    if(len1!=len2)printf("No\n");
    else
    {
    for(i=0;i<len1;i++)
    {
    if((n1[i]=='a'||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u')&&(n2[i]=='a'||n2[i]=='e'||

    n2[i]=='i'||n2[i]=='o'||n2[i]=='u'))continue;
    else if(n1[i]!=n2[i])k++;
    }
    if(k==0)printf("Yes\n");
    else printf("No\n");
    }
    }
    }
    return 0;
    }

/*
//11713
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,j,len1=0,len2=0,n,k;

    char name1[30],name2[30];
		// clrscr();
		while(scanf("%d\n",&n)==1)
		{
                                 for(j=0;j<n;j++)
                                 {
                                                 
			      gets(name1);
			      gets(name2);
			      len1=strlen(name1);
			      len2=strlen(name2);

			      if(len1!=len2)
			      printf("No\n");

			      
			      /*     for(i=0;i<len1;i++)
					     {
						if(name1[i]=='a'||'e'||'i'||'o'||'a'||'u')
			name1[i]='x';
					     }

					      for(i=0;i<len2;i++)
					     {
						if(name2[i]=='a'||'e'||'i'||'o'||'a'||'u')
			name2[i]='x';
					     }
					     */


/*

			i=0;
			while(i<len1)
			{
if( name1[i]== 'a'||name1[i]== 'e'||name1[i]== 'i'||name1[i]== 'o'||name1[i]== 'u')
 

		     {
		     name1[i]='a';
		     i++;

		   //    printf("%d\n\n",i);
		       }
		     }

			i=0;
			while(i<len2)
			{
		/*	if(
( name2[i]== 'a'||'e'||'i'||'o'||'u')
 &&
 (name2[i]!='b'||'c'||
'd'||'f'||'g'||'h'||'j'||'k'||'l'||'m'||'n'||'p' ||
'q'||'r'||'s'||'t'||'v'||  'w'||'x'||'y'||'z')
		)
        */
        
 else
				   {
                           k=0;
                           for(i=0;i<len1;i++)
                           {       
if( 
(name1[i]== 'a'||name1[i]== 'e'||name1[i]== 'i'||name1[i]== 'o'||name1[i]== 'u')
 &&
( name2[i]== 'a'||name2[i]== 'e'||name2[i]== 'i'||name2[i]== 'o'||name2[i]== 'u')
)
continue;

if(name1[i]!=name2[i])
k++;	
}

if(k==0)
					  
				    printf("Yes\n");
				    else
				    printf("No\n");
  }
  }  
}   
}    


*/
