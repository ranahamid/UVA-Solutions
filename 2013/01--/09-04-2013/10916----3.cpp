#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <list>
#include <cmath>

using namespace std;

typedef pair<int,int>   ii;
typedef vector<int>     vi;
typedef vector<ii>      vii;
typedef vector<vi>     vvi;
typedef vector<vii>    vvii;
typedef map<int,int>    mii;

#define UL 22

int bi[UL];

int main(){
    double base = log(16), sum = 0;
    int idx = 2;
    for(int i=0;i<UL;i++){
        while(sum <= base)  sum += log(idx++);
        bi[i] = idx - 2; base += base;
    }
    int y;
    while(cin >> y,y){
        cout << bi[(y-1960)/10] << endl;
    }

    return 0;
}


