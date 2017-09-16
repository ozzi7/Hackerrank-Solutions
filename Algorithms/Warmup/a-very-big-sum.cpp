#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long sum;
    int count;
    cin >> count;
    int curr;
    while(cin>>curr)
        sum += curr;
    cout << sum << endl;
}