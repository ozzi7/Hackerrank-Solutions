#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {
    int i = -1;
    for (i = w.size() - 1; i > 0; i--) {
        if (w[i - 1] >= w[i]) {}
        else break;
    }
    if(i == 0)     return "no answer";
    int j = -1;
    for (j = w.size()-1; j >= i; j--) {
        if (w[j] > w[i-1]) {
            char c = w[i-1];
            w[i-1] = w[j];
            w[j] = c;
            break;
        }
    }
    // resort the suffix from lowest to greatest
    sort(w.begin() + i, w.end());
    return w;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
