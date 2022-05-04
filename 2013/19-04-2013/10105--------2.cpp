#include <stdio.h>

int main()
{   int n,k,i,div;
    long fact[14];
    fact[0] = 1;
    fact[1] = 1;
    for (i = 2; i < 14; i++) {
        fact[i] = fact[i - 1]*i;
        }
    while(scanf("%d %d",&n,&k)==2){
        long temp=fact[n];
        for(i=0;i<k;i++){
            scanf("%d",&div);
            if(div>1)
                temp/=fact[div];
        }
        printf("%ld\n",temp);
    }
    return 0;
}
