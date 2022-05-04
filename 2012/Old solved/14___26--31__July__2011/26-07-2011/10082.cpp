#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    char ch[max];
    int i,len;
    while(gets(ch))
    {
    len=strlen(ch);
    for(i=0;i<len;i++)
       {
       if(ch[i]=='/')
       printf(".");
       
       else if(ch[i]=='.')
       printf("\,");
       
      else  if(ch[i]==',')
       printf("M");
      
      else  if(ch[i]=='M')
       printf("N");
       
    else      if(ch[i]=='N')
       printf("B");
       
     else   if(ch[i]=='B')
       printf("V");
       
     else   if(ch[i]=='V')
       printf("C");  
       
   else     if(ch[i]=='C')
       printf("X");
       
    else    if(ch[i]=='X')
       printf("Z");
       
     else   if(ch[i]=='Z')
       printf("Z");
       
        
      else  if(ch[i]==';')
       printf("L");
       
     else   if(ch[i]=='L')
       printf("K");
       
      else  if(ch[i]=='K')
       printf("J");
       
     else     if(ch[i]=='J')
       printf("H");
       
    else    if(ch[i]=='H')
       printf("G");
       
     else   if(ch[i]=='G')
       printf("F");  
       
     else   if(ch[i]=='F')
       printf("D");
       
    else    if(ch[i]=='D')
       printf("S");
       
    else    if(ch[i]=='S')
       printf("A");
       
        
     else   if(ch[i]=='A')
       printf("A");
     
     else   if(ch[i]=='\\')
       printf("]");
       
    else    if(ch[i]==']')
       printf("[");
       
     else     if(ch[i]=='[')
       printf("P");
       
    else    if(ch[i]=='P')
       printf("O");
       
     else   if(ch[i]=='O')
       printf("I");  
       
    else    if(ch[i]=='I')
       printf("U");
       
    else    if(ch[i]=='U')
       printf("Y");
       
    else    if(ch[i]=='Y')
       printf("T");
       
    else    if(ch[i]=='T')
       printf("R");
       
       
      else  if(ch[i]=='R')
       printf("E");
       
     else   if(ch[i]=='E')
       printf("W");
       
     else   if(ch[i]=='W')
       printf("Q");
       
      else  if(ch[i]=='Q')
       printf("Q");
       
      else  if(ch[i]=='=')
       printf("-");
       
       else  if(ch[i]=='-')
       printf("0");
       
       
      else  if(ch[i]=='0')
       printf("9");
       
     else   if(ch[i]=='9')
       printf("8");
       
      else  if(ch[i]=='8')
       printf("7");
       
      else  if(ch[i]=='7')
       printf("6");
       
      else  if(ch[i]=='6')
       printf("5");
       
        else if(ch[i]=='5')
       printf("4");
       
       
      else  if(ch[i]=='4')
       printf("3");
       
      else  if(ch[i]=='3')
       printf("2");
       
      else  if(ch[i]=='2')
       printf("1");
    ////   
      else  if(ch[i]=='1')
       printf("1");
   //////////////    
  //   else   if(ch[i]=='`')
  //     printf("`");
     ///////////////////  
     else  if(ch[i]=='\'')
       printf(";");
       else  if(ch[i]==' ')
       printf(" ");
       }
       printf("\n");
    }
}
