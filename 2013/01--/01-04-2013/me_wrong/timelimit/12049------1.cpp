#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <map>
using namespace std;
 
map <int, int> freq;
 
int main ()
{
    int testCase; scanf ("%d", &testCase);

    while (testCase--)
    {
        freq.clear ();
        int n, m; scanf ("%d %d", &n, &m);
        int inp;
 
        for (int i = 0; i < n; i++)
        {
            scanf ("%d", &inp);
            freq [inp]++;
        }
 
        for (int i = 0; i < m; i++)
        {
            scanf ("%d", &inp);
            freq [inp]--;
        }
 
        int ans = 0;
        map <int, int>::iterator it;
 
        for (it = freq.begin (); it != freq.end (); it++)
        {
            ans += abs ((*it).second);
        }
 
        printf ("%d\n", ans);
    }
 
    return 0;
}
