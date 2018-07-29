#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    vector<string> numbers = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine",
        "half"
    };

    if (1 <= m && m <= 30) {
    }
    else if (30 < m) {
        h = (h + 1) % 12;
        if (h == 0) {
            h = 1;
        }
    }

    if (1 <= m && m <= 30) {
        if(m != 15 && m!= 30 && m!= 1)
            return numbers[m] + " minutes past " + numbers[h];
        else if(m == 15)
            return "quarter past " + numbers[h]; 
        else if(m == 30)
            return "half past " + numbers[h];
        else
            return "one minute past " + numbers[h];
    }
    else if (30 < m) {
        if(m != 45 && m != 1)
            return numbers[60-m] + " minutes to " + numbers[h];
        else if(m == 45)
            return "quarter to " + numbers[h];
        else
            return "one minute to " + numbers[h];
    }
    else
    {
        return numbers[h] + " o' clock";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
