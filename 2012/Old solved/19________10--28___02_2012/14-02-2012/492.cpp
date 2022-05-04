#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include <ctype.h>
using namespace std;

	
int vowel (char X)

	{
	    if (X==65 || X==69 || X==73 || X==79 || X==85 || X==97 || X==101 || X==105 || X==111 || X==117)
	        return 1;
	    return 0;
}

int main()
{
char c,temp;
while(c=getchar())
   {
   if(c==EOF)
      return 0;
   if(isalpha(c))
          {
          if( vowel(c) )
                 {
                 while(isalpha(c))
                        {
                        printf("%c",c);
                        c=getchar();
                        }
                 printf("ay");
                 }
          else
              {
              temp=c;
              c=getchar();
               while(isalpha(c))
                  {
                  printf("%c",c);
                  c=getchar();
                  }
               printf("%cay",temp);
              }
          }
   printf("%c",c);
   }
//system("pause");
}
