#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<list>
#include<ctime>
#include<fstream>

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
	vector< vector<int> > arr(6, vector<int>(6));
	for (int arr_i = 0; arr_i < 6; arr_i++) {
		for (int arr_j = 0; arr_j < 6; arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}
	vector<int> res;
	for (int i = 0; i < 6 - 2; i++) {
		for (int j = 0; j < 6 - 2; j++) {
			int sum = 0;
			for (int k = 0; k < 3; k++) {
				for (int l = 0; l < 3; l++) {
					if (!(l == 1 && k != 1)) {
						sum += arr[i + l][j + k];
					}
				}
			}
			res.push_back(sum);
		}
	}
	cout << *(max_element(res.begin(), res.end())) << endl;
	return 0;
}
