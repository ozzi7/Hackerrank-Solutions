#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	int nofq;
	cin >> nofq;
	set<int>s;
	for (int i = 0; i < nofq; ++i) {
		int type;
		long query;
		cin >> type >> query;
		if (type == 1) s.insert(query);
		if (type == 2) s.erase(query);
		if (type == 3) {
			set<int>::iterator itr = s.find(query);
			if (itr == s.end()) cout << "No" <<endl;
			else cout << "Yes"<<endl;
		}
	}
	return 0;
}