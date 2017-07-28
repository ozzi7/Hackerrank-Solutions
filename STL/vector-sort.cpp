#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	vector<long>v;
	int size;
	cin >> size;
	for (int i = 0; i < size; ++i) {
		long t; cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < size; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}