#include<stdio.h>

typedef long long llong;

int main(){
    llong a, b, c, d, e,f, test;
    char ch;
   
    while(scanf("%lld", &test)!=EOF){
        getchar();
        while(test--){
            a=d=0, b=c=e=f=1;
            while((ch=getchar())!='\n'){
                if(ch=='R') a=e, b=f;
                else if(ch=='L') c=e, d=f;
                e=(a+c), f=(b+d);
            }
           
            printf("%lld/%lld\n", e, f);
        }
    }
   
    return 0;
}

