#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    
    bool found_lower = false;
    bool found_upper = false;
    bool found_special = false;
    bool found_number = false;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < numbers.size(); ++j) {
            if (password.find(numbers[j]) != std::string::npos) found_number = true;
        }
        for(int j = 0; j < upper_case.size(); ++j) {
            if (password.find(upper_case[j]) != std::string::npos) found_upper = true;
        }
        for(int j = 0; j < lower_case.size(); ++j) {
            if (password.find(lower_case[j]) != std::string::npos) found_lower = true;
        }
        for(int j = 0; j < special_characters.size(); ++j) {
            if (password.find(special_characters[j]) != std::string::npos) found_special = true;
        }
    }
    return max(6-n,!found_number+!found_upper+!found_lower+!found_special);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

