/*
	By: facug91
	From: http://coj.uci.cu/24h/problem.xhtml?abb=2260
	Name: Dyck Words
	Number: 2260
	Date: 02/08/2014
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <iterator>
#include <utility>
#include <list>
#include <stack>
#include <iomanip>
#include <bitset>

#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807ll
#define MAX_ULONG 18446744073709551615ull
#define MAX_DBL 1.7976931348623158e+308
#define EPS 1e-9
const double PI = 2.0*acos(0.0);

#define INF 1000000000
#define MOD 1000000007

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int> > iii;

int n, DP[1005][1005];

void dp () {
	int i, j, k;
	memset(DP, 0, sizeof DP);
	for (i=0; i<1005; i++)
		DP[0][i] = 1;
	for (i=1; i<1005; i++)
		for (j=i; j<1005; j++)
			DP[i][j] = (DP[i-1][j] + DP[i][j-1]) % MOD;
}

int main () {
	int t, i, j;
	
	dp();
	
	scanf("%d", &t);
	for (int it=1; it<=t; it++) {
		scanf("%d", &n);
		printf("%d\n", DP[n][n]);
	}
	
	return 0;
}
