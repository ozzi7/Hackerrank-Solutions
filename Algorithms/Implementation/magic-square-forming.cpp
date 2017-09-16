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
#include <valarray>

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

int main()
{
	const valarray<int> mS[] = {
		{ 8, 1, 6, 3, 5, 7, 4, 9, 2 },
		{ 6, 1, 8, 7, 5, 3, 2, 9, 4 },
		{ 8, 3, 4, 1, 5, 9, 6, 7, 2 },
		{ 4, 3, 8, 9, 5, 1, 2, 7, 6 },
		{ 6, 7, 2, 1, 5, 9, 8, 3, 4 },
		{ 2, 7, 6, 9, 5, 1, 4, 3, 8 },
		{ 4, 9, 2, 3, 5, 7, 8, 1, 6 },
		{ 2, 9, 4, 7, 5, 3, 6, 1, 8 } };

	valarray<int> input(9);

	for (auto & i : input)
		cin >> i;

	int cost(45);

	for (auto && magicSquare : mS)
		cost = min(cost, abs(magicSquare - input).sum());

	cout << cost << endl;
	return 0;
}