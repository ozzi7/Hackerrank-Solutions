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
	string s, t; cin >> s >> t;
	int req; cin >> req;

	int nofSame = 0;
	for (int i = 0; i < min(s.size(), t.size()); ++i) {
		if (s[i] == t[i]) nofSame++;
		else break;
	}
	if (s.size() >= t.size()) {
		/* delete until only same left*/
		int nofDel = s.size() - nofSame;
		int nofAdd = t.size() - (s.size() - nofDel);

		if (nofDel + nofAdd > req) {
			cout << "No" << endl;
		}
		else {
			int rest = req - (nofDel + nofAdd);
			if (rest % 2 == 0)
				cout << "Yes" << endl;
			else if (((int)(s.size() - nofDel) - (rest - 1) / 2) <= 0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	else {
		/* delete until only same left*/
		int nofDel = s.size() - nofSame;
		int nofAdd = nofDel+t.size()-s.size();

		if (nofDel + nofAdd > req) {
			cout << "No" << endl;
		}
		else {
			int rest = req - (nofDel + nofAdd);
			if (rest % 2 == 0)
				cout << "Yes" << endl;
			else if (((int)s.size() - nofDel) - (rest - 1) / 2 <= 0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	
	return 0;
}