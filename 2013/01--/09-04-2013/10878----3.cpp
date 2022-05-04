#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
 
int main(){
  // freopen("inMe.txt","r",stdin);
  // freopen("outMe.txt","w",stdout);
 
   char input[100];
   while(gets(input)){
   int bits[10];
   int c = 0;
   if(input[0]=='|'){
    for(int i=1;i<strlen(input)-1;i++){
      if(input[i]==' ')bits[c++] = 0;
      else if(input[i]=='o')bits[c++] = 1;
    }
    int sum = 0;
    for(int i=c-1;i>=0;i--){
     sum += bits[i]*pow((double)2,c-1-i);
    }
    printf("%c",sum);
   }
   }

    
    return 0;
}
