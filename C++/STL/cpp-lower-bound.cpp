#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int size;
	cin >> size;
	long t;
	vector<long> vec;
	for (int i = 0; i < size; ++i) {
		cin >> t;
		vec.push_back(t);
	}
	int nofq;
	cin >> nofq;

	long val;
	for (int i = 0; i < nofq; ++i) {
		cin >> val;
		if (vec[lower_bound(vec.begin(), vec.end(), val) - vec.begin()] == val)
		{
			cout << "Yes " << lower_bound(vec.begin(), vec.end(), val) - vec.begin()+1
				<< endl;
		}
		else
		{
			cout << "No " << lower_bound(vec.begin(), vec.end(), val) - vec.begin()+1
				<< endl;
		}
	}
	return 0;
}