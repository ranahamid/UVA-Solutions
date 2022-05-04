#include <iostream>
	#include <cstdio>
	#include <algorithm>
	#include <math.h>
	using namespace std;
	int i, j, a0, an, maxLoop, loop, n;
	int main() {
    	    while (scanf("%d %d", &i, &j) == 2) {
	        a0 = i, an = j, i = min(a0, an), j = max(a0, an), maxLoop = 0;
	        while (i <= j && (loop = 1)) {
	            n = i++;
	            while (n != 1) {
	                n = (n % 2) ? 3 * n + 1 : n / 2;
	                loop++;
	            }
	            maxLoop = max(maxLoop, loop);
	        }
	        printf("%d %d %d\n", a0, an, maxLoop);
	    }
	    return 0;
	}
