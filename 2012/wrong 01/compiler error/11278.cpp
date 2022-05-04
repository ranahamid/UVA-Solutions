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
// "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
       if(ch[i]=='`')
       printf("`");//MAY BE
       
       else if(ch[i]=='1')
       printf("1");
       
      else  if(ch[i]=='2')
       printf("2");
      
      else  if(ch[i]=='3')
       printf("3");
       
    else      if(ch[i]=='4')
       printf("q");
       
     else   if(ch[i]=='5')
       printf("j");
       
     else   if(ch[i]=='6')
       printf("l");  
       
   else     if(ch[i]=='7')
       printf("m");
       
    else    if(ch[i]=='8')
       printf("f");
       
     else   if(ch[i]=='9')
       printf("p");
       
        
      else  if(ch[i]=='0')
       printf("/");//may be
       
     else   if(ch[i]=='-')
       printf("[");
       
      else  if(ch[i]=='=')
       printf("]");
       
       
       //-----------------
       
       
       
       
       
       
       
     else     if(ch[i]=='q')
       printf("4");
       
    else    if(ch[i]=='w')
       printf("5");
       
     else   if(ch[i]=='e')
       printf("6");  
       
     else   if(ch[i]=='r')
       printf(".");
       
    else    if(ch[i]=='t')
       printf("o");
       
    else    if(ch[i]=='y')
       printf("r");
       
        
     else   if(ch[i]=='u')
       printf("s");
     
     else   if(ch[i]=='i')
       printf("u");
       
    else    if(ch[i]=='o')
       printf("y");
       
     else     if(ch[i]=='p')
       printf("b");
       
    else    if(ch[i]=='[')
       printf(";");
       
     else   if(ch[i]==']')
       printf("="); //<><><><><>
       
    else    if(ch[i]=='\\')
       printf("\\");
       
       
       //--------------------------
       
       
       
       
       
    else    if(ch[i]=='a')
       printf("7");
       
    else    if(ch[i]=='s')
       printf("8");
       
    else    if(ch[i]=='d')
       printf("9");
       
       
      else  if(ch[i]=='f')
       printf("a");
       
     else   if(ch[i]=='g')
       printf("e");
       
     else   if(ch[i]=='h')
       printf("h");
       
      else  if(ch[i]=='j')
       printf("t");
       
      else  if(ch[i]=='k')
       printf("d");
       
       else  if(ch[i]=='l')
       printf("c");
       
       
      else  if(ch[i]==';')
       printf("k");
       
     else   if(ch[i]=='\'')//><
       printf("-");//may be -<<><><><
      
     //-------------------- 
      
     
      
      
      
      
      
      
       
      else  if(ch[i]=='z')
       printf("0");
       
      else  if(ch[i]=='x')
       printf("z");
       
      else  if(ch[i]=='c')
       printf("x");
       
        else if(ch[i]=='v')
       printf(",");
       
       
      else  if(ch[i]=='b')
       printf("i");
       
      else  if(ch[i]=='n')
       printf("n");
       
      else  if(ch[i]=='m')
       printf("w");
      
      else  if(ch[i]==',')
       printf("v");


 else  if(ch[i]=='.')
       printf("g");
     
      else  if(ch[i]=='/')
       printf("'");//may be `
 
 
 //----------------------
 //---------------------- //----------------------
 //---------------------- //----------------------
 //----------------------
    else if(ch[i]=='~')
       printf("~");
       
       else if(ch[i]=='!')
       printf("!");
       
      else  if(ch[i]=='@')
       printf("@");
      
      else  if(ch[i]=='#')
       printf("#");
       
    else      if(ch[i]=='$')
       printf("Q");
       
     else   if(ch[i]=='%')
       printf("J");
       
     else   if(ch[i]=='^')
       printf("L");  
       
   else     if(ch[i]=='&')
       printf("M");
       
    else    if(ch[i]=='*')
       printf("F");
       
     else   if(ch[i]=='(')
       printf("P");
       
        
      else  if(ch[i]==')')
       printf("?");
       
     else   if(ch[i]=='_')
       printf("{");
       
      else  if(ch[i]=='+')
       printf("}");
       
       
       //-----------------
       
       
       
       
       
       
       
     else     if(ch[i]=='Q')
       printf("$");
       
    else    if(ch[i]=='W')
       printf("%");
       
     else   if(ch[i]=='E')
       printf("^");  
       
     else   if(ch[i]=='R')
       printf(">");
       
    else    if(ch[i]=='T')
       printf("O");
       
    else    if(ch[i]=='Y')
       printf("R");
       
        
     else   if(ch[i]=='U')
       printf("S");
     
     else   if(ch[i]=='I')
       printf("U");
       
    else    if(ch[i]=='O')
       printf("Y");
       
     else     if(ch[i]=='P')
       printf("B");
       
    else    if(ch[i]=='{')
       printf(":");
       
     else   if(ch[i]=='}')
       printf("+");  
       
    else    if(ch[i]=='|')
       printf("|");
       
       
       //--------------------------
       
       
       
       
       
    else    if(ch[i]=='A')
       printf("&");
       
    else    if(ch[i]=='S')
       printf("*");
       
    else    if(ch[i]=='D')
       printf("(");
       
       
      else  if(ch[i]=='F')
       printf("A");
       
     else   if(ch[i]=='G')
       printf("E");
       
     else   if(ch[i]=='H')
       printf("H");
       
      else  if(ch[i]=='J')
       printf("T");
       
      else  if(ch[i]=='K')
       printf("D");
       
       else  if(ch[i]=='L')
       printf("C");
       
       
      else  if(ch[i]==':')
       printf("K");
       
     else   if(ch[i]=='\"')<><><><><><><>
       printf("_");//MAY BE -,RIGHT
      
     //-------------------- 
      
     
      
      
      
      
      
      
       
      else  if(ch[i]=='Z')
       printf(")");
       
      else  if(ch[i]=='X')
       printf("Z");
       
      else  if(ch[i]=='C')
       printf("X");
       
        else if(ch[i]=='V')
       printf("<");
       
       
      else  if(ch[i]=='B')
       printf("I");
       
      else  if(ch[i]=='N')
       printf("N");
       
      else  if(ch[i]=='M')
       printf("W");
      
      else  if(ch[i]=='<')
       printf("V");


 else  if(ch[i]=='>')
       printf("G");
     
      else  if(ch[i]=='?')
       printf("\"");
 
 //----------------------
 //----------------------

       else  if(ch[i]==' ')
       printf(" ");
       }
       printf("\n");
    }
}
