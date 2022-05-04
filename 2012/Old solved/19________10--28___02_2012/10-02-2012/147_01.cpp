#include <stdio.h>
 #include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
#include<algorithm>

using namespace std;

int main() {
    int coin[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
    long long change[30001] = {0};
    change[0] = 1;
    for(int i = 0; i < 11; ++i) 
    {
        for(int j = coin[i]; j < 30001; j += 5) 
        {
            change[j] += change[j-coin[i]];
        }
    }
    
    double n;
    while(scanf("%lf", &n)) 
    {
        if(n == 0.) 
        {
            return 0;
        }
        int d = int (n*100 + 0.5);
        printf("%6.2lf%17lld\n", n, change[d]);
    }
}
