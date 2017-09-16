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
	int parent; // not needed
	vector<int> children;
};

vector<node> v;

pii getMaxEvenComponents(int root) {
	if (v[root].children.empty()) {
		return pii(1, 0); // 1 nodes in subtree, 0 edges removed
	}
	else {
		pii res;
		for (auto n : v[root].children) {
			pii q = getMaxEvenComponents(n);
			res.first += q.first;
			res.second += q.second;
		}
		if ((res.first + 1) % 2 == 0) 
			return pii(0, res.second + 1);
		else 
			return pii(res.first+1, res.second);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int n; cin >> n;
	int m; cin >> m;
	v.resize(n+1);
	F0R(i, m) {
		node nodeS;
		v[i] = nodeS;
	}
	F0R(i, m) {
		int n1, n2;
		cin >> n1 >> n2;
		v[n2].children.push_back(n1);
		v[n1].parent = n2;
	}
	
	cout << getMaxEvenComponents(1).second-1 << endl;
}