#include <iostream>
#include <deque> 
#include <vector>
#include <algorithm>
using namespace std;

void printKMax(vector<int> arr, int n, int k) {
	deque<int> dq;
	int i;
	for (i= 0; i < k; ++i) {
		// load first section
		dq.push_back(arr[i]);
	}
	// output max
	int max = -1;
	for (int z = 0; z < dq.size(); ++z)
		if (dq[z] >= max)
			max = dq[z];
	cout << max << " ";

	for (; i < n; ++i) {
		// rest
		dq.push_back(arr[i]);
		int del = dq.front();
		dq.pop_front();

		if (arr[i] >= max) { max = arr[i]; }
		else if (del < max && arr[i] < max) {
			// max stays
		}
		else
		{
			// recalculate
			max = -1;
			for (int z = 0; z < dq.size(); ++z)
				if (dq[z] >= max) max = dq[z];
		}
		cout << max << " ";
	}
}
int main() {

	int t;
	cin >> t;
	while (t>0) {
		int n, k;
		cin >> n >> k;
		vector<int> arr;
		for (int i = 0;i < n;i++) {
			int elem;
			cin >> elem;
			arr.push_back(elem);
		}
		printKMax(arr, n, k);
		cout << endl;
		t--;
	}
	return 0;
}
