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
	int torem;
	cin >> torem;
	vec.erase(vec.begin() + torem-1);
	int toreml; int toremu;
	cin >> torem >> toremu;
	vec.erase(vec.begin() + torem-1, vec.begin()+toremu-1);

	cout << vec.size() << endl;
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	return 0;
}
