#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


// Complete the surfaceArea function below.
int surfaceArea(vector<vector<int>> A) {
    std::vector<std::vector<int>> A2;
    A2.resize(A.size()+2, std::vector<int>(A[0].size()+2, 0));
    
    for (int i = 0; i < A.size(); ++i) 
        for (int j = 0; j < A[0].size(); ++j) 
            A2[i + 1][j + 1] = A[i][j];

    int surfaces = 0;
    for (int i = 1; i < A2.size()-1; ++i) {
        for (int j = 1; j < A2[0].size()-1; ++j) {
            surfaces += max(0, A2[i][j] - A2[i][j - 1]);
            surfaces += max(0, A2[i][j] - A2[i - 1][j]);
            surfaces += max(0, A2[i][j] - A2[i][j + 1]);
            surfaces += max(0, A2[i][j] - A2[i + 1][j]);
            surfaces += 2*(A2[i][j] > 0); // to add the bottom/top area
        }
    }
    return surfaces;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string HW_temp;
    getline(cin, HW_temp);

    vector<string> HW = split_string(HW_temp);

    int H = stoi(HW[0]);

    int W = stoi(HW[1]);

    vector<vector<int>> A(H);
    for (int i = 0; i < H; i++) {
        A[i].resize(W);

        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = surfaceArea(A);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
