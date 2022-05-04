//10361
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 33000
using namespace std;
int main()
{
    
    int i,kase,test;
        char s1[100],s2[100],s3[100],s4[100],s5[100],ch;
        
   // while(scanf("%d",&test)==1)
  scanf("%d",&test);
    for(kase=0;kase<test;kase++)
      {      
      i=0;
      for(;;)
         {
         s1[i]=getchar();
         if(s1[i]=='<')
           {
           s1[i]='\0';
           break;
           }
         i++;
         }
         
      i=0;
      for(;;)
         {
         s2[i]=getchar();
         if(s2[i]=='>')
           {
           s2[i]='\0';
           break;
           }
         i++;
         }
      
      i=0;
      for(;;)
         {
         s3[i]=getchar();
         if(s3[i]=='<')
           {
           s3[i]='\0';
           break;
           }
         i++;
         }
         
    i=0;
      for(;;)
         {
         s4[i]=getchar();
         if(s4[i]=='>')
           {
           s4[i]='\0';
           break;
           }
         i++;
         }           
    i=0;
      for(;;)
         {
         s5[i]=getchar();
         if(s5[i]=='\n')
           {
           s5[i]='\0';
           break;
           }
         i++;
         }
  // cout<<s1<<s2<<s3<<s4<<s5<<endl;      
  printf("%s%s%s%s%s\n",s1,s2,s3,s4,s5);
      
    i=0;
      for(;;)
         {
         s1[i]=getchar();
         if(s1[i]=='.')
           {
           s1[i]='\0';
           break;
           }
         i++;
         }
     cout<<s1<<s4<<s3<<s2<<s5<<endl; 
//    for uva ---hoyto---aro input netar jonno
     for (;;)
		{
			ch=getchar();
			if (ch=='\n')
				break;
		}
		printf("%s%s%s%s%s\n",s1,s4,s3,s2,s5);    
      }
    
   system("PAUSE");
}
