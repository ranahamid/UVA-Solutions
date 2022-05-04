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


using namespace std;

int main(){
    int TC;
    cin >> TC;
    int N,CC = 1;
    while(TC--){
        int isq;
        cin >> N;
        printf("Case %d:",CC++);
        stack<int> os;
        for(int i=1;(isq = i*i) < N;i++){
            if( (N - isq) % i == 0){
                os.push(N-isq);
            }
        }
        while(!os.empty()){
            printf(" %d",os.top());
            os.pop();
        }
        putchar('\n');
    }

    return 0;
}
