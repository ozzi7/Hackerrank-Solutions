#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
    unordered_map<char,int> um;
    bool found_empty = false;

    for(int i =0; i < b.size(); ++i) {
        if(b[i] != '_')
            um[b[i]]++;
        else
            found_empty = true;
    }
    for (pair<char, int> el : um)
    {
        if(el.second == 1) { return "NO";}
    }
    if(b.size() == 1 && b[0] == '_')
        return "YES";
    else if(b.size() == 1)
        return "NO";
    
    bool ordered = true;
    for (int i = 0; i < b.size(); ++i )
    {
        if(i > 0 && i < b.size()-1)
            if(b[i] != b[i-1] && b[i] != b[i+1])
                ordered = false;
        else if(i == 0)
            if(b[i] != b[i-1])
                ordered = false;
        else if(i == b.size()-1)
            if(b[i] != b[i+1])
                ordered = false;
    }
    if(!ordered && !found_empty) return "NO";
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
