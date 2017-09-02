#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int count;
	cin >> count;
    string res = "";
	for(int i = 0; i<count;++i) {
        int j = 0;
        for(; j<count-i-1;++j)
            res += " ";
        for(; j<count;++j)
            res += "#";
        res += "\n";
    }
	cout << res << endl;
}
