#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long currPeriod = 3;
    long i;
    for(i= 0; i < t;) {
        i += currPeriod;
        currPeriod *=2;
    }
    // i is now in the same vertical column as t
    // time in col starts at i-currPeriod+1 with value currPeriod
    // ends at i with value 1
    // at t we are at (i-t) == offset from end of col
    // 1 + (i-t)
    return 1+ (i-t);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
