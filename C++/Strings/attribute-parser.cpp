#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

vector<string> getquerylocation(string query)
{
	vector<string> res;
	string label = "";
	for (int i = 0; i < query.size(); ++i) {
		if (query[i] != '~')
		{
			if (query[i] != '.')
				label = label + query[i];
			else {
				res.push_back(label);
				label = "";
			}
		}
		else
		{
			res.push_back(label);
			return res;
		}
	}
	return res;
}
string getqueryname(string query)
{
	string res = "";
	for (int i = 0; i < query.size(); ++i) {
		if (query[i] == '~') {
			i++;
			while (i < query.size())
			{
				res += query[i];
				i++;
			}
			break;
		}
	}
	return res;
}

bool match(vector<string> a, vector<string> b)
{
	if (a.size() != b.size()) return false;
	else
	{
		for (int i = 0; i <a.size(); ++i)
			if (0 != a[i].compare(b[i]))
				return false;
	}
	return true;
}

int main() {
	int noflines;
	int nofqueries;
	string result = "";

	cin >> noflines >> nofqueries;

	vector<string> arr;
	string t; getline(cin, t);
	for (int i = 0; i < noflines; ++i) {
		getline(cin, t);
		arr.push_back(t);
	}

	int z = 0;
	bool haha = true;
lbl1:
	if (!haha)
		cout << "Not Found!" << endl;
lbl2:
	z++;
	haha = false;
	if(z < nofqueries+1) {
		result = "";
		string query;
		getline(cin, query);
		vector<string> querylocation = getquerylocation(query);
		string queryname = getqueryname(query);

		vector<string> currlocation;
		for (int i = 0; i < arr.size(); ++i)
		{
			int j = 0;
			for (j = 0; j < arr[i].length(); ++j)
			{
				if (arr[i][j] == '<' && arr[i][j + 1] != '/')
				{
					string tagname = "";
					j = j + 1;
					while (arr[i][j] != ' ' && arr[i][j] != '>') {
						tagname += arr[i][j];
						j++;
					}
					// new tag
					currlocation.push_back(tagname);
					break;
				}
				if (arr[i][j] == '<' && arr[i][j + 1] == '/')
				{
					// close tag
					currlocation.pop_back();
					break;
				}
			}
			if (match(currlocation, querylocation))
			{
				// location matches
				int nofquotmarks = 0;
				while (nofquotmarks % 2 == 0 && j < arr[i].length())
				{
					j++;
					string currname = "";
					if (arr[i][j-1] == '>') break;
					else
					{
						while (arr[i][j] != ' ') {
							currname += arr[i][j];
							j++;
						}
					}
					if (arr[i][j] == '>') break;
					if (currname.compare(queryname) == 0)
					{
						// found matching name
						while (arr[i][j] != '\"') { j++; }
						j++;
						while (arr[i][j] != '\"') { result += arr[i][j];j++; }
						cout << result << endl;
						goto lbl2;
					}
					int quotmarksfound = 0;
					while (arr[i][j] != '>') {
						if (arr[i][j] == '\"') quotmarksfound++;
						if (quotmarksfound == 2) {
							j++; break;
						}
						j++;
					}
					nofquotmarks += quotmarksfound;
				}
				goto lbl1;
			}
		}
		goto lbl1;
	}
	return 0;
}