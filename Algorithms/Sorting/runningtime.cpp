#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort1 function below.
int insertionSort1(int n, vector<int> &arr) {
    int toins = arr[arr.size()-1];
    int count = 0;
    for(int i = arr.size()-2; i >= 0; i--) {
        if(arr[i] > toins) {
            arr[i+1] = arr[i];
            count++;
            if(i == 0) {
                arr[0] = toins;
                break;
            }
        }
        else if(arr[i] <= toins) {
            arr[i+1] = toins;
            break;
        }
    }
    return count;
}

// Complete the insertionSort2 function below.
int insertionSort2(int n, vector<int> &arr) {
    vector<int> arr_sorted = vector<int>();
    arr_sorted.push_back(arr[0]);
    int count = 0;
    for(int i = 1; i < n; ++i) {
        arr_sorted.push_back(arr[i]);
        count += insertionSort1(i, arr_sorted);
    }
    return count;
}
// Complete the runningTime function below.
int runningTime(vector<int> arr) {
    return insertionSort2(arr.size(), arr);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = runningTime(arr);

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
