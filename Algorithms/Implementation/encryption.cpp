#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    string sNoSpace = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            sNoSpace += s[i];
        }
    }

    int nofrows = floor(sqrt(sNoSpace.size()));
    int nofcols = 0;
    if(nofrows*nofrows < sNoSpace.size())    {
        if(nofrows*(nofrows+1) >= sNoSpace.size())
            nofcols = nofrows +1;
        else {
            nofrows++;
            nofcols = nofrows;
        }
    }
    else {
        nofcols = nofrows;
    }
    vector<string> cols = vector<string>();

    int init = -1;
    int currCol = 0;
    for (int i = 0; i < sNoSpace.size(); ++i) {
        currCol = i % nofcols;
        if (init < currCol) {
            cols.push_back("");
            init++;
        }
        cols[currCol] += sNoSpace[i];
    }
    string res = "";
    for (int i = 0; i < cols.size(); ++i) {
        res += cols[i] + " ";
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
