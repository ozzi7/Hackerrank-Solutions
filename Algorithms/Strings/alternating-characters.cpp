#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int count1 = 0;
    int count2 = 0;
    int curr = s[0];
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == curr) {count1++;}
        else {
            curr = s[i];
        }
    }
    curr = s[0];
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == curr) {count2++;}
        else {
            curr = s[i];
        }
    }
    return min(count1,count2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
