#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;


int main ()
{
	int testCase;
	scanf ("%d", &testCase);

	while ( testCase-- ) {
		int n;
		scanf ("%d", &n);

		int input;
		int cntOne = 0;
		int cntOthers = 0;

		for ( int i = 0; i < n; i++ ) {
			scanf ("%d", &input);
			if ( input == 1 ) cntOne++;
			else cntOthers++;
		}

		if ( cntOne % 2 ) printf ("poopi\n");
		else {
			if ( cntOthers > 0 ) printf ("poopi\n");
			else printf ("piloop\n");
		}

	} 

	return 0;
} 
