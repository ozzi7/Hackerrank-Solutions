#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int d; long ld; char c; float f; double lf;
    scanf("%d %ld %c %f %lf", &d, &ld, &c, &f, &lf);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", d, ld, c, f, lf);
    return 0;
}
