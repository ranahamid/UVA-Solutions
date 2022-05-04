#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
 
using namespace std;
 
int main () {
    int N, Q, cases = 0, tmp;
    while(cin >> N >> Q, N + Q) {
        vector<int> V(10100);
        while(N--) {
            cin >> tmp;
            V[tmp]++;
        }
        cout << "CASE# " << ++cases << ":" << endl;
        partial_sum(V.begin(), V.end(), V.begin());
        while(Q--) {
            cin >> tmp;
            if((tmp && V[tmp-1] == V[tmp]) || (!tmp && !V[tmp])) {
                cout << tmp << " not found" << endl;
            } else {
                cout << tmp << " found at " << ((tmp) ? V[tmp-1] + 1 : 1) << endl;
            }
        }
    }
    return 0;
}