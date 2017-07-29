#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	unsigned int N, S, P, Q;
	cin >> N >> S >> P >> Q;
	unsigned int mod = 1 << 31;

	vector<bool> a(mod);
	int nofDistincts = 1;

	unsigned int res = S % mod;
	for (int i = 1; i < N; ++i) {
		res = (res * P + Q) % mod;
		if (a[res] == false) {
			nofDistincts++; a[res] = true;
		}
		else {
			break;
		}
	}
	cout << nofDistincts;
	return 0;
}