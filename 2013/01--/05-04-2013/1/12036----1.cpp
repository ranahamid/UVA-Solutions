#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

int main ()
{
    int testCase; scanf ("%d", &testCase);
    int cases = 0;
 
    while ( testCase-- ) {
        int n; scanf ("%d", &n);
 
        int frq [100 + 10];
        Set (frq, 0);
 
        int num;
 
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                scanf ("%d", &num);
                frq [num]++;
            }
        }
 
        bool ans = true;
 
        for ( int i = 0; i < 101; i++ ) {
            if ( frq [i] > n ) ans = false;
        }
 
        printf ("Case %d: ", ++cases);
 
        if ( ans ) printf ("yes\n");
        else printf ("no\n");
 
    }
 
    return 0;
}
