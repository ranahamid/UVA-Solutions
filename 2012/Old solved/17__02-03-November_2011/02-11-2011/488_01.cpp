#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int c, a, f;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a >> f;
        for (int j = 0; j < f; j++)
        {
          if (j > 0 || i > 0) 
            cout << endl;
            for (int k = 0; k < a; k++)
            {
                for (int l = 0; l < k+1; l++)
                {
                    cout << (k%a) + 1;
                }
                cout << endl;
            }
 
            for (int k = 0; k < a-1; k++)
            {
                for (int l = 0; l < a-1-k; l++)
                {
                    cout << a-1-k;
                }
                cout << endl;
            }
        }
    }
    return 0;
}
