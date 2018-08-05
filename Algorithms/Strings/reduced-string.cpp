#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    int removed = -1;
    while(removed != 0) {
        removed = 0;
        for(int i = 0; i < s.size()-1;) {
            if(s[i] == s[i+1]) {
                s[i] = '.'; s[i+1] = '.';
                i +=2;
                removed +=2;
            }
            else {
                i++;
            }
        }
        /*compress string, remove the gaps '.'*/
        int index = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '.'){}
            else {s[index] = s[i]; index++;}
        }
        if(s.size()-removed != 0) s.resize(s.size()-removed);
        else return "Empty String";
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
