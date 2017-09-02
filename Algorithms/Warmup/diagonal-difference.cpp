#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int sumA = 0; int sumB = 0;
	int count;
	cin >> count;
	int curr;
	int currA = 0; int currB = count - 1;
	for (int i = 0; i < count*count; ++i) {
		cin >> curr;
		if (i == currA) {
			sumA += curr;
			currA += count + 1;
		}
		if (i == currB && i != count*count-1) {
			sumB += curr;
			currB += count - 1;
		}
	}
	cout << abs(sumA - sumB) << endl;
}
