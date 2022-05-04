#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdio>

using namespace std;

int track, N, maxn;
vector<int> v, v1;
int nodes[128][128];
int sum;
void nusrat(int index)
{

    int count=0, i;
    count=0;
    maxn=0;
    for(i=0; i<N; i++)
    {
        if(nodes[index][i])
        {
            if(maxn<v[i])
            {
                maxn = v[i];
                track = i;
                count++;
            }
        }
    }
    sum = sum + maxn;
    if(count) nusrat(track);

}

int main()
{
    int T, V, x, y, TMP, k, l, m, n, o, p;

    cin>>T;

    int i;
    i=0;
    while(++i<=T)
    {
        cin>>N>>V;
        for(l=0; l<N; l++)
            for(m=0; m<N; m++)
                    nodes[l][m] = 0;

        for(k=0; k<N; k++)
        {
            cin>>TMP;
            v.push_back(TMP);
        }
        for(n=0; n<V; n++)
        {
            cin>>x>>y;
            nodes[x][y]=1;
        }
        track=0;
        maxn=0;
        sum=0;
        nusrat(0);
        printf("Case %d: %d %d\n", i, sum, track);
        v.clear();
    }
    return 0;
}
