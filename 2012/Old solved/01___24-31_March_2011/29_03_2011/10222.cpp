#include<stdio.h>
#include<string.h>
int main()
{
char l[200];
int i,n,k,len;
while(gets(l)){
len=strlen(l);
for(i=0;i<len;i++){
switch(l[i]){
case ']': printf("p"); break;
case '[': printf("o"); break;
case 'p':
case 'P': printf("i"); break;
case 'o':
case 'O': printf("u"); break;
case 'i':
case 'I': printf("y"); break;
case 'u':
case 'U': printf("t"); break;
case 'y':
case 'Y': printf("r"); break;
case 't':
case 'T': printf("e"); break;
case 'r':
case 'R': printf("w"); break;
case 'e':
case 'E': printf("q"); break;
case 'w':
case 'W': printf("w"); break;
case 'q':
case 'Q': printf("q"); break;
case '"': printf("l");break;
case ';':
case ':': printf("k"); break;
case 'l':
case 'L': printf("j"); break;
case 'k':
case 'K': printf("h");break;
case 'j':
case 'J': printf("g");break;
case 'h':
case 'H': printf("f");break;
case 'g':
case 'G': printf("d");break;
case 'f':
case 'F': printf("s");break;
case 'd':
case 'D': printf("a");break;
case '/':
case '?': printf(",");break;
case '.':
case '>': printf("m");break;
case ',':
case '<': printf("n");break;
case 'm':
case 'M': printf("b");break;
case 'n':
case 'N': printf("v");break;
case 'b':
case 'B': printf("c");break;
case 'v':
case 'V': printf("x");break;
case 'c':
case 'C': printf("z");break;
case 'x':
case 'X': printf("x");break;
case 'z':
case 'Z': printf("z");break;
case '\'':printf("l");break;
case '=':printf("0");break;
case '-': printf("9");break;
case '0': printf("8");break;
case '9': printf("7");break;
case '8': printf("6");break;
case '7': printf("5");break;
case '6': printf("4");break;
case '5': printf("3");break;
case '4': printf("2");break;
case '3': printf("1");break;
case '2': printf("`");break;
default:printf("%c",l[i]);
}
}
printf("\n");
}
return 0;
}

*/

//10222
#include<stdio.h>

int main()
{
    char ch,x;
    
    while(scanf("%c",&x)==1)
    {
    if((x=='?')||(x=='/'))
    printf(",");
    if((x=='>')||(x=='.'))
    printf("m");
    
    if((x=='<')||(x==','))
    printf("n");
    
    if((x=='M')||(x=='m'))
    printf("b");
    
    if((x=='n')||(x=='N'))
    printf("v");
    
    if((x=='B')||(x=='b'))
    printf("c");
    
    if((x=='v')||(x=='V'))
    printf("x");
    
    if((x=='C')||(x=='c'))
    printf("z");
    
    if((x=='x')||(x=='X'))
    printf("x");
    
    if((x=='Z')||(x=='z'))
    printf("z");
    
    if((x=='"')||(x=='\''))
    printf("l");
    
    if((x==';')||(x==':'))
    printf("k");
    
    if((x=='l')||(x=='L'))
    printf("j");
    
    if((x=='K')||(x=='k'))
    printf("h");
    
    if((x=='j')||(x=='J'))
    printf("g");
    
    if((x=='H')||(x=='h'))
    printf("f");
    
    if((x=='g')||(x=='G'))
    printf("d");
    
    if((x=='F')||(x=='f'))
    printf("s");
    
    if((x=='d')||(x=='D'))
    printf("a");
    
    if((x=='S')||(x=='s'))
    printf("s");
    
    if((x=='a')||(x=='A'))
    printf("a");
    
    if((x==']')||(x=='}'))
    printf("p");
    
    if((x=='{')||(x=='['))
    printf("o");
    
    if((x=='p')||(x=='P'))
    printf("i");
    
    if((x=='O')||(x=='o'))
    printf("u");
    
    if((x=='i')||(x=='I'))
    printf("y");
    
    if((x=='U')||(x=='u'))
    printf("t");
    
    if((x=='y')||(x=='Y'))
    printf("r");
    
    if((x=='T')||(x=='t'))
    printf("e");
    
    if((x=='r')||(x=='R'))
    printf("w");
    
    if((x=='e')||(x=='E'))
    printf("q");
    
    if((x=='w')||(x=='W'))
    printf("w");
    
    if((x=='Q')||(x=='q'))
    printf("q");
    
    if((x=='|')||(x=='\\'))
    printf("-");
    
    if((x=='=')||(x=='+'))
    printf("0");
    
    if((x=='-')||(x=='_'))
    printf("9");
    
    if((x=='0')||(x==')'))
    printf("8");
    
    if((x=='9')||(x=='('))
    printf("7");
    
    if((x=='*')||(x=='8'))
    printf("6");
    
    if((x=='&')||(x=='7'))
    printf("5");
    
    if((x=='6')||(x=='^'))
    printf("4");
    
    if((x=='5')||(x=='%'))
    printf("3");
    
    if((x=='$')||(x=='4'))
    printf("2");
    
    if((x=='#')||(x=='3'))
    printf("1");
    
    if((x=='@')||(x=='2'))
    printf("`");
    
    if((x=='!')||(x=='1'))
    printf("1");
    
    if((x=='`')||(x=='`'))
    printf("`");
    if(x==' ')
    printf(" ");
    
     }
}

*/