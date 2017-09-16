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

long long gcd(long long a, long long b) { if (b == 0) return a; a %= b; return gcd(b, a); }
long long lcm(long long a, long long b) { return (a * b / gcd(a, b)); }

struct node {
	int parent;
	vector<int> children;
};

int main()
{
	ios::sync_with_stdio(false);
	int n; cin >> n;
	F0R(i, n) {
		int m; cin >> m;
		vi v;
		vi max;
		vi buypossible;
		max.resize(m);
		buypossible.resize(m);
		F0R(i, m) {
			int s;
			cin >> s; v.pb(s);
		}
		int currMax = -1;
		F0Rd(i, m) {
			if (v[i] < currMax) {
				max[i] = 0;
			}
			else {
				max[i] = 1;
				currMax = v[i];
			}
		}
		bool found = false;
		buypossible[m - 1] = 0;
		if (max[m-1] == 1) found = true;
		F0Rd(i,m-1) {
			if (max[i] == 0 && found == true) {
				buypossible[i] = 1;
			}
			else
				buypossible[i] = 0;
		}
		long long money = 0;
		long long currStock = 0;
		F0R(i, m) {
			if (max[i] == 0 && buypossible[i] == 1) {
				currStock++;
				money -= v[i];
			}
			else if (max[i] == 0) {}
			else {
				money += currStock*v[i];
				currStock = 0;
			}
		}

		cout << money << endl;
	}
	return 0;
}