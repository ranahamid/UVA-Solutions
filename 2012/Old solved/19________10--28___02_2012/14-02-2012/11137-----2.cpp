#include <stdio.h>
 #include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
#include<algorithm>

using namespace std;

int main() {
   int coin[] = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
  reverse (coin, coin + 21);
    long long change[10001] = {0};
    change[0] = 1;
    for(int i = 0; i < 21; ++i) 
    {
        for(int j = coin[i]; j <10000; j ++) 
        {
            change[j] += change[j-coin[i]];
        }
    }
    
    long n;
    while(scanf("%ld",&n) != EOF)
    {
        
        cout<<change[n]<<endl;
    }
}
