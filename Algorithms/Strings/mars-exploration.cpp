#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int count = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(i % 3 == 1 && s[i] != 'O') count++;
        else if(i % 3 != 1 && s[i] != 'S') count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
