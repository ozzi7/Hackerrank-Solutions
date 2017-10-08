#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cmath>
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
#include <numeric>

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

#define lb lower_bound
#define ub upper_bound

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

const int MOD = 1000000007;

long long gcd(long long a, long long b) { if (b == 0) return a; a %= b; return gcd(b, a); }
long long lcm(long long a, long long b) { return (a * b / gcd(a, b)); }

struct node {
	int parent;
	vector<int> children;
};

int main()
{
	ios::sync_with_stdio(false);
	unsigned int y1,m1,d1; cin >> d1>>m1>>y1;
	unsigned int y2, m2, d2; cin >> d2 >> m2 >> y2;

	if (y1 > y2) cout << 10000 << endl;
	else if (m1 > m2 && y1 == y2) cout << ((m1 - m2) * 500) << endl;
	else if (d1 > d2 && m1 == m2 && y1 == y2) cout << ((d1 - d2) * 15) << endl;
	else cout << 0 << endl;
	return 0;
}