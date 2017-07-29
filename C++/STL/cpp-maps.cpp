#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, int>m;
	int nofq;
	cin >> nofq;

	for (int i = 0; i < nofq; ++i) {
		int type;
		cin >> type;
		if (type == 1) {
			string s; long n;
			cin >> s >> n;
			map<string, int>::iterator itr = m.find(s);
			if (itr == m.end()) m.insert(make_pair(s, n));
			else {
				long temp = m[s];
				m.erase(s);
				m.insert(make_pair(s, n+temp));
			}
		}
		if (type == 2) {
			string s;
			cin >> s;
			m.erase(s);
		}
		if (type == 3) {
			string s;
			cin >> s;
			map<string, int>::iterator itr = m.find(s);
			if (itr == m.end()) cout << "0" <<endl;
			else
				cout << itr->second <<endl;
		}
	}
	return 0;
}