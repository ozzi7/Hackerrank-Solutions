#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Box {
private:
	int l, b, h;
public:
	Box() {
        l = 0; b = 0; h = 0;
    }
	Box(int la, int ba, int ha) {
        l = la;
        b = ba;
        h = ha;
	}
	Box(Box& boxy) {
		l = boxy.getLength();
		h = boxy.getHeight();
		b = boxy.getBreadth();
	}
	int getLength() {
		return l;
	}
	int getBreadth() {
		return b;
	}
	int getHeight() {
		return h;
	}
	long long CalculateVolume() {
		return (long long)l*(long long)b*(long long)h;
	}
	bool operator<(Box& boxy) {
		if (l != boxy.getLength()) return l < boxy.getLength();
		if (b != boxy.getBreadth()) return b < boxy.getBreadth();
		return h < boxy.getHeight();
	}
};
ostream& operator<<(ostream& out, Box& boxy) {
	out << boxy.getLength() << " " << boxy.getBreadth() << " " << boxy.getHeight();
    return out;
}