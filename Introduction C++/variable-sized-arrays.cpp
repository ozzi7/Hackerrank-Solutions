#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nofArrays, nofQueries;
    cin >> nofArrays >> nofQueries;
    vector<vector<int>> arr;
    
    for(int i = 0; i < nofArrays; ++i) {
        int arraySize; cin >> arraySize;
        vector<int> temp;
        for(int j = 0; j < arraySize; ++j) {
            int value; cin >> value;
            temp.push_back(value);   
        }
        arr.push_back(temp);
    }
    
    for(int i = 0; i < nofQueries; ++i)
    {
        int index1, index2;
        cin >> index1 >> index2;
        cout << arr[index1][index2] << endl;
    }
    return 0;
}