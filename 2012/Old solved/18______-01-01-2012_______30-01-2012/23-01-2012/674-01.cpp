#include <iostream>
 
using namespace std;
 
int main() 
{
    const int n = 7491;
    unsigned table[n] = { 0 };
    int coin[5] = { 1, 5, 10, 25, 50 };
    table[0] = 1;
    for (int i = 0; i < 5; ++i)
     {
        for (int j = coin[i]; j < n; ++j)
         {
            table[j] += table[j - coin[i]];
         }
     }
    
    int num;
    while (cin >> num) 
    {
     cout << ((num) ? table[num] : 0) << endl;
     }
    return 0;
}
