/*
        By: facug91
        From: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=64
        Name: Software CRC
        Number: 128
        Date: 03/10/2014
*/

#include <bits/stdc++.h>
#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807ll
#define MAX_ULONG 18446744073709551615ull
#define MAX_DBL 1.7976931348623158e+308
#define EPS 1e-9
const double PI = 2.0*acos(0.0);

#define INF 1000000000
#define MOD 34943
#define MUL 256
//#define MAXN 10000010

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int ans;
string s;

int main () {
	//ios_base::sync_with_stdio(0);
	int TC, i, j;
	
	while (getline(cin, s), s[0] != '#') {
		ans = 0;
		for (i=0; i<(int)s.length(); i++) {
			ans = (ans * MUL) % MOD + s[i];
		}
		ans = (ans * 30593) % MOD;
		ans = (MOD - ans) % MOD;
		printf("%02X %02X\n", ans>>8, (ans&((1<<8)-1)));
	}
	
	return 0;
}

