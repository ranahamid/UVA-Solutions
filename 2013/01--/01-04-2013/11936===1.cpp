#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#define pi 2*acos(0)


using namespace std;


int main(void){
    int t; scanf("%d", &t);
    for(int a, b, c; t-- && scanf("%d %d %d", &a, &b, &c) == 3; )
        puts(a+b <= c || a+c <= b || b+c <= a ? "Wrong!!" : "OK");
    return 0;
}
