#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define ERROR 1e-11
using namespace std;
typedef double dt;
 
dt min(dt a, dt b)
{
    return (a<b?a:b);
}
 
int main()
{
    dt s, b, nx_pro, pr_pro;
    int kase=1;
 
    while (cin >> b >> s)
    {
        if (fabs(b-0.00)<ERROR && fabs(s-0.00)<ERROR) 
                   break;
 
        cout << "Case " << kase++ << ": ";
        pr_pro = min(s/b,(dt)1);
        if (b==1.00)
        {
            cout << ":-\\" << endl;
            continue;
        }
        nx_pro = min((s-(dt)1)/(b-(dt)1),(dt)1);
 
        if (nx_pro>pr_pro) cout << ":-)" << endl;
        else if (nx_pro<pr_pro) cout << ":-(" << endl;
        else cout << ":-|" << endl;
    }
 
    return 0;
}
