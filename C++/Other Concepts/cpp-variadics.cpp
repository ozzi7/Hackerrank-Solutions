#include <vector>
#include "math.h"
#include <stdarg.h>
#include <iostream>

using namespace std;

template <bool... digits>
struct Reversed_binary_value;

template <bool b>
struct Reversed_binary_value<b> {
	static int val() {
		return b;
	}
};

template <bool b, bool... rest>
struct Reversed_binary_value<b, rest...> {
	static int val() {
		long v = Reversed_binary_value<rest...>::val();
		return (v << 1) + b;
	}
};

template <bool... args>
int reversed_binary_value()
{
	return Reversed_binary_value<args...>::val();
}

template <int n, bool...digits>
struct CheckValues {
	static void check(int x, int y)
	{
		CheckValues<n - 1, 0, digits...>::check(x, y);
		CheckValues<n - 1, 1, digits...>::check(x, y);
	}
};

template <bool...digits>
struct CheckValues<0, digits...> {
	static void check(int x, int y)
	{
		int z = reversed_binary_value<digits...>();
		std::cout << (z + 64 * y == x);
	}
};

int main()
{
	int t; std::cin >> t;

	for (int i = 0; i != t; ++i) {
		int x, y;
		cin >> x >> y;
		CheckValues<6>::check(x, y);
		cout << "\n";
	}
}