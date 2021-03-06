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
#define vii vector <long long>

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

int main() {
	string inp; getline(cin, inp);
	string curr;
	bool inquotes = false;
	bool insquotes = false;
	bool quoteEnds = false;
	bool quotesEnds = false;
	F0R(i, inp.size()) {
		quoteEnds = false;
		quotesEnds = false;
		curr += inp[i];
		if (inp[i] == '\"' && !(inp[i+1] == 's' && inp[i+2] == ' '))
			inquotes = !inquotes;
		else if (inp[i] == '\'' && !(inp[i+1] == 's' && inp[i+2] == ' '))
			insquotes = !insquotes;
		if (i >= 2) {
			if (inp[i - 2] == ' ' && isupper(inp[i - 1]) && inp[i] == '.') {}
			else {
				if (i + 1 < inp.size()) {
					if (inp[i + 1] == '\'' && insquotes)
						quotesEnds = true;
				}
				else if (i + 1 < inp.size()) {
					if (inp[i + 1] == '\"' && inquotes)
						quoteEnds = true;
				}
				if ((inp[i] == '.' || inp[i] == '!' || inp[i] == '?') &&
					(!inquotes || quoteEnds) && (!insquotes || quotesEnds)) {
					if (quoteEnds) { inquotes = false; curr += inp[i + 1]; i++; }
					else if (quotesEnds) { insquotes = false; curr += inp[i + 1]; i++; }
					cout << curr << endl;
					curr = "";
				}
			}
		}
		else if (i >= 3) {
			if (inp[i - 3] == ' ' && inp[i - 2] == 'D' && inp[i - 1] == 'r' && inp[i] == '.') {}
			else {
				if (i + 1 < inp.size()) {
					if (inp[i + 1] == '\'' && insquotes)
						quotesEnds = true;
				}
				else if (i + 1 < inp.size()) {
					if (inp[i + 1] == '\"' && inquotes)
						quoteEnds = true;
				}
				if ((inp[i] == '.' || inp[i] == '!' || inp[i] == '?') &&
					(!inquotes || quoteEnds) && (!insquotes || quotesEnds)) {
					if (quoteEnds) { inquotes = false; curr += inp[i + 1]; i++; }
					else if (quotesEnds) { insquotes = false; curr += inp[i + 1]; i++; }
					cout << curr << endl;
					curr = "";
				}
			}
		}
	}
	return 0;
}
