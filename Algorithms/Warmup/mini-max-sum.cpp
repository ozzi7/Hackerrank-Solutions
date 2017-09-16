#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	vector<long long> v;
	long long inp;
	while (cin >> inp) {
		v.push_back(inp);
	}
	auto mm = minmax_element(v.begin(), v.end());
    cout << (accumulate(v.begin(), v.end(), (long long)0) - *mm.second) << " ";
	cout << (accumulate(v.begin(), v.end(), (long long)0) - *mm.first) << endl;
}
