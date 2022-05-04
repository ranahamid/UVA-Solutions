#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 20000 + 10;

int main()
{
    int n, m, dragon[maxn], knight[maxn];
    while(cin>>n>>m)
    {
        if(n == 0 && m == 0) return 0;
        int i;
        for(i = 0; i < n; i++) cin>>dragon[i];
        for(i = 0; i < m; i++) cin>>knight[i];
        sort(dragon, dragon+n);     //???
        sort(knight, knight+m);
        int cur = 0, cost = 0;      //cur????????,?0??,cost??????
        for(i = 0; i < m; i++)
        {
            if(knight[i] >= dragon[cur])
            {
                cost += knight[i];
                if(++cur == n) break;
            }
        }
        if(cur == n) cout<<cost<<endl;
        else cout<<"Loowater is doomed!"<<endl;
    }
    return 0;
}
