#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the fairRations function below.
string fairRations(vector<int> B) {
    int count = 0;
    for(int i = 0;;) 
    {
        if(i == B.size()) {
            return to_string(count);
        }
        if(i + 1 < B.size()) {
            if(B[i] % 2 == 1 && B[i+1] % 2 == 1) {
                B[i] += 1;
                B[i+1] += 1;
                count +=2;
                i += 2;
            }
            else if(B[i] % 2 == 1 && B[i+1] % 2 == 0) {
                B[i] += 1;
                B[i+1] += 1;
                count +=2;
                i += 1;
            }
            else if(B[i] %2 == 0) {
                i += 1;
            }
        }
        else if(B[i] % 2 == 1) {
            return "NO";
        }
        else if(B[i] % 2 == 0) {
            return to_string(count);
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string B_temp_temp;
    getline(cin, B_temp_temp);

    vector<string> B_temp = split_string(B_temp_temp);

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        int B_item = stoi(B_temp[i]);

        B[i] = B_item;
    }

    string result = fairRations(B);

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
