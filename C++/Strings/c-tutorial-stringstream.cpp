#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
	vector<int> vec;
	int a; 
	char ch;
	
	if(ss) {       
		ss >> a;
		vec.push_back(a);
	}
	while(true)
	{
		ss >> ch >> a;
		if(ss)
			vec.push_back(a);
		else
			break;
	}
	return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}