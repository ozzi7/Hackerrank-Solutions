#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <bitset>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair <int, int>
#define pll pair <long long, long long>
#define vi vector <int>

#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

const int MOD = 1000000007;

int main()
{
	ios::sync_with_stdio(false);
	int h, m, s;
	char c;
	cin >> h >> c >> m >> c >> s >> c;
	if (h == 12)
		h = 0;
	if (c == 'P')
		cout << setw(2) << setfill('0') << (h + 12) << ":";
	else
		cout << setw(2) << setfill('0') << h << ":";
	cout << setw(2) << setfill('0') << m << ":";
	cout << setw(2) << setfill('0') << s << endl;

	return 0;
}