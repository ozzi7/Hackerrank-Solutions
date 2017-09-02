#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0;
	int count;
	cin >> count;
	int curr;
	int n = 0; int p = 0; int z = 0;
	while (cin >> curr) {
		if (curr < 0) {
			n++;
		}
		else if (curr > 0) {
			p++;
		}
		else z++;
	}
	cout << (double)p / (p + n + z) << endl;
	cout << (double)n / (p + n + z) << endl;
	cout << (double)z / (p + n + z) << endl;
}
