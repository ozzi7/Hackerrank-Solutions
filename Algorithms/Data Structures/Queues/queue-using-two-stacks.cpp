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

using namespace std;


int main() {
	int n, a, b;
	cin >> n;
	
	stack<int> s1, s2; // s1 to enqueue, s2 to dequeue
	int currStack = 0;
	while (n--) {
		cin >> a;
		if (a == 1) {
			// enq
			cin >> b;
			s1.push(b);
		}
		else {
			if (s2.empty()) {
				while (!s1.empty()) {
					s2.push(s1.top());
					s1.pop();
				}
			}
			if (!s2.empty())
			{
				if (a == 2) {
					// deq
					s2.pop();
				}
				else if (a == 3) {
					// get front
					cout << s2.top() << endl;
				}
			}
		}
	}
	return 0;
}
