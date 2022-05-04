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
#define SIGMA 0.0001

using namespace std;

typedef pair<int,int>   ii;
typedef vector<int>     vi;
typedef vector<ii>      vii;
typedef vector<vi>     vvi;
typedef vector<vii>    vvii;
typedef map<int,int>    mii;

double degreeToRadius(double degree){
    return degree * M_PI / 180;
}

int main(){
    double a,b,v,A,s;
    while(cin >> a >> b >> v >> A >> s, a || b || v || A || s){
        double ro = v * s / 2;
        double ra = ro * cos(degreeToRadius(A));
        double rb = ro * sin(degreeToRadius(A));
        int na = round((ra + SIGMA) / a);
        int nb = round((rb + SIGMA) / b);

        printf("%d %d\n",na, nb);
    }

    return 0;
}


