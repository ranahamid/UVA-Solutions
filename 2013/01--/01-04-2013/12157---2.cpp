#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)
#define max 110

using namespace std;


int main(void){
    int T, N, mile, juice, x, cnum = 0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        mile = juice = 0;
        for(int i = 0; i < N; ++i){
            scanf("%d",&x);
            mile += (x + 30)/30;
            juice += (x + 60)/60;
        }
        mile *= 10;
        juice *= 15;
        printf("Case %d: ",++cnum);
        if(mile < juice) printf("Mile %d\n",mile);
        else if(juice < mile) printf("Juice %d\n",juice);
        else printf("Mile Juice %d\n",mile);
    }
    return 0;
}
