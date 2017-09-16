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
#include <fstream>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair <int, int>
#define pll pair <long long, long long>
#define vi vector <int>
#define vll vector <long long>

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

int main()
{
	ios::sync_with_stdio(false);

	/* Load score table*/
	int n;
	cin >> n;
	vi scores;
	F0R(i, n) {
		int score; cin >> score;
		scores.pb(score);
	}

	/* Load Alice scores*/
	int rounds = 0;
	cin >> rounds;
	vi alice;
	F0R(i, rounds) {
		int curr; cin >> curr;
		alice.pb(curr);
	}

	/* Create ranking*/
	vi ranks;
	int rank = 0;
	int prev = INT32_MAX;
	F0R(i, n) {
		if (prev > scores[i]) rank++;
		ranks.pb(rank);
		prev = scores[i];
	}
	
	/* Rank Alice's scores*/
	int j = 0;
	vi res;
	F0Rd(i, rounds) {
		while(j < n && alice[i] < scores[j]) {
			j++;
		}
		if(j != n) res.pb(ranks[j]);
	}
	while (res.size() < rounds) res.pb(ranks[ranks.size()-1]+1);

	/*Output*/
	F0R(i, rounds)
		cout << res[(rounds - 1) - i] << endl;
	return 0;
}