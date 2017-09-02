#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int sumA = 0; int sumB =0;
    int a1,a2,a3, b1,b2,b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3; 
    
    if(a1 > b1) sumA++;
    else if(b1 > a1) sumB++;
    if(a2 > b2) sumA++;
    else if(b2 > a2) sumB++;
    if(a3 > b3) sumA++;
    else if(b3 > a3) sumB++;
    
    cout << sumA << " " << sumB << endl;
}
