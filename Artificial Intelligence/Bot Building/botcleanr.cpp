#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void next_move(int posr, int posc, vector <string> board) {
	pair<int, int> bot = make_pair(posr, posc);
	pair<int, int> nextClean; vector <string> copy = board; vector <string> copy2 = copy;
	int radius = 0;
	bool searchPhase = true;
	
	if (copy2[posr][posc] == 'd') {
		cout << "CLEAN" << endl;
		return;
	}
	copy2[posr][posc] = 'v';
	while (searchPhase) {
		copy = copy2;
		for (int i = 0; searchPhase && i < board[0].size(); ++i) {
			for (int j = 0; searchPhase && j < board[0].size(); ++j) {
				if (copy[i][j] == 'v') {
					if (i - 1 >= 0) {
						if (copy[i - 1][j] == 'd') {
							nextClean = make_pair(i - 1, j);
							searchPhase = false;
							break;
						}
						else copy2[i - 1][j] = 'v';
					}
					if (j - 1 >= 0) {
						if (copy[i][j - 1] == 'd') {
							nextClean = make_pair(i, j - 1);
							searchPhase = false;
							break;
						}
						else copy2[i ][j-1] = 'v';
					}					
					if (i + 1 < board[0].size()) {
						if (copy[i + 1][j] == 'd') {
							nextClean = make_pair(i + 1, j);
							searchPhase = false;
							break;
						}
						else copy2[i + 1][j] = 'v';
					}
					if (j + 1 < board[0].size()) {
						if (copy[i][j + 1] == 'd') {
							nextClean = make_pair(i, j + 1);
							searchPhase = false;
							break;
						}
						else copy2[i][j+1] = 'v';
					}
				}
			}
		}
	}

	if (bot.first > nextClean.first) {
		cout << "UP" << endl;
		bot.first--;
	}
	else if (bot.first < nextClean.first) {
		cout << "DOWN" << endl;
		bot.first++;
	}
	else if (bot.second > nextClean.second) {
		cout << "LEFT" << endl;
		bot.second--;
	}
	else if (bot.second < nextClean.second) {
		cout << "RIGHT" << endl;
		bot.second++;
	}
	else {
		cout << "CLEAN" << endl;
	}
}

int main(void) {
	int pos[2];
	vector <string> board;
	cin >> pos[0] >> pos[1];
	for (int i = 0; i<5; i++) {
		string s; cin >> s;
		board.push_back(s);
	}
	next_move(pos[0], pos[1], board);
	return 0;
}
