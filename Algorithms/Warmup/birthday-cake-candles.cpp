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
    int notNeeded = 0; cin >> notNeeded;
	while (cin >> inp) {
		v.push_back(inp);
	}
    auto mm = minmax_element(v.begin(), v.end());
    int count = 0;
	for(int i = 0; i < v.size(); ++i) {
        if(v[i] == *mm.second) count++;
    }
    cout << count << endl;
}
