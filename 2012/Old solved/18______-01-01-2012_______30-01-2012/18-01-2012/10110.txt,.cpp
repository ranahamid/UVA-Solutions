#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    unsigned m, square;
    while (cin >> m, m) {
        square = (unsigned) sqrt(m);
        cout << ((square * square == m) ? "yes" : "no") << endl;
    }
    return 0;
}