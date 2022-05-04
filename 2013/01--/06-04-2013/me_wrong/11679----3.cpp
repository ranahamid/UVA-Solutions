#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

class bank
{
    public:
    int tot_money;
    vector< pair<int,int> > dList;
    void init() {tot_money=0; dList.clear();}
};

bank banks[30];
int main()
{


    int b, n, d, c, m, i, j, increase, decrease;
    bool valid;

    while (scanf("%d %d",&b,&n)==2)
    {
        if (!b && !n)
            break;
        for (i=1 ; i<=b ; i++)
        {
            banks[i].init();
            scanf("%d",&banks[i].tot_money);

        }
       for (i=1 ; i<=n ; i++)
        {
            scanf("%d %d %d",&d,&c,&m);

            banks[d].dList.push_back( make_pair(c,m) );
        }



        for (i=1 ; i<=b ; i++)
        {
            for (j=0 ; j<banks[i].dList.size() ; j++)
            {
                increase = banks[i].dList[j].first;
                decrease = banks[i].dList[j].second;

                banks[increase].tot_money+=decrease;
                banks[i].tot_money-=decrease;
            }
        }


        for (i=1, valid=true ; i<=b ; i++)
        {
            if (banks[i].tot_money<0)
            {
                valid = false;
                break;
            }
        }

        if (valid) printf("S\n");
        else printf("N\n");

    }
    return 0;
}

